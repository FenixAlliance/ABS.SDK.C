#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "share_issuance_dto_envelope.h"



share_issuance_dto_envelope_t *share_issuance_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    share_issuance_dto_t *result
    ) {
    share_issuance_dto_envelope_t *share_issuance_dto_envelope_local_var = malloc(sizeof(share_issuance_dto_envelope_t));
    if (!share_issuance_dto_envelope_local_var) {
        return NULL;
    }
    share_issuance_dto_envelope_local_var->is_success = is_success;
    share_issuance_dto_envelope_local_var->error_message = error_message;
    share_issuance_dto_envelope_local_var->correlation_id = correlation_id;
    share_issuance_dto_envelope_local_var->timestamp = timestamp;
    share_issuance_dto_envelope_local_var->activity_id = activity_id;
    share_issuance_dto_envelope_local_var->result = result;

    return share_issuance_dto_envelope_local_var;
}


void share_issuance_dto_envelope_free(share_issuance_dto_envelope_t *share_issuance_dto_envelope) {
    if(NULL == share_issuance_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (share_issuance_dto_envelope->error_message) {
        free(share_issuance_dto_envelope->error_message);
        share_issuance_dto_envelope->error_message = NULL;
    }
    if (share_issuance_dto_envelope->correlation_id) {
        free(share_issuance_dto_envelope->correlation_id);
        share_issuance_dto_envelope->correlation_id = NULL;
    }
    if (share_issuance_dto_envelope->timestamp) {
        free(share_issuance_dto_envelope->timestamp);
        share_issuance_dto_envelope->timestamp = NULL;
    }
    if (share_issuance_dto_envelope->activity_id) {
        free(share_issuance_dto_envelope->activity_id);
        share_issuance_dto_envelope->activity_id = NULL;
    }
    if (share_issuance_dto_envelope->result) {
        share_issuance_dto_free(share_issuance_dto_envelope->result);
        share_issuance_dto_envelope->result = NULL;
    }
    free(share_issuance_dto_envelope);
}

cJSON *share_issuance_dto_envelope_convertToJSON(share_issuance_dto_envelope_t *share_issuance_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // share_issuance_dto_envelope->is_success
    if(share_issuance_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", share_issuance_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // share_issuance_dto_envelope->error_message
    if(share_issuance_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", share_issuance_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // share_issuance_dto_envelope->correlation_id
    if(share_issuance_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", share_issuance_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // share_issuance_dto_envelope->timestamp
    if(share_issuance_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", share_issuance_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // share_issuance_dto_envelope->activity_id
    if(share_issuance_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", share_issuance_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // share_issuance_dto_envelope->result
    if(share_issuance_dto_envelope->result) {
    cJSON *result_local_JSON = share_issuance_dto_convertToJSON(share_issuance_dto_envelope->result);
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

share_issuance_dto_envelope_t *share_issuance_dto_envelope_parseFromJSON(cJSON *share_issuance_dto_envelopeJSON){

    share_issuance_dto_envelope_t *share_issuance_dto_envelope_local_var = NULL;

    // define the local variable for share_issuance_dto_envelope->result
    share_issuance_dto_t *result_local_nonprim = NULL;

    // share_issuance_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(share_issuance_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // share_issuance_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(share_issuance_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // share_issuance_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(share_issuance_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // share_issuance_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(share_issuance_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // share_issuance_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(share_issuance_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // share_issuance_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(share_issuance_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = share_issuance_dto_parseFromJSON(result); //nonprimitive
    }


    share_issuance_dto_envelope_local_var = share_issuance_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return share_issuance_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        share_issuance_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
