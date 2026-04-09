#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "portal_settings_envelope.h"



portal_settings_envelope_t *portal_settings_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    portal_settings_t *result
    ) {
    portal_settings_envelope_t *portal_settings_envelope_local_var = malloc(sizeof(portal_settings_envelope_t));
    if (!portal_settings_envelope_local_var) {
        return NULL;
    }
    portal_settings_envelope_local_var->is_success = is_success;
    portal_settings_envelope_local_var->error_message = error_message;
    portal_settings_envelope_local_var->correlation_id = correlation_id;
    portal_settings_envelope_local_var->timestamp = timestamp;
    portal_settings_envelope_local_var->activity_id = activity_id;
    portal_settings_envelope_local_var->result = result;

    return portal_settings_envelope_local_var;
}


void portal_settings_envelope_free(portal_settings_envelope_t *portal_settings_envelope) {
    if(NULL == portal_settings_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (portal_settings_envelope->error_message) {
        free(portal_settings_envelope->error_message);
        portal_settings_envelope->error_message = NULL;
    }
    if (portal_settings_envelope->correlation_id) {
        free(portal_settings_envelope->correlation_id);
        portal_settings_envelope->correlation_id = NULL;
    }
    if (portal_settings_envelope->timestamp) {
        free(portal_settings_envelope->timestamp);
        portal_settings_envelope->timestamp = NULL;
    }
    if (portal_settings_envelope->activity_id) {
        free(portal_settings_envelope->activity_id);
        portal_settings_envelope->activity_id = NULL;
    }
    if (portal_settings_envelope->result) {
        portal_settings_free(portal_settings_envelope->result);
        portal_settings_envelope->result = NULL;
    }
    free(portal_settings_envelope);
}

cJSON *portal_settings_envelope_convertToJSON(portal_settings_envelope_t *portal_settings_envelope) {
    cJSON *item = cJSON_CreateObject();

    // portal_settings_envelope->is_success
    if(portal_settings_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", portal_settings_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // portal_settings_envelope->error_message
    if(portal_settings_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", portal_settings_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // portal_settings_envelope->correlation_id
    if(portal_settings_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", portal_settings_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // portal_settings_envelope->timestamp
    if(portal_settings_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", portal_settings_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // portal_settings_envelope->activity_id
    if(portal_settings_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", portal_settings_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // portal_settings_envelope->result
    if(portal_settings_envelope->result) {
    cJSON *result_local_JSON = portal_settings_convertToJSON(portal_settings_envelope->result);
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

portal_settings_envelope_t *portal_settings_envelope_parseFromJSON(cJSON *portal_settings_envelopeJSON){

    portal_settings_envelope_t *portal_settings_envelope_local_var = NULL;

    // define the local variable for portal_settings_envelope->result
    portal_settings_t *result_local_nonprim = NULL;

    // portal_settings_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(portal_settings_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // portal_settings_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(portal_settings_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // portal_settings_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(portal_settings_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // portal_settings_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(portal_settings_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // portal_settings_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(portal_settings_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // portal_settings_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(portal_settings_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = portal_settings_parseFromJSON(result); //nonprimitive
    }


    portal_settings_envelope_local_var = portal_settings_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return portal_settings_envelope_local_var;
end:
    if (result_local_nonprim) {
        portal_settings_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
