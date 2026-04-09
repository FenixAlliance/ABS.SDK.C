#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "empty_envelope.h"



empty_envelope_t *empty_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id
    ) {
    empty_envelope_t *empty_envelope_local_var = malloc(sizeof(empty_envelope_t));
    if (!empty_envelope_local_var) {
        return NULL;
    }
    empty_envelope_local_var->is_success = is_success;
    empty_envelope_local_var->error_message = error_message;
    empty_envelope_local_var->correlation_id = correlation_id;
    empty_envelope_local_var->timestamp = timestamp;
    empty_envelope_local_var->activity_id = activity_id;

    return empty_envelope_local_var;
}


void empty_envelope_free(empty_envelope_t *empty_envelope) {
    if(NULL == empty_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (empty_envelope->error_message) {
        free(empty_envelope->error_message);
        empty_envelope->error_message = NULL;
    }
    if (empty_envelope->correlation_id) {
        free(empty_envelope->correlation_id);
        empty_envelope->correlation_id = NULL;
    }
    if (empty_envelope->timestamp) {
        free(empty_envelope->timestamp);
        empty_envelope->timestamp = NULL;
    }
    if (empty_envelope->activity_id) {
        free(empty_envelope->activity_id);
        empty_envelope->activity_id = NULL;
    }
    free(empty_envelope);
}

cJSON *empty_envelope_convertToJSON(empty_envelope_t *empty_envelope) {
    cJSON *item = cJSON_CreateObject();

    // empty_envelope->is_success
    if(empty_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", empty_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // empty_envelope->error_message
    if(empty_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", empty_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // empty_envelope->correlation_id
    if(empty_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", empty_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // empty_envelope->timestamp
    if(empty_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", empty_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // empty_envelope->activity_id
    if(empty_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", empty_envelope->activity_id) == NULL) {
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

empty_envelope_t *empty_envelope_parseFromJSON(cJSON *empty_envelopeJSON){

    empty_envelope_t *empty_envelope_local_var = NULL;

    // empty_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(empty_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // empty_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(empty_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // empty_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(empty_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // empty_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(empty_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // empty_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(empty_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }


    empty_envelope_local_var = empty_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL
        );

    return empty_envelope_local_var;
end:
    return NULL;

}
