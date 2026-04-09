#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "portal_options_envelope.h"



portal_options_envelope_t *portal_options_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    portal_options_t *result
    ) {
    portal_options_envelope_t *portal_options_envelope_local_var = malloc(sizeof(portal_options_envelope_t));
    if (!portal_options_envelope_local_var) {
        return NULL;
    }
    portal_options_envelope_local_var->is_success = is_success;
    portal_options_envelope_local_var->error_message = error_message;
    portal_options_envelope_local_var->correlation_id = correlation_id;
    portal_options_envelope_local_var->timestamp = timestamp;
    portal_options_envelope_local_var->activity_id = activity_id;
    portal_options_envelope_local_var->result = result;

    return portal_options_envelope_local_var;
}


void portal_options_envelope_free(portal_options_envelope_t *portal_options_envelope) {
    if(NULL == portal_options_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (portal_options_envelope->error_message) {
        free(portal_options_envelope->error_message);
        portal_options_envelope->error_message = NULL;
    }
    if (portal_options_envelope->correlation_id) {
        free(portal_options_envelope->correlation_id);
        portal_options_envelope->correlation_id = NULL;
    }
    if (portal_options_envelope->timestamp) {
        free(portal_options_envelope->timestamp);
        portal_options_envelope->timestamp = NULL;
    }
    if (portal_options_envelope->activity_id) {
        free(portal_options_envelope->activity_id);
        portal_options_envelope->activity_id = NULL;
    }
    if (portal_options_envelope->result) {
        portal_options_free(portal_options_envelope->result);
        portal_options_envelope->result = NULL;
    }
    free(portal_options_envelope);
}

cJSON *portal_options_envelope_convertToJSON(portal_options_envelope_t *portal_options_envelope) {
    cJSON *item = cJSON_CreateObject();

    // portal_options_envelope->is_success
    if(portal_options_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", portal_options_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // portal_options_envelope->error_message
    if(portal_options_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", portal_options_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // portal_options_envelope->correlation_id
    if(portal_options_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", portal_options_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // portal_options_envelope->timestamp
    if(portal_options_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", portal_options_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // portal_options_envelope->activity_id
    if(portal_options_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", portal_options_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // portal_options_envelope->result
    if(portal_options_envelope->result) {
    cJSON *result_local_JSON = portal_options_convertToJSON(portal_options_envelope->result);
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

portal_options_envelope_t *portal_options_envelope_parseFromJSON(cJSON *portal_options_envelopeJSON){

    portal_options_envelope_t *portal_options_envelope_local_var = NULL;

    // define the local variable for portal_options_envelope->result
    portal_options_t *result_local_nonprim = NULL;

    // portal_options_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(portal_options_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // portal_options_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(portal_options_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // portal_options_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(portal_options_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // portal_options_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(portal_options_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // portal_options_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(portal_options_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // portal_options_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(portal_options_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = portal_options_parseFromJSON(result); //nonprimitive
    }


    portal_options_envelope_local_var = portal_options_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return portal_options_envelope_local_var;
end:
    if (result_local_nonprim) {
        portal_options_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
