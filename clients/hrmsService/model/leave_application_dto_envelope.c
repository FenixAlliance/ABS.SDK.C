#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "leave_application_dto_envelope.h"



leave_application_dto_envelope_t *leave_application_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    leave_application_dto_t *result
    ) {
    leave_application_dto_envelope_t *leave_application_dto_envelope_local_var = malloc(sizeof(leave_application_dto_envelope_t));
    if (!leave_application_dto_envelope_local_var) {
        return NULL;
    }
    leave_application_dto_envelope_local_var->is_success = is_success;
    leave_application_dto_envelope_local_var->error_message = error_message;
    leave_application_dto_envelope_local_var->correlation_id = correlation_id;
    leave_application_dto_envelope_local_var->timestamp = timestamp;
    leave_application_dto_envelope_local_var->activity_id = activity_id;
    leave_application_dto_envelope_local_var->result = result;

    return leave_application_dto_envelope_local_var;
}


void leave_application_dto_envelope_free(leave_application_dto_envelope_t *leave_application_dto_envelope) {
    if(NULL == leave_application_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (leave_application_dto_envelope->error_message) {
        free(leave_application_dto_envelope->error_message);
        leave_application_dto_envelope->error_message = NULL;
    }
    if (leave_application_dto_envelope->correlation_id) {
        free(leave_application_dto_envelope->correlation_id);
        leave_application_dto_envelope->correlation_id = NULL;
    }
    if (leave_application_dto_envelope->timestamp) {
        free(leave_application_dto_envelope->timestamp);
        leave_application_dto_envelope->timestamp = NULL;
    }
    if (leave_application_dto_envelope->activity_id) {
        free(leave_application_dto_envelope->activity_id);
        leave_application_dto_envelope->activity_id = NULL;
    }
    if (leave_application_dto_envelope->result) {
        leave_application_dto_free(leave_application_dto_envelope->result);
        leave_application_dto_envelope->result = NULL;
    }
    free(leave_application_dto_envelope);
}

cJSON *leave_application_dto_envelope_convertToJSON(leave_application_dto_envelope_t *leave_application_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // leave_application_dto_envelope->is_success
    if(leave_application_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", leave_application_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // leave_application_dto_envelope->error_message
    if(leave_application_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", leave_application_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // leave_application_dto_envelope->correlation_id
    if(leave_application_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", leave_application_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // leave_application_dto_envelope->timestamp
    if(leave_application_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", leave_application_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // leave_application_dto_envelope->activity_id
    if(leave_application_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", leave_application_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // leave_application_dto_envelope->result
    if(leave_application_dto_envelope->result) {
    cJSON *result_local_JSON = leave_application_dto_convertToJSON(leave_application_dto_envelope->result);
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

leave_application_dto_envelope_t *leave_application_dto_envelope_parseFromJSON(cJSON *leave_application_dto_envelopeJSON){

    leave_application_dto_envelope_t *leave_application_dto_envelope_local_var = NULL;

    // define the local variable for leave_application_dto_envelope->result
    leave_application_dto_t *result_local_nonprim = NULL;

    // leave_application_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(leave_application_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // leave_application_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(leave_application_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // leave_application_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(leave_application_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // leave_application_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(leave_application_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // leave_application_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(leave_application_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // leave_application_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(leave_application_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = leave_application_dto_parseFromJSON(result); //nonprimitive
    }


    leave_application_dto_envelope_local_var = leave_application_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return leave_application_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        leave_application_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
