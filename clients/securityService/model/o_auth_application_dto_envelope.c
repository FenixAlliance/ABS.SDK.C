#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "o_auth_application_dto_envelope.h"



o_auth_application_dto_envelope_t *o_auth_application_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    o_auth_application_dto_t *result
    ) {
    o_auth_application_dto_envelope_t *o_auth_application_dto_envelope_local_var = malloc(sizeof(o_auth_application_dto_envelope_t));
    if (!o_auth_application_dto_envelope_local_var) {
        return NULL;
    }
    o_auth_application_dto_envelope_local_var->is_success = is_success;
    o_auth_application_dto_envelope_local_var->error_message = error_message;
    o_auth_application_dto_envelope_local_var->correlation_id = correlation_id;
    o_auth_application_dto_envelope_local_var->timestamp = timestamp;
    o_auth_application_dto_envelope_local_var->activity_id = activity_id;
    o_auth_application_dto_envelope_local_var->result = result;

    return o_auth_application_dto_envelope_local_var;
}


void o_auth_application_dto_envelope_free(o_auth_application_dto_envelope_t *o_auth_application_dto_envelope) {
    if(NULL == o_auth_application_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (o_auth_application_dto_envelope->error_message) {
        free(o_auth_application_dto_envelope->error_message);
        o_auth_application_dto_envelope->error_message = NULL;
    }
    if (o_auth_application_dto_envelope->correlation_id) {
        free(o_auth_application_dto_envelope->correlation_id);
        o_auth_application_dto_envelope->correlation_id = NULL;
    }
    if (o_auth_application_dto_envelope->timestamp) {
        free(o_auth_application_dto_envelope->timestamp);
        o_auth_application_dto_envelope->timestamp = NULL;
    }
    if (o_auth_application_dto_envelope->activity_id) {
        free(o_auth_application_dto_envelope->activity_id);
        o_auth_application_dto_envelope->activity_id = NULL;
    }
    if (o_auth_application_dto_envelope->result) {
        o_auth_application_dto_free(o_auth_application_dto_envelope->result);
        o_auth_application_dto_envelope->result = NULL;
    }
    free(o_auth_application_dto_envelope);
}

cJSON *o_auth_application_dto_envelope_convertToJSON(o_auth_application_dto_envelope_t *o_auth_application_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // o_auth_application_dto_envelope->is_success
    if(o_auth_application_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", o_auth_application_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // o_auth_application_dto_envelope->error_message
    if(o_auth_application_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", o_auth_application_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // o_auth_application_dto_envelope->correlation_id
    if(o_auth_application_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", o_auth_application_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // o_auth_application_dto_envelope->timestamp
    if(o_auth_application_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", o_auth_application_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // o_auth_application_dto_envelope->activity_id
    if(o_auth_application_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", o_auth_application_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // o_auth_application_dto_envelope->result
    if(o_auth_application_dto_envelope->result) {
    cJSON *result_local_JSON = o_auth_application_dto_convertToJSON(o_auth_application_dto_envelope->result);
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

o_auth_application_dto_envelope_t *o_auth_application_dto_envelope_parseFromJSON(cJSON *o_auth_application_dto_envelopeJSON){

    o_auth_application_dto_envelope_t *o_auth_application_dto_envelope_local_var = NULL;

    // define the local variable for o_auth_application_dto_envelope->result
    o_auth_application_dto_t *result_local_nonprim = NULL;

    // o_auth_application_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(o_auth_application_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // o_auth_application_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(o_auth_application_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // o_auth_application_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(o_auth_application_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // o_auth_application_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(o_auth_application_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // o_auth_application_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(o_auth_application_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // o_auth_application_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(o_auth_application_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = o_auth_application_dto_parseFromJSON(result); //nonprimitive
    }


    o_auth_application_dto_envelope_local_var = o_auth_application_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return o_auth_application_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        o_auth_application_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
