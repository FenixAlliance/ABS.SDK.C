#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "receipt_dto_i_read_only_list_envelope.h"



receipt_dto_i_read_only_list_envelope_t *receipt_dto_i_read_only_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    receipt_dto_i_read_only_list_envelope_t *receipt_dto_i_read_only_list_envelope_local_var = malloc(sizeof(receipt_dto_i_read_only_list_envelope_t));
    if (!receipt_dto_i_read_only_list_envelope_local_var) {
        return NULL;
    }
    receipt_dto_i_read_only_list_envelope_local_var->is_success = is_success;
    receipt_dto_i_read_only_list_envelope_local_var->error_message = error_message;
    receipt_dto_i_read_only_list_envelope_local_var->correlation_id = correlation_id;
    receipt_dto_i_read_only_list_envelope_local_var->timestamp = timestamp;
    receipt_dto_i_read_only_list_envelope_local_var->activity_id = activity_id;
    receipt_dto_i_read_only_list_envelope_local_var->result = result;

    return receipt_dto_i_read_only_list_envelope_local_var;
}


void receipt_dto_i_read_only_list_envelope_free(receipt_dto_i_read_only_list_envelope_t *receipt_dto_i_read_only_list_envelope) {
    if(NULL == receipt_dto_i_read_only_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (receipt_dto_i_read_only_list_envelope->error_message) {
        free(receipt_dto_i_read_only_list_envelope->error_message);
        receipt_dto_i_read_only_list_envelope->error_message = NULL;
    }
    if (receipt_dto_i_read_only_list_envelope->correlation_id) {
        free(receipt_dto_i_read_only_list_envelope->correlation_id);
        receipt_dto_i_read_only_list_envelope->correlation_id = NULL;
    }
    if (receipt_dto_i_read_only_list_envelope->timestamp) {
        free(receipt_dto_i_read_only_list_envelope->timestamp);
        receipt_dto_i_read_only_list_envelope->timestamp = NULL;
    }
    if (receipt_dto_i_read_only_list_envelope->activity_id) {
        free(receipt_dto_i_read_only_list_envelope->activity_id);
        receipt_dto_i_read_only_list_envelope->activity_id = NULL;
    }
    if (receipt_dto_i_read_only_list_envelope->result) {
        list_ForEach(listEntry, receipt_dto_i_read_only_list_envelope->result) {
            receipt_dto_free(listEntry->data);
        }
        list_freeList(receipt_dto_i_read_only_list_envelope->result);
        receipt_dto_i_read_only_list_envelope->result = NULL;
    }
    free(receipt_dto_i_read_only_list_envelope);
}

cJSON *receipt_dto_i_read_only_list_envelope_convertToJSON(receipt_dto_i_read_only_list_envelope_t *receipt_dto_i_read_only_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // receipt_dto_i_read_only_list_envelope->is_success
    if(receipt_dto_i_read_only_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", receipt_dto_i_read_only_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // receipt_dto_i_read_only_list_envelope->error_message
    if(receipt_dto_i_read_only_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", receipt_dto_i_read_only_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // receipt_dto_i_read_only_list_envelope->correlation_id
    if(receipt_dto_i_read_only_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", receipt_dto_i_read_only_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // receipt_dto_i_read_only_list_envelope->timestamp
    if(receipt_dto_i_read_only_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", receipt_dto_i_read_only_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // receipt_dto_i_read_only_list_envelope->activity_id
    if(receipt_dto_i_read_only_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", receipt_dto_i_read_only_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // receipt_dto_i_read_only_list_envelope->result
    if(receipt_dto_i_read_only_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (receipt_dto_i_read_only_list_envelope->result) {
    list_ForEach(resultListEntry, receipt_dto_i_read_only_list_envelope->result) {
    cJSON *itemLocal = receipt_dto_convertToJSON(resultListEntry->data);
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

receipt_dto_i_read_only_list_envelope_t *receipt_dto_i_read_only_list_envelope_parseFromJSON(cJSON *receipt_dto_i_read_only_list_envelopeJSON){

    receipt_dto_i_read_only_list_envelope_t *receipt_dto_i_read_only_list_envelope_local_var = NULL;

    // define the local list for receipt_dto_i_read_only_list_envelope->result
    list_t *resultList = NULL;

    // receipt_dto_i_read_only_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(receipt_dto_i_read_only_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // receipt_dto_i_read_only_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(receipt_dto_i_read_only_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // receipt_dto_i_read_only_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(receipt_dto_i_read_only_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // receipt_dto_i_read_only_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(receipt_dto_i_read_only_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // receipt_dto_i_read_only_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(receipt_dto_i_read_only_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // receipt_dto_i_read_only_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(receipt_dto_i_read_only_list_envelopeJSON, "result");
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
        receipt_dto_t *resultItem = receipt_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    receipt_dto_i_read_only_list_envelope_local_var = receipt_dto_i_read_only_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return receipt_dto_i_read_only_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            receipt_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
