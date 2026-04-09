#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "project_dto_envelope.h"



project_dto_envelope_t *project_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    project_dto_t *result
    ) {
    project_dto_envelope_t *project_dto_envelope_local_var = malloc(sizeof(project_dto_envelope_t));
    if (!project_dto_envelope_local_var) {
        return NULL;
    }
    project_dto_envelope_local_var->is_success = is_success;
    project_dto_envelope_local_var->error_message = error_message;
    project_dto_envelope_local_var->correlation_id = correlation_id;
    project_dto_envelope_local_var->timestamp = timestamp;
    project_dto_envelope_local_var->activity_id = activity_id;
    project_dto_envelope_local_var->result = result;

    return project_dto_envelope_local_var;
}


void project_dto_envelope_free(project_dto_envelope_t *project_dto_envelope) {
    if(NULL == project_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (project_dto_envelope->error_message) {
        free(project_dto_envelope->error_message);
        project_dto_envelope->error_message = NULL;
    }
    if (project_dto_envelope->correlation_id) {
        free(project_dto_envelope->correlation_id);
        project_dto_envelope->correlation_id = NULL;
    }
    if (project_dto_envelope->timestamp) {
        free(project_dto_envelope->timestamp);
        project_dto_envelope->timestamp = NULL;
    }
    if (project_dto_envelope->activity_id) {
        free(project_dto_envelope->activity_id);
        project_dto_envelope->activity_id = NULL;
    }
    if (project_dto_envelope->result) {
        project_dto_free(project_dto_envelope->result);
        project_dto_envelope->result = NULL;
    }
    free(project_dto_envelope);
}

cJSON *project_dto_envelope_convertToJSON(project_dto_envelope_t *project_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // project_dto_envelope->is_success
    if(project_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", project_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // project_dto_envelope->error_message
    if(project_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", project_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // project_dto_envelope->correlation_id
    if(project_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", project_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // project_dto_envelope->timestamp
    if(project_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", project_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // project_dto_envelope->activity_id
    if(project_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", project_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // project_dto_envelope->result
    if(project_dto_envelope->result) {
    cJSON *result_local_JSON = project_dto_convertToJSON(project_dto_envelope->result);
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

project_dto_envelope_t *project_dto_envelope_parseFromJSON(cJSON *project_dto_envelopeJSON){

    project_dto_envelope_t *project_dto_envelope_local_var = NULL;

    // define the local variable for project_dto_envelope->result
    project_dto_t *result_local_nonprim = NULL;

    // project_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(project_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // project_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(project_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // project_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(project_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // project_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(project_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // project_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(project_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // project_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(project_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = project_dto_parseFromJSON(result); //nonprimitive
    }


    project_dto_envelope_local_var = project_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return project_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        project_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
