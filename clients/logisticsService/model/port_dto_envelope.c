#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "port_dto_envelope.h"



port_dto_envelope_t *port_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    port_dto_t *result
    ) {
    port_dto_envelope_t *port_dto_envelope_local_var = malloc(sizeof(port_dto_envelope_t));
    if (!port_dto_envelope_local_var) {
        return NULL;
    }
    port_dto_envelope_local_var->is_success = is_success;
    port_dto_envelope_local_var->error_message = error_message;
    port_dto_envelope_local_var->correlation_id = correlation_id;
    port_dto_envelope_local_var->timestamp = timestamp;
    port_dto_envelope_local_var->activity_id = activity_id;
    port_dto_envelope_local_var->result = result;

    return port_dto_envelope_local_var;
}


void port_dto_envelope_free(port_dto_envelope_t *port_dto_envelope) {
    if(NULL == port_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (port_dto_envelope->error_message) {
        free(port_dto_envelope->error_message);
        port_dto_envelope->error_message = NULL;
    }
    if (port_dto_envelope->correlation_id) {
        free(port_dto_envelope->correlation_id);
        port_dto_envelope->correlation_id = NULL;
    }
    if (port_dto_envelope->timestamp) {
        free(port_dto_envelope->timestamp);
        port_dto_envelope->timestamp = NULL;
    }
    if (port_dto_envelope->activity_id) {
        free(port_dto_envelope->activity_id);
        port_dto_envelope->activity_id = NULL;
    }
    if (port_dto_envelope->result) {
        port_dto_free(port_dto_envelope->result);
        port_dto_envelope->result = NULL;
    }
    free(port_dto_envelope);
}

cJSON *port_dto_envelope_convertToJSON(port_dto_envelope_t *port_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // port_dto_envelope->is_success
    if(port_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", port_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // port_dto_envelope->error_message
    if(port_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", port_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // port_dto_envelope->correlation_id
    if(port_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", port_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // port_dto_envelope->timestamp
    if(port_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", port_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // port_dto_envelope->activity_id
    if(port_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", port_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // port_dto_envelope->result
    if(port_dto_envelope->result) {
    cJSON *result_local_JSON = port_dto_convertToJSON(port_dto_envelope->result);
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

port_dto_envelope_t *port_dto_envelope_parseFromJSON(cJSON *port_dto_envelopeJSON){

    port_dto_envelope_t *port_dto_envelope_local_var = NULL;

    // define the local variable for port_dto_envelope->result
    port_dto_t *result_local_nonprim = NULL;

    // port_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(port_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // port_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(port_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // port_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(port_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // port_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(port_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // port_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(port_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // port_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(port_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = port_dto_parseFromJSON(result); //nonprimitive
    }


    port_dto_envelope_local_var = port_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return port_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        port_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
