#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "envelope.h"



envelope_t *envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    char *result
    ) {
    envelope_t *envelope_local_var = malloc(sizeof(envelope_t));
    if (!envelope_local_var) {
        return NULL;
    }
    envelope_local_var->is_success = is_success;
    envelope_local_var->error_message = error_message;
    envelope_local_var->correlation_id = correlation_id;
    envelope_local_var->timestamp = timestamp;
    envelope_local_var->activity_id = activity_id;
    envelope_local_var->result = result;

    return envelope_local_var;
}


void envelope_free(envelope_t *envelope) {
    if(NULL == envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (envelope->error_message) {
        free(envelope->error_message);
        envelope->error_message = NULL;
    }
    if (envelope->correlation_id) {
        free(envelope->correlation_id);
        envelope->correlation_id = NULL;
    }
    if (envelope->timestamp) {
        free(envelope->timestamp);
        envelope->timestamp = NULL;
    }
    if (envelope->activity_id) {
        free(envelope->activity_id);
        envelope->activity_id = NULL;
    }
    if (envelope->result) {
        free(envelope->result);
        envelope->result = NULL;
    }
    free(envelope);
}

cJSON *envelope_convertToJSON(envelope_t *envelope) {
    cJSON *item = cJSON_CreateObject();

    // envelope->is_success
    if(envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // envelope->error_message
    if(envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // envelope->correlation_id
    if(envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // envelope->timestamp
    if(envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // envelope->activity_id
    if(envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // envelope->result
    if(envelope->result) {
    if(cJSON_AddStringToObject(item, "result", envelope->result) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

envelope_t *envelope_parseFromJSON(cJSON *envelopeJSON){

    envelope_t *envelope_local_var = NULL;

    // envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(envelopeJSON, "result");
    if (result) { 
    if(!cJSON_IsString(result) && !cJSON_IsNull(result))
    {
    goto end; //String
    }
    }


    envelope_local_var = envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result && !cJSON_IsNull(result) ? strdup(result->valuestring) : NULL
        );

    return envelope_local_var;
end:
    return NULL;

}
