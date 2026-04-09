#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "unit_dto_list_envelope.h"



unit_dto_list_envelope_t *unit_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    unit_dto_list_envelope_t *unit_dto_list_envelope_local_var = malloc(sizeof(unit_dto_list_envelope_t));
    if (!unit_dto_list_envelope_local_var) {
        return NULL;
    }
    unit_dto_list_envelope_local_var->is_success = is_success;
    unit_dto_list_envelope_local_var->error_message = error_message;
    unit_dto_list_envelope_local_var->correlation_id = correlation_id;
    unit_dto_list_envelope_local_var->timestamp = timestamp;
    unit_dto_list_envelope_local_var->activity_id = activity_id;
    unit_dto_list_envelope_local_var->result = result;

    return unit_dto_list_envelope_local_var;
}


void unit_dto_list_envelope_free(unit_dto_list_envelope_t *unit_dto_list_envelope) {
    if(NULL == unit_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (unit_dto_list_envelope->error_message) {
        free(unit_dto_list_envelope->error_message);
        unit_dto_list_envelope->error_message = NULL;
    }
    if (unit_dto_list_envelope->correlation_id) {
        free(unit_dto_list_envelope->correlation_id);
        unit_dto_list_envelope->correlation_id = NULL;
    }
    if (unit_dto_list_envelope->timestamp) {
        free(unit_dto_list_envelope->timestamp);
        unit_dto_list_envelope->timestamp = NULL;
    }
    if (unit_dto_list_envelope->activity_id) {
        free(unit_dto_list_envelope->activity_id);
        unit_dto_list_envelope->activity_id = NULL;
    }
    if (unit_dto_list_envelope->result) {
        list_ForEach(listEntry, unit_dto_list_envelope->result) {
            unit_dto_free(listEntry->data);
        }
        list_freeList(unit_dto_list_envelope->result);
        unit_dto_list_envelope->result = NULL;
    }
    free(unit_dto_list_envelope);
}

cJSON *unit_dto_list_envelope_convertToJSON(unit_dto_list_envelope_t *unit_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // unit_dto_list_envelope->is_success
    if(unit_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", unit_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // unit_dto_list_envelope->error_message
    if(unit_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", unit_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // unit_dto_list_envelope->correlation_id
    if(unit_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", unit_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // unit_dto_list_envelope->timestamp
    if(unit_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", unit_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // unit_dto_list_envelope->activity_id
    if(unit_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", unit_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // unit_dto_list_envelope->result
    if(unit_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (unit_dto_list_envelope->result) {
    list_ForEach(resultListEntry, unit_dto_list_envelope->result) {
    cJSON *itemLocal = unit_dto_convertToJSON(resultListEntry->data);
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

unit_dto_list_envelope_t *unit_dto_list_envelope_parseFromJSON(cJSON *unit_dto_list_envelopeJSON){

    unit_dto_list_envelope_t *unit_dto_list_envelope_local_var = NULL;

    // define the local list for unit_dto_list_envelope->result
    list_t *resultList = NULL;

    // unit_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(unit_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // unit_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(unit_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // unit_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(unit_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // unit_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(unit_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // unit_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(unit_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // unit_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(unit_dto_list_envelopeJSON, "result");
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
        unit_dto_t *resultItem = unit_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    unit_dto_list_envelope_local_var = unit_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return unit_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            unit_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
