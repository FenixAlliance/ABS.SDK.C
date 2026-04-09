#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "applied_tax_policy_record_dto_envelope.h"



applied_tax_policy_record_dto_envelope_t *applied_tax_policy_record_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    applied_tax_policy_record_dto_t *result
    ) {
    applied_tax_policy_record_dto_envelope_t *applied_tax_policy_record_dto_envelope_local_var = malloc(sizeof(applied_tax_policy_record_dto_envelope_t));
    if (!applied_tax_policy_record_dto_envelope_local_var) {
        return NULL;
    }
    applied_tax_policy_record_dto_envelope_local_var->is_success = is_success;
    applied_tax_policy_record_dto_envelope_local_var->error_message = error_message;
    applied_tax_policy_record_dto_envelope_local_var->correlation_id = correlation_id;
    applied_tax_policy_record_dto_envelope_local_var->timestamp = timestamp;
    applied_tax_policy_record_dto_envelope_local_var->activity_id = activity_id;
    applied_tax_policy_record_dto_envelope_local_var->result = result;

    return applied_tax_policy_record_dto_envelope_local_var;
}


void applied_tax_policy_record_dto_envelope_free(applied_tax_policy_record_dto_envelope_t *applied_tax_policy_record_dto_envelope) {
    if(NULL == applied_tax_policy_record_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (applied_tax_policy_record_dto_envelope->error_message) {
        free(applied_tax_policy_record_dto_envelope->error_message);
        applied_tax_policy_record_dto_envelope->error_message = NULL;
    }
    if (applied_tax_policy_record_dto_envelope->correlation_id) {
        free(applied_tax_policy_record_dto_envelope->correlation_id);
        applied_tax_policy_record_dto_envelope->correlation_id = NULL;
    }
    if (applied_tax_policy_record_dto_envelope->timestamp) {
        free(applied_tax_policy_record_dto_envelope->timestamp);
        applied_tax_policy_record_dto_envelope->timestamp = NULL;
    }
    if (applied_tax_policy_record_dto_envelope->activity_id) {
        free(applied_tax_policy_record_dto_envelope->activity_id);
        applied_tax_policy_record_dto_envelope->activity_id = NULL;
    }
    if (applied_tax_policy_record_dto_envelope->result) {
        applied_tax_policy_record_dto_free(applied_tax_policy_record_dto_envelope->result);
        applied_tax_policy_record_dto_envelope->result = NULL;
    }
    free(applied_tax_policy_record_dto_envelope);
}

cJSON *applied_tax_policy_record_dto_envelope_convertToJSON(applied_tax_policy_record_dto_envelope_t *applied_tax_policy_record_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // applied_tax_policy_record_dto_envelope->is_success
    if(applied_tax_policy_record_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", applied_tax_policy_record_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // applied_tax_policy_record_dto_envelope->error_message
    if(applied_tax_policy_record_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", applied_tax_policy_record_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // applied_tax_policy_record_dto_envelope->correlation_id
    if(applied_tax_policy_record_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", applied_tax_policy_record_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // applied_tax_policy_record_dto_envelope->timestamp
    if(applied_tax_policy_record_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", applied_tax_policy_record_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // applied_tax_policy_record_dto_envelope->activity_id
    if(applied_tax_policy_record_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", applied_tax_policy_record_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // applied_tax_policy_record_dto_envelope->result
    if(applied_tax_policy_record_dto_envelope->result) {
    cJSON *result_local_JSON = applied_tax_policy_record_dto_convertToJSON(applied_tax_policy_record_dto_envelope->result);
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

applied_tax_policy_record_dto_envelope_t *applied_tax_policy_record_dto_envelope_parseFromJSON(cJSON *applied_tax_policy_record_dto_envelopeJSON){

    applied_tax_policy_record_dto_envelope_t *applied_tax_policy_record_dto_envelope_local_var = NULL;

    // define the local variable for applied_tax_policy_record_dto_envelope->result
    applied_tax_policy_record_dto_t *result_local_nonprim = NULL;

    // applied_tax_policy_record_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(applied_tax_policy_record_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // applied_tax_policy_record_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(applied_tax_policy_record_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // applied_tax_policy_record_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(applied_tax_policy_record_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // applied_tax_policy_record_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(applied_tax_policy_record_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // applied_tax_policy_record_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(applied_tax_policy_record_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // applied_tax_policy_record_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(applied_tax_policy_record_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = applied_tax_policy_record_dto_parseFromJSON(result); //nonprimitive
    }


    applied_tax_policy_record_dto_envelope_local_var = applied_tax_policy_record_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return applied_tax_policy_record_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        applied_tax_policy_record_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
