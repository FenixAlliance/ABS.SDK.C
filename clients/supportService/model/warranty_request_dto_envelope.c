#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "warranty_request_dto_envelope.h"



warranty_request_dto_envelope_t *warranty_request_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    warranty_request_dto_t *result
    ) {
    warranty_request_dto_envelope_t *warranty_request_dto_envelope_local_var = malloc(sizeof(warranty_request_dto_envelope_t));
    if (!warranty_request_dto_envelope_local_var) {
        return NULL;
    }
    warranty_request_dto_envelope_local_var->is_success = is_success;
    warranty_request_dto_envelope_local_var->error_message = error_message;
    warranty_request_dto_envelope_local_var->correlation_id = correlation_id;
    warranty_request_dto_envelope_local_var->timestamp = timestamp;
    warranty_request_dto_envelope_local_var->activity_id = activity_id;
    warranty_request_dto_envelope_local_var->result = result;

    return warranty_request_dto_envelope_local_var;
}


void warranty_request_dto_envelope_free(warranty_request_dto_envelope_t *warranty_request_dto_envelope) {
    if(NULL == warranty_request_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (warranty_request_dto_envelope->error_message) {
        free(warranty_request_dto_envelope->error_message);
        warranty_request_dto_envelope->error_message = NULL;
    }
    if (warranty_request_dto_envelope->correlation_id) {
        free(warranty_request_dto_envelope->correlation_id);
        warranty_request_dto_envelope->correlation_id = NULL;
    }
    if (warranty_request_dto_envelope->timestamp) {
        free(warranty_request_dto_envelope->timestamp);
        warranty_request_dto_envelope->timestamp = NULL;
    }
    if (warranty_request_dto_envelope->activity_id) {
        free(warranty_request_dto_envelope->activity_id);
        warranty_request_dto_envelope->activity_id = NULL;
    }
    if (warranty_request_dto_envelope->result) {
        warranty_request_dto_free(warranty_request_dto_envelope->result);
        warranty_request_dto_envelope->result = NULL;
    }
    free(warranty_request_dto_envelope);
}

cJSON *warranty_request_dto_envelope_convertToJSON(warranty_request_dto_envelope_t *warranty_request_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // warranty_request_dto_envelope->is_success
    if(warranty_request_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", warranty_request_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // warranty_request_dto_envelope->error_message
    if(warranty_request_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", warranty_request_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // warranty_request_dto_envelope->correlation_id
    if(warranty_request_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", warranty_request_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // warranty_request_dto_envelope->timestamp
    if(warranty_request_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", warranty_request_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // warranty_request_dto_envelope->activity_id
    if(warranty_request_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", warranty_request_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // warranty_request_dto_envelope->result
    if(warranty_request_dto_envelope->result) {
    cJSON *result_local_JSON = warranty_request_dto_convertToJSON(warranty_request_dto_envelope->result);
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

warranty_request_dto_envelope_t *warranty_request_dto_envelope_parseFromJSON(cJSON *warranty_request_dto_envelopeJSON){

    warranty_request_dto_envelope_t *warranty_request_dto_envelope_local_var = NULL;

    // define the local variable for warranty_request_dto_envelope->result
    warranty_request_dto_t *result_local_nonprim = NULL;

    // warranty_request_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(warranty_request_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // warranty_request_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(warranty_request_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // warranty_request_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(warranty_request_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // warranty_request_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(warranty_request_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // warranty_request_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(warranty_request_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // warranty_request_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(warranty_request_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = warranty_request_dto_parseFromJSON(result); //nonprimitive
    }


    warranty_request_dto_envelope_local_var = warranty_request_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return warranty_request_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        warranty_request_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
