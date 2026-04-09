#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "webhook_request_dto_list_envelope.h"



webhook_request_dto_list_envelope_t *webhook_request_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    webhook_request_dto_list_envelope_t *webhook_request_dto_list_envelope_local_var = malloc(sizeof(webhook_request_dto_list_envelope_t));
    if (!webhook_request_dto_list_envelope_local_var) {
        return NULL;
    }
    webhook_request_dto_list_envelope_local_var->is_success = is_success;
    webhook_request_dto_list_envelope_local_var->error_message = error_message;
    webhook_request_dto_list_envelope_local_var->correlation_id = correlation_id;
    webhook_request_dto_list_envelope_local_var->timestamp = timestamp;
    webhook_request_dto_list_envelope_local_var->activity_id = activity_id;
    webhook_request_dto_list_envelope_local_var->result = result;

    return webhook_request_dto_list_envelope_local_var;
}


void webhook_request_dto_list_envelope_free(webhook_request_dto_list_envelope_t *webhook_request_dto_list_envelope) {
    if(NULL == webhook_request_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (webhook_request_dto_list_envelope->error_message) {
        free(webhook_request_dto_list_envelope->error_message);
        webhook_request_dto_list_envelope->error_message = NULL;
    }
    if (webhook_request_dto_list_envelope->correlation_id) {
        free(webhook_request_dto_list_envelope->correlation_id);
        webhook_request_dto_list_envelope->correlation_id = NULL;
    }
    if (webhook_request_dto_list_envelope->timestamp) {
        free(webhook_request_dto_list_envelope->timestamp);
        webhook_request_dto_list_envelope->timestamp = NULL;
    }
    if (webhook_request_dto_list_envelope->activity_id) {
        free(webhook_request_dto_list_envelope->activity_id);
        webhook_request_dto_list_envelope->activity_id = NULL;
    }
    if (webhook_request_dto_list_envelope->result) {
        list_ForEach(listEntry, webhook_request_dto_list_envelope->result) {
            webhook_request_dto_free(listEntry->data);
        }
        list_freeList(webhook_request_dto_list_envelope->result);
        webhook_request_dto_list_envelope->result = NULL;
    }
    free(webhook_request_dto_list_envelope);
}

cJSON *webhook_request_dto_list_envelope_convertToJSON(webhook_request_dto_list_envelope_t *webhook_request_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // webhook_request_dto_list_envelope->is_success
    if(webhook_request_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", webhook_request_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // webhook_request_dto_list_envelope->error_message
    if(webhook_request_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", webhook_request_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // webhook_request_dto_list_envelope->correlation_id
    if(webhook_request_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", webhook_request_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // webhook_request_dto_list_envelope->timestamp
    if(webhook_request_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", webhook_request_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // webhook_request_dto_list_envelope->activity_id
    if(webhook_request_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", webhook_request_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // webhook_request_dto_list_envelope->result
    if(webhook_request_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (webhook_request_dto_list_envelope->result) {
    list_ForEach(resultListEntry, webhook_request_dto_list_envelope->result) {
    cJSON *itemLocal = webhook_request_dto_convertToJSON(resultListEntry->data);
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

webhook_request_dto_list_envelope_t *webhook_request_dto_list_envelope_parseFromJSON(cJSON *webhook_request_dto_list_envelopeJSON){

    webhook_request_dto_list_envelope_t *webhook_request_dto_list_envelope_local_var = NULL;

    // define the local list for webhook_request_dto_list_envelope->result
    list_t *resultList = NULL;

    // webhook_request_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(webhook_request_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // webhook_request_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(webhook_request_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // webhook_request_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(webhook_request_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // webhook_request_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(webhook_request_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // webhook_request_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(webhook_request_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // webhook_request_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(webhook_request_dto_list_envelopeJSON, "result");
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
        webhook_request_dto_t *resultItem = webhook_request_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    webhook_request_dto_list_envelope_local_var = webhook_request_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return webhook_request_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            webhook_request_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
