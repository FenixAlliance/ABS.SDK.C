#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "private_message_dto_list_envelope.h"



private_message_dto_list_envelope_t *private_message_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    private_message_dto_list_envelope_t *private_message_dto_list_envelope_local_var = malloc(sizeof(private_message_dto_list_envelope_t));
    if (!private_message_dto_list_envelope_local_var) {
        return NULL;
    }
    private_message_dto_list_envelope_local_var->is_success = is_success;
    private_message_dto_list_envelope_local_var->error_message = error_message;
    private_message_dto_list_envelope_local_var->correlation_id = correlation_id;
    private_message_dto_list_envelope_local_var->timestamp = timestamp;
    private_message_dto_list_envelope_local_var->activity_id = activity_id;
    private_message_dto_list_envelope_local_var->result = result;

    return private_message_dto_list_envelope_local_var;
}


void private_message_dto_list_envelope_free(private_message_dto_list_envelope_t *private_message_dto_list_envelope) {
    if(NULL == private_message_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (private_message_dto_list_envelope->error_message) {
        free(private_message_dto_list_envelope->error_message);
        private_message_dto_list_envelope->error_message = NULL;
    }
    if (private_message_dto_list_envelope->correlation_id) {
        free(private_message_dto_list_envelope->correlation_id);
        private_message_dto_list_envelope->correlation_id = NULL;
    }
    if (private_message_dto_list_envelope->timestamp) {
        free(private_message_dto_list_envelope->timestamp);
        private_message_dto_list_envelope->timestamp = NULL;
    }
    if (private_message_dto_list_envelope->activity_id) {
        free(private_message_dto_list_envelope->activity_id);
        private_message_dto_list_envelope->activity_id = NULL;
    }
    if (private_message_dto_list_envelope->result) {
        list_ForEach(listEntry, private_message_dto_list_envelope->result) {
            private_message_dto_free(listEntry->data);
        }
        list_freeList(private_message_dto_list_envelope->result);
        private_message_dto_list_envelope->result = NULL;
    }
    free(private_message_dto_list_envelope);
}

cJSON *private_message_dto_list_envelope_convertToJSON(private_message_dto_list_envelope_t *private_message_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // private_message_dto_list_envelope->is_success
    if(private_message_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", private_message_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // private_message_dto_list_envelope->error_message
    if(private_message_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", private_message_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // private_message_dto_list_envelope->correlation_id
    if(private_message_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", private_message_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // private_message_dto_list_envelope->timestamp
    if(private_message_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", private_message_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // private_message_dto_list_envelope->activity_id
    if(private_message_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", private_message_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // private_message_dto_list_envelope->result
    if(private_message_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (private_message_dto_list_envelope->result) {
    list_ForEach(resultListEntry, private_message_dto_list_envelope->result) {
    cJSON *itemLocal = private_message_dto_convertToJSON(resultListEntry->data);
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

private_message_dto_list_envelope_t *private_message_dto_list_envelope_parseFromJSON(cJSON *private_message_dto_list_envelopeJSON){

    private_message_dto_list_envelope_t *private_message_dto_list_envelope_local_var = NULL;

    // define the local list for private_message_dto_list_envelope->result
    list_t *resultList = NULL;

    // private_message_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(private_message_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // private_message_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(private_message_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // private_message_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(private_message_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // private_message_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(private_message_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // private_message_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(private_message_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // private_message_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(private_message_dto_list_envelopeJSON, "result");
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
        private_message_dto_t *resultItem = private_message_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    private_message_dto_list_envelope_local_var = private_message_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return private_message_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            private_message_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
