#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inquiry_request_dto_envelope.h"



inquiry_request_dto_envelope_t *inquiry_request_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    inquiry_request_dto_t *result
    ) {
    inquiry_request_dto_envelope_t *inquiry_request_dto_envelope_local_var = malloc(sizeof(inquiry_request_dto_envelope_t));
    if (!inquiry_request_dto_envelope_local_var) {
        return NULL;
    }
    inquiry_request_dto_envelope_local_var->is_success = is_success;
    inquiry_request_dto_envelope_local_var->error_message = error_message;
    inquiry_request_dto_envelope_local_var->correlation_id = correlation_id;
    inquiry_request_dto_envelope_local_var->timestamp = timestamp;
    inquiry_request_dto_envelope_local_var->activity_id = activity_id;
    inquiry_request_dto_envelope_local_var->result = result;

    return inquiry_request_dto_envelope_local_var;
}


void inquiry_request_dto_envelope_free(inquiry_request_dto_envelope_t *inquiry_request_dto_envelope) {
    if(NULL == inquiry_request_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (inquiry_request_dto_envelope->error_message) {
        free(inquiry_request_dto_envelope->error_message);
        inquiry_request_dto_envelope->error_message = NULL;
    }
    if (inquiry_request_dto_envelope->correlation_id) {
        free(inquiry_request_dto_envelope->correlation_id);
        inquiry_request_dto_envelope->correlation_id = NULL;
    }
    if (inquiry_request_dto_envelope->timestamp) {
        free(inquiry_request_dto_envelope->timestamp);
        inquiry_request_dto_envelope->timestamp = NULL;
    }
    if (inquiry_request_dto_envelope->activity_id) {
        free(inquiry_request_dto_envelope->activity_id);
        inquiry_request_dto_envelope->activity_id = NULL;
    }
    if (inquiry_request_dto_envelope->result) {
        inquiry_request_dto_free(inquiry_request_dto_envelope->result);
        inquiry_request_dto_envelope->result = NULL;
    }
    free(inquiry_request_dto_envelope);
}

cJSON *inquiry_request_dto_envelope_convertToJSON(inquiry_request_dto_envelope_t *inquiry_request_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // inquiry_request_dto_envelope->is_success
    if(inquiry_request_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", inquiry_request_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // inquiry_request_dto_envelope->error_message
    if(inquiry_request_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", inquiry_request_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // inquiry_request_dto_envelope->correlation_id
    if(inquiry_request_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", inquiry_request_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // inquiry_request_dto_envelope->timestamp
    if(inquiry_request_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", inquiry_request_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // inquiry_request_dto_envelope->activity_id
    if(inquiry_request_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", inquiry_request_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // inquiry_request_dto_envelope->result
    if(inquiry_request_dto_envelope->result) {
    cJSON *result_local_JSON = inquiry_request_dto_convertToJSON(inquiry_request_dto_envelope->result);
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

inquiry_request_dto_envelope_t *inquiry_request_dto_envelope_parseFromJSON(cJSON *inquiry_request_dto_envelopeJSON){

    inquiry_request_dto_envelope_t *inquiry_request_dto_envelope_local_var = NULL;

    // define the local variable for inquiry_request_dto_envelope->result
    inquiry_request_dto_t *result_local_nonprim = NULL;

    // inquiry_request_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(inquiry_request_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // inquiry_request_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(inquiry_request_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // inquiry_request_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(inquiry_request_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // inquiry_request_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(inquiry_request_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // inquiry_request_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(inquiry_request_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // inquiry_request_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(inquiry_request_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = inquiry_request_dto_parseFromJSON(result); //nonprimitive
    }


    inquiry_request_dto_envelope_local_var = inquiry_request_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return inquiry_request_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        inquiry_request_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
