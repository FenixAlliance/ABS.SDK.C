#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "fiscal_period_dto_envelope.h"



fiscal_period_dto_envelope_t *fiscal_period_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    fiscal_period_dto_t *result
    ) {
    fiscal_period_dto_envelope_t *fiscal_period_dto_envelope_local_var = malloc(sizeof(fiscal_period_dto_envelope_t));
    if (!fiscal_period_dto_envelope_local_var) {
        return NULL;
    }
    fiscal_period_dto_envelope_local_var->is_success = is_success;
    fiscal_period_dto_envelope_local_var->error_message = error_message;
    fiscal_period_dto_envelope_local_var->correlation_id = correlation_id;
    fiscal_period_dto_envelope_local_var->timestamp = timestamp;
    fiscal_period_dto_envelope_local_var->activity_id = activity_id;
    fiscal_period_dto_envelope_local_var->result = result;

    return fiscal_period_dto_envelope_local_var;
}


void fiscal_period_dto_envelope_free(fiscal_period_dto_envelope_t *fiscal_period_dto_envelope) {
    if(NULL == fiscal_period_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (fiscal_period_dto_envelope->error_message) {
        free(fiscal_period_dto_envelope->error_message);
        fiscal_period_dto_envelope->error_message = NULL;
    }
    if (fiscal_period_dto_envelope->correlation_id) {
        free(fiscal_period_dto_envelope->correlation_id);
        fiscal_period_dto_envelope->correlation_id = NULL;
    }
    if (fiscal_period_dto_envelope->timestamp) {
        free(fiscal_period_dto_envelope->timestamp);
        fiscal_period_dto_envelope->timestamp = NULL;
    }
    if (fiscal_period_dto_envelope->activity_id) {
        free(fiscal_period_dto_envelope->activity_id);
        fiscal_period_dto_envelope->activity_id = NULL;
    }
    if (fiscal_period_dto_envelope->result) {
        fiscal_period_dto_free(fiscal_period_dto_envelope->result);
        fiscal_period_dto_envelope->result = NULL;
    }
    free(fiscal_period_dto_envelope);
}

cJSON *fiscal_period_dto_envelope_convertToJSON(fiscal_period_dto_envelope_t *fiscal_period_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // fiscal_period_dto_envelope->is_success
    if(fiscal_period_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", fiscal_period_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // fiscal_period_dto_envelope->error_message
    if(fiscal_period_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", fiscal_period_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // fiscal_period_dto_envelope->correlation_id
    if(fiscal_period_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", fiscal_period_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // fiscal_period_dto_envelope->timestamp
    if(fiscal_period_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", fiscal_period_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // fiscal_period_dto_envelope->activity_id
    if(fiscal_period_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", fiscal_period_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // fiscal_period_dto_envelope->result
    if(fiscal_period_dto_envelope->result) {
    cJSON *result_local_JSON = fiscal_period_dto_convertToJSON(fiscal_period_dto_envelope->result);
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

fiscal_period_dto_envelope_t *fiscal_period_dto_envelope_parseFromJSON(cJSON *fiscal_period_dto_envelopeJSON){

    fiscal_period_dto_envelope_t *fiscal_period_dto_envelope_local_var = NULL;

    // define the local variable for fiscal_period_dto_envelope->result
    fiscal_period_dto_t *result_local_nonprim = NULL;

    // fiscal_period_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(fiscal_period_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // fiscal_period_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(fiscal_period_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // fiscal_period_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(fiscal_period_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // fiscal_period_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(fiscal_period_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // fiscal_period_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(fiscal_period_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // fiscal_period_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(fiscal_period_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = fiscal_period_dto_parseFromJSON(result); //nonprimitive
    }


    fiscal_period_dto_envelope_local_var = fiscal_period_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return fiscal_period_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        fiscal_period_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
