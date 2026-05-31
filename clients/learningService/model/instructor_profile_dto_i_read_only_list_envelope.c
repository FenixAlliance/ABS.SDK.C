#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "instructor_profile_dto_i_read_only_list_envelope.h"



instructor_profile_dto_i_read_only_list_envelope_t *instructor_profile_dto_i_read_only_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    instructor_profile_dto_i_read_only_list_envelope_t *instructor_profile_dto_i_read_only_list_envelope_local_var = malloc(sizeof(instructor_profile_dto_i_read_only_list_envelope_t));
    if (!instructor_profile_dto_i_read_only_list_envelope_local_var) {
        return NULL;
    }
    instructor_profile_dto_i_read_only_list_envelope_local_var->is_success = is_success;
    instructor_profile_dto_i_read_only_list_envelope_local_var->error_message = error_message;
    instructor_profile_dto_i_read_only_list_envelope_local_var->correlation_id = correlation_id;
    instructor_profile_dto_i_read_only_list_envelope_local_var->timestamp = timestamp;
    instructor_profile_dto_i_read_only_list_envelope_local_var->activity_id = activity_id;
    instructor_profile_dto_i_read_only_list_envelope_local_var->result = result;

    return instructor_profile_dto_i_read_only_list_envelope_local_var;
}


void instructor_profile_dto_i_read_only_list_envelope_free(instructor_profile_dto_i_read_only_list_envelope_t *instructor_profile_dto_i_read_only_list_envelope) {
    if(NULL == instructor_profile_dto_i_read_only_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (instructor_profile_dto_i_read_only_list_envelope->error_message) {
        free(instructor_profile_dto_i_read_only_list_envelope->error_message);
        instructor_profile_dto_i_read_only_list_envelope->error_message = NULL;
    }
    if (instructor_profile_dto_i_read_only_list_envelope->correlation_id) {
        free(instructor_profile_dto_i_read_only_list_envelope->correlation_id);
        instructor_profile_dto_i_read_only_list_envelope->correlation_id = NULL;
    }
    if (instructor_profile_dto_i_read_only_list_envelope->timestamp) {
        free(instructor_profile_dto_i_read_only_list_envelope->timestamp);
        instructor_profile_dto_i_read_only_list_envelope->timestamp = NULL;
    }
    if (instructor_profile_dto_i_read_only_list_envelope->activity_id) {
        free(instructor_profile_dto_i_read_only_list_envelope->activity_id);
        instructor_profile_dto_i_read_only_list_envelope->activity_id = NULL;
    }
    if (instructor_profile_dto_i_read_only_list_envelope->result) {
        list_ForEach(listEntry, instructor_profile_dto_i_read_only_list_envelope->result) {
            instructor_profile_dto_free(listEntry->data);
        }
        list_freeList(instructor_profile_dto_i_read_only_list_envelope->result);
        instructor_profile_dto_i_read_only_list_envelope->result = NULL;
    }
    free(instructor_profile_dto_i_read_only_list_envelope);
}

cJSON *instructor_profile_dto_i_read_only_list_envelope_convertToJSON(instructor_profile_dto_i_read_only_list_envelope_t *instructor_profile_dto_i_read_only_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // instructor_profile_dto_i_read_only_list_envelope->is_success
    if(instructor_profile_dto_i_read_only_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", instructor_profile_dto_i_read_only_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // instructor_profile_dto_i_read_only_list_envelope->error_message
    if(instructor_profile_dto_i_read_only_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", instructor_profile_dto_i_read_only_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // instructor_profile_dto_i_read_only_list_envelope->correlation_id
    if(instructor_profile_dto_i_read_only_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", instructor_profile_dto_i_read_only_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // instructor_profile_dto_i_read_only_list_envelope->timestamp
    if(instructor_profile_dto_i_read_only_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", instructor_profile_dto_i_read_only_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // instructor_profile_dto_i_read_only_list_envelope->activity_id
    if(instructor_profile_dto_i_read_only_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", instructor_profile_dto_i_read_only_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // instructor_profile_dto_i_read_only_list_envelope->result
    if(instructor_profile_dto_i_read_only_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (instructor_profile_dto_i_read_only_list_envelope->result) {
    list_ForEach(resultListEntry, instructor_profile_dto_i_read_only_list_envelope->result) {
    cJSON *itemLocal = instructor_profile_dto_convertToJSON(resultListEntry->data);
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

instructor_profile_dto_i_read_only_list_envelope_t *instructor_profile_dto_i_read_only_list_envelope_parseFromJSON(cJSON *instructor_profile_dto_i_read_only_list_envelopeJSON){

    instructor_profile_dto_i_read_only_list_envelope_t *instructor_profile_dto_i_read_only_list_envelope_local_var = NULL;

    // define the local list for instructor_profile_dto_i_read_only_list_envelope->result
    list_t *resultList = NULL;

    // instructor_profile_dto_i_read_only_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(instructor_profile_dto_i_read_only_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // instructor_profile_dto_i_read_only_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(instructor_profile_dto_i_read_only_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // instructor_profile_dto_i_read_only_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(instructor_profile_dto_i_read_only_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // instructor_profile_dto_i_read_only_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(instructor_profile_dto_i_read_only_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // instructor_profile_dto_i_read_only_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(instructor_profile_dto_i_read_only_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // instructor_profile_dto_i_read_only_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(instructor_profile_dto_i_read_only_list_envelopeJSON, "result");
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
        instructor_profile_dto_t *resultItem = instructor_profile_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    instructor_profile_dto_i_read_only_list_envelope_local_var = instructor_profile_dto_i_read_only_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return instructor_profile_dto_i_read_only_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            instructor_profile_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
