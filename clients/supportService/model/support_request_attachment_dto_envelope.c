#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "support_request_attachment_dto_envelope.h"



support_request_attachment_dto_envelope_t *support_request_attachment_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    support_request_attachment_dto_t *result
    ) {
    support_request_attachment_dto_envelope_t *support_request_attachment_dto_envelope_local_var = malloc(sizeof(support_request_attachment_dto_envelope_t));
    if (!support_request_attachment_dto_envelope_local_var) {
        return NULL;
    }
    support_request_attachment_dto_envelope_local_var->is_success = is_success;
    support_request_attachment_dto_envelope_local_var->error_message = error_message;
    support_request_attachment_dto_envelope_local_var->correlation_id = correlation_id;
    support_request_attachment_dto_envelope_local_var->timestamp = timestamp;
    support_request_attachment_dto_envelope_local_var->activity_id = activity_id;
    support_request_attachment_dto_envelope_local_var->result = result;

    return support_request_attachment_dto_envelope_local_var;
}


void support_request_attachment_dto_envelope_free(support_request_attachment_dto_envelope_t *support_request_attachment_dto_envelope) {
    if(NULL == support_request_attachment_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (support_request_attachment_dto_envelope->error_message) {
        free(support_request_attachment_dto_envelope->error_message);
        support_request_attachment_dto_envelope->error_message = NULL;
    }
    if (support_request_attachment_dto_envelope->correlation_id) {
        free(support_request_attachment_dto_envelope->correlation_id);
        support_request_attachment_dto_envelope->correlation_id = NULL;
    }
    if (support_request_attachment_dto_envelope->timestamp) {
        free(support_request_attachment_dto_envelope->timestamp);
        support_request_attachment_dto_envelope->timestamp = NULL;
    }
    if (support_request_attachment_dto_envelope->activity_id) {
        free(support_request_attachment_dto_envelope->activity_id);
        support_request_attachment_dto_envelope->activity_id = NULL;
    }
    if (support_request_attachment_dto_envelope->result) {
        support_request_attachment_dto_free(support_request_attachment_dto_envelope->result);
        support_request_attachment_dto_envelope->result = NULL;
    }
    free(support_request_attachment_dto_envelope);
}

cJSON *support_request_attachment_dto_envelope_convertToJSON(support_request_attachment_dto_envelope_t *support_request_attachment_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // support_request_attachment_dto_envelope->is_success
    if(support_request_attachment_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", support_request_attachment_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // support_request_attachment_dto_envelope->error_message
    if(support_request_attachment_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", support_request_attachment_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // support_request_attachment_dto_envelope->correlation_id
    if(support_request_attachment_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", support_request_attachment_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // support_request_attachment_dto_envelope->timestamp
    if(support_request_attachment_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", support_request_attachment_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // support_request_attachment_dto_envelope->activity_id
    if(support_request_attachment_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", support_request_attachment_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // support_request_attachment_dto_envelope->result
    if(support_request_attachment_dto_envelope->result) {
    cJSON *result_local_JSON = support_request_attachment_dto_convertToJSON(support_request_attachment_dto_envelope->result);
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

support_request_attachment_dto_envelope_t *support_request_attachment_dto_envelope_parseFromJSON(cJSON *support_request_attachment_dto_envelopeJSON){

    support_request_attachment_dto_envelope_t *support_request_attachment_dto_envelope_local_var = NULL;

    // define the local variable for support_request_attachment_dto_envelope->result
    support_request_attachment_dto_t *result_local_nonprim = NULL;

    // support_request_attachment_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(support_request_attachment_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // support_request_attachment_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(support_request_attachment_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // support_request_attachment_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(support_request_attachment_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // support_request_attachment_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(support_request_attachment_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // support_request_attachment_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(support_request_attachment_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // support_request_attachment_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(support_request_attachment_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = support_request_attachment_dto_parseFromJSON(result); //nonprimitive
    }


    support_request_attachment_dto_envelope_local_var = support_request_attachment_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return support_request_attachment_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        support_request_attachment_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
