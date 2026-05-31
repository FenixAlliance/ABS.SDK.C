#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "shift_dto_list_envelope.h"



shift_dto_list_envelope_t *shift_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    shift_dto_list_envelope_t *shift_dto_list_envelope_local_var = malloc(sizeof(shift_dto_list_envelope_t));
    if (!shift_dto_list_envelope_local_var) {
        return NULL;
    }
    shift_dto_list_envelope_local_var->is_success = is_success;
    shift_dto_list_envelope_local_var->error_message = error_message;
    shift_dto_list_envelope_local_var->correlation_id = correlation_id;
    shift_dto_list_envelope_local_var->timestamp = timestamp;
    shift_dto_list_envelope_local_var->activity_id = activity_id;
    shift_dto_list_envelope_local_var->result = result;

    return shift_dto_list_envelope_local_var;
}


void shift_dto_list_envelope_free(shift_dto_list_envelope_t *shift_dto_list_envelope) {
    if(NULL == shift_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (shift_dto_list_envelope->error_message) {
        free(shift_dto_list_envelope->error_message);
        shift_dto_list_envelope->error_message = NULL;
    }
    if (shift_dto_list_envelope->correlation_id) {
        free(shift_dto_list_envelope->correlation_id);
        shift_dto_list_envelope->correlation_id = NULL;
    }
    if (shift_dto_list_envelope->timestamp) {
        free(shift_dto_list_envelope->timestamp);
        shift_dto_list_envelope->timestamp = NULL;
    }
    if (shift_dto_list_envelope->activity_id) {
        free(shift_dto_list_envelope->activity_id);
        shift_dto_list_envelope->activity_id = NULL;
    }
    if (shift_dto_list_envelope->result) {
        list_ForEach(listEntry, shift_dto_list_envelope->result) {
            shift_dto_free(listEntry->data);
        }
        list_freeList(shift_dto_list_envelope->result);
        shift_dto_list_envelope->result = NULL;
    }
    free(shift_dto_list_envelope);
}

cJSON *shift_dto_list_envelope_convertToJSON(shift_dto_list_envelope_t *shift_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // shift_dto_list_envelope->is_success
    if(shift_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", shift_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // shift_dto_list_envelope->error_message
    if(shift_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", shift_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // shift_dto_list_envelope->correlation_id
    if(shift_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", shift_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // shift_dto_list_envelope->timestamp
    if(shift_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", shift_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // shift_dto_list_envelope->activity_id
    if(shift_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", shift_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // shift_dto_list_envelope->result
    if(shift_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (shift_dto_list_envelope->result) {
    list_ForEach(resultListEntry, shift_dto_list_envelope->result) {
    cJSON *itemLocal = shift_dto_convertToJSON(resultListEntry->data);
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

shift_dto_list_envelope_t *shift_dto_list_envelope_parseFromJSON(cJSON *shift_dto_list_envelopeJSON){

    shift_dto_list_envelope_t *shift_dto_list_envelope_local_var = NULL;

    // define the local list for shift_dto_list_envelope->result
    list_t *resultList = NULL;

    // shift_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(shift_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // shift_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(shift_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // shift_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(shift_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // shift_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(shift_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // shift_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(shift_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // shift_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(shift_dto_list_envelopeJSON, "result");
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
        shift_dto_t *resultItem = shift_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    shift_dto_list_envelope_local_var = shift_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return shift_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            shift_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
