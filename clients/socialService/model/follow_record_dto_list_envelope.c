#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "follow_record_dto_list_envelope.h"



follow_record_dto_list_envelope_t *follow_record_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    follow_record_dto_list_envelope_t *follow_record_dto_list_envelope_local_var = malloc(sizeof(follow_record_dto_list_envelope_t));
    if (!follow_record_dto_list_envelope_local_var) {
        return NULL;
    }
    follow_record_dto_list_envelope_local_var->is_success = is_success;
    follow_record_dto_list_envelope_local_var->error_message = error_message;
    follow_record_dto_list_envelope_local_var->correlation_id = correlation_id;
    follow_record_dto_list_envelope_local_var->timestamp = timestamp;
    follow_record_dto_list_envelope_local_var->activity_id = activity_id;
    follow_record_dto_list_envelope_local_var->result = result;

    return follow_record_dto_list_envelope_local_var;
}


void follow_record_dto_list_envelope_free(follow_record_dto_list_envelope_t *follow_record_dto_list_envelope) {
    if(NULL == follow_record_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (follow_record_dto_list_envelope->error_message) {
        free(follow_record_dto_list_envelope->error_message);
        follow_record_dto_list_envelope->error_message = NULL;
    }
    if (follow_record_dto_list_envelope->correlation_id) {
        free(follow_record_dto_list_envelope->correlation_id);
        follow_record_dto_list_envelope->correlation_id = NULL;
    }
    if (follow_record_dto_list_envelope->timestamp) {
        free(follow_record_dto_list_envelope->timestamp);
        follow_record_dto_list_envelope->timestamp = NULL;
    }
    if (follow_record_dto_list_envelope->activity_id) {
        free(follow_record_dto_list_envelope->activity_id);
        follow_record_dto_list_envelope->activity_id = NULL;
    }
    if (follow_record_dto_list_envelope->result) {
        list_ForEach(listEntry, follow_record_dto_list_envelope->result) {
            follow_record_dto_free(listEntry->data);
        }
        list_freeList(follow_record_dto_list_envelope->result);
        follow_record_dto_list_envelope->result = NULL;
    }
    free(follow_record_dto_list_envelope);
}

cJSON *follow_record_dto_list_envelope_convertToJSON(follow_record_dto_list_envelope_t *follow_record_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // follow_record_dto_list_envelope->is_success
    if(follow_record_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", follow_record_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // follow_record_dto_list_envelope->error_message
    if(follow_record_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", follow_record_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // follow_record_dto_list_envelope->correlation_id
    if(follow_record_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", follow_record_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // follow_record_dto_list_envelope->timestamp
    if(follow_record_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", follow_record_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // follow_record_dto_list_envelope->activity_id
    if(follow_record_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", follow_record_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // follow_record_dto_list_envelope->result
    if(follow_record_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (follow_record_dto_list_envelope->result) {
    list_ForEach(resultListEntry, follow_record_dto_list_envelope->result) {
    cJSON *itemLocal = follow_record_dto_convertToJSON(resultListEntry->data);
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

follow_record_dto_list_envelope_t *follow_record_dto_list_envelope_parseFromJSON(cJSON *follow_record_dto_list_envelopeJSON){

    follow_record_dto_list_envelope_t *follow_record_dto_list_envelope_local_var = NULL;

    // define the local list for follow_record_dto_list_envelope->result
    list_t *resultList = NULL;

    // follow_record_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(follow_record_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // follow_record_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(follow_record_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // follow_record_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(follow_record_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // follow_record_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(follow_record_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // follow_record_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(follow_record_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // follow_record_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(follow_record_dto_list_envelopeJSON, "result");
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
        follow_record_dto_t *resultItem = follow_record_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    follow_record_dto_list_envelope_local_var = follow_record_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return follow_record_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            follow_record_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
