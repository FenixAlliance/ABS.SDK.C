#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "share_class_dto_list_envelope.h"



share_class_dto_list_envelope_t *share_class_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    share_class_dto_list_envelope_t *share_class_dto_list_envelope_local_var = malloc(sizeof(share_class_dto_list_envelope_t));
    if (!share_class_dto_list_envelope_local_var) {
        return NULL;
    }
    share_class_dto_list_envelope_local_var->is_success = is_success;
    share_class_dto_list_envelope_local_var->error_message = error_message;
    share_class_dto_list_envelope_local_var->correlation_id = correlation_id;
    share_class_dto_list_envelope_local_var->timestamp = timestamp;
    share_class_dto_list_envelope_local_var->activity_id = activity_id;
    share_class_dto_list_envelope_local_var->result = result;

    return share_class_dto_list_envelope_local_var;
}


void share_class_dto_list_envelope_free(share_class_dto_list_envelope_t *share_class_dto_list_envelope) {
    if(NULL == share_class_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (share_class_dto_list_envelope->error_message) {
        free(share_class_dto_list_envelope->error_message);
        share_class_dto_list_envelope->error_message = NULL;
    }
    if (share_class_dto_list_envelope->correlation_id) {
        free(share_class_dto_list_envelope->correlation_id);
        share_class_dto_list_envelope->correlation_id = NULL;
    }
    if (share_class_dto_list_envelope->timestamp) {
        free(share_class_dto_list_envelope->timestamp);
        share_class_dto_list_envelope->timestamp = NULL;
    }
    if (share_class_dto_list_envelope->activity_id) {
        free(share_class_dto_list_envelope->activity_id);
        share_class_dto_list_envelope->activity_id = NULL;
    }
    if (share_class_dto_list_envelope->result) {
        list_ForEach(listEntry, share_class_dto_list_envelope->result) {
            share_class_dto_free(listEntry->data);
        }
        list_freeList(share_class_dto_list_envelope->result);
        share_class_dto_list_envelope->result = NULL;
    }
    free(share_class_dto_list_envelope);
}

cJSON *share_class_dto_list_envelope_convertToJSON(share_class_dto_list_envelope_t *share_class_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // share_class_dto_list_envelope->is_success
    if(share_class_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", share_class_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // share_class_dto_list_envelope->error_message
    if(share_class_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", share_class_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // share_class_dto_list_envelope->correlation_id
    if(share_class_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", share_class_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // share_class_dto_list_envelope->timestamp
    if(share_class_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", share_class_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // share_class_dto_list_envelope->activity_id
    if(share_class_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", share_class_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // share_class_dto_list_envelope->result
    if(share_class_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (share_class_dto_list_envelope->result) {
    list_ForEach(resultListEntry, share_class_dto_list_envelope->result) {
    cJSON *itemLocal = share_class_dto_convertToJSON(resultListEntry->data);
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

share_class_dto_list_envelope_t *share_class_dto_list_envelope_parseFromJSON(cJSON *share_class_dto_list_envelopeJSON){

    share_class_dto_list_envelope_t *share_class_dto_list_envelope_local_var = NULL;

    // define the local list for share_class_dto_list_envelope->result
    list_t *resultList = NULL;

    // share_class_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(share_class_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // share_class_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(share_class_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // share_class_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(share_class_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // share_class_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(share_class_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // share_class_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(share_class_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // share_class_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(share_class_dto_list_envelopeJSON, "result");
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
        share_class_dto_t *resultItem = share_class_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    share_class_dto_list_envelope_local_var = share_class_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return share_class_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            share_class_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
