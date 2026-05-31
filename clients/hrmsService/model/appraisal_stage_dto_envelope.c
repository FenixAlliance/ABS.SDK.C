#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "appraisal_stage_dto_envelope.h"



appraisal_stage_dto_envelope_t *appraisal_stage_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    appraisal_stage_dto_t *result
    ) {
    appraisal_stage_dto_envelope_t *appraisal_stage_dto_envelope_local_var = malloc(sizeof(appraisal_stage_dto_envelope_t));
    if (!appraisal_stage_dto_envelope_local_var) {
        return NULL;
    }
    appraisal_stage_dto_envelope_local_var->is_success = is_success;
    appraisal_stage_dto_envelope_local_var->error_message = error_message;
    appraisal_stage_dto_envelope_local_var->correlation_id = correlation_id;
    appraisal_stage_dto_envelope_local_var->timestamp = timestamp;
    appraisal_stage_dto_envelope_local_var->activity_id = activity_id;
    appraisal_stage_dto_envelope_local_var->result = result;

    return appraisal_stage_dto_envelope_local_var;
}


void appraisal_stage_dto_envelope_free(appraisal_stage_dto_envelope_t *appraisal_stage_dto_envelope) {
    if(NULL == appraisal_stage_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (appraisal_stage_dto_envelope->error_message) {
        free(appraisal_stage_dto_envelope->error_message);
        appraisal_stage_dto_envelope->error_message = NULL;
    }
    if (appraisal_stage_dto_envelope->correlation_id) {
        free(appraisal_stage_dto_envelope->correlation_id);
        appraisal_stage_dto_envelope->correlation_id = NULL;
    }
    if (appraisal_stage_dto_envelope->timestamp) {
        free(appraisal_stage_dto_envelope->timestamp);
        appraisal_stage_dto_envelope->timestamp = NULL;
    }
    if (appraisal_stage_dto_envelope->activity_id) {
        free(appraisal_stage_dto_envelope->activity_id);
        appraisal_stage_dto_envelope->activity_id = NULL;
    }
    if (appraisal_stage_dto_envelope->result) {
        appraisal_stage_dto_free(appraisal_stage_dto_envelope->result);
        appraisal_stage_dto_envelope->result = NULL;
    }
    free(appraisal_stage_dto_envelope);
}

cJSON *appraisal_stage_dto_envelope_convertToJSON(appraisal_stage_dto_envelope_t *appraisal_stage_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // appraisal_stage_dto_envelope->is_success
    if(appraisal_stage_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", appraisal_stage_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // appraisal_stage_dto_envelope->error_message
    if(appraisal_stage_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", appraisal_stage_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // appraisal_stage_dto_envelope->correlation_id
    if(appraisal_stage_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", appraisal_stage_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // appraisal_stage_dto_envelope->timestamp
    if(appraisal_stage_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", appraisal_stage_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // appraisal_stage_dto_envelope->activity_id
    if(appraisal_stage_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", appraisal_stage_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // appraisal_stage_dto_envelope->result
    if(appraisal_stage_dto_envelope->result) {
    cJSON *result_local_JSON = appraisal_stage_dto_convertToJSON(appraisal_stage_dto_envelope->result);
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

appraisal_stage_dto_envelope_t *appraisal_stage_dto_envelope_parseFromJSON(cJSON *appraisal_stage_dto_envelopeJSON){

    appraisal_stage_dto_envelope_t *appraisal_stage_dto_envelope_local_var = NULL;

    // define the local variable for appraisal_stage_dto_envelope->result
    appraisal_stage_dto_t *result_local_nonprim = NULL;

    // appraisal_stage_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(appraisal_stage_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // appraisal_stage_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(appraisal_stage_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // appraisal_stage_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(appraisal_stage_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // appraisal_stage_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(appraisal_stage_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // appraisal_stage_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(appraisal_stage_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // appraisal_stage_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(appraisal_stage_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = appraisal_stage_dto_parseFromJSON(result); //nonprimitive
    }


    appraisal_stage_dto_envelope_local_var = appraisal_stage_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return appraisal_stage_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        appraisal_stage_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
