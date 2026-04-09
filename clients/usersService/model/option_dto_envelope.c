#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "option_dto_envelope.h"



option_dto_envelope_t *option_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    option_dto_t *result
    ) {
    option_dto_envelope_t *option_dto_envelope_local_var = malloc(sizeof(option_dto_envelope_t));
    if (!option_dto_envelope_local_var) {
        return NULL;
    }
    option_dto_envelope_local_var->is_success = is_success;
    option_dto_envelope_local_var->error_message = error_message;
    option_dto_envelope_local_var->correlation_id = correlation_id;
    option_dto_envelope_local_var->timestamp = timestamp;
    option_dto_envelope_local_var->activity_id = activity_id;
    option_dto_envelope_local_var->result = result;

    return option_dto_envelope_local_var;
}


void option_dto_envelope_free(option_dto_envelope_t *option_dto_envelope) {
    if(NULL == option_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (option_dto_envelope->error_message) {
        free(option_dto_envelope->error_message);
        option_dto_envelope->error_message = NULL;
    }
    if (option_dto_envelope->correlation_id) {
        free(option_dto_envelope->correlation_id);
        option_dto_envelope->correlation_id = NULL;
    }
    if (option_dto_envelope->timestamp) {
        free(option_dto_envelope->timestamp);
        option_dto_envelope->timestamp = NULL;
    }
    if (option_dto_envelope->activity_id) {
        free(option_dto_envelope->activity_id);
        option_dto_envelope->activity_id = NULL;
    }
    if (option_dto_envelope->result) {
        option_dto_free(option_dto_envelope->result);
        option_dto_envelope->result = NULL;
    }
    free(option_dto_envelope);
}

cJSON *option_dto_envelope_convertToJSON(option_dto_envelope_t *option_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // option_dto_envelope->is_success
    if(option_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", option_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // option_dto_envelope->error_message
    if(option_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", option_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // option_dto_envelope->correlation_id
    if(option_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", option_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // option_dto_envelope->timestamp
    if(option_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", option_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // option_dto_envelope->activity_id
    if(option_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", option_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // option_dto_envelope->result
    if(option_dto_envelope->result) {
    cJSON *result_local_JSON = option_dto_convertToJSON(option_dto_envelope->result);
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

option_dto_envelope_t *option_dto_envelope_parseFromJSON(cJSON *option_dto_envelopeJSON){

    option_dto_envelope_t *option_dto_envelope_local_var = NULL;

    // define the local variable for option_dto_envelope->result
    option_dto_t *result_local_nonprim = NULL;

    // option_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(option_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // option_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(option_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // option_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(option_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // option_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(option_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // option_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(option_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // option_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(option_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = option_dto_parseFromJSON(result); //nonprimitive
    }


    option_dto_envelope_local_var = option_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return option_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        option_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
