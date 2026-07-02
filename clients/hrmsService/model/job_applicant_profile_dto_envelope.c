#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "job_applicant_profile_dto_envelope.h"



job_applicant_profile_dto_envelope_t *job_applicant_profile_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    job_applicant_profile_dto_t *result
    ) {
    job_applicant_profile_dto_envelope_t *job_applicant_profile_dto_envelope_local_var = malloc(sizeof(job_applicant_profile_dto_envelope_t));
    if (!job_applicant_profile_dto_envelope_local_var) {
        return NULL;
    }
    job_applicant_profile_dto_envelope_local_var->is_success = is_success;
    job_applicant_profile_dto_envelope_local_var->error_message = error_message;
    job_applicant_profile_dto_envelope_local_var->correlation_id = correlation_id;
    job_applicant_profile_dto_envelope_local_var->timestamp = timestamp;
    job_applicant_profile_dto_envelope_local_var->activity_id = activity_id;
    job_applicant_profile_dto_envelope_local_var->result = result;

    return job_applicant_profile_dto_envelope_local_var;
}


void job_applicant_profile_dto_envelope_free(job_applicant_profile_dto_envelope_t *job_applicant_profile_dto_envelope) {
    if(NULL == job_applicant_profile_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (job_applicant_profile_dto_envelope->error_message) {
        free(job_applicant_profile_dto_envelope->error_message);
        job_applicant_profile_dto_envelope->error_message = NULL;
    }
    if (job_applicant_profile_dto_envelope->correlation_id) {
        free(job_applicant_profile_dto_envelope->correlation_id);
        job_applicant_profile_dto_envelope->correlation_id = NULL;
    }
    if (job_applicant_profile_dto_envelope->timestamp) {
        free(job_applicant_profile_dto_envelope->timestamp);
        job_applicant_profile_dto_envelope->timestamp = NULL;
    }
    if (job_applicant_profile_dto_envelope->activity_id) {
        free(job_applicant_profile_dto_envelope->activity_id);
        job_applicant_profile_dto_envelope->activity_id = NULL;
    }
    if (job_applicant_profile_dto_envelope->result) {
        job_applicant_profile_dto_free(job_applicant_profile_dto_envelope->result);
        job_applicant_profile_dto_envelope->result = NULL;
    }
    free(job_applicant_profile_dto_envelope);
}

cJSON *job_applicant_profile_dto_envelope_convertToJSON(job_applicant_profile_dto_envelope_t *job_applicant_profile_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // job_applicant_profile_dto_envelope->is_success
    if(job_applicant_profile_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", job_applicant_profile_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // job_applicant_profile_dto_envelope->error_message
    if(job_applicant_profile_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", job_applicant_profile_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // job_applicant_profile_dto_envelope->correlation_id
    if(job_applicant_profile_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", job_applicant_profile_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // job_applicant_profile_dto_envelope->timestamp
    if(job_applicant_profile_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", job_applicant_profile_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // job_applicant_profile_dto_envelope->activity_id
    if(job_applicant_profile_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", job_applicant_profile_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // job_applicant_profile_dto_envelope->result
    if(job_applicant_profile_dto_envelope->result) {
    cJSON *result_local_JSON = job_applicant_profile_dto_convertToJSON(job_applicant_profile_dto_envelope->result);
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

job_applicant_profile_dto_envelope_t *job_applicant_profile_dto_envelope_parseFromJSON(cJSON *job_applicant_profile_dto_envelopeJSON){

    job_applicant_profile_dto_envelope_t *job_applicant_profile_dto_envelope_local_var = NULL;

    // define the local variable for job_applicant_profile_dto_envelope->result
    job_applicant_profile_dto_t *result_local_nonprim = NULL;

    // job_applicant_profile_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(job_applicant_profile_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // job_applicant_profile_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(job_applicant_profile_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // job_applicant_profile_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(job_applicant_profile_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // job_applicant_profile_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(job_applicant_profile_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // job_applicant_profile_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(job_applicant_profile_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // job_applicant_profile_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(job_applicant_profile_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = job_applicant_profile_dto_parseFromJSON(result); //nonprimitive
    }


    job_applicant_profile_dto_envelope_local_var = job_applicant_profile_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return job_applicant_profile_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        job_applicant_profile_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
