#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "int32_envelope.h"



int32_envelope_t *int32_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    int result
    ) {
    int32_envelope_t *int32_envelope_local_var = malloc(sizeof(int32_envelope_t));
    if (!int32_envelope_local_var) {
        return NULL;
    }
    int32_envelope_local_var->is_success = is_success;
    int32_envelope_local_var->error_message = error_message;
    int32_envelope_local_var->correlation_id = correlation_id;
    int32_envelope_local_var->timestamp = timestamp;
    int32_envelope_local_var->activity_id = activity_id;
    int32_envelope_local_var->result = result;

    return int32_envelope_local_var;
}


void int32_envelope_free(int32_envelope_t *int32_envelope) {
    if(NULL == int32_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (int32_envelope->error_message) {
        free(int32_envelope->error_message);
        int32_envelope->error_message = NULL;
    }
    if (int32_envelope->correlation_id) {
        free(int32_envelope->correlation_id);
        int32_envelope->correlation_id = NULL;
    }
    if (int32_envelope->timestamp) {
        free(int32_envelope->timestamp);
        int32_envelope->timestamp = NULL;
    }
    if (int32_envelope->activity_id) {
        free(int32_envelope->activity_id);
        int32_envelope->activity_id = NULL;
    }
    free(int32_envelope);
}

cJSON *int32_envelope_convertToJSON(int32_envelope_t *int32_envelope) {
    cJSON *item = cJSON_CreateObject();

    // int32_envelope->is_success
    if(int32_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", int32_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // int32_envelope->error_message
    if(int32_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", int32_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // int32_envelope->correlation_id
    if(int32_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", int32_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // int32_envelope->timestamp
    if(int32_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", int32_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // int32_envelope->activity_id
    if(int32_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", int32_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // int32_envelope->result
    if(int32_envelope->result) {
    if(cJSON_AddNumberToObject(item, "result", int32_envelope->result) == NULL) {
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

int32_envelope_t *int32_envelope_parseFromJSON(cJSON *int32_envelopeJSON){

    int32_envelope_t *int32_envelope_local_var = NULL;

    // int32_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(int32_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // int32_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(int32_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // int32_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(int32_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // int32_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(int32_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // int32_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(int32_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // int32_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(int32_envelopeJSON, "result");
    if (result) { 
    if(!cJSON_IsNumber(result))
    {
    goto end; //Numeric
    }
    }


    int32_envelope_local_var = int32_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result->valuedouble : 0
        );

    return int32_envelope_local_var;
end:
    return NULL;

}
