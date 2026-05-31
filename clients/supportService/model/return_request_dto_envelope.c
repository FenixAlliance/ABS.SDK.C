#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "return_request_dto_envelope.h"



return_request_dto_envelope_t *return_request_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    return_request_dto_t *result
    ) {
    return_request_dto_envelope_t *return_request_dto_envelope_local_var = malloc(sizeof(return_request_dto_envelope_t));
    if (!return_request_dto_envelope_local_var) {
        return NULL;
    }
    return_request_dto_envelope_local_var->is_success = is_success;
    return_request_dto_envelope_local_var->error_message = error_message;
    return_request_dto_envelope_local_var->correlation_id = correlation_id;
    return_request_dto_envelope_local_var->timestamp = timestamp;
    return_request_dto_envelope_local_var->activity_id = activity_id;
    return_request_dto_envelope_local_var->result = result;

    return return_request_dto_envelope_local_var;
}


void return_request_dto_envelope_free(return_request_dto_envelope_t *return_request_dto_envelope) {
    if(NULL == return_request_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (return_request_dto_envelope->error_message) {
        free(return_request_dto_envelope->error_message);
        return_request_dto_envelope->error_message = NULL;
    }
    if (return_request_dto_envelope->correlation_id) {
        free(return_request_dto_envelope->correlation_id);
        return_request_dto_envelope->correlation_id = NULL;
    }
    if (return_request_dto_envelope->timestamp) {
        free(return_request_dto_envelope->timestamp);
        return_request_dto_envelope->timestamp = NULL;
    }
    if (return_request_dto_envelope->activity_id) {
        free(return_request_dto_envelope->activity_id);
        return_request_dto_envelope->activity_id = NULL;
    }
    if (return_request_dto_envelope->result) {
        return_request_dto_free(return_request_dto_envelope->result);
        return_request_dto_envelope->result = NULL;
    }
    free(return_request_dto_envelope);
}

cJSON *return_request_dto_envelope_convertToJSON(return_request_dto_envelope_t *return_request_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // return_request_dto_envelope->is_success
    if(return_request_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", return_request_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // return_request_dto_envelope->error_message
    if(return_request_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", return_request_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // return_request_dto_envelope->correlation_id
    if(return_request_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", return_request_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // return_request_dto_envelope->timestamp
    if(return_request_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", return_request_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // return_request_dto_envelope->activity_id
    if(return_request_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", return_request_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // return_request_dto_envelope->result
    if(return_request_dto_envelope->result) {
    cJSON *result_local_JSON = return_request_dto_convertToJSON(return_request_dto_envelope->result);
    if(result_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "result", result_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

return_request_dto_envelope_t *return_request_dto_envelope_parseFromJSON(cJSON *return_request_dto_envelopeJSON){

    return_request_dto_envelope_t *return_request_dto_envelope_local_var = NULL;

    // define the local variable for return_request_dto_envelope->result
    return_request_dto_t *result_local_nonprim = NULL;

    // return_request_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(return_request_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // return_request_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(return_request_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // return_request_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(return_request_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // return_request_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(return_request_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // return_request_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(return_request_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // return_request_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(return_request_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = return_request_dto_parseFromJSON(result); //nonprimitive
    }


    return_request_dto_envelope_local_var = return_request_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return return_request_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        return_request_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
