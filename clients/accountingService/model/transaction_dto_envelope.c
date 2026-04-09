#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "transaction_dto_envelope.h"



transaction_dto_envelope_t *transaction_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    transaction_dto_t *result
    ) {
    transaction_dto_envelope_t *transaction_dto_envelope_local_var = malloc(sizeof(transaction_dto_envelope_t));
    if (!transaction_dto_envelope_local_var) {
        return NULL;
    }
    transaction_dto_envelope_local_var->is_success = is_success;
    transaction_dto_envelope_local_var->error_message = error_message;
    transaction_dto_envelope_local_var->correlation_id = correlation_id;
    transaction_dto_envelope_local_var->timestamp = timestamp;
    transaction_dto_envelope_local_var->activity_id = activity_id;
    transaction_dto_envelope_local_var->result = result;

    return transaction_dto_envelope_local_var;
}


void transaction_dto_envelope_free(transaction_dto_envelope_t *transaction_dto_envelope) {
    if(NULL == transaction_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (transaction_dto_envelope->error_message) {
        free(transaction_dto_envelope->error_message);
        transaction_dto_envelope->error_message = NULL;
    }
    if (transaction_dto_envelope->correlation_id) {
        free(transaction_dto_envelope->correlation_id);
        transaction_dto_envelope->correlation_id = NULL;
    }
    if (transaction_dto_envelope->timestamp) {
        free(transaction_dto_envelope->timestamp);
        transaction_dto_envelope->timestamp = NULL;
    }
    if (transaction_dto_envelope->activity_id) {
        free(transaction_dto_envelope->activity_id);
        transaction_dto_envelope->activity_id = NULL;
    }
    if (transaction_dto_envelope->result) {
        transaction_dto_free(transaction_dto_envelope->result);
        transaction_dto_envelope->result = NULL;
    }
    free(transaction_dto_envelope);
}

cJSON *transaction_dto_envelope_convertToJSON(transaction_dto_envelope_t *transaction_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // transaction_dto_envelope->is_success
    if(transaction_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", transaction_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // transaction_dto_envelope->error_message
    if(transaction_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", transaction_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // transaction_dto_envelope->correlation_id
    if(transaction_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", transaction_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // transaction_dto_envelope->timestamp
    if(transaction_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", transaction_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // transaction_dto_envelope->activity_id
    if(transaction_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", transaction_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // transaction_dto_envelope->result
    if(transaction_dto_envelope->result) {
    cJSON *result_local_JSON = transaction_dto_convertToJSON(transaction_dto_envelope->result);
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

transaction_dto_envelope_t *transaction_dto_envelope_parseFromJSON(cJSON *transaction_dto_envelopeJSON){

    transaction_dto_envelope_t *transaction_dto_envelope_local_var = NULL;

    // define the local variable for transaction_dto_envelope->result
    transaction_dto_t *result_local_nonprim = NULL;

    // transaction_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(transaction_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // transaction_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(transaction_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // transaction_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(transaction_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // transaction_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(transaction_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // transaction_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(transaction_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // transaction_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(transaction_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = transaction_dto_parseFromJSON(result); //nonprimitive
    }


    transaction_dto_envelope_local_var = transaction_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return transaction_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        transaction_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
