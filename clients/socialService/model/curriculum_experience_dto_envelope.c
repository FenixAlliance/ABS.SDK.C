#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "curriculum_experience_dto_envelope.h"



curriculum_experience_dto_envelope_t *curriculum_experience_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    curriculum_experience_dto_t *result
    ) {
    curriculum_experience_dto_envelope_t *curriculum_experience_dto_envelope_local_var = malloc(sizeof(curriculum_experience_dto_envelope_t));
    if (!curriculum_experience_dto_envelope_local_var) {
        return NULL;
    }
    curriculum_experience_dto_envelope_local_var->is_success = is_success;
    curriculum_experience_dto_envelope_local_var->error_message = error_message;
    curriculum_experience_dto_envelope_local_var->correlation_id = correlation_id;
    curriculum_experience_dto_envelope_local_var->timestamp = timestamp;
    curriculum_experience_dto_envelope_local_var->activity_id = activity_id;
    curriculum_experience_dto_envelope_local_var->result = result;

    return curriculum_experience_dto_envelope_local_var;
}


void curriculum_experience_dto_envelope_free(curriculum_experience_dto_envelope_t *curriculum_experience_dto_envelope) {
    if(NULL == curriculum_experience_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (curriculum_experience_dto_envelope->error_message) {
        free(curriculum_experience_dto_envelope->error_message);
        curriculum_experience_dto_envelope->error_message = NULL;
    }
    if (curriculum_experience_dto_envelope->correlation_id) {
        free(curriculum_experience_dto_envelope->correlation_id);
        curriculum_experience_dto_envelope->correlation_id = NULL;
    }
    if (curriculum_experience_dto_envelope->timestamp) {
        free(curriculum_experience_dto_envelope->timestamp);
        curriculum_experience_dto_envelope->timestamp = NULL;
    }
    if (curriculum_experience_dto_envelope->activity_id) {
        free(curriculum_experience_dto_envelope->activity_id);
        curriculum_experience_dto_envelope->activity_id = NULL;
    }
    if (curriculum_experience_dto_envelope->result) {
        curriculum_experience_dto_free(curriculum_experience_dto_envelope->result);
        curriculum_experience_dto_envelope->result = NULL;
    }
    free(curriculum_experience_dto_envelope);
}

cJSON *curriculum_experience_dto_envelope_convertToJSON(curriculum_experience_dto_envelope_t *curriculum_experience_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // curriculum_experience_dto_envelope->is_success
    if(curriculum_experience_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", curriculum_experience_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // curriculum_experience_dto_envelope->error_message
    if(curriculum_experience_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", curriculum_experience_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // curriculum_experience_dto_envelope->correlation_id
    if(curriculum_experience_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", curriculum_experience_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // curriculum_experience_dto_envelope->timestamp
    if(curriculum_experience_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", curriculum_experience_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // curriculum_experience_dto_envelope->activity_id
    if(curriculum_experience_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", curriculum_experience_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // curriculum_experience_dto_envelope->result
    if(curriculum_experience_dto_envelope->result) {
    cJSON *result_local_JSON = curriculum_experience_dto_convertToJSON(curriculum_experience_dto_envelope->result);
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

curriculum_experience_dto_envelope_t *curriculum_experience_dto_envelope_parseFromJSON(cJSON *curriculum_experience_dto_envelopeJSON){

    curriculum_experience_dto_envelope_t *curriculum_experience_dto_envelope_local_var = NULL;

    // define the local variable for curriculum_experience_dto_envelope->result
    curriculum_experience_dto_t *result_local_nonprim = NULL;

    // curriculum_experience_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(curriculum_experience_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // curriculum_experience_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(curriculum_experience_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // curriculum_experience_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(curriculum_experience_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // curriculum_experience_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(curriculum_experience_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // curriculum_experience_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(curriculum_experience_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // curriculum_experience_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(curriculum_experience_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = curriculum_experience_dto_parseFromJSON(result); //nonprimitive
    }


    curriculum_experience_dto_envelope_local_var = curriculum_experience_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return curriculum_experience_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        curriculum_experience_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
