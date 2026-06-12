#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "localization_string_dto_envelope.h"



localization_string_dto_envelope_t *localization_string_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    localization_string_dto_t *result
    ) {
    localization_string_dto_envelope_t *localization_string_dto_envelope_local_var = malloc(sizeof(localization_string_dto_envelope_t));
    if (!localization_string_dto_envelope_local_var) {
        return NULL;
    }
    localization_string_dto_envelope_local_var->is_success = is_success;
    localization_string_dto_envelope_local_var->error_message = error_message;
    localization_string_dto_envelope_local_var->correlation_id = correlation_id;
    localization_string_dto_envelope_local_var->timestamp = timestamp;
    localization_string_dto_envelope_local_var->activity_id = activity_id;
    localization_string_dto_envelope_local_var->result = result;

    return localization_string_dto_envelope_local_var;
}


void localization_string_dto_envelope_free(localization_string_dto_envelope_t *localization_string_dto_envelope) {
    if(NULL == localization_string_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (localization_string_dto_envelope->error_message) {
        free(localization_string_dto_envelope->error_message);
        localization_string_dto_envelope->error_message = NULL;
    }
    if (localization_string_dto_envelope->correlation_id) {
        free(localization_string_dto_envelope->correlation_id);
        localization_string_dto_envelope->correlation_id = NULL;
    }
    if (localization_string_dto_envelope->timestamp) {
        free(localization_string_dto_envelope->timestamp);
        localization_string_dto_envelope->timestamp = NULL;
    }
    if (localization_string_dto_envelope->activity_id) {
        free(localization_string_dto_envelope->activity_id);
        localization_string_dto_envelope->activity_id = NULL;
    }
    if (localization_string_dto_envelope->result) {
        localization_string_dto_free(localization_string_dto_envelope->result);
        localization_string_dto_envelope->result = NULL;
    }
    free(localization_string_dto_envelope);
}

cJSON *localization_string_dto_envelope_convertToJSON(localization_string_dto_envelope_t *localization_string_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // localization_string_dto_envelope->is_success
    if(localization_string_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", localization_string_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // localization_string_dto_envelope->error_message
    if(localization_string_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", localization_string_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // localization_string_dto_envelope->correlation_id
    if(localization_string_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", localization_string_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // localization_string_dto_envelope->timestamp
    if(localization_string_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", localization_string_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // localization_string_dto_envelope->activity_id
    if(localization_string_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", localization_string_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // localization_string_dto_envelope->result
    if(localization_string_dto_envelope->result) {
    cJSON *result_local_JSON = localization_string_dto_convertToJSON(localization_string_dto_envelope->result);
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

localization_string_dto_envelope_t *localization_string_dto_envelope_parseFromJSON(cJSON *localization_string_dto_envelopeJSON){

    localization_string_dto_envelope_t *localization_string_dto_envelope_local_var = NULL;

    // define the local variable for localization_string_dto_envelope->result
    localization_string_dto_t *result_local_nonprim = NULL;

    // localization_string_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(localization_string_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // localization_string_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(localization_string_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // localization_string_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(localization_string_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // localization_string_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(localization_string_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // localization_string_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(localization_string_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // localization_string_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(localization_string_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = localization_string_dto_parseFromJSON(result); //nonprimitive
    }


    localization_string_dto_envelope_local_var = localization_string_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return localization_string_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        localization_string_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
