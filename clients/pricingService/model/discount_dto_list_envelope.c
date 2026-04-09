#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "discount_dto_list_envelope.h"



discount_dto_list_envelope_t *discount_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    discount_dto_list_envelope_t *discount_dto_list_envelope_local_var = malloc(sizeof(discount_dto_list_envelope_t));
    if (!discount_dto_list_envelope_local_var) {
        return NULL;
    }
    discount_dto_list_envelope_local_var->is_success = is_success;
    discount_dto_list_envelope_local_var->error_message = error_message;
    discount_dto_list_envelope_local_var->correlation_id = correlation_id;
    discount_dto_list_envelope_local_var->timestamp = timestamp;
    discount_dto_list_envelope_local_var->activity_id = activity_id;
    discount_dto_list_envelope_local_var->result = result;

    return discount_dto_list_envelope_local_var;
}


void discount_dto_list_envelope_free(discount_dto_list_envelope_t *discount_dto_list_envelope) {
    if(NULL == discount_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (discount_dto_list_envelope->error_message) {
        free(discount_dto_list_envelope->error_message);
        discount_dto_list_envelope->error_message = NULL;
    }
    if (discount_dto_list_envelope->correlation_id) {
        free(discount_dto_list_envelope->correlation_id);
        discount_dto_list_envelope->correlation_id = NULL;
    }
    if (discount_dto_list_envelope->timestamp) {
        free(discount_dto_list_envelope->timestamp);
        discount_dto_list_envelope->timestamp = NULL;
    }
    if (discount_dto_list_envelope->activity_id) {
        free(discount_dto_list_envelope->activity_id);
        discount_dto_list_envelope->activity_id = NULL;
    }
    if (discount_dto_list_envelope->result) {
        list_ForEach(listEntry, discount_dto_list_envelope->result) {
            discount_dto_free(listEntry->data);
        }
        list_freeList(discount_dto_list_envelope->result);
        discount_dto_list_envelope->result = NULL;
    }
    free(discount_dto_list_envelope);
}

cJSON *discount_dto_list_envelope_convertToJSON(discount_dto_list_envelope_t *discount_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // discount_dto_list_envelope->is_success
    if(discount_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", discount_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // discount_dto_list_envelope->error_message
    if(discount_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", discount_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // discount_dto_list_envelope->correlation_id
    if(discount_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", discount_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // discount_dto_list_envelope->timestamp
    if(discount_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", discount_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // discount_dto_list_envelope->activity_id
    if(discount_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", discount_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // discount_dto_list_envelope->result
    if(discount_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (discount_dto_list_envelope->result) {
    list_ForEach(resultListEntry, discount_dto_list_envelope->result) {
    cJSON *itemLocal = discount_dto_convertToJSON(resultListEntry->data);
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

discount_dto_list_envelope_t *discount_dto_list_envelope_parseFromJSON(cJSON *discount_dto_list_envelopeJSON){

    discount_dto_list_envelope_t *discount_dto_list_envelope_local_var = NULL;

    // define the local list for discount_dto_list_envelope->result
    list_t *resultList = NULL;

    // discount_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(discount_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // discount_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(discount_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // discount_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(discount_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // discount_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(discount_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // discount_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(discount_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // discount_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(discount_dto_list_envelopeJSON, "result");
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
        discount_dto_t *resultItem = discount_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    discount_dto_list_envelope_local_var = discount_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return discount_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            discount_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
