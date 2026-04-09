#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "account_group_dto_envelope.h"



account_group_dto_envelope_t *account_group_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    account_group_dto_t *result
    ) {
    account_group_dto_envelope_t *account_group_dto_envelope_local_var = malloc(sizeof(account_group_dto_envelope_t));
    if (!account_group_dto_envelope_local_var) {
        return NULL;
    }
    account_group_dto_envelope_local_var->is_success = is_success;
    account_group_dto_envelope_local_var->error_message = error_message;
    account_group_dto_envelope_local_var->correlation_id = correlation_id;
    account_group_dto_envelope_local_var->timestamp = timestamp;
    account_group_dto_envelope_local_var->activity_id = activity_id;
    account_group_dto_envelope_local_var->result = result;

    return account_group_dto_envelope_local_var;
}


void account_group_dto_envelope_free(account_group_dto_envelope_t *account_group_dto_envelope) {
    if(NULL == account_group_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (account_group_dto_envelope->error_message) {
        free(account_group_dto_envelope->error_message);
        account_group_dto_envelope->error_message = NULL;
    }
    if (account_group_dto_envelope->correlation_id) {
        free(account_group_dto_envelope->correlation_id);
        account_group_dto_envelope->correlation_id = NULL;
    }
    if (account_group_dto_envelope->timestamp) {
        free(account_group_dto_envelope->timestamp);
        account_group_dto_envelope->timestamp = NULL;
    }
    if (account_group_dto_envelope->activity_id) {
        free(account_group_dto_envelope->activity_id);
        account_group_dto_envelope->activity_id = NULL;
    }
    if (account_group_dto_envelope->result) {
        account_group_dto_free(account_group_dto_envelope->result);
        account_group_dto_envelope->result = NULL;
    }
    free(account_group_dto_envelope);
}

cJSON *account_group_dto_envelope_convertToJSON(account_group_dto_envelope_t *account_group_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // account_group_dto_envelope->is_success
    if(account_group_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", account_group_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // account_group_dto_envelope->error_message
    if(account_group_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", account_group_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // account_group_dto_envelope->correlation_id
    if(account_group_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", account_group_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // account_group_dto_envelope->timestamp
    if(account_group_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", account_group_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // account_group_dto_envelope->activity_id
    if(account_group_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", account_group_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // account_group_dto_envelope->result
    if(account_group_dto_envelope->result) {
    cJSON *result_local_JSON = account_group_dto_convertToJSON(account_group_dto_envelope->result);
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

account_group_dto_envelope_t *account_group_dto_envelope_parseFromJSON(cJSON *account_group_dto_envelopeJSON){

    account_group_dto_envelope_t *account_group_dto_envelope_local_var = NULL;

    // define the local variable for account_group_dto_envelope->result
    account_group_dto_t *result_local_nonprim = NULL;

    // account_group_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(account_group_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // account_group_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(account_group_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // account_group_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(account_group_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // account_group_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(account_group_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // account_group_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(account_group_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // account_group_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(account_group_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = account_group_dto_parseFromJSON(result); //nonprimitive
    }


    account_group_dto_envelope_local_var = account_group_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return account_group_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        account_group_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
