#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "account_relation_dto_list_envelope.h"



account_relation_dto_list_envelope_t *account_relation_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    account_relation_dto_list_envelope_t *account_relation_dto_list_envelope_local_var = malloc(sizeof(account_relation_dto_list_envelope_t));
    if (!account_relation_dto_list_envelope_local_var) {
        return NULL;
    }
    account_relation_dto_list_envelope_local_var->is_success = is_success;
    account_relation_dto_list_envelope_local_var->error_message = error_message;
    account_relation_dto_list_envelope_local_var->correlation_id = correlation_id;
    account_relation_dto_list_envelope_local_var->timestamp = timestamp;
    account_relation_dto_list_envelope_local_var->activity_id = activity_id;
    account_relation_dto_list_envelope_local_var->result = result;

    return account_relation_dto_list_envelope_local_var;
}


void account_relation_dto_list_envelope_free(account_relation_dto_list_envelope_t *account_relation_dto_list_envelope) {
    if(NULL == account_relation_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (account_relation_dto_list_envelope->error_message) {
        free(account_relation_dto_list_envelope->error_message);
        account_relation_dto_list_envelope->error_message = NULL;
    }
    if (account_relation_dto_list_envelope->correlation_id) {
        free(account_relation_dto_list_envelope->correlation_id);
        account_relation_dto_list_envelope->correlation_id = NULL;
    }
    if (account_relation_dto_list_envelope->timestamp) {
        free(account_relation_dto_list_envelope->timestamp);
        account_relation_dto_list_envelope->timestamp = NULL;
    }
    if (account_relation_dto_list_envelope->activity_id) {
        free(account_relation_dto_list_envelope->activity_id);
        account_relation_dto_list_envelope->activity_id = NULL;
    }
    if (account_relation_dto_list_envelope->result) {
        list_ForEach(listEntry, account_relation_dto_list_envelope->result) {
            account_relation_dto_free(listEntry->data);
        }
        list_freeList(account_relation_dto_list_envelope->result);
        account_relation_dto_list_envelope->result = NULL;
    }
    free(account_relation_dto_list_envelope);
}

cJSON *account_relation_dto_list_envelope_convertToJSON(account_relation_dto_list_envelope_t *account_relation_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // account_relation_dto_list_envelope->is_success
    if(account_relation_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", account_relation_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // account_relation_dto_list_envelope->error_message
    if(account_relation_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", account_relation_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // account_relation_dto_list_envelope->correlation_id
    if(account_relation_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", account_relation_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // account_relation_dto_list_envelope->timestamp
    if(account_relation_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", account_relation_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // account_relation_dto_list_envelope->activity_id
    if(account_relation_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", account_relation_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // account_relation_dto_list_envelope->result
    if(account_relation_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (account_relation_dto_list_envelope->result) {
    list_ForEach(resultListEntry, account_relation_dto_list_envelope->result) {
    cJSON *itemLocal = account_relation_dto_convertToJSON(resultListEntry->data);
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

account_relation_dto_list_envelope_t *account_relation_dto_list_envelope_parseFromJSON(cJSON *account_relation_dto_list_envelopeJSON){

    account_relation_dto_list_envelope_t *account_relation_dto_list_envelope_local_var = NULL;

    // define the local list for account_relation_dto_list_envelope->result
    list_t *resultList = NULL;

    // account_relation_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(account_relation_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // account_relation_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(account_relation_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // account_relation_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(account_relation_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // account_relation_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(account_relation_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // account_relation_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(account_relation_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // account_relation_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(account_relation_dto_list_envelopeJSON, "result");
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
        account_relation_dto_t *resultItem = account_relation_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    account_relation_dto_list_envelope_local_var = account_relation_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return account_relation_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            account_relation_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
