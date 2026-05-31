#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "item_return_policy_dto_list_envelope.h"



item_return_policy_dto_list_envelope_t *item_return_policy_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    item_return_policy_dto_list_envelope_t *item_return_policy_dto_list_envelope_local_var = malloc(sizeof(item_return_policy_dto_list_envelope_t));
    if (!item_return_policy_dto_list_envelope_local_var) {
        return NULL;
    }
    item_return_policy_dto_list_envelope_local_var->is_success = is_success;
    item_return_policy_dto_list_envelope_local_var->error_message = error_message;
    item_return_policy_dto_list_envelope_local_var->correlation_id = correlation_id;
    item_return_policy_dto_list_envelope_local_var->timestamp = timestamp;
    item_return_policy_dto_list_envelope_local_var->activity_id = activity_id;
    item_return_policy_dto_list_envelope_local_var->result = result;

    return item_return_policy_dto_list_envelope_local_var;
}


void item_return_policy_dto_list_envelope_free(item_return_policy_dto_list_envelope_t *item_return_policy_dto_list_envelope) {
    if(NULL == item_return_policy_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (item_return_policy_dto_list_envelope->error_message) {
        free(item_return_policy_dto_list_envelope->error_message);
        item_return_policy_dto_list_envelope->error_message = NULL;
    }
    if (item_return_policy_dto_list_envelope->correlation_id) {
        free(item_return_policy_dto_list_envelope->correlation_id);
        item_return_policy_dto_list_envelope->correlation_id = NULL;
    }
    if (item_return_policy_dto_list_envelope->timestamp) {
        free(item_return_policy_dto_list_envelope->timestamp);
        item_return_policy_dto_list_envelope->timestamp = NULL;
    }
    if (item_return_policy_dto_list_envelope->activity_id) {
        free(item_return_policy_dto_list_envelope->activity_id);
        item_return_policy_dto_list_envelope->activity_id = NULL;
    }
    if (item_return_policy_dto_list_envelope->result) {
        list_ForEach(listEntry, item_return_policy_dto_list_envelope->result) {
            item_return_policy_dto_free(listEntry->data);
        }
        list_freeList(item_return_policy_dto_list_envelope->result);
        item_return_policy_dto_list_envelope->result = NULL;
    }
    free(item_return_policy_dto_list_envelope);
}

cJSON *item_return_policy_dto_list_envelope_convertToJSON(item_return_policy_dto_list_envelope_t *item_return_policy_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // item_return_policy_dto_list_envelope->is_success
    if(item_return_policy_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", item_return_policy_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // item_return_policy_dto_list_envelope->error_message
    if(item_return_policy_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", item_return_policy_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // item_return_policy_dto_list_envelope->correlation_id
    if(item_return_policy_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", item_return_policy_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // item_return_policy_dto_list_envelope->timestamp
    if(item_return_policy_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", item_return_policy_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // item_return_policy_dto_list_envelope->activity_id
    if(item_return_policy_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", item_return_policy_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // item_return_policy_dto_list_envelope->result
    if(item_return_policy_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (item_return_policy_dto_list_envelope->result) {
    list_ForEach(resultListEntry, item_return_policy_dto_list_envelope->result) {
    cJSON *itemLocal = item_return_policy_dto_convertToJSON(resultListEntry->data);
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

item_return_policy_dto_list_envelope_t *item_return_policy_dto_list_envelope_parseFromJSON(cJSON *item_return_policy_dto_list_envelopeJSON){

    item_return_policy_dto_list_envelope_t *item_return_policy_dto_list_envelope_local_var = NULL;

    // define the local list for item_return_policy_dto_list_envelope->result
    list_t *resultList = NULL;

    // item_return_policy_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(item_return_policy_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // item_return_policy_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(item_return_policy_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // item_return_policy_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(item_return_policy_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // item_return_policy_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(item_return_policy_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // item_return_policy_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(item_return_policy_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // item_return_policy_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(item_return_policy_dto_list_envelopeJSON, "result");
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
        item_return_policy_dto_t *resultItem = item_return_policy_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    item_return_policy_dto_list_envelope_local_var = item_return_policy_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return item_return_policy_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            item_return_policy_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
