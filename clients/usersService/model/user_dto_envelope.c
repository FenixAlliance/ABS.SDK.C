#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "user_dto_envelope.h"



user_dto_envelope_t *user_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    user_dto_t *result
    ) {
    user_dto_envelope_t *user_dto_envelope_local_var = malloc(sizeof(user_dto_envelope_t));
    if (!user_dto_envelope_local_var) {
        return NULL;
    }
    user_dto_envelope_local_var->is_success = is_success;
    user_dto_envelope_local_var->error_message = error_message;
    user_dto_envelope_local_var->correlation_id = correlation_id;
    user_dto_envelope_local_var->timestamp = timestamp;
    user_dto_envelope_local_var->activity_id = activity_id;
    user_dto_envelope_local_var->result = result;

    return user_dto_envelope_local_var;
}


void user_dto_envelope_free(user_dto_envelope_t *user_dto_envelope) {
    if(NULL == user_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (user_dto_envelope->error_message) {
        free(user_dto_envelope->error_message);
        user_dto_envelope->error_message = NULL;
    }
    if (user_dto_envelope->correlation_id) {
        free(user_dto_envelope->correlation_id);
        user_dto_envelope->correlation_id = NULL;
    }
    if (user_dto_envelope->timestamp) {
        free(user_dto_envelope->timestamp);
        user_dto_envelope->timestamp = NULL;
    }
    if (user_dto_envelope->activity_id) {
        free(user_dto_envelope->activity_id);
        user_dto_envelope->activity_id = NULL;
    }
    if (user_dto_envelope->result) {
        user_dto_free(user_dto_envelope->result);
        user_dto_envelope->result = NULL;
    }
    free(user_dto_envelope);
}

cJSON *user_dto_envelope_convertToJSON(user_dto_envelope_t *user_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // user_dto_envelope->is_success
    if(user_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", user_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // user_dto_envelope->error_message
    if(user_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", user_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // user_dto_envelope->correlation_id
    if(user_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", user_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // user_dto_envelope->timestamp
    if(user_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", user_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // user_dto_envelope->activity_id
    if(user_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", user_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // user_dto_envelope->result
    if(user_dto_envelope->result) {
    cJSON *result_local_JSON = user_dto_convertToJSON(user_dto_envelope->result);
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

user_dto_envelope_t *user_dto_envelope_parseFromJSON(cJSON *user_dto_envelopeJSON){

    user_dto_envelope_t *user_dto_envelope_local_var = NULL;

    // define the local variable for user_dto_envelope->result
    user_dto_t *result_local_nonprim = NULL;

    // user_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(user_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // user_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(user_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // user_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(user_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // user_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(user_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // user_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(user_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // user_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(user_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = user_dto_parseFromJSON(result); //nonprimitive
    }


    user_dto_envelope_local_var = user_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return user_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        user_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
