#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "transaction_category_dto_list_envelope.h"



transaction_category_dto_list_envelope_t *transaction_category_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    transaction_category_dto_list_envelope_t *transaction_category_dto_list_envelope_local_var = malloc(sizeof(transaction_category_dto_list_envelope_t));
    if (!transaction_category_dto_list_envelope_local_var) {
        return NULL;
    }
    transaction_category_dto_list_envelope_local_var->is_success = is_success;
    transaction_category_dto_list_envelope_local_var->error_message = error_message;
    transaction_category_dto_list_envelope_local_var->correlation_id = correlation_id;
    transaction_category_dto_list_envelope_local_var->timestamp = timestamp;
    transaction_category_dto_list_envelope_local_var->activity_id = activity_id;
    transaction_category_dto_list_envelope_local_var->result = result;

    return transaction_category_dto_list_envelope_local_var;
}


void transaction_category_dto_list_envelope_free(transaction_category_dto_list_envelope_t *transaction_category_dto_list_envelope) {
    if(NULL == transaction_category_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (transaction_category_dto_list_envelope->error_message) {
        free(transaction_category_dto_list_envelope->error_message);
        transaction_category_dto_list_envelope->error_message = NULL;
    }
    if (transaction_category_dto_list_envelope->correlation_id) {
        free(transaction_category_dto_list_envelope->correlation_id);
        transaction_category_dto_list_envelope->correlation_id = NULL;
    }
    if (transaction_category_dto_list_envelope->timestamp) {
        free(transaction_category_dto_list_envelope->timestamp);
        transaction_category_dto_list_envelope->timestamp = NULL;
    }
    if (transaction_category_dto_list_envelope->activity_id) {
        free(transaction_category_dto_list_envelope->activity_id);
        transaction_category_dto_list_envelope->activity_id = NULL;
    }
    if (transaction_category_dto_list_envelope->result) {
        list_ForEach(listEntry, transaction_category_dto_list_envelope->result) {
            transaction_category_dto_free(listEntry->data);
        }
        list_freeList(transaction_category_dto_list_envelope->result);
        transaction_category_dto_list_envelope->result = NULL;
    }
    free(transaction_category_dto_list_envelope);
}

cJSON *transaction_category_dto_list_envelope_convertToJSON(transaction_category_dto_list_envelope_t *transaction_category_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // transaction_category_dto_list_envelope->is_success
    if(transaction_category_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", transaction_category_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // transaction_category_dto_list_envelope->error_message
    if(transaction_category_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", transaction_category_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // transaction_category_dto_list_envelope->correlation_id
    if(transaction_category_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", transaction_category_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // transaction_category_dto_list_envelope->timestamp
    if(transaction_category_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", transaction_category_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // transaction_category_dto_list_envelope->activity_id
    if(transaction_category_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", transaction_category_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // transaction_category_dto_list_envelope->result
    if(transaction_category_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (transaction_category_dto_list_envelope->result) {
    list_ForEach(resultListEntry, transaction_category_dto_list_envelope->result) {
    cJSON *itemLocal = transaction_category_dto_convertToJSON(resultListEntry->data);
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

transaction_category_dto_list_envelope_t *transaction_category_dto_list_envelope_parseFromJSON(cJSON *transaction_category_dto_list_envelopeJSON){

    transaction_category_dto_list_envelope_t *transaction_category_dto_list_envelope_local_var = NULL;

    // define the local list for transaction_category_dto_list_envelope->result
    list_t *resultList = NULL;

    // transaction_category_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(transaction_category_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // transaction_category_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(transaction_category_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // transaction_category_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(transaction_category_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // transaction_category_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(transaction_category_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // transaction_category_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(transaction_category_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // transaction_category_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(transaction_category_dto_list_envelopeJSON, "result");
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
        transaction_category_dto_t *resultItem = transaction_category_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    transaction_category_dto_list_envelope_local_var = transaction_category_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return transaction_category_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            transaction_category_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
