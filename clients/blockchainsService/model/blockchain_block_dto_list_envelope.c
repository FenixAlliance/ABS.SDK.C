#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "blockchain_block_dto_list_envelope.h"



blockchain_block_dto_list_envelope_t *blockchain_block_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    blockchain_block_dto_list_envelope_t *blockchain_block_dto_list_envelope_local_var = malloc(sizeof(blockchain_block_dto_list_envelope_t));
    if (!blockchain_block_dto_list_envelope_local_var) {
        return NULL;
    }
    blockchain_block_dto_list_envelope_local_var->is_success = is_success;
    blockchain_block_dto_list_envelope_local_var->error_message = error_message;
    blockchain_block_dto_list_envelope_local_var->correlation_id = correlation_id;
    blockchain_block_dto_list_envelope_local_var->timestamp = timestamp;
    blockchain_block_dto_list_envelope_local_var->activity_id = activity_id;
    blockchain_block_dto_list_envelope_local_var->result = result;

    return blockchain_block_dto_list_envelope_local_var;
}


void blockchain_block_dto_list_envelope_free(blockchain_block_dto_list_envelope_t *blockchain_block_dto_list_envelope) {
    if(NULL == blockchain_block_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (blockchain_block_dto_list_envelope->error_message) {
        free(blockchain_block_dto_list_envelope->error_message);
        blockchain_block_dto_list_envelope->error_message = NULL;
    }
    if (blockchain_block_dto_list_envelope->correlation_id) {
        free(blockchain_block_dto_list_envelope->correlation_id);
        blockchain_block_dto_list_envelope->correlation_id = NULL;
    }
    if (blockchain_block_dto_list_envelope->timestamp) {
        free(blockchain_block_dto_list_envelope->timestamp);
        blockchain_block_dto_list_envelope->timestamp = NULL;
    }
    if (blockchain_block_dto_list_envelope->activity_id) {
        free(blockchain_block_dto_list_envelope->activity_id);
        blockchain_block_dto_list_envelope->activity_id = NULL;
    }
    if (blockchain_block_dto_list_envelope->result) {
        list_ForEach(listEntry, blockchain_block_dto_list_envelope->result) {
            blockchain_block_dto_free(listEntry->data);
        }
        list_freeList(blockchain_block_dto_list_envelope->result);
        blockchain_block_dto_list_envelope->result = NULL;
    }
    free(blockchain_block_dto_list_envelope);
}

cJSON *blockchain_block_dto_list_envelope_convertToJSON(blockchain_block_dto_list_envelope_t *blockchain_block_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // blockchain_block_dto_list_envelope->is_success
    if(blockchain_block_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", blockchain_block_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // blockchain_block_dto_list_envelope->error_message
    if(blockchain_block_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", blockchain_block_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // blockchain_block_dto_list_envelope->correlation_id
    if(blockchain_block_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", blockchain_block_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // blockchain_block_dto_list_envelope->timestamp
    if(blockchain_block_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", blockchain_block_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // blockchain_block_dto_list_envelope->activity_id
    if(blockchain_block_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", blockchain_block_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // blockchain_block_dto_list_envelope->result
    if(blockchain_block_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (blockchain_block_dto_list_envelope->result) {
    list_ForEach(resultListEntry, blockchain_block_dto_list_envelope->result) {
    cJSON *itemLocal = blockchain_block_dto_convertToJSON(resultListEntry->data);
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

blockchain_block_dto_list_envelope_t *blockchain_block_dto_list_envelope_parseFromJSON(cJSON *blockchain_block_dto_list_envelopeJSON){

    blockchain_block_dto_list_envelope_t *blockchain_block_dto_list_envelope_local_var = NULL;

    // define the local list for blockchain_block_dto_list_envelope->result
    list_t *resultList = NULL;

    // blockchain_block_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(blockchain_block_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // blockchain_block_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(blockchain_block_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // blockchain_block_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(blockchain_block_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // blockchain_block_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(blockchain_block_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // blockchain_block_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(blockchain_block_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // blockchain_block_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(blockchain_block_dto_list_envelopeJSON, "result");
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
        blockchain_block_dto_t *resultItem = blockchain_block_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    blockchain_block_dto_list_envelope_local_var = blockchain_block_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return blockchain_block_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            blockchain_block_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
