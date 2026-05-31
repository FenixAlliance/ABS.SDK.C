#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "salary_dto_envelope.h"



salary_dto_envelope_t *salary_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    salary_dto_t *result
    ) {
    salary_dto_envelope_t *salary_dto_envelope_local_var = malloc(sizeof(salary_dto_envelope_t));
    if (!salary_dto_envelope_local_var) {
        return NULL;
    }
    salary_dto_envelope_local_var->is_success = is_success;
    salary_dto_envelope_local_var->error_message = error_message;
    salary_dto_envelope_local_var->correlation_id = correlation_id;
    salary_dto_envelope_local_var->timestamp = timestamp;
    salary_dto_envelope_local_var->activity_id = activity_id;
    salary_dto_envelope_local_var->result = result;

    return salary_dto_envelope_local_var;
}


void salary_dto_envelope_free(salary_dto_envelope_t *salary_dto_envelope) {
    if(NULL == salary_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (salary_dto_envelope->error_message) {
        free(salary_dto_envelope->error_message);
        salary_dto_envelope->error_message = NULL;
    }
    if (salary_dto_envelope->correlation_id) {
        free(salary_dto_envelope->correlation_id);
        salary_dto_envelope->correlation_id = NULL;
    }
    if (salary_dto_envelope->timestamp) {
        free(salary_dto_envelope->timestamp);
        salary_dto_envelope->timestamp = NULL;
    }
    if (salary_dto_envelope->activity_id) {
        free(salary_dto_envelope->activity_id);
        salary_dto_envelope->activity_id = NULL;
    }
    if (salary_dto_envelope->result) {
        salary_dto_free(salary_dto_envelope->result);
        salary_dto_envelope->result = NULL;
    }
    free(salary_dto_envelope);
}

cJSON *salary_dto_envelope_convertToJSON(salary_dto_envelope_t *salary_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // salary_dto_envelope->is_success
    if(salary_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", salary_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // salary_dto_envelope->error_message
    if(salary_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", salary_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // salary_dto_envelope->correlation_id
    if(salary_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", salary_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // salary_dto_envelope->timestamp
    if(salary_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", salary_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // salary_dto_envelope->activity_id
    if(salary_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", salary_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // salary_dto_envelope->result
    if(salary_dto_envelope->result) {
    cJSON *result_local_JSON = salary_dto_convertToJSON(salary_dto_envelope->result);
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

salary_dto_envelope_t *salary_dto_envelope_parseFromJSON(cJSON *salary_dto_envelopeJSON){

    salary_dto_envelope_t *salary_dto_envelope_local_var = NULL;

    // define the local variable for salary_dto_envelope->result
    salary_dto_t *result_local_nonprim = NULL;

    // salary_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(salary_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // salary_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(salary_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // salary_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(salary_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // salary_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(salary_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // salary_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(salary_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // salary_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(salary_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = salary_dto_parseFromJSON(result); //nonprimitive
    }


    salary_dto_envelope_local_var = salary_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return salary_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        salary_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
