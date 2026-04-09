#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tax_policy_dto_envelope.h"



tax_policy_dto_envelope_t *tax_policy_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    tax_policy_dto_t *result
    ) {
    tax_policy_dto_envelope_t *tax_policy_dto_envelope_local_var = malloc(sizeof(tax_policy_dto_envelope_t));
    if (!tax_policy_dto_envelope_local_var) {
        return NULL;
    }
    tax_policy_dto_envelope_local_var->is_success = is_success;
    tax_policy_dto_envelope_local_var->error_message = error_message;
    tax_policy_dto_envelope_local_var->correlation_id = correlation_id;
    tax_policy_dto_envelope_local_var->timestamp = timestamp;
    tax_policy_dto_envelope_local_var->activity_id = activity_id;
    tax_policy_dto_envelope_local_var->result = result;

    return tax_policy_dto_envelope_local_var;
}


void tax_policy_dto_envelope_free(tax_policy_dto_envelope_t *tax_policy_dto_envelope) {
    if(NULL == tax_policy_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (tax_policy_dto_envelope->error_message) {
        free(tax_policy_dto_envelope->error_message);
        tax_policy_dto_envelope->error_message = NULL;
    }
    if (tax_policy_dto_envelope->correlation_id) {
        free(tax_policy_dto_envelope->correlation_id);
        tax_policy_dto_envelope->correlation_id = NULL;
    }
    if (tax_policy_dto_envelope->timestamp) {
        free(tax_policy_dto_envelope->timestamp);
        tax_policy_dto_envelope->timestamp = NULL;
    }
    if (tax_policy_dto_envelope->activity_id) {
        free(tax_policy_dto_envelope->activity_id);
        tax_policy_dto_envelope->activity_id = NULL;
    }
    if (tax_policy_dto_envelope->result) {
        tax_policy_dto_free(tax_policy_dto_envelope->result);
        tax_policy_dto_envelope->result = NULL;
    }
    free(tax_policy_dto_envelope);
}

cJSON *tax_policy_dto_envelope_convertToJSON(tax_policy_dto_envelope_t *tax_policy_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // tax_policy_dto_envelope->is_success
    if(tax_policy_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", tax_policy_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // tax_policy_dto_envelope->error_message
    if(tax_policy_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", tax_policy_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // tax_policy_dto_envelope->correlation_id
    if(tax_policy_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", tax_policy_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // tax_policy_dto_envelope->timestamp
    if(tax_policy_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", tax_policy_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // tax_policy_dto_envelope->activity_id
    if(tax_policy_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", tax_policy_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // tax_policy_dto_envelope->result
    if(tax_policy_dto_envelope->result) {
    cJSON *result_local_JSON = tax_policy_dto_convertToJSON(tax_policy_dto_envelope->result);
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

tax_policy_dto_envelope_t *tax_policy_dto_envelope_parseFromJSON(cJSON *tax_policy_dto_envelopeJSON){

    tax_policy_dto_envelope_t *tax_policy_dto_envelope_local_var = NULL;

    // define the local variable for tax_policy_dto_envelope->result
    tax_policy_dto_t *result_local_nonprim = NULL;

    // tax_policy_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(tax_policy_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // tax_policy_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(tax_policy_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // tax_policy_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(tax_policy_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // tax_policy_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(tax_policy_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // tax_policy_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(tax_policy_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // tax_policy_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(tax_policy_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = tax_policy_dto_parseFromJSON(result); //nonprimitive
    }


    tax_policy_dto_envelope_local_var = tax_policy_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return tax_policy_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        tax_policy_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
