#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "trust_artifact_reference_dto_envelope.h"



trust_artifact_reference_dto_envelope_t *trust_artifact_reference_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    trust_artifact_reference_dto_t *result
    ) {
    trust_artifact_reference_dto_envelope_t *trust_artifact_reference_dto_envelope_local_var = malloc(sizeof(trust_artifact_reference_dto_envelope_t));
    if (!trust_artifact_reference_dto_envelope_local_var) {
        return NULL;
    }
    trust_artifact_reference_dto_envelope_local_var->is_success = is_success;
    trust_artifact_reference_dto_envelope_local_var->error_message = error_message;
    trust_artifact_reference_dto_envelope_local_var->correlation_id = correlation_id;
    trust_artifact_reference_dto_envelope_local_var->timestamp = timestamp;
    trust_artifact_reference_dto_envelope_local_var->activity_id = activity_id;
    trust_artifact_reference_dto_envelope_local_var->result = result;

    return trust_artifact_reference_dto_envelope_local_var;
}


void trust_artifact_reference_dto_envelope_free(trust_artifact_reference_dto_envelope_t *trust_artifact_reference_dto_envelope) {
    if(NULL == trust_artifact_reference_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (trust_artifact_reference_dto_envelope->error_message) {
        free(trust_artifact_reference_dto_envelope->error_message);
        trust_artifact_reference_dto_envelope->error_message = NULL;
    }
    if (trust_artifact_reference_dto_envelope->correlation_id) {
        free(trust_artifact_reference_dto_envelope->correlation_id);
        trust_artifact_reference_dto_envelope->correlation_id = NULL;
    }
    if (trust_artifact_reference_dto_envelope->timestamp) {
        free(trust_artifact_reference_dto_envelope->timestamp);
        trust_artifact_reference_dto_envelope->timestamp = NULL;
    }
    if (trust_artifact_reference_dto_envelope->activity_id) {
        free(trust_artifact_reference_dto_envelope->activity_id);
        trust_artifact_reference_dto_envelope->activity_id = NULL;
    }
    if (trust_artifact_reference_dto_envelope->result) {
        trust_artifact_reference_dto_free(trust_artifact_reference_dto_envelope->result);
        trust_artifact_reference_dto_envelope->result = NULL;
    }
    free(trust_artifact_reference_dto_envelope);
}

cJSON *trust_artifact_reference_dto_envelope_convertToJSON(trust_artifact_reference_dto_envelope_t *trust_artifact_reference_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // trust_artifact_reference_dto_envelope->is_success
    if(trust_artifact_reference_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", trust_artifact_reference_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // trust_artifact_reference_dto_envelope->error_message
    if(trust_artifact_reference_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", trust_artifact_reference_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // trust_artifact_reference_dto_envelope->correlation_id
    if(trust_artifact_reference_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", trust_artifact_reference_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // trust_artifact_reference_dto_envelope->timestamp
    if(trust_artifact_reference_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", trust_artifact_reference_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // trust_artifact_reference_dto_envelope->activity_id
    if(trust_artifact_reference_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", trust_artifact_reference_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // trust_artifact_reference_dto_envelope->result
    if(trust_artifact_reference_dto_envelope->result) {
    cJSON *result_local_JSON = trust_artifact_reference_dto_convertToJSON(trust_artifact_reference_dto_envelope->result);
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

trust_artifact_reference_dto_envelope_t *trust_artifact_reference_dto_envelope_parseFromJSON(cJSON *trust_artifact_reference_dto_envelopeJSON){

    trust_artifact_reference_dto_envelope_t *trust_artifact_reference_dto_envelope_local_var = NULL;

    // define the local variable for trust_artifact_reference_dto_envelope->result
    trust_artifact_reference_dto_t *result_local_nonprim = NULL;

    // trust_artifact_reference_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(trust_artifact_reference_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // trust_artifact_reference_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(trust_artifact_reference_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // trust_artifact_reference_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(trust_artifact_reference_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // trust_artifact_reference_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(trust_artifact_reference_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // trust_artifact_reference_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(trust_artifact_reference_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // trust_artifact_reference_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(trust_artifact_reference_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = trust_artifact_reference_dto_parseFromJSON(result); //nonprimitive
    }


    trust_artifact_reference_dto_envelope_local_var = trust_artifact_reference_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return trust_artifact_reference_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        trust_artifact_reference_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
