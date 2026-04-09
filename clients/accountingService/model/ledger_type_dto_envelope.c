#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ledger_type_dto_envelope.h"



ledger_type_dto_envelope_t *ledger_type_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    ledger_type_dto_t *result
    ) {
    ledger_type_dto_envelope_t *ledger_type_dto_envelope_local_var = malloc(sizeof(ledger_type_dto_envelope_t));
    if (!ledger_type_dto_envelope_local_var) {
        return NULL;
    }
    ledger_type_dto_envelope_local_var->is_success = is_success;
    ledger_type_dto_envelope_local_var->error_message = error_message;
    ledger_type_dto_envelope_local_var->correlation_id = correlation_id;
    ledger_type_dto_envelope_local_var->timestamp = timestamp;
    ledger_type_dto_envelope_local_var->activity_id = activity_id;
    ledger_type_dto_envelope_local_var->result = result;

    return ledger_type_dto_envelope_local_var;
}


void ledger_type_dto_envelope_free(ledger_type_dto_envelope_t *ledger_type_dto_envelope) {
    if(NULL == ledger_type_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (ledger_type_dto_envelope->error_message) {
        free(ledger_type_dto_envelope->error_message);
        ledger_type_dto_envelope->error_message = NULL;
    }
    if (ledger_type_dto_envelope->correlation_id) {
        free(ledger_type_dto_envelope->correlation_id);
        ledger_type_dto_envelope->correlation_id = NULL;
    }
    if (ledger_type_dto_envelope->timestamp) {
        free(ledger_type_dto_envelope->timestamp);
        ledger_type_dto_envelope->timestamp = NULL;
    }
    if (ledger_type_dto_envelope->activity_id) {
        free(ledger_type_dto_envelope->activity_id);
        ledger_type_dto_envelope->activity_id = NULL;
    }
    if (ledger_type_dto_envelope->result) {
        ledger_type_dto_free(ledger_type_dto_envelope->result);
        ledger_type_dto_envelope->result = NULL;
    }
    free(ledger_type_dto_envelope);
}

cJSON *ledger_type_dto_envelope_convertToJSON(ledger_type_dto_envelope_t *ledger_type_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // ledger_type_dto_envelope->is_success
    if(ledger_type_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", ledger_type_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // ledger_type_dto_envelope->error_message
    if(ledger_type_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", ledger_type_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // ledger_type_dto_envelope->correlation_id
    if(ledger_type_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", ledger_type_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // ledger_type_dto_envelope->timestamp
    if(ledger_type_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", ledger_type_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // ledger_type_dto_envelope->activity_id
    if(ledger_type_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", ledger_type_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // ledger_type_dto_envelope->result
    if(ledger_type_dto_envelope->result) {
    cJSON *result_local_JSON = ledger_type_dto_convertToJSON(ledger_type_dto_envelope->result);
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

ledger_type_dto_envelope_t *ledger_type_dto_envelope_parseFromJSON(cJSON *ledger_type_dto_envelopeJSON){

    ledger_type_dto_envelope_t *ledger_type_dto_envelope_local_var = NULL;

    // define the local variable for ledger_type_dto_envelope->result
    ledger_type_dto_t *result_local_nonprim = NULL;

    // ledger_type_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(ledger_type_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // ledger_type_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(ledger_type_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // ledger_type_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(ledger_type_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // ledger_type_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(ledger_type_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // ledger_type_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(ledger_type_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // ledger_type_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(ledger_type_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = ledger_type_dto_parseFromJSON(result); //nonprimitive
    }


    ledger_type_dto_envelope_local_var = ledger_type_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return ledger_type_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        ledger_type_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
