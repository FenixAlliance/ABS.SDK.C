#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "skill_dto_list_envelope.h"



skill_dto_list_envelope_t *skill_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    skill_dto_list_envelope_t *skill_dto_list_envelope_local_var = malloc(sizeof(skill_dto_list_envelope_t));
    if (!skill_dto_list_envelope_local_var) {
        return NULL;
    }
    skill_dto_list_envelope_local_var->is_success = is_success;
    skill_dto_list_envelope_local_var->error_message = error_message;
    skill_dto_list_envelope_local_var->correlation_id = correlation_id;
    skill_dto_list_envelope_local_var->timestamp = timestamp;
    skill_dto_list_envelope_local_var->activity_id = activity_id;
    skill_dto_list_envelope_local_var->result = result;

    return skill_dto_list_envelope_local_var;
}


void skill_dto_list_envelope_free(skill_dto_list_envelope_t *skill_dto_list_envelope) {
    if(NULL == skill_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (skill_dto_list_envelope->error_message) {
        free(skill_dto_list_envelope->error_message);
        skill_dto_list_envelope->error_message = NULL;
    }
    if (skill_dto_list_envelope->correlation_id) {
        free(skill_dto_list_envelope->correlation_id);
        skill_dto_list_envelope->correlation_id = NULL;
    }
    if (skill_dto_list_envelope->timestamp) {
        free(skill_dto_list_envelope->timestamp);
        skill_dto_list_envelope->timestamp = NULL;
    }
    if (skill_dto_list_envelope->activity_id) {
        free(skill_dto_list_envelope->activity_id);
        skill_dto_list_envelope->activity_id = NULL;
    }
    if (skill_dto_list_envelope->result) {
        list_ForEach(listEntry, skill_dto_list_envelope->result) {
            skill_dto_free(listEntry->data);
        }
        list_freeList(skill_dto_list_envelope->result);
        skill_dto_list_envelope->result = NULL;
    }
    free(skill_dto_list_envelope);
}

cJSON *skill_dto_list_envelope_convertToJSON(skill_dto_list_envelope_t *skill_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // skill_dto_list_envelope->is_success
    if(skill_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", skill_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // skill_dto_list_envelope->error_message
    if(skill_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", skill_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // skill_dto_list_envelope->correlation_id
    if(skill_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", skill_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // skill_dto_list_envelope->timestamp
    if(skill_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", skill_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // skill_dto_list_envelope->activity_id
    if(skill_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", skill_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // skill_dto_list_envelope->result
    if(skill_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (skill_dto_list_envelope->result) {
    list_ForEach(resultListEntry, skill_dto_list_envelope->result) {
    cJSON *itemLocal = skill_dto_convertToJSON(resultListEntry->data);
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

skill_dto_list_envelope_t *skill_dto_list_envelope_parseFromJSON(cJSON *skill_dto_list_envelopeJSON){

    skill_dto_list_envelope_t *skill_dto_list_envelope_local_var = NULL;

    // define the local list for skill_dto_list_envelope->result
    list_t *resultList = NULL;

    // skill_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(skill_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // skill_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(skill_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // skill_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(skill_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // skill_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(skill_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // skill_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(skill_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // skill_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(skill_dto_list_envelopeJSON, "result");
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
        skill_dto_t *resultItem = skill_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    skill_dto_list_envelope_local_var = skill_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return skill_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            skill_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
