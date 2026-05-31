#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "student_profile_dto_i_read_only_list_envelope.h"



student_profile_dto_i_read_only_list_envelope_t *student_profile_dto_i_read_only_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    student_profile_dto_i_read_only_list_envelope_t *student_profile_dto_i_read_only_list_envelope_local_var = malloc(sizeof(student_profile_dto_i_read_only_list_envelope_t));
    if (!student_profile_dto_i_read_only_list_envelope_local_var) {
        return NULL;
    }
    student_profile_dto_i_read_only_list_envelope_local_var->is_success = is_success;
    student_profile_dto_i_read_only_list_envelope_local_var->error_message = error_message;
    student_profile_dto_i_read_only_list_envelope_local_var->correlation_id = correlation_id;
    student_profile_dto_i_read_only_list_envelope_local_var->timestamp = timestamp;
    student_profile_dto_i_read_only_list_envelope_local_var->activity_id = activity_id;
    student_profile_dto_i_read_only_list_envelope_local_var->result = result;

    return student_profile_dto_i_read_only_list_envelope_local_var;
}


void student_profile_dto_i_read_only_list_envelope_free(student_profile_dto_i_read_only_list_envelope_t *student_profile_dto_i_read_only_list_envelope) {
    if(NULL == student_profile_dto_i_read_only_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (student_profile_dto_i_read_only_list_envelope->error_message) {
        free(student_profile_dto_i_read_only_list_envelope->error_message);
        student_profile_dto_i_read_only_list_envelope->error_message = NULL;
    }
    if (student_profile_dto_i_read_only_list_envelope->correlation_id) {
        free(student_profile_dto_i_read_only_list_envelope->correlation_id);
        student_profile_dto_i_read_only_list_envelope->correlation_id = NULL;
    }
    if (student_profile_dto_i_read_only_list_envelope->timestamp) {
        free(student_profile_dto_i_read_only_list_envelope->timestamp);
        student_profile_dto_i_read_only_list_envelope->timestamp = NULL;
    }
    if (student_profile_dto_i_read_only_list_envelope->activity_id) {
        free(student_profile_dto_i_read_only_list_envelope->activity_id);
        student_profile_dto_i_read_only_list_envelope->activity_id = NULL;
    }
    if (student_profile_dto_i_read_only_list_envelope->result) {
        list_ForEach(listEntry, student_profile_dto_i_read_only_list_envelope->result) {
            student_profile_dto_free(listEntry->data);
        }
        list_freeList(student_profile_dto_i_read_only_list_envelope->result);
        student_profile_dto_i_read_only_list_envelope->result = NULL;
    }
    free(student_profile_dto_i_read_only_list_envelope);
}

cJSON *student_profile_dto_i_read_only_list_envelope_convertToJSON(student_profile_dto_i_read_only_list_envelope_t *student_profile_dto_i_read_only_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // student_profile_dto_i_read_only_list_envelope->is_success
    if(student_profile_dto_i_read_only_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", student_profile_dto_i_read_only_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // student_profile_dto_i_read_only_list_envelope->error_message
    if(student_profile_dto_i_read_only_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", student_profile_dto_i_read_only_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // student_profile_dto_i_read_only_list_envelope->correlation_id
    if(student_profile_dto_i_read_only_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", student_profile_dto_i_read_only_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // student_profile_dto_i_read_only_list_envelope->timestamp
    if(student_profile_dto_i_read_only_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", student_profile_dto_i_read_only_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // student_profile_dto_i_read_only_list_envelope->activity_id
    if(student_profile_dto_i_read_only_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", student_profile_dto_i_read_only_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // student_profile_dto_i_read_only_list_envelope->result
    if(student_profile_dto_i_read_only_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (student_profile_dto_i_read_only_list_envelope->result) {
    list_ForEach(resultListEntry, student_profile_dto_i_read_only_list_envelope->result) {
    cJSON *itemLocal = student_profile_dto_convertToJSON(resultListEntry->data);
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

student_profile_dto_i_read_only_list_envelope_t *student_profile_dto_i_read_only_list_envelope_parseFromJSON(cJSON *student_profile_dto_i_read_only_list_envelopeJSON){

    student_profile_dto_i_read_only_list_envelope_t *student_profile_dto_i_read_only_list_envelope_local_var = NULL;

    // define the local list for student_profile_dto_i_read_only_list_envelope->result
    list_t *resultList = NULL;

    // student_profile_dto_i_read_only_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(student_profile_dto_i_read_only_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // student_profile_dto_i_read_only_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(student_profile_dto_i_read_only_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // student_profile_dto_i_read_only_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(student_profile_dto_i_read_only_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // student_profile_dto_i_read_only_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(student_profile_dto_i_read_only_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // student_profile_dto_i_read_only_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(student_profile_dto_i_read_only_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // student_profile_dto_i_read_only_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(student_profile_dto_i_read_only_list_envelopeJSON, "result");
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
        student_profile_dto_t *resultItem = student_profile_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    student_profile_dto_i_read_only_list_envelope_local_var = student_profile_dto_i_read_only_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return student_profile_dto_i_read_only_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            student_profile_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
