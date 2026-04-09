#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "subscription_dto_i_read_only_list_envelope.h"



subscription_dto_i_read_only_list_envelope_t *subscription_dto_i_read_only_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    subscription_dto_i_read_only_list_envelope_t *subscription_dto_i_read_only_list_envelope_local_var = malloc(sizeof(subscription_dto_i_read_only_list_envelope_t));
    if (!subscription_dto_i_read_only_list_envelope_local_var) {
        return NULL;
    }
    subscription_dto_i_read_only_list_envelope_local_var->is_success = is_success;
    subscription_dto_i_read_only_list_envelope_local_var->error_message = error_message;
    subscription_dto_i_read_only_list_envelope_local_var->correlation_id = correlation_id;
    subscription_dto_i_read_only_list_envelope_local_var->timestamp = timestamp;
    subscription_dto_i_read_only_list_envelope_local_var->activity_id = activity_id;
    subscription_dto_i_read_only_list_envelope_local_var->result = result;

    return subscription_dto_i_read_only_list_envelope_local_var;
}


void subscription_dto_i_read_only_list_envelope_free(subscription_dto_i_read_only_list_envelope_t *subscription_dto_i_read_only_list_envelope) {
    if(NULL == subscription_dto_i_read_only_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (subscription_dto_i_read_only_list_envelope->error_message) {
        free(subscription_dto_i_read_only_list_envelope->error_message);
        subscription_dto_i_read_only_list_envelope->error_message = NULL;
    }
    if (subscription_dto_i_read_only_list_envelope->correlation_id) {
        free(subscription_dto_i_read_only_list_envelope->correlation_id);
        subscription_dto_i_read_only_list_envelope->correlation_id = NULL;
    }
    if (subscription_dto_i_read_only_list_envelope->timestamp) {
        free(subscription_dto_i_read_only_list_envelope->timestamp);
        subscription_dto_i_read_only_list_envelope->timestamp = NULL;
    }
    if (subscription_dto_i_read_only_list_envelope->activity_id) {
        free(subscription_dto_i_read_only_list_envelope->activity_id);
        subscription_dto_i_read_only_list_envelope->activity_id = NULL;
    }
    if (subscription_dto_i_read_only_list_envelope->result) {
        list_ForEach(listEntry, subscription_dto_i_read_only_list_envelope->result) {
            subscription_dto_free(listEntry->data);
        }
        list_freeList(subscription_dto_i_read_only_list_envelope->result);
        subscription_dto_i_read_only_list_envelope->result = NULL;
    }
    free(subscription_dto_i_read_only_list_envelope);
}

cJSON *subscription_dto_i_read_only_list_envelope_convertToJSON(subscription_dto_i_read_only_list_envelope_t *subscription_dto_i_read_only_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // subscription_dto_i_read_only_list_envelope->is_success
    if(subscription_dto_i_read_only_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", subscription_dto_i_read_only_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // subscription_dto_i_read_only_list_envelope->error_message
    if(subscription_dto_i_read_only_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", subscription_dto_i_read_only_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // subscription_dto_i_read_only_list_envelope->correlation_id
    if(subscription_dto_i_read_only_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", subscription_dto_i_read_only_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // subscription_dto_i_read_only_list_envelope->timestamp
    if(subscription_dto_i_read_only_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", subscription_dto_i_read_only_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // subscription_dto_i_read_only_list_envelope->activity_id
    if(subscription_dto_i_read_only_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", subscription_dto_i_read_only_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // subscription_dto_i_read_only_list_envelope->result
    if(subscription_dto_i_read_only_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (subscription_dto_i_read_only_list_envelope->result) {
    list_ForEach(resultListEntry, subscription_dto_i_read_only_list_envelope->result) {
    cJSON *itemLocal = subscription_dto_convertToJSON(resultListEntry->data);
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

subscription_dto_i_read_only_list_envelope_t *subscription_dto_i_read_only_list_envelope_parseFromJSON(cJSON *subscription_dto_i_read_only_list_envelopeJSON){

    subscription_dto_i_read_only_list_envelope_t *subscription_dto_i_read_only_list_envelope_local_var = NULL;

    // define the local list for subscription_dto_i_read_only_list_envelope->result
    list_t *resultList = NULL;

    // subscription_dto_i_read_only_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(subscription_dto_i_read_only_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // subscription_dto_i_read_only_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(subscription_dto_i_read_only_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // subscription_dto_i_read_only_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(subscription_dto_i_read_only_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // subscription_dto_i_read_only_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(subscription_dto_i_read_only_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // subscription_dto_i_read_only_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(subscription_dto_i_read_only_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // subscription_dto_i_read_only_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(subscription_dto_i_read_only_list_envelopeJSON, "result");
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
        subscription_dto_t *resultItem = subscription_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    subscription_dto_i_read_only_list_envelope_local_var = subscription_dto_i_read_only_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return subscription_dto_i_read_only_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            subscription_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
