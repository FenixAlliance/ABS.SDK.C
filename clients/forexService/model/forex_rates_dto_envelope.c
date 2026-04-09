#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "forex_rates_dto_envelope.h"



forex_rates_dto_envelope_t *forex_rates_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    forex_rates_dto_t *result
    ) {
    forex_rates_dto_envelope_t *forex_rates_dto_envelope_local_var = malloc(sizeof(forex_rates_dto_envelope_t));
    if (!forex_rates_dto_envelope_local_var) {
        return NULL;
    }
    forex_rates_dto_envelope_local_var->is_success = is_success;
    forex_rates_dto_envelope_local_var->error_message = error_message;
    forex_rates_dto_envelope_local_var->correlation_id = correlation_id;
    forex_rates_dto_envelope_local_var->timestamp = timestamp;
    forex_rates_dto_envelope_local_var->activity_id = activity_id;
    forex_rates_dto_envelope_local_var->result = result;

    return forex_rates_dto_envelope_local_var;
}


void forex_rates_dto_envelope_free(forex_rates_dto_envelope_t *forex_rates_dto_envelope) {
    if(NULL == forex_rates_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (forex_rates_dto_envelope->error_message) {
        free(forex_rates_dto_envelope->error_message);
        forex_rates_dto_envelope->error_message = NULL;
    }
    if (forex_rates_dto_envelope->correlation_id) {
        free(forex_rates_dto_envelope->correlation_id);
        forex_rates_dto_envelope->correlation_id = NULL;
    }
    if (forex_rates_dto_envelope->timestamp) {
        free(forex_rates_dto_envelope->timestamp);
        forex_rates_dto_envelope->timestamp = NULL;
    }
    if (forex_rates_dto_envelope->activity_id) {
        free(forex_rates_dto_envelope->activity_id);
        forex_rates_dto_envelope->activity_id = NULL;
    }
    if (forex_rates_dto_envelope->result) {
        forex_rates_dto_free(forex_rates_dto_envelope->result);
        forex_rates_dto_envelope->result = NULL;
    }
    free(forex_rates_dto_envelope);
}

cJSON *forex_rates_dto_envelope_convertToJSON(forex_rates_dto_envelope_t *forex_rates_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // forex_rates_dto_envelope->is_success
    if(forex_rates_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", forex_rates_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // forex_rates_dto_envelope->error_message
    if(forex_rates_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", forex_rates_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // forex_rates_dto_envelope->correlation_id
    if(forex_rates_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", forex_rates_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // forex_rates_dto_envelope->timestamp
    if(forex_rates_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", forex_rates_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // forex_rates_dto_envelope->activity_id
    if(forex_rates_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", forex_rates_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // forex_rates_dto_envelope->result
    if(forex_rates_dto_envelope->result) {
    cJSON *result_local_JSON = forex_rates_dto_convertToJSON(forex_rates_dto_envelope->result);
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

forex_rates_dto_envelope_t *forex_rates_dto_envelope_parseFromJSON(cJSON *forex_rates_dto_envelopeJSON){

    forex_rates_dto_envelope_t *forex_rates_dto_envelope_local_var = NULL;

    // define the local variable for forex_rates_dto_envelope->result
    forex_rates_dto_t *result_local_nonprim = NULL;

    // forex_rates_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(forex_rates_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // forex_rates_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(forex_rates_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // forex_rates_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(forex_rates_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // forex_rates_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(forex_rates_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // forex_rates_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(forex_rates_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // forex_rates_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(forex_rates_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = forex_rates_dto_parseFromJSON(result); //nonprimitive
    }


    forex_rates_dto_envelope_local_var = forex_rates_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return forex_rates_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        forex_rates_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
