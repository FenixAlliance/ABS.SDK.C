#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "asset_transfer_dto_list_envelope.h"



asset_transfer_dto_list_envelope_t *asset_transfer_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    asset_transfer_dto_list_envelope_t *asset_transfer_dto_list_envelope_local_var = malloc(sizeof(asset_transfer_dto_list_envelope_t));
    if (!asset_transfer_dto_list_envelope_local_var) {
        return NULL;
    }
    asset_transfer_dto_list_envelope_local_var->is_success = is_success;
    asset_transfer_dto_list_envelope_local_var->error_message = error_message;
    asset_transfer_dto_list_envelope_local_var->correlation_id = correlation_id;
    asset_transfer_dto_list_envelope_local_var->timestamp = timestamp;
    asset_transfer_dto_list_envelope_local_var->activity_id = activity_id;
    asset_transfer_dto_list_envelope_local_var->result = result;

    return asset_transfer_dto_list_envelope_local_var;
}


void asset_transfer_dto_list_envelope_free(asset_transfer_dto_list_envelope_t *asset_transfer_dto_list_envelope) {
    if(NULL == asset_transfer_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (asset_transfer_dto_list_envelope->error_message) {
        free(asset_transfer_dto_list_envelope->error_message);
        asset_transfer_dto_list_envelope->error_message = NULL;
    }
    if (asset_transfer_dto_list_envelope->correlation_id) {
        free(asset_transfer_dto_list_envelope->correlation_id);
        asset_transfer_dto_list_envelope->correlation_id = NULL;
    }
    if (asset_transfer_dto_list_envelope->timestamp) {
        free(asset_transfer_dto_list_envelope->timestamp);
        asset_transfer_dto_list_envelope->timestamp = NULL;
    }
    if (asset_transfer_dto_list_envelope->activity_id) {
        free(asset_transfer_dto_list_envelope->activity_id);
        asset_transfer_dto_list_envelope->activity_id = NULL;
    }
    if (asset_transfer_dto_list_envelope->result) {
        list_ForEach(listEntry, asset_transfer_dto_list_envelope->result) {
            asset_transfer_dto_free(listEntry->data);
        }
        list_freeList(asset_transfer_dto_list_envelope->result);
        asset_transfer_dto_list_envelope->result = NULL;
    }
    free(asset_transfer_dto_list_envelope);
}

cJSON *asset_transfer_dto_list_envelope_convertToJSON(asset_transfer_dto_list_envelope_t *asset_transfer_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // asset_transfer_dto_list_envelope->is_success
    if(asset_transfer_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", asset_transfer_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // asset_transfer_dto_list_envelope->error_message
    if(asset_transfer_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", asset_transfer_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // asset_transfer_dto_list_envelope->correlation_id
    if(asset_transfer_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", asset_transfer_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_transfer_dto_list_envelope->timestamp
    if(asset_transfer_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", asset_transfer_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // asset_transfer_dto_list_envelope->activity_id
    if(asset_transfer_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", asset_transfer_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_transfer_dto_list_envelope->result
    if(asset_transfer_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (asset_transfer_dto_list_envelope->result) {
    list_ForEach(resultListEntry, asset_transfer_dto_list_envelope->result) {
    cJSON *itemLocal = asset_transfer_dto_convertToJSON(resultListEntry->data);
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

asset_transfer_dto_list_envelope_t *asset_transfer_dto_list_envelope_parseFromJSON(cJSON *asset_transfer_dto_list_envelopeJSON){

    asset_transfer_dto_list_envelope_t *asset_transfer_dto_list_envelope_local_var = NULL;

    // define the local list for asset_transfer_dto_list_envelope->result
    list_t *resultList = NULL;

    // asset_transfer_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(asset_transfer_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // asset_transfer_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(asset_transfer_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // asset_transfer_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(asset_transfer_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // asset_transfer_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(asset_transfer_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // asset_transfer_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(asset_transfer_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // asset_transfer_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(asset_transfer_dto_list_envelopeJSON, "result");
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
        asset_transfer_dto_t *resultItem = asset_transfer_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    asset_transfer_dto_list_envelope_local_var = asset_transfer_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return asset_transfer_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            asset_transfer_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
