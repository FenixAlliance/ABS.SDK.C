#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "blob_envelope.h"



blob_envelope_t *blob_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    blob_t *result
    ) {
    blob_envelope_t *blob_envelope_local_var = malloc(sizeof(blob_envelope_t));
    if (!blob_envelope_local_var) {
        return NULL;
    }
    blob_envelope_local_var->is_success = is_success;
    blob_envelope_local_var->error_message = error_message;
    blob_envelope_local_var->correlation_id = correlation_id;
    blob_envelope_local_var->timestamp = timestamp;
    blob_envelope_local_var->activity_id = activity_id;
    blob_envelope_local_var->result = result;

    return blob_envelope_local_var;
}


void blob_envelope_free(blob_envelope_t *blob_envelope) {
    if(NULL == blob_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (blob_envelope->error_message) {
        free(blob_envelope->error_message);
        blob_envelope->error_message = NULL;
    }
    if (blob_envelope->correlation_id) {
        free(blob_envelope->correlation_id);
        blob_envelope->correlation_id = NULL;
    }
    if (blob_envelope->timestamp) {
        free(blob_envelope->timestamp);
        blob_envelope->timestamp = NULL;
    }
    if (blob_envelope->activity_id) {
        free(blob_envelope->activity_id);
        blob_envelope->activity_id = NULL;
    }
    if (blob_envelope->result) {
        blob_free(blob_envelope->result);
        blob_envelope->result = NULL;
    }
    free(blob_envelope);
}

cJSON *blob_envelope_convertToJSON(blob_envelope_t *blob_envelope) {
    cJSON *item = cJSON_CreateObject();

    // blob_envelope->is_success
    if(blob_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", blob_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // blob_envelope->error_message
    if(blob_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", blob_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // blob_envelope->correlation_id
    if(blob_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", blob_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // blob_envelope->timestamp
    if(blob_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", blob_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // blob_envelope->activity_id
    if(blob_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", blob_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // blob_envelope->result
    if(blob_envelope->result) {
    cJSON *result_local_JSON = blob_convertToJSON(blob_envelope->result);
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

blob_envelope_t *blob_envelope_parseFromJSON(cJSON *blob_envelopeJSON){

    blob_envelope_t *blob_envelope_local_var = NULL;

    // define the local variable for blob_envelope->result
    blob_t *result_local_nonprim = NULL;

    // blob_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(blob_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // blob_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(blob_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // blob_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(blob_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // blob_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(blob_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // blob_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(blob_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // blob_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(blob_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = blob_parseFromJSON(result); //nonprimitive
    }


    blob_envelope_local_var = blob_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return blob_envelope_local_var;
end:
    if (result_local_nonprim) {
        blob_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
