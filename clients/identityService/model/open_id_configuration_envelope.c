#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "open_id_configuration_envelope.h"



open_id_configuration_envelope_t *open_id_configuration_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    open_id_configuration_t *result
    ) {
    open_id_configuration_envelope_t *open_id_configuration_envelope_local_var = malloc(sizeof(open_id_configuration_envelope_t));
    if (!open_id_configuration_envelope_local_var) {
        return NULL;
    }
    open_id_configuration_envelope_local_var->is_success = is_success;
    open_id_configuration_envelope_local_var->error_message = error_message;
    open_id_configuration_envelope_local_var->correlation_id = correlation_id;
    open_id_configuration_envelope_local_var->timestamp = timestamp;
    open_id_configuration_envelope_local_var->activity_id = activity_id;
    open_id_configuration_envelope_local_var->result = result;

    return open_id_configuration_envelope_local_var;
}


void open_id_configuration_envelope_free(open_id_configuration_envelope_t *open_id_configuration_envelope) {
    if(NULL == open_id_configuration_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (open_id_configuration_envelope->error_message) {
        free(open_id_configuration_envelope->error_message);
        open_id_configuration_envelope->error_message = NULL;
    }
    if (open_id_configuration_envelope->correlation_id) {
        free(open_id_configuration_envelope->correlation_id);
        open_id_configuration_envelope->correlation_id = NULL;
    }
    if (open_id_configuration_envelope->timestamp) {
        free(open_id_configuration_envelope->timestamp);
        open_id_configuration_envelope->timestamp = NULL;
    }
    if (open_id_configuration_envelope->activity_id) {
        free(open_id_configuration_envelope->activity_id);
        open_id_configuration_envelope->activity_id = NULL;
    }
    if (open_id_configuration_envelope->result) {
        open_id_configuration_free(open_id_configuration_envelope->result);
        open_id_configuration_envelope->result = NULL;
    }
    free(open_id_configuration_envelope);
}

cJSON *open_id_configuration_envelope_convertToJSON(open_id_configuration_envelope_t *open_id_configuration_envelope) {
    cJSON *item = cJSON_CreateObject();

    // open_id_configuration_envelope->is_success
    if(open_id_configuration_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", open_id_configuration_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // open_id_configuration_envelope->error_message
    if(open_id_configuration_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", open_id_configuration_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // open_id_configuration_envelope->correlation_id
    if(open_id_configuration_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", open_id_configuration_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // open_id_configuration_envelope->timestamp
    if(open_id_configuration_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", open_id_configuration_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // open_id_configuration_envelope->activity_id
    if(open_id_configuration_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", open_id_configuration_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // open_id_configuration_envelope->result
    if(open_id_configuration_envelope->result) {
    cJSON *result_local_JSON = open_id_configuration_convertToJSON(open_id_configuration_envelope->result);
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

open_id_configuration_envelope_t *open_id_configuration_envelope_parseFromJSON(cJSON *open_id_configuration_envelopeJSON){

    open_id_configuration_envelope_t *open_id_configuration_envelope_local_var = NULL;

    // define the local variable for open_id_configuration_envelope->result
    open_id_configuration_t *result_local_nonprim = NULL;

    // open_id_configuration_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(open_id_configuration_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // open_id_configuration_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(open_id_configuration_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // open_id_configuration_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(open_id_configuration_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // open_id_configuration_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(open_id_configuration_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // open_id_configuration_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(open_id_configuration_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // open_id_configuration_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(open_id_configuration_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = open_id_configuration_parseFromJSON(result); //nonprimitive
    }


    open_id_configuration_envelope_local_var = open_id_configuration_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return open_id_configuration_envelope_local_var;
end:
    if (result_local_nonprim) {
        open_id_configuration_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
