#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "file_upload_dto_envelope.h"



file_upload_dto_envelope_t *file_upload_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    file_upload_dto_t *result
    ) {
    file_upload_dto_envelope_t *file_upload_dto_envelope_local_var = malloc(sizeof(file_upload_dto_envelope_t));
    if (!file_upload_dto_envelope_local_var) {
        return NULL;
    }
    file_upload_dto_envelope_local_var->is_success = is_success;
    file_upload_dto_envelope_local_var->error_message = error_message;
    file_upload_dto_envelope_local_var->correlation_id = correlation_id;
    file_upload_dto_envelope_local_var->timestamp = timestamp;
    file_upload_dto_envelope_local_var->activity_id = activity_id;
    file_upload_dto_envelope_local_var->result = result;

    return file_upload_dto_envelope_local_var;
}


void file_upload_dto_envelope_free(file_upload_dto_envelope_t *file_upload_dto_envelope) {
    if(NULL == file_upload_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (file_upload_dto_envelope->error_message) {
        free(file_upload_dto_envelope->error_message);
        file_upload_dto_envelope->error_message = NULL;
    }
    if (file_upload_dto_envelope->correlation_id) {
        free(file_upload_dto_envelope->correlation_id);
        file_upload_dto_envelope->correlation_id = NULL;
    }
    if (file_upload_dto_envelope->timestamp) {
        free(file_upload_dto_envelope->timestamp);
        file_upload_dto_envelope->timestamp = NULL;
    }
    if (file_upload_dto_envelope->activity_id) {
        free(file_upload_dto_envelope->activity_id);
        file_upload_dto_envelope->activity_id = NULL;
    }
    if (file_upload_dto_envelope->result) {
        file_upload_dto_free(file_upload_dto_envelope->result);
        file_upload_dto_envelope->result = NULL;
    }
    free(file_upload_dto_envelope);
}

cJSON *file_upload_dto_envelope_convertToJSON(file_upload_dto_envelope_t *file_upload_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // file_upload_dto_envelope->is_success
    if(file_upload_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", file_upload_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // file_upload_dto_envelope->error_message
    if(file_upload_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", file_upload_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // file_upload_dto_envelope->correlation_id
    if(file_upload_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", file_upload_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // file_upload_dto_envelope->timestamp
    if(file_upload_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", file_upload_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // file_upload_dto_envelope->activity_id
    if(file_upload_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", file_upload_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // file_upload_dto_envelope->result
    if(file_upload_dto_envelope->result) {
    cJSON *result_local_JSON = file_upload_dto_convertToJSON(file_upload_dto_envelope->result);
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

file_upload_dto_envelope_t *file_upload_dto_envelope_parseFromJSON(cJSON *file_upload_dto_envelopeJSON){

    file_upload_dto_envelope_t *file_upload_dto_envelope_local_var = NULL;

    // define the local variable for file_upload_dto_envelope->result
    file_upload_dto_t *result_local_nonprim = NULL;

    // file_upload_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(file_upload_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // file_upload_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(file_upload_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // file_upload_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(file_upload_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // file_upload_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(file_upload_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // file_upload_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(file_upload_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // file_upload_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(file_upload_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = file_upload_dto_parseFromJSON(result); //nonprimitive
    }


    file_upload_dto_envelope_local_var = file_upload_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return file_upload_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        file_upload_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
