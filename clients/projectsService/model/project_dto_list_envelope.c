#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "project_dto_list_envelope.h"



project_dto_list_envelope_t *project_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    project_dto_list_envelope_t *project_dto_list_envelope_local_var = malloc(sizeof(project_dto_list_envelope_t));
    if (!project_dto_list_envelope_local_var) {
        return NULL;
    }
    project_dto_list_envelope_local_var->is_success = is_success;
    project_dto_list_envelope_local_var->error_message = error_message;
    project_dto_list_envelope_local_var->correlation_id = correlation_id;
    project_dto_list_envelope_local_var->timestamp = timestamp;
    project_dto_list_envelope_local_var->activity_id = activity_id;
    project_dto_list_envelope_local_var->result = result;

    return project_dto_list_envelope_local_var;
}


void project_dto_list_envelope_free(project_dto_list_envelope_t *project_dto_list_envelope) {
    if(NULL == project_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (project_dto_list_envelope->error_message) {
        free(project_dto_list_envelope->error_message);
        project_dto_list_envelope->error_message = NULL;
    }
    if (project_dto_list_envelope->correlation_id) {
        free(project_dto_list_envelope->correlation_id);
        project_dto_list_envelope->correlation_id = NULL;
    }
    if (project_dto_list_envelope->timestamp) {
        free(project_dto_list_envelope->timestamp);
        project_dto_list_envelope->timestamp = NULL;
    }
    if (project_dto_list_envelope->activity_id) {
        free(project_dto_list_envelope->activity_id);
        project_dto_list_envelope->activity_id = NULL;
    }
    if (project_dto_list_envelope->result) {
        list_ForEach(listEntry, project_dto_list_envelope->result) {
            project_dto_free(listEntry->data);
        }
        list_freeList(project_dto_list_envelope->result);
        project_dto_list_envelope->result = NULL;
    }
    free(project_dto_list_envelope);
}

cJSON *project_dto_list_envelope_convertToJSON(project_dto_list_envelope_t *project_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // project_dto_list_envelope->is_success
    if(project_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", project_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // project_dto_list_envelope->error_message
    if(project_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", project_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // project_dto_list_envelope->correlation_id
    if(project_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", project_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // project_dto_list_envelope->timestamp
    if(project_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", project_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // project_dto_list_envelope->activity_id
    if(project_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", project_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // project_dto_list_envelope->result
    if(project_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (project_dto_list_envelope->result) {
    list_ForEach(resultListEntry, project_dto_list_envelope->result) {
    cJSON *itemLocal = project_dto_convertToJSON(resultListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(result, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

project_dto_list_envelope_t *project_dto_list_envelope_parseFromJSON(cJSON *project_dto_list_envelopeJSON){

    project_dto_list_envelope_t *project_dto_list_envelope_local_var = NULL;

    // define the local list for project_dto_list_envelope->result
    list_t *resultList = NULL;

    // project_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(project_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // project_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(project_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // project_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(project_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // project_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(project_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // project_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(project_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // project_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(project_dto_list_envelopeJSON, "result");
    if (result) { 
    cJSON *result_local_nonprimitive = NULL;
    if(!cJSON_IsArray(result)){
        goto end; //nonprimitive container
    }

    resultList = list_createList();

    cJSON_ArrayForEach(result_local_nonprimitive,result )
    {
        if(!cJSON_IsObject(result_local_nonprimitive)){
            goto end;
        }
        project_dto_t *resultItem = project_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    project_dto_list_envelope_local_var = project_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return project_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            project_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
