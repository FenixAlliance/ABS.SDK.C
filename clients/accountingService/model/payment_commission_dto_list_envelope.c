#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "payment_commission_dto_list_envelope.h"



payment_commission_dto_list_envelope_t *payment_commission_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    payment_commission_dto_list_envelope_t *payment_commission_dto_list_envelope_local_var = malloc(sizeof(payment_commission_dto_list_envelope_t));
    if (!payment_commission_dto_list_envelope_local_var) {
        return NULL;
    }
    payment_commission_dto_list_envelope_local_var->is_success = is_success;
    payment_commission_dto_list_envelope_local_var->error_message = error_message;
    payment_commission_dto_list_envelope_local_var->correlation_id = correlation_id;
    payment_commission_dto_list_envelope_local_var->timestamp = timestamp;
    payment_commission_dto_list_envelope_local_var->activity_id = activity_id;
    payment_commission_dto_list_envelope_local_var->result = result;

    return payment_commission_dto_list_envelope_local_var;
}


void payment_commission_dto_list_envelope_free(payment_commission_dto_list_envelope_t *payment_commission_dto_list_envelope) {
    if(NULL == payment_commission_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (payment_commission_dto_list_envelope->error_message) {
        free(payment_commission_dto_list_envelope->error_message);
        payment_commission_dto_list_envelope->error_message = NULL;
    }
    if (payment_commission_dto_list_envelope->correlation_id) {
        free(payment_commission_dto_list_envelope->correlation_id);
        payment_commission_dto_list_envelope->correlation_id = NULL;
    }
    if (payment_commission_dto_list_envelope->timestamp) {
        free(payment_commission_dto_list_envelope->timestamp);
        payment_commission_dto_list_envelope->timestamp = NULL;
    }
    if (payment_commission_dto_list_envelope->activity_id) {
        free(payment_commission_dto_list_envelope->activity_id);
        payment_commission_dto_list_envelope->activity_id = NULL;
    }
    if (payment_commission_dto_list_envelope->result) {
        list_ForEach(listEntry, payment_commission_dto_list_envelope->result) {
            payment_commission_dto_free(listEntry->data);
        }
        list_freeList(payment_commission_dto_list_envelope->result);
        payment_commission_dto_list_envelope->result = NULL;
    }
    free(payment_commission_dto_list_envelope);
}

cJSON *payment_commission_dto_list_envelope_convertToJSON(payment_commission_dto_list_envelope_t *payment_commission_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // payment_commission_dto_list_envelope->is_success
    if(payment_commission_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", payment_commission_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // payment_commission_dto_list_envelope->error_message
    if(payment_commission_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", payment_commission_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // payment_commission_dto_list_envelope->correlation_id
    if(payment_commission_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", payment_commission_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // payment_commission_dto_list_envelope->timestamp
    if(payment_commission_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", payment_commission_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // payment_commission_dto_list_envelope->activity_id
    if(payment_commission_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", payment_commission_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // payment_commission_dto_list_envelope->result
    if(payment_commission_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (payment_commission_dto_list_envelope->result) {
    list_ForEach(resultListEntry, payment_commission_dto_list_envelope->result) {
    cJSON *itemLocal = payment_commission_dto_convertToJSON(resultListEntry->data);
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

payment_commission_dto_list_envelope_t *payment_commission_dto_list_envelope_parseFromJSON(cJSON *payment_commission_dto_list_envelopeJSON){

    payment_commission_dto_list_envelope_t *payment_commission_dto_list_envelope_local_var = NULL;

    // define the local list for payment_commission_dto_list_envelope->result
    list_t *resultList = NULL;

    // payment_commission_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(payment_commission_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // payment_commission_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(payment_commission_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // payment_commission_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(payment_commission_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // payment_commission_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(payment_commission_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // payment_commission_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(payment_commission_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // payment_commission_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(payment_commission_dto_list_envelopeJSON, "result");
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
        payment_commission_dto_t *resultItem = payment_commission_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    payment_commission_dto_list_envelope_local_var = payment_commission_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return payment_commission_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            payment_commission_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
