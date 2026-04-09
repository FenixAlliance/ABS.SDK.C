#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "task_category_dto_list_envelope.h"



task_category_dto_list_envelope_t *task_category_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    task_category_dto_list_envelope_t *task_category_dto_list_envelope_local_var = malloc(sizeof(task_category_dto_list_envelope_t));
    if (!task_category_dto_list_envelope_local_var) {
        return NULL;
    }
    task_category_dto_list_envelope_local_var->is_success = is_success;
    task_category_dto_list_envelope_local_var->error_message = error_message;
    task_category_dto_list_envelope_local_var->correlation_id = correlation_id;
    task_category_dto_list_envelope_local_var->timestamp = timestamp;
    task_category_dto_list_envelope_local_var->activity_id = activity_id;
    task_category_dto_list_envelope_local_var->result = result;

    return task_category_dto_list_envelope_local_var;
}


void task_category_dto_list_envelope_free(task_category_dto_list_envelope_t *task_category_dto_list_envelope) {
    if(NULL == task_category_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (task_category_dto_list_envelope->error_message) {
        free(task_category_dto_list_envelope->error_message);
        task_category_dto_list_envelope->error_message = NULL;
    }
    if (task_category_dto_list_envelope->correlation_id) {
        free(task_category_dto_list_envelope->correlation_id);
        task_category_dto_list_envelope->correlation_id = NULL;
    }
    if (task_category_dto_list_envelope->timestamp) {
        free(task_category_dto_list_envelope->timestamp);
        task_category_dto_list_envelope->timestamp = NULL;
    }
    if (task_category_dto_list_envelope->activity_id) {
        free(task_category_dto_list_envelope->activity_id);
        task_category_dto_list_envelope->activity_id = NULL;
    }
    if (task_category_dto_list_envelope->result) {
        list_ForEach(listEntry, task_category_dto_list_envelope->result) {
            task_category_dto_free(listEntry->data);
        }
        list_freeList(task_category_dto_list_envelope->result);
        task_category_dto_list_envelope->result = NULL;
    }
    free(task_category_dto_list_envelope);
}

cJSON *task_category_dto_list_envelope_convertToJSON(task_category_dto_list_envelope_t *task_category_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // task_category_dto_list_envelope->is_success
    if(task_category_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", task_category_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // task_category_dto_list_envelope->error_message
    if(task_category_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", task_category_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // task_category_dto_list_envelope->correlation_id
    if(task_category_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", task_category_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // task_category_dto_list_envelope->timestamp
    if(task_category_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", task_category_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // task_category_dto_list_envelope->activity_id
    if(task_category_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", task_category_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // task_category_dto_list_envelope->result
    if(task_category_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (task_category_dto_list_envelope->result) {
    list_ForEach(resultListEntry, task_category_dto_list_envelope->result) {
    cJSON *itemLocal = task_category_dto_convertToJSON(resultListEntry->data);
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

task_category_dto_list_envelope_t *task_category_dto_list_envelope_parseFromJSON(cJSON *task_category_dto_list_envelopeJSON){

    task_category_dto_list_envelope_t *task_category_dto_list_envelope_local_var = NULL;

    // define the local list for task_category_dto_list_envelope->result
    list_t *resultList = NULL;

    // task_category_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(task_category_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // task_category_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(task_category_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // task_category_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(task_category_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // task_category_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(task_category_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // task_category_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(task_category_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // task_category_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(task_category_dto_list_envelopeJSON, "result");
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
        task_category_dto_t *resultItem = task_category_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    task_category_dto_list_envelope_local_var = task_category_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return task_category_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            task_category_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
