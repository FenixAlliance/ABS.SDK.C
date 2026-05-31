#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "bill_of_lading_dto_list_envelope.h"



bill_of_lading_dto_list_envelope_t *bill_of_lading_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    bill_of_lading_dto_list_envelope_t *bill_of_lading_dto_list_envelope_local_var = malloc(sizeof(bill_of_lading_dto_list_envelope_t));
    if (!bill_of_lading_dto_list_envelope_local_var) {
        return NULL;
    }
    bill_of_lading_dto_list_envelope_local_var->is_success = is_success;
    bill_of_lading_dto_list_envelope_local_var->error_message = error_message;
    bill_of_lading_dto_list_envelope_local_var->correlation_id = correlation_id;
    bill_of_lading_dto_list_envelope_local_var->timestamp = timestamp;
    bill_of_lading_dto_list_envelope_local_var->activity_id = activity_id;
    bill_of_lading_dto_list_envelope_local_var->result = result;

    return bill_of_lading_dto_list_envelope_local_var;
}


void bill_of_lading_dto_list_envelope_free(bill_of_lading_dto_list_envelope_t *bill_of_lading_dto_list_envelope) {
    if(NULL == bill_of_lading_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (bill_of_lading_dto_list_envelope->error_message) {
        free(bill_of_lading_dto_list_envelope->error_message);
        bill_of_lading_dto_list_envelope->error_message = NULL;
    }
    if (bill_of_lading_dto_list_envelope->correlation_id) {
        free(bill_of_lading_dto_list_envelope->correlation_id);
        bill_of_lading_dto_list_envelope->correlation_id = NULL;
    }
    if (bill_of_lading_dto_list_envelope->timestamp) {
        free(bill_of_lading_dto_list_envelope->timestamp);
        bill_of_lading_dto_list_envelope->timestamp = NULL;
    }
    if (bill_of_lading_dto_list_envelope->activity_id) {
        free(bill_of_lading_dto_list_envelope->activity_id);
        bill_of_lading_dto_list_envelope->activity_id = NULL;
    }
    if (bill_of_lading_dto_list_envelope->result) {
        list_ForEach(listEntry, bill_of_lading_dto_list_envelope->result) {
            bill_of_lading_dto_free(listEntry->data);
        }
        list_freeList(bill_of_lading_dto_list_envelope->result);
        bill_of_lading_dto_list_envelope->result = NULL;
    }
    free(bill_of_lading_dto_list_envelope);
}

cJSON *bill_of_lading_dto_list_envelope_convertToJSON(bill_of_lading_dto_list_envelope_t *bill_of_lading_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // bill_of_lading_dto_list_envelope->is_success
    if(bill_of_lading_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", bill_of_lading_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // bill_of_lading_dto_list_envelope->error_message
    if(bill_of_lading_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", bill_of_lading_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // bill_of_lading_dto_list_envelope->correlation_id
    if(bill_of_lading_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", bill_of_lading_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // bill_of_lading_dto_list_envelope->timestamp
    if(bill_of_lading_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", bill_of_lading_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // bill_of_lading_dto_list_envelope->activity_id
    if(bill_of_lading_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", bill_of_lading_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // bill_of_lading_dto_list_envelope->result
    if(bill_of_lading_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (bill_of_lading_dto_list_envelope->result) {
    list_ForEach(resultListEntry, bill_of_lading_dto_list_envelope->result) {
    cJSON *itemLocal = bill_of_lading_dto_convertToJSON(resultListEntry->data);
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

bill_of_lading_dto_list_envelope_t *bill_of_lading_dto_list_envelope_parseFromJSON(cJSON *bill_of_lading_dto_list_envelopeJSON){

    bill_of_lading_dto_list_envelope_t *bill_of_lading_dto_list_envelope_local_var = NULL;

    // define the local list for bill_of_lading_dto_list_envelope->result
    list_t *resultList = NULL;

    // bill_of_lading_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // bill_of_lading_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // bill_of_lading_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // bill_of_lading_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // bill_of_lading_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // bill_of_lading_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dto_list_envelopeJSON, "result");
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
        bill_of_lading_dto_t *resultItem = bill_of_lading_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    bill_of_lading_dto_list_envelope_local_var = bill_of_lading_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return bill_of_lading_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            bill_of_lading_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
