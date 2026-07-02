#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "curriculum_dto_list_envelope.h"



curriculum_dto_list_envelope_t *curriculum_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    curriculum_dto_list_envelope_t *curriculum_dto_list_envelope_local_var = malloc(sizeof(curriculum_dto_list_envelope_t));
    if (!curriculum_dto_list_envelope_local_var) {
        return NULL;
    }
    curriculum_dto_list_envelope_local_var->is_success = is_success;
    curriculum_dto_list_envelope_local_var->error_message = error_message;
    curriculum_dto_list_envelope_local_var->correlation_id = correlation_id;
    curriculum_dto_list_envelope_local_var->timestamp = timestamp;
    curriculum_dto_list_envelope_local_var->activity_id = activity_id;
    curriculum_dto_list_envelope_local_var->result = result;

    return curriculum_dto_list_envelope_local_var;
}


void curriculum_dto_list_envelope_free(curriculum_dto_list_envelope_t *curriculum_dto_list_envelope) {
    if(NULL == curriculum_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (curriculum_dto_list_envelope->error_message) {
        free(curriculum_dto_list_envelope->error_message);
        curriculum_dto_list_envelope->error_message = NULL;
    }
    if (curriculum_dto_list_envelope->correlation_id) {
        free(curriculum_dto_list_envelope->correlation_id);
        curriculum_dto_list_envelope->correlation_id = NULL;
    }
    if (curriculum_dto_list_envelope->timestamp) {
        free(curriculum_dto_list_envelope->timestamp);
        curriculum_dto_list_envelope->timestamp = NULL;
    }
    if (curriculum_dto_list_envelope->activity_id) {
        free(curriculum_dto_list_envelope->activity_id);
        curriculum_dto_list_envelope->activity_id = NULL;
    }
    if (curriculum_dto_list_envelope->result) {
        list_ForEach(listEntry, curriculum_dto_list_envelope->result) {
            curriculum_dto_free(listEntry->data);
        }
        list_freeList(curriculum_dto_list_envelope->result);
        curriculum_dto_list_envelope->result = NULL;
    }
    free(curriculum_dto_list_envelope);
}

cJSON *curriculum_dto_list_envelope_convertToJSON(curriculum_dto_list_envelope_t *curriculum_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // curriculum_dto_list_envelope->is_success
    if(curriculum_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", curriculum_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // curriculum_dto_list_envelope->error_message
    if(curriculum_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", curriculum_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // curriculum_dto_list_envelope->correlation_id
    if(curriculum_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", curriculum_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // curriculum_dto_list_envelope->timestamp
    if(curriculum_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", curriculum_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // curriculum_dto_list_envelope->activity_id
    if(curriculum_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", curriculum_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // curriculum_dto_list_envelope->result
    if(curriculum_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (curriculum_dto_list_envelope->result) {
    list_ForEach(resultListEntry, curriculum_dto_list_envelope->result) {
    cJSON *itemLocal = curriculum_dto_convertToJSON(resultListEntry->data);
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

curriculum_dto_list_envelope_t *curriculum_dto_list_envelope_parseFromJSON(cJSON *curriculum_dto_list_envelopeJSON){

    curriculum_dto_list_envelope_t *curriculum_dto_list_envelope_local_var = NULL;

    // define the local list for curriculum_dto_list_envelope->result
    list_t *resultList = NULL;

    // curriculum_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(curriculum_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // curriculum_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(curriculum_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // curriculum_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(curriculum_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // curriculum_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(curriculum_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // curriculum_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(curriculum_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // curriculum_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(curriculum_dto_list_envelopeJSON, "result");
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
        curriculum_dto_t *resultItem = curriculum_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    curriculum_dto_list_envelope_local_var = curriculum_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return curriculum_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            curriculum_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
