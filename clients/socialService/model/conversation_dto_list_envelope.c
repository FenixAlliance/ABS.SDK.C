#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "conversation_dto_list_envelope.h"



conversation_dto_list_envelope_t *conversation_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    conversation_dto_list_envelope_t *conversation_dto_list_envelope_local_var = malloc(sizeof(conversation_dto_list_envelope_t));
    if (!conversation_dto_list_envelope_local_var) {
        return NULL;
    }
    conversation_dto_list_envelope_local_var->is_success = is_success;
    conversation_dto_list_envelope_local_var->error_message = error_message;
    conversation_dto_list_envelope_local_var->correlation_id = correlation_id;
    conversation_dto_list_envelope_local_var->timestamp = timestamp;
    conversation_dto_list_envelope_local_var->activity_id = activity_id;
    conversation_dto_list_envelope_local_var->result = result;

    return conversation_dto_list_envelope_local_var;
}


void conversation_dto_list_envelope_free(conversation_dto_list_envelope_t *conversation_dto_list_envelope) {
    if(NULL == conversation_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (conversation_dto_list_envelope->error_message) {
        free(conversation_dto_list_envelope->error_message);
        conversation_dto_list_envelope->error_message = NULL;
    }
    if (conversation_dto_list_envelope->correlation_id) {
        free(conversation_dto_list_envelope->correlation_id);
        conversation_dto_list_envelope->correlation_id = NULL;
    }
    if (conversation_dto_list_envelope->timestamp) {
        free(conversation_dto_list_envelope->timestamp);
        conversation_dto_list_envelope->timestamp = NULL;
    }
    if (conversation_dto_list_envelope->activity_id) {
        free(conversation_dto_list_envelope->activity_id);
        conversation_dto_list_envelope->activity_id = NULL;
    }
    if (conversation_dto_list_envelope->result) {
        list_ForEach(listEntry, conversation_dto_list_envelope->result) {
            conversation_dto_free(listEntry->data);
        }
        list_freeList(conversation_dto_list_envelope->result);
        conversation_dto_list_envelope->result = NULL;
    }
    free(conversation_dto_list_envelope);
}

cJSON *conversation_dto_list_envelope_convertToJSON(conversation_dto_list_envelope_t *conversation_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // conversation_dto_list_envelope->is_success
    if(conversation_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", conversation_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // conversation_dto_list_envelope->error_message
    if(conversation_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", conversation_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // conversation_dto_list_envelope->correlation_id
    if(conversation_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", conversation_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // conversation_dto_list_envelope->timestamp
    if(conversation_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", conversation_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // conversation_dto_list_envelope->activity_id
    if(conversation_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", conversation_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // conversation_dto_list_envelope->result
    if(conversation_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (conversation_dto_list_envelope->result) {
    list_ForEach(resultListEntry, conversation_dto_list_envelope->result) {
    cJSON *itemLocal = conversation_dto_convertToJSON(resultListEntry->data);
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

conversation_dto_list_envelope_t *conversation_dto_list_envelope_parseFromJSON(cJSON *conversation_dto_list_envelopeJSON){

    conversation_dto_list_envelope_t *conversation_dto_list_envelope_local_var = NULL;

    // define the local list for conversation_dto_list_envelope->result
    list_t *resultList = NULL;

    // conversation_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(conversation_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // conversation_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(conversation_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // conversation_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(conversation_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // conversation_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(conversation_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // conversation_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(conversation_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // conversation_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(conversation_dto_list_envelopeJSON, "result");
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
        conversation_dto_t *resultItem = conversation_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    conversation_dto_list_envelope_local_var = conversation_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return conversation_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            conversation_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
