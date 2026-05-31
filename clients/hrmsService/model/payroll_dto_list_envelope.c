#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "payroll_dto_list_envelope.h"



payroll_dto_list_envelope_t *payroll_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    payroll_dto_list_envelope_t *payroll_dto_list_envelope_local_var = malloc(sizeof(payroll_dto_list_envelope_t));
    if (!payroll_dto_list_envelope_local_var) {
        return NULL;
    }
    payroll_dto_list_envelope_local_var->is_success = is_success;
    payroll_dto_list_envelope_local_var->error_message = error_message;
    payroll_dto_list_envelope_local_var->correlation_id = correlation_id;
    payroll_dto_list_envelope_local_var->timestamp = timestamp;
    payroll_dto_list_envelope_local_var->activity_id = activity_id;
    payroll_dto_list_envelope_local_var->result = result;

    return payroll_dto_list_envelope_local_var;
}


void payroll_dto_list_envelope_free(payroll_dto_list_envelope_t *payroll_dto_list_envelope) {
    if(NULL == payroll_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (payroll_dto_list_envelope->error_message) {
        free(payroll_dto_list_envelope->error_message);
        payroll_dto_list_envelope->error_message = NULL;
    }
    if (payroll_dto_list_envelope->correlation_id) {
        free(payroll_dto_list_envelope->correlation_id);
        payroll_dto_list_envelope->correlation_id = NULL;
    }
    if (payroll_dto_list_envelope->timestamp) {
        free(payroll_dto_list_envelope->timestamp);
        payroll_dto_list_envelope->timestamp = NULL;
    }
    if (payroll_dto_list_envelope->activity_id) {
        free(payroll_dto_list_envelope->activity_id);
        payroll_dto_list_envelope->activity_id = NULL;
    }
    if (payroll_dto_list_envelope->result) {
        list_ForEach(listEntry, payroll_dto_list_envelope->result) {
            payroll_dto_free(listEntry->data);
        }
        list_freeList(payroll_dto_list_envelope->result);
        payroll_dto_list_envelope->result = NULL;
    }
    free(payroll_dto_list_envelope);
}

cJSON *payroll_dto_list_envelope_convertToJSON(payroll_dto_list_envelope_t *payroll_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // payroll_dto_list_envelope->is_success
    if(payroll_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", payroll_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // payroll_dto_list_envelope->error_message
    if(payroll_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", payroll_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // payroll_dto_list_envelope->correlation_id
    if(payroll_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", payroll_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // payroll_dto_list_envelope->timestamp
    if(payroll_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", payroll_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // payroll_dto_list_envelope->activity_id
    if(payroll_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", payroll_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // payroll_dto_list_envelope->result
    if(payroll_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (payroll_dto_list_envelope->result) {
    list_ForEach(resultListEntry, payroll_dto_list_envelope->result) {
    cJSON *itemLocal = payroll_dto_convertToJSON(resultListEntry->data);
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

payroll_dto_list_envelope_t *payroll_dto_list_envelope_parseFromJSON(cJSON *payroll_dto_list_envelopeJSON){

    payroll_dto_list_envelope_t *payroll_dto_list_envelope_local_var = NULL;

    // define the local list for payroll_dto_list_envelope->result
    list_t *resultList = NULL;

    // payroll_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(payroll_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // payroll_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(payroll_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // payroll_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(payroll_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // payroll_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(payroll_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // payroll_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(payroll_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // payroll_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(payroll_dto_list_envelopeJSON, "result");
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
        payroll_dto_t *resultItem = payroll_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    payroll_dto_list_envelope_local_var = payroll_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return payroll_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            payroll_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
