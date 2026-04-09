#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "notification_dto_list_envelope.h"



notification_dto_list_envelope_t *notification_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    notification_dto_list_envelope_t *notification_dto_list_envelope_local_var = malloc(sizeof(notification_dto_list_envelope_t));
    if (!notification_dto_list_envelope_local_var) {
        return NULL;
    }
    notification_dto_list_envelope_local_var->is_success = is_success;
    notification_dto_list_envelope_local_var->error_message = error_message;
    notification_dto_list_envelope_local_var->correlation_id = correlation_id;
    notification_dto_list_envelope_local_var->timestamp = timestamp;
    notification_dto_list_envelope_local_var->activity_id = activity_id;
    notification_dto_list_envelope_local_var->result = result;

    return notification_dto_list_envelope_local_var;
}


void notification_dto_list_envelope_free(notification_dto_list_envelope_t *notification_dto_list_envelope) {
    if(NULL == notification_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (notification_dto_list_envelope->error_message) {
        free(notification_dto_list_envelope->error_message);
        notification_dto_list_envelope->error_message = NULL;
    }
    if (notification_dto_list_envelope->correlation_id) {
        free(notification_dto_list_envelope->correlation_id);
        notification_dto_list_envelope->correlation_id = NULL;
    }
    if (notification_dto_list_envelope->timestamp) {
        free(notification_dto_list_envelope->timestamp);
        notification_dto_list_envelope->timestamp = NULL;
    }
    if (notification_dto_list_envelope->activity_id) {
        free(notification_dto_list_envelope->activity_id);
        notification_dto_list_envelope->activity_id = NULL;
    }
    if (notification_dto_list_envelope->result) {
        list_ForEach(listEntry, notification_dto_list_envelope->result) {
            notification_dto_free(listEntry->data);
        }
        list_freeList(notification_dto_list_envelope->result);
        notification_dto_list_envelope->result = NULL;
    }
    free(notification_dto_list_envelope);
}

cJSON *notification_dto_list_envelope_convertToJSON(notification_dto_list_envelope_t *notification_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // notification_dto_list_envelope->is_success
    if(notification_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", notification_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // notification_dto_list_envelope->error_message
    if(notification_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", notification_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // notification_dto_list_envelope->correlation_id
    if(notification_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", notification_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // notification_dto_list_envelope->timestamp
    if(notification_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", notification_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // notification_dto_list_envelope->activity_id
    if(notification_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", notification_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // notification_dto_list_envelope->result
    if(notification_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (notification_dto_list_envelope->result) {
    list_ForEach(resultListEntry, notification_dto_list_envelope->result) {
    cJSON *itemLocal = notification_dto_convertToJSON(resultListEntry->data);
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

notification_dto_list_envelope_t *notification_dto_list_envelope_parseFromJSON(cJSON *notification_dto_list_envelopeJSON){

    notification_dto_list_envelope_t *notification_dto_list_envelope_local_var = NULL;

    // define the local list for notification_dto_list_envelope->result
    list_t *resultList = NULL;

    // notification_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(notification_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // notification_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(notification_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // notification_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(notification_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // notification_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(notification_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // notification_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(notification_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // notification_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(notification_dto_list_envelopeJSON, "result");
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
        notification_dto_t *resultItem = notification_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    notification_dto_list_envelope_local_var = notification_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return notification_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            notification_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
