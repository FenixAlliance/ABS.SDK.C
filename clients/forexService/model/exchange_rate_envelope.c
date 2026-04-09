#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "exchange_rate_envelope.h"



exchange_rate_envelope_t *exchange_rate_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    exchange_rate_t *result
    ) {
    exchange_rate_envelope_t *exchange_rate_envelope_local_var = malloc(sizeof(exchange_rate_envelope_t));
    if (!exchange_rate_envelope_local_var) {
        return NULL;
    }
    exchange_rate_envelope_local_var->is_success = is_success;
    exchange_rate_envelope_local_var->error_message = error_message;
    exchange_rate_envelope_local_var->correlation_id = correlation_id;
    exchange_rate_envelope_local_var->timestamp = timestamp;
    exchange_rate_envelope_local_var->activity_id = activity_id;
    exchange_rate_envelope_local_var->result = result;

    return exchange_rate_envelope_local_var;
}


void exchange_rate_envelope_free(exchange_rate_envelope_t *exchange_rate_envelope) {
    if(NULL == exchange_rate_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (exchange_rate_envelope->error_message) {
        free(exchange_rate_envelope->error_message);
        exchange_rate_envelope->error_message = NULL;
    }
    if (exchange_rate_envelope->correlation_id) {
        free(exchange_rate_envelope->correlation_id);
        exchange_rate_envelope->correlation_id = NULL;
    }
    if (exchange_rate_envelope->timestamp) {
        free(exchange_rate_envelope->timestamp);
        exchange_rate_envelope->timestamp = NULL;
    }
    if (exchange_rate_envelope->activity_id) {
        free(exchange_rate_envelope->activity_id);
        exchange_rate_envelope->activity_id = NULL;
    }
    if (exchange_rate_envelope->result) {
        exchange_rate_free(exchange_rate_envelope->result);
        exchange_rate_envelope->result = NULL;
    }
    free(exchange_rate_envelope);
}

cJSON *exchange_rate_envelope_convertToJSON(exchange_rate_envelope_t *exchange_rate_envelope) {
    cJSON *item = cJSON_CreateObject();

    // exchange_rate_envelope->is_success
    if(exchange_rate_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", exchange_rate_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // exchange_rate_envelope->error_message
    if(exchange_rate_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", exchange_rate_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // exchange_rate_envelope->correlation_id
    if(exchange_rate_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", exchange_rate_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // exchange_rate_envelope->timestamp
    if(exchange_rate_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", exchange_rate_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // exchange_rate_envelope->activity_id
    if(exchange_rate_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", exchange_rate_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // exchange_rate_envelope->result
    if(exchange_rate_envelope->result) {
    cJSON *result_local_JSON = exchange_rate_convertToJSON(exchange_rate_envelope->result);
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

exchange_rate_envelope_t *exchange_rate_envelope_parseFromJSON(cJSON *exchange_rate_envelopeJSON){

    exchange_rate_envelope_t *exchange_rate_envelope_local_var = NULL;

    // define the local variable for exchange_rate_envelope->result
    exchange_rate_t *result_local_nonprim = NULL;

    // exchange_rate_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(exchange_rate_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // exchange_rate_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(exchange_rate_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // exchange_rate_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(exchange_rate_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // exchange_rate_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(exchange_rate_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // exchange_rate_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(exchange_rate_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // exchange_rate_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(exchange_rate_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = exchange_rate_parseFromJSON(result); //nonprimitive
    }


    exchange_rate_envelope_local_var = exchange_rate_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return exchange_rate_envelope_local_var;
end:
    if (result_local_nonprim) {
        exchange_rate_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
