#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "knowledge_article_dto_list_envelope.h"



knowledge_article_dto_list_envelope_t *knowledge_article_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    knowledge_article_dto_list_envelope_t *knowledge_article_dto_list_envelope_local_var = malloc(sizeof(knowledge_article_dto_list_envelope_t));
    if (!knowledge_article_dto_list_envelope_local_var) {
        return NULL;
    }
    knowledge_article_dto_list_envelope_local_var->is_success = is_success;
    knowledge_article_dto_list_envelope_local_var->error_message = error_message;
    knowledge_article_dto_list_envelope_local_var->correlation_id = correlation_id;
    knowledge_article_dto_list_envelope_local_var->timestamp = timestamp;
    knowledge_article_dto_list_envelope_local_var->activity_id = activity_id;
    knowledge_article_dto_list_envelope_local_var->result = result;

    return knowledge_article_dto_list_envelope_local_var;
}


void knowledge_article_dto_list_envelope_free(knowledge_article_dto_list_envelope_t *knowledge_article_dto_list_envelope) {
    if(NULL == knowledge_article_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (knowledge_article_dto_list_envelope->error_message) {
        free(knowledge_article_dto_list_envelope->error_message);
        knowledge_article_dto_list_envelope->error_message = NULL;
    }
    if (knowledge_article_dto_list_envelope->correlation_id) {
        free(knowledge_article_dto_list_envelope->correlation_id);
        knowledge_article_dto_list_envelope->correlation_id = NULL;
    }
    if (knowledge_article_dto_list_envelope->timestamp) {
        free(knowledge_article_dto_list_envelope->timestamp);
        knowledge_article_dto_list_envelope->timestamp = NULL;
    }
    if (knowledge_article_dto_list_envelope->activity_id) {
        free(knowledge_article_dto_list_envelope->activity_id);
        knowledge_article_dto_list_envelope->activity_id = NULL;
    }
    if (knowledge_article_dto_list_envelope->result) {
        list_ForEach(listEntry, knowledge_article_dto_list_envelope->result) {
            knowledge_article_dto_free(listEntry->data);
        }
        list_freeList(knowledge_article_dto_list_envelope->result);
        knowledge_article_dto_list_envelope->result = NULL;
    }
    free(knowledge_article_dto_list_envelope);
}

cJSON *knowledge_article_dto_list_envelope_convertToJSON(knowledge_article_dto_list_envelope_t *knowledge_article_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // knowledge_article_dto_list_envelope->is_success
    if(knowledge_article_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", knowledge_article_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // knowledge_article_dto_list_envelope->error_message
    if(knowledge_article_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", knowledge_article_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // knowledge_article_dto_list_envelope->correlation_id
    if(knowledge_article_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", knowledge_article_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // knowledge_article_dto_list_envelope->timestamp
    if(knowledge_article_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", knowledge_article_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // knowledge_article_dto_list_envelope->activity_id
    if(knowledge_article_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", knowledge_article_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // knowledge_article_dto_list_envelope->result
    if(knowledge_article_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (knowledge_article_dto_list_envelope->result) {
    list_ForEach(resultListEntry, knowledge_article_dto_list_envelope->result) {
    cJSON *itemLocal = knowledge_article_dto_convertToJSON(resultListEntry->data);
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

knowledge_article_dto_list_envelope_t *knowledge_article_dto_list_envelope_parseFromJSON(cJSON *knowledge_article_dto_list_envelopeJSON){

    knowledge_article_dto_list_envelope_t *knowledge_article_dto_list_envelope_local_var = NULL;

    // define the local list for knowledge_article_dto_list_envelope->result
    list_t *resultList = NULL;

    // knowledge_article_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(knowledge_article_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // knowledge_article_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(knowledge_article_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // knowledge_article_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(knowledge_article_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // knowledge_article_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(knowledge_article_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // knowledge_article_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(knowledge_article_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // knowledge_article_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(knowledge_article_dto_list_envelopeJSON, "result");
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
        knowledge_article_dto_t *resultItem = knowledge_article_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    knowledge_article_dto_list_envelope_local_var = knowledge_article_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return knowledge_article_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            knowledge_article_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
