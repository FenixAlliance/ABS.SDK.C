#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "bank_account_dto_envelope.h"



bank_account_dto_envelope_t *bank_account_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    bank_account_dto_t *result
    ) {
    bank_account_dto_envelope_t *bank_account_dto_envelope_local_var = malloc(sizeof(bank_account_dto_envelope_t));
    if (!bank_account_dto_envelope_local_var) {
        return NULL;
    }
    bank_account_dto_envelope_local_var->is_success = is_success;
    bank_account_dto_envelope_local_var->error_message = error_message;
    bank_account_dto_envelope_local_var->correlation_id = correlation_id;
    bank_account_dto_envelope_local_var->timestamp = timestamp;
    bank_account_dto_envelope_local_var->activity_id = activity_id;
    bank_account_dto_envelope_local_var->result = result;

    return bank_account_dto_envelope_local_var;
}


void bank_account_dto_envelope_free(bank_account_dto_envelope_t *bank_account_dto_envelope) {
    if(NULL == bank_account_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (bank_account_dto_envelope->error_message) {
        free(bank_account_dto_envelope->error_message);
        bank_account_dto_envelope->error_message = NULL;
    }
    if (bank_account_dto_envelope->correlation_id) {
        free(bank_account_dto_envelope->correlation_id);
        bank_account_dto_envelope->correlation_id = NULL;
    }
    if (bank_account_dto_envelope->timestamp) {
        free(bank_account_dto_envelope->timestamp);
        bank_account_dto_envelope->timestamp = NULL;
    }
    if (bank_account_dto_envelope->activity_id) {
        free(bank_account_dto_envelope->activity_id);
        bank_account_dto_envelope->activity_id = NULL;
    }
    if (bank_account_dto_envelope->result) {
        bank_account_dto_free(bank_account_dto_envelope->result);
        bank_account_dto_envelope->result = NULL;
    }
    free(bank_account_dto_envelope);
}

cJSON *bank_account_dto_envelope_convertToJSON(bank_account_dto_envelope_t *bank_account_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // bank_account_dto_envelope->is_success
    if(bank_account_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", bank_account_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // bank_account_dto_envelope->error_message
    if(bank_account_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", bank_account_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // bank_account_dto_envelope->correlation_id
    if(bank_account_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", bank_account_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // bank_account_dto_envelope->timestamp
    if(bank_account_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", bank_account_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // bank_account_dto_envelope->activity_id
    if(bank_account_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", bank_account_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // bank_account_dto_envelope->result
    if(bank_account_dto_envelope->result) {
    cJSON *result_local_JSON = bank_account_dto_convertToJSON(bank_account_dto_envelope->result);
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

bank_account_dto_envelope_t *bank_account_dto_envelope_parseFromJSON(cJSON *bank_account_dto_envelopeJSON){

    bank_account_dto_envelope_t *bank_account_dto_envelope_local_var = NULL;

    // define the local variable for bank_account_dto_envelope->result
    bank_account_dto_t *result_local_nonprim = NULL;

    // bank_account_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(bank_account_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // bank_account_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(bank_account_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // bank_account_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(bank_account_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // bank_account_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(bank_account_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // bank_account_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(bank_account_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // bank_account_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(bank_account_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = bank_account_dto_parseFromJSON(result); //nonprimitive
    }


    bank_account_dto_envelope_local_var = bank_account_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return bank_account_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        bank_account_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
