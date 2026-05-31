#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "quote_dto_list_envelope.h"



quote_dto_list_envelope_t *quote_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    quote_dto_list_envelope_t *quote_dto_list_envelope_local_var = malloc(sizeof(quote_dto_list_envelope_t));
    if (!quote_dto_list_envelope_local_var) {
        return NULL;
    }
    quote_dto_list_envelope_local_var->is_success = is_success;
    quote_dto_list_envelope_local_var->error_message = error_message;
    quote_dto_list_envelope_local_var->correlation_id = correlation_id;
    quote_dto_list_envelope_local_var->timestamp = timestamp;
    quote_dto_list_envelope_local_var->activity_id = activity_id;
    quote_dto_list_envelope_local_var->result = result;

    return quote_dto_list_envelope_local_var;
}


void quote_dto_list_envelope_free(quote_dto_list_envelope_t *quote_dto_list_envelope) {
    if(NULL == quote_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (quote_dto_list_envelope->error_message) {
        free(quote_dto_list_envelope->error_message);
        quote_dto_list_envelope->error_message = NULL;
    }
    if (quote_dto_list_envelope->correlation_id) {
        free(quote_dto_list_envelope->correlation_id);
        quote_dto_list_envelope->correlation_id = NULL;
    }
    if (quote_dto_list_envelope->timestamp) {
        free(quote_dto_list_envelope->timestamp);
        quote_dto_list_envelope->timestamp = NULL;
    }
    if (quote_dto_list_envelope->activity_id) {
        free(quote_dto_list_envelope->activity_id);
        quote_dto_list_envelope->activity_id = NULL;
    }
    if (quote_dto_list_envelope->result) {
        list_ForEach(listEntry, quote_dto_list_envelope->result) {
            quote_dto_free(listEntry->data);
        }
        list_freeList(quote_dto_list_envelope->result);
        quote_dto_list_envelope->result = NULL;
    }
    free(quote_dto_list_envelope);
}

cJSON *quote_dto_list_envelope_convertToJSON(quote_dto_list_envelope_t *quote_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // quote_dto_list_envelope->is_success
    if(quote_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", quote_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // quote_dto_list_envelope->error_message
    if(quote_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", quote_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // quote_dto_list_envelope->correlation_id
    if(quote_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", quote_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_dto_list_envelope->timestamp
    if(quote_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", quote_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // quote_dto_list_envelope->activity_id
    if(quote_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", quote_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_dto_list_envelope->result
    if(quote_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (quote_dto_list_envelope->result) {
    list_ForEach(resultListEntry, quote_dto_list_envelope->result) {
    cJSON *itemLocal = quote_dto_convertToJSON(resultListEntry->data);
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

quote_dto_list_envelope_t *quote_dto_list_envelope_parseFromJSON(cJSON *quote_dto_list_envelopeJSON){

    quote_dto_list_envelope_t *quote_dto_list_envelope_local_var = NULL;

    // define the local list for quote_dto_list_envelope->result
    list_t *resultList = NULL;

    // quote_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(quote_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // quote_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(quote_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // quote_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(quote_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // quote_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(quote_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // quote_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(quote_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // quote_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(quote_dto_list_envelopeJSON, "result");
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
        quote_dto_t *resultItem = quote_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    quote_dto_list_envelope_local_var = quote_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return quote_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            quote_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
