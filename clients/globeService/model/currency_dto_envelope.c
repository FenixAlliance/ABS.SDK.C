#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "currency_dto_envelope.h"



currency_dto_envelope_t *currency_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    currency_dto_t *result
    ) {
    currency_dto_envelope_t *currency_dto_envelope_local_var = malloc(sizeof(currency_dto_envelope_t));
    if (!currency_dto_envelope_local_var) {
        return NULL;
    }
    currency_dto_envelope_local_var->is_success = is_success;
    currency_dto_envelope_local_var->error_message = error_message;
    currency_dto_envelope_local_var->correlation_id = correlation_id;
    currency_dto_envelope_local_var->timestamp = timestamp;
    currency_dto_envelope_local_var->activity_id = activity_id;
    currency_dto_envelope_local_var->result = result;

    return currency_dto_envelope_local_var;
}


void currency_dto_envelope_free(currency_dto_envelope_t *currency_dto_envelope) {
    if(NULL == currency_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (currency_dto_envelope->error_message) {
        free(currency_dto_envelope->error_message);
        currency_dto_envelope->error_message = NULL;
    }
    if (currency_dto_envelope->correlation_id) {
        free(currency_dto_envelope->correlation_id);
        currency_dto_envelope->correlation_id = NULL;
    }
    if (currency_dto_envelope->timestamp) {
        free(currency_dto_envelope->timestamp);
        currency_dto_envelope->timestamp = NULL;
    }
    if (currency_dto_envelope->activity_id) {
        free(currency_dto_envelope->activity_id);
        currency_dto_envelope->activity_id = NULL;
    }
    if (currency_dto_envelope->result) {
        currency_dto_free(currency_dto_envelope->result);
        currency_dto_envelope->result = NULL;
    }
    free(currency_dto_envelope);
}

cJSON *currency_dto_envelope_convertToJSON(currency_dto_envelope_t *currency_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // currency_dto_envelope->is_success
    if(currency_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", currency_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // currency_dto_envelope->error_message
    if(currency_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", currency_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // currency_dto_envelope->correlation_id
    if(currency_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", currency_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // currency_dto_envelope->timestamp
    if(currency_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", currency_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // currency_dto_envelope->activity_id
    if(currency_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", currency_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // currency_dto_envelope->result
    if(currency_dto_envelope->result) {
    cJSON *result_local_JSON = currency_dto_convertToJSON(currency_dto_envelope->result);
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

currency_dto_envelope_t *currency_dto_envelope_parseFromJSON(cJSON *currency_dto_envelopeJSON){

    currency_dto_envelope_t *currency_dto_envelope_local_var = NULL;

    // define the local variable for currency_dto_envelope->result
    currency_dto_t *result_local_nonprim = NULL;

    // currency_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(currency_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // currency_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(currency_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // currency_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(currency_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // currency_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(currency_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // currency_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(currency_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // currency_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(currency_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = currency_dto_parseFromJSON(result); //nonprimitive
    }


    currency_dto_envelope_local_var = currency_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return currency_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        currency_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
