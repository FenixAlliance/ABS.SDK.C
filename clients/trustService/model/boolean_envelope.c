#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "boolean_envelope.h"



boolean_envelope_t *boolean_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    int result
    ) {
    boolean_envelope_t *boolean_envelope_local_var = malloc(sizeof(boolean_envelope_t));
    if (!boolean_envelope_local_var) {
        return NULL;
    }
    boolean_envelope_local_var->is_success = is_success;
    boolean_envelope_local_var->error_message = error_message;
    boolean_envelope_local_var->correlation_id = correlation_id;
    boolean_envelope_local_var->timestamp = timestamp;
    boolean_envelope_local_var->activity_id = activity_id;
    boolean_envelope_local_var->result = result;

    return boolean_envelope_local_var;
}


void boolean_envelope_free(boolean_envelope_t *boolean_envelope) {
    if(NULL == boolean_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (boolean_envelope->error_message) {
        free(boolean_envelope->error_message);
        boolean_envelope->error_message = NULL;
    }
    if (boolean_envelope->correlation_id) {
        free(boolean_envelope->correlation_id);
        boolean_envelope->correlation_id = NULL;
    }
    if (boolean_envelope->timestamp) {
        free(boolean_envelope->timestamp);
        boolean_envelope->timestamp = NULL;
    }
    if (boolean_envelope->activity_id) {
        free(boolean_envelope->activity_id);
        boolean_envelope->activity_id = NULL;
    }
    free(boolean_envelope);
}

cJSON *boolean_envelope_convertToJSON(boolean_envelope_t *boolean_envelope) {
    cJSON *item = cJSON_CreateObject();

    // boolean_envelope->is_success
    if(boolean_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", boolean_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // boolean_envelope->error_message
    if(boolean_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", boolean_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // boolean_envelope->correlation_id
    if(boolean_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", boolean_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // boolean_envelope->timestamp
    if(boolean_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", boolean_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // boolean_envelope->activity_id
    if(boolean_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", boolean_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // boolean_envelope->result
    if(boolean_envelope->result) {
    if(cJSON_AddBoolToObject(item, "result", boolean_envelope->result) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

boolean_envelope_t *boolean_envelope_parseFromJSON(cJSON *boolean_envelopeJSON){

    boolean_envelope_t *boolean_envelope_local_var = NULL;

    // boolean_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(boolean_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // boolean_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(boolean_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // boolean_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(boolean_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // boolean_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(boolean_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // boolean_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(boolean_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // boolean_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(boolean_envelopeJSON, "result");
    if (result) { 
    if(!cJSON_IsBool(result))
    {
    goto end; //Bool
    }
    }


    boolean_envelope_local_var = boolean_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result->valueint : 0
        );

    return boolean_envelope_local_var;
end:
    return NULL;

}
