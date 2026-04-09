#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "error_envelope.h"



error_envelope_t *error_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id
    ) {
    error_envelope_t *error_envelope_local_var = malloc(sizeof(error_envelope_t));
    if (!error_envelope_local_var) {
        return NULL;
    }
    error_envelope_local_var->is_success = is_success;
    error_envelope_local_var->error_message = error_message;
    error_envelope_local_var->correlation_id = correlation_id;
    error_envelope_local_var->timestamp = timestamp;
    error_envelope_local_var->activity_id = activity_id;

    return error_envelope_local_var;
}


void error_envelope_free(error_envelope_t *error_envelope) {
    if(NULL == error_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (error_envelope->error_message) {
        free(error_envelope->error_message);
        error_envelope->error_message = NULL;
    }
    if (error_envelope->correlation_id) {
        free(error_envelope->correlation_id);
        error_envelope->correlation_id = NULL;
    }
    if (error_envelope->timestamp) {
        free(error_envelope->timestamp);
        error_envelope->timestamp = NULL;
    }
    if (error_envelope->activity_id) {
        free(error_envelope->activity_id);
        error_envelope->activity_id = NULL;
    }
    free(error_envelope);
}

cJSON *error_envelope_convertToJSON(error_envelope_t *error_envelope) {
    cJSON *item = cJSON_CreateObject();

    // error_envelope->is_success
    if(error_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", error_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // error_envelope->error_message
    if(error_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", error_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // error_envelope->correlation_id
    if(error_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", error_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // error_envelope->timestamp
    if(error_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", error_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // error_envelope->activity_id
    if(error_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", error_envelope->activity_id) == NULL) {
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

error_envelope_t *error_envelope_parseFromJSON(cJSON *error_envelopeJSON){

    error_envelope_t *error_envelope_local_var = NULL;

    // error_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(error_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // error_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(error_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // error_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(error_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // error_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(error_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // error_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(error_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }


    error_envelope_local_var = error_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL
        );

    return error_envelope_local_var;
end:
    return NULL;

}
