#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "authorization_result_envelope.h"



authorization_result_envelope_t *authorization_result_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    authorization_result_t *result
    ) {
    authorization_result_envelope_t *authorization_result_envelope_local_var = malloc(sizeof(authorization_result_envelope_t));
    if (!authorization_result_envelope_local_var) {
        return NULL;
    }
    authorization_result_envelope_local_var->is_success = is_success;
    authorization_result_envelope_local_var->error_message = error_message;
    authorization_result_envelope_local_var->correlation_id = correlation_id;
    authorization_result_envelope_local_var->timestamp = timestamp;
    authorization_result_envelope_local_var->activity_id = activity_id;
    authorization_result_envelope_local_var->result = result;

    return authorization_result_envelope_local_var;
}


void authorization_result_envelope_free(authorization_result_envelope_t *authorization_result_envelope) {
    if(NULL == authorization_result_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (authorization_result_envelope->error_message) {
        free(authorization_result_envelope->error_message);
        authorization_result_envelope->error_message = NULL;
    }
    if (authorization_result_envelope->correlation_id) {
        free(authorization_result_envelope->correlation_id);
        authorization_result_envelope->correlation_id = NULL;
    }
    if (authorization_result_envelope->timestamp) {
        free(authorization_result_envelope->timestamp);
        authorization_result_envelope->timestamp = NULL;
    }
    if (authorization_result_envelope->activity_id) {
        free(authorization_result_envelope->activity_id);
        authorization_result_envelope->activity_id = NULL;
    }
    if (authorization_result_envelope->result) {
        authorization_result_free(authorization_result_envelope->result);
        authorization_result_envelope->result = NULL;
    }
    free(authorization_result_envelope);
}

cJSON *authorization_result_envelope_convertToJSON(authorization_result_envelope_t *authorization_result_envelope) {
    cJSON *item = cJSON_CreateObject();

    // authorization_result_envelope->is_success
    if(authorization_result_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", authorization_result_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // authorization_result_envelope->error_message
    if(authorization_result_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", authorization_result_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // authorization_result_envelope->correlation_id
    if(authorization_result_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", authorization_result_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // authorization_result_envelope->timestamp
    if(authorization_result_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", authorization_result_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // authorization_result_envelope->activity_id
    if(authorization_result_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", authorization_result_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // authorization_result_envelope->result
    if(authorization_result_envelope->result) {
    cJSON *result_local_JSON = authorization_result_convertToJSON(authorization_result_envelope->result);
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

authorization_result_envelope_t *authorization_result_envelope_parseFromJSON(cJSON *authorization_result_envelopeJSON){

    authorization_result_envelope_t *authorization_result_envelope_local_var = NULL;

    // define the local variable for authorization_result_envelope->result
    authorization_result_t *result_local_nonprim = NULL;

    // authorization_result_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(authorization_result_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // authorization_result_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(authorization_result_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // authorization_result_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(authorization_result_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // authorization_result_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(authorization_result_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // authorization_result_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(authorization_result_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // authorization_result_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(authorization_result_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = authorization_result_parseFromJSON(result); //nonprimitive
    }


    authorization_result_envelope_local_var = authorization_result_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return authorization_result_envelope_local_var;
end:
    if (result_local_nonprim) {
        authorization_result_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
