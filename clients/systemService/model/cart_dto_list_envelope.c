#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cart_dto_list_envelope.h"



cart_dto_list_envelope_t *cart_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    cart_dto_list_envelope_t *cart_dto_list_envelope_local_var = malloc(sizeof(cart_dto_list_envelope_t));
    if (!cart_dto_list_envelope_local_var) {
        return NULL;
    }
    cart_dto_list_envelope_local_var->is_success = is_success;
    cart_dto_list_envelope_local_var->error_message = error_message;
    cart_dto_list_envelope_local_var->correlation_id = correlation_id;
    cart_dto_list_envelope_local_var->timestamp = timestamp;
    cart_dto_list_envelope_local_var->activity_id = activity_id;
    cart_dto_list_envelope_local_var->result = result;

    return cart_dto_list_envelope_local_var;
}


void cart_dto_list_envelope_free(cart_dto_list_envelope_t *cart_dto_list_envelope) {
    if(NULL == cart_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (cart_dto_list_envelope->error_message) {
        free(cart_dto_list_envelope->error_message);
        cart_dto_list_envelope->error_message = NULL;
    }
    if (cart_dto_list_envelope->correlation_id) {
        free(cart_dto_list_envelope->correlation_id);
        cart_dto_list_envelope->correlation_id = NULL;
    }
    if (cart_dto_list_envelope->timestamp) {
        free(cart_dto_list_envelope->timestamp);
        cart_dto_list_envelope->timestamp = NULL;
    }
    if (cart_dto_list_envelope->activity_id) {
        free(cart_dto_list_envelope->activity_id);
        cart_dto_list_envelope->activity_id = NULL;
    }
    if (cart_dto_list_envelope->result) {
        list_ForEach(listEntry, cart_dto_list_envelope->result) {
            cart_dto_free(listEntry->data);
        }
        list_freeList(cart_dto_list_envelope->result);
        cart_dto_list_envelope->result = NULL;
    }
    free(cart_dto_list_envelope);
}

cJSON *cart_dto_list_envelope_convertToJSON(cart_dto_list_envelope_t *cart_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // cart_dto_list_envelope->is_success
    if(cart_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", cart_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // cart_dto_list_envelope->error_message
    if(cart_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", cart_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // cart_dto_list_envelope->correlation_id
    if(cart_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", cart_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // cart_dto_list_envelope->timestamp
    if(cart_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", cart_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // cart_dto_list_envelope->activity_id
    if(cart_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", cart_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // cart_dto_list_envelope->result
    if(cart_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (cart_dto_list_envelope->result) {
    list_ForEach(resultListEntry, cart_dto_list_envelope->result) {
    cJSON *itemLocal = cart_dto_convertToJSON(resultListEntry->data);
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

cart_dto_list_envelope_t *cart_dto_list_envelope_parseFromJSON(cJSON *cart_dto_list_envelopeJSON){

    cart_dto_list_envelope_t *cart_dto_list_envelope_local_var = NULL;

    // define the local list for cart_dto_list_envelope->result
    list_t *resultList = NULL;

    // cart_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(cart_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // cart_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(cart_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // cart_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(cart_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // cart_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(cart_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // cart_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(cart_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // cart_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(cart_dto_list_envelopeJSON, "result");
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
        cart_dto_t *resultItem = cart_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    cart_dto_list_envelope_local_var = cart_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return cart_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            cart_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
