#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_line_dto_list_envelope.h"



order_line_dto_list_envelope_t *order_line_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    order_line_dto_list_envelope_t *order_line_dto_list_envelope_local_var = malloc(sizeof(order_line_dto_list_envelope_t));
    if (!order_line_dto_list_envelope_local_var) {
        return NULL;
    }
    order_line_dto_list_envelope_local_var->is_success = is_success;
    order_line_dto_list_envelope_local_var->error_message = error_message;
    order_line_dto_list_envelope_local_var->correlation_id = correlation_id;
    order_line_dto_list_envelope_local_var->timestamp = timestamp;
    order_line_dto_list_envelope_local_var->activity_id = activity_id;
    order_line_dto_list_envelope_local_var->result = result;

    return order_line_dto_list_envelope_local_var;
}


void order_line_dto_list_envelope_free(order_line_dto_list_envelope_t *order_line_dto_list_envelope) {
    if(NULL == order_line_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (order_line_dto_list_envelope->error_message) {
        free(order_line_dto_list_envelope->error_message);
        order_line_dto_list_envelope->error_message = NULL;
    }
    if (order_line_dto_list_envelope->correlation_id) {
        free(order_line_dto_list_envelope->correlation_id);
        order_line_dto_list_envelope->correlation_id = NULL;
    }
    if (order_line_dto_list_envelope->timestamp) {
        free(order_line_dto_list_envelope->timestamp);
        order_line_dto_list_envelope->timestamp = NULL;
    }
    if (order_line_dto_list_envelope->activity_id) {
        free(order_line_dto_list_envelope->activity_id);
        order_line_dto_list_envelope->activity_id = NULL;
    }
    if (order_line_dto_list_envelope->result) {
        list_ForEach(listEntry, order_line_dto_list_envelope->result) {
            order_line_dto_free(listEntry->data);
        }
        list_freeList(order_line_dto_list_envelope->result);
        order_line_dto_list_envelope->result = NULL;
    }
    free(order_line_dto_list_envelope);
}

cJSON *order_line_dto_list_envelope_convertToJSON(order_line_dto_list_envelope_t *order_line_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // order_line_dto_list_envelope->is_success
    if(order_line_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", order_line_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // order_line_dto_list_envelope->error_message
    if(order_line_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", order_line_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // order_line_dto_list_envelope->correlation_id
    if(order_line_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", order_line_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // order_line_dto_list_envelope->timestamp
    if(order_line_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", order_line_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // order_line_dto_list_envelope->activity_id
    if(order_line_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", order_line_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // order_line_dto_list_envelope->result
    if(order_line_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (order_line_dto_list_envelope->result) {
    list_ForEach(resultListEntry, order_line_dto_list_envelope->result) {
    cJSON *itemLocal = order_line_dto_convertToJSON(resultListEntry->data);
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

order_line_dto_list_envelope_t *order_line_dto_list_envelope_parseFromJSON(cJSON *order_line_dto_list_envelopeJSON){

    order_line_dto_list_envelope_t *order_line_dto_list_envelope_local_var = NULL;

    // define the local list for order_line_dto_list_envelope->result
    list_t *resultList = NULL;

    // order_line_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(order_line_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // order_line_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(order_line_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // order_line_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(order_line_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // order_line_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(order_line_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // order_line_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(order_line_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // order_line_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(order_line_dto_list_envelopeJSON, "result");
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
        order_line_dto_t *resultItem = order_line_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    order_line_dto_list_envelope_local_var = order_line_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return order_line_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            order_line_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
