#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "decimal_envelope.h"



decimal_envelope_t *decimal_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    double result
    ) {
    decimal_envelope_t *decimal_envelope_local_var = malloc(sizeof(decimal_envelope_t));
    if (!decimal_envelope_local_var) {
        return NULL;
    }
    decimal_envelope_local_var->is_success = is_success;
    decimal_envelope_local_var->error_message = error_message;
    decimal_envelope_local_var->correlation_id = correlation_id;
    decimal_envelope_local_var->timestamp = timestamp;
    decimal_envelope_local_var->activity_id = activity_id;
    decimal_envelope_local_var->result = result;

    return decimal_envelope_local_var;
}


void decimal_envelope_free(decimal_envelope_t *decimal_envelope) {
    if(NULL == decimal_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (decimal_envelope->error_message) {
        free(decimal_envelope->error_message);
        decimal_envelope->error_message = NULL;
    }
    if (decimal_envelope->correlation_id) {
        free(decimal_envelope->correlation_id);
        decimal_envelope->correlation_id = NULL;
    }
    if (decimal_envelope->timestamp) {
        free(decimal_envelope->timestamp);
        decimal_envelope->timestamp = NULL;
    }
    if (decimal_envelope->activity_id) {
        free(decimal_envelope->activity_id);
        decimal_envelope->activity_id = NULL;
    }
    free(decimal_envelope);
}

cJSON *decimal_envelope_convertToJSON(decimal_envelope_t *decimal_envelope) {
    cJSON *item = cJSON_CreateObject();

    // decimal_envelope->is_success
    if(decimal_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", decimal_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // decimal_envelope->error_message
    if(decimal_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", decimal_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // decimal_envelope->correlation_id
    if(decimal_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", decimal_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // decimal_envelope->timestamp
    if(decimal_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", decimal_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // decimal_envelope->activity_id
    if(decimal_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", decimal_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // decimal_envelope->result
    if(decimal_envelope->result) {
    if(cJSON_AddNumberToObject(item, "result", decimal_envelope->result) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

decimal_envelope_t *decimal_envelope_parseFromJSON(cJSON *decimal_envelopeJSON){

    decimal_envelope_t *decimal_envelope_local_var = NULL;

    // decimal_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(decimal_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // decimal_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(decimal_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // decimal_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(decimal_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // decimal_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(decimal_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // decimal_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(decimal_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // decimal_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(decimal_envelopeJSON, "result");
    if (result) { 
    if(!cJSON_IsNumber(result))
    {
    goto end; //Numeric
    }
    }


    decimal_envelope_local_var = decimal_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result->valuedouble : 0
        );

    return decimal_envelope_local_var;
end:
    return NULL;

}
