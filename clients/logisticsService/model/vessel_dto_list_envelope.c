#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vessel_dto_list_envelope.h"



vessel_dto_list_envelope_t *vessel_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    vessel_dto_list_envelope_t *vessel_dto_list_envelope_local_var = malloc(sizeof(vessel_dto_list_envelope_t));
    if (!vessel_dto_list_envelope_local_var) {
        return NULL;
    }
    vessel_dto_list_envelope_local_var->is_success = is_success;
    vessel_dto_list_envelope_local_var->error_message = error_message;
    vessel_dto_list_envelope_local_var->correlation_id = correlation_id;
    vessel_dto_list_envelope_local_var->timestamp = timestamp;
    vessel_dto_list_envelope_local_var->activity_id = activity_id;
    vessel_dto_list_envelope_local_var->result = result;

    return vessel_dto_list_envelope_local_var;
}


void vessel_dto_list_envelope_free(vessel_dto_list_envelope_t *vessel_dto_list_envelope) {
    if(NULL == vessel_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (vessel_dto_list_envelope->error_message) {
        free(vessel_dto_list_envelope->error_message);
        vessel_dto_list_envelope->error_message = NULL;
    }
    if (vessel_dto_list_envelope->correlation_id) {
        free(vessel_dto_list_envelope->correlation_id);
        vessel_dto_list_envelope->correlation_id = NULL;
    }
    if (vessel_dto_list_envelope->timestamp) {
        free(vessel_dto_list_envelope->timestamp);
        vessel_dto_list_envelope->timestamp = NULL;
    }
    if (vessel_dto_list_envelope->activity_id) {
        free(vessel_dto_list_envelope->activity_id);
        vessel_dto_list_envelope->activity_id = NULL;
    }
    if (vessel_dto_list_envelope->result) {
        list_ForEach(listEntry, vessel_dto_list_envelope->result) {
            vessel_dto_free(listEntry->data);
        }
        list_freeList(vessel_dto_list_envelope->result);
        vessel_dto_list_envelope->result = NULL;
    }
    free(vessel_dto_list_envelope);
}

cJSON *vessel_dto_list_envelope_convertToJSON(vessel_dto_list_envelope_t *vessel_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // vessel_dto_list_envelope->is_success
    if(vessel_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", vessel_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // vessel_dto_list_envelope->error_message
    if(vessel_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", vessel_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // vessel_dto_list_envelope->correlation_id
    if(vessel_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", vessel_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // vessel_dto_list_envelope->timestamp
    if(vessel_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", vessel_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // vessel_dto_list_envelope->activity_id
    if(vessel_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", vessel_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // vessel_dto_list_envelope->result
    if(vessel_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (vessel_dto_list_envelope->result) {
    list_ForEach(resultListEntry, vessel_dto_list_envelope->result) {
    cJSON *itemLocal = vessel_dto_convertToJSON(resultListEntry->data);
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

vessel_dto_list_envelope_t *vessel_dto_list_envelope_parseFromJSON(cJSON *vessel_dto_list_envelopeJSON){

    vessel_dto_list_envelope_t *vessel_dto_list_envelope_local_var = NULL;

    // define the local list for vessel_dto_list_envelope->result
    list_t *resultList = NULL;

    // vessel_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(vessel_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // vessel_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(vessel_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // vessel_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(vessel_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // vessel_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(vessel_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // vessel_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(vessel_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // vessel_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(vessel_dto_list_envelopeJSON, "result");
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
        vessel_dto_t *resultItem = vessel_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    vessel_dto_list_envelope_local_var = vessel_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return vessel_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            vessel_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
