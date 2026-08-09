#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "project_dto_envelope.h"



project_dto_envelope_t *project_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    int http_status,
    char *error_code,
    list_t* validation_details,
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
    project_dto_envelope_local_var->http_status = http_status;
    project_dto_envelope_local_var->error_code = error_code;
    project_dto_envelope_local_var->validation_details = validation_details;
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
    if (project_dto_envelope->error_code) {
        free(project_dto_envelope->error_code);
        project_dto_envelope->error_code = NULL;
    }
    if (project_dto_envelope->validation_details) {
        list_ForEach(listEntry, project_dto_envelope->validation_details) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(project_dto_envelope->validation_details);
        project_dto_envelope->validation_details = NULL;
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


    // project_dto_envelope->http_status
    if(project_dto_envelope->http_status) {
    if(cJSON_AddNumberToObject(item, "httpStatus", project_dto_envelope->http_status) == NULL) {
    goto fail; //Numeric
    }
    }


    // project_dto_envelope->error_code
    if(project_dto_envelope->error_code) {
    if(cJSON_AddStringToObject(item, "errorCode", project_dto_envelope->error_code) == NULL) {
    goto fail; //String
    }
    }


    // project_dto_envelope->validation_details
    if(project_dto_envelope->validation_details) {
    cJSON *validation_details = cJSON_AddObjectToObject(item, "validationDetails");
    if(validation_details == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = validation_details;
    listEntry_t *validation_detailsListEntry;
    if (project_dto_envelope->validation_details) {
    list_ForEach(validation_detailsListEntry, project_dto_envelope->validation_details) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)validation_detailsListEntry->data;
    }
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

    // define the local map for project_dto_envelope->validation_details
    list_t *validation_detailsList = NULL;

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

    // project_dto_envelope->http_status
    cJSON *http_status = cJSON_GetObjectItemCaseSensitive(project_dto_envelopeJSON, "httpStatus");
    if (http_status) { 
    if(!cJSON_IsNumber(http_status))
    {
    goto end; //Numeric
    }
    }

    // project_dto_envelope->error_code
    cJSON *error_code = cJSON_GetObjectItemCaseSensitive(project_dto_envelopeJSON, "errorCode");
    if (error_code) { 
    if(!cJSON_IsString(error_code) && !cJSON_IsNull(error_code))
    {
    goto end; //String
    }
    }

    // project_dto_envelope->validation_details
    cJSON *validation_details = cJSON_GetObjectItemCaseSensitive(project_dto_envelopeJSON, "validationDetails");
    if (validation_details) { 
    cJSON *validation_details_local_map = NULL;
    if(!cJSON_IsObject(validation_details) && !cJSON_IsNull(validation_details))
    {
        goto end;//primitive map container
    }
    if(cJSON_IsObject(validation_details))
    {
        validation_detailsList = list_createList();
        keyValuePair_t *localMapKeyPair;
        cJSON_ArrayForEach(validation_details_local_map, validation_details)
        {
            cJSON *localMapObject = validation_details_local_map;
            list_addElement(validation_detailsList , localMapKeyPair);
        }
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
        http_status ? http_status->valuedouble : 0,
        error_code && !cJSON_IsNull(error_code) ? strdup(error_code->valuestring) : NULL,
        validation_details ? validation_detailsList : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return project_dto_envelope_local_var;
end:
    if (validation_detailsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, validation_detailsList) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free(localKeyValue->key);
            localKeyValue->key = NULL;
            keyValuePair_free(localKeyValue);
            localKeyValue = NULL;
        }
        list_freeList(validation_detailsList);
        validation_detailsList = NULL;
    }
    if (result_local_nonprim) {
        project_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
