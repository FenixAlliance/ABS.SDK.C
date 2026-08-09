#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "share_transfer_dto_list_envelope.h"



share_transfer_dto_list_envelope_t *share_transfer_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    int http_status,
    char *error_code,
    list_t* validation_details,
    char *activity_id,
    list_t *result
    ) {
    share_transfer_dto_list_envelope_t *share_transfer_dto_list_envelope_local_var = malloc(sizeof(share_transfer_dto_list_envelope_t));
    if (!share_transfer_dto_list_envelope_local_var) {
        return NULL;
    }
    share_transfer_dto_list_envelope_local_var->is_success = is_success;
    share_transfer_dto_list_envelope_local_var->error_message = error_message;
    share_transfer_dto_list_envelope_local_var->correlation_id = correlation_id;
    share_transfer_dto_list_envelope_local_var->timestamp = timestamp;
    share_transfer_dto_list_envelope_local_var->http_status = http_status;
    share_transfer_dto_list_envelope_local_var->error_code = error_code;
    share_transfer_dto_list_envelope_local_var->validation_details = validation_details;
    share_transfer_dto_list_envelope_local_var->activity_id = activity_id;
    share_transfer_dto_list_envelope_local_var->result = result;

    return share_transfer_dto_list_envelope_local_var;
}


void share_transfer_dto_list_envelope_free(share_transfer_dto_list_envelope_t *share_transfer_dto_list_envelope) {
    if(NULL == share_transfer_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (share_transfer_dto_list_envelope->error_message) {
        free(share_transfer_dto_list_envelope->error_message);
        share_transfer_dto_list_envelope->error_message = NULL;
    }
    if (share_transfer_dto_list_envelope->correlation_id) {
        free(share_transfer_dto_list_envelope->correlation_id);
        share_transfer_dto_list_envelope->correlation_id = NULL;
    }
    if (share_transfer_dto_list_envelope->timestamp) {
        free(share_transfer_dto_list_envelope->timestamp);
        share_transfer_dto_list_envelope->timestamp = NULL;
    }
    if (share_transfer_dto_list_envelope->error_code) {
        free(share_transfer_dto_list_envelope->error_code);
        share_transfer_dto_list_envelope->error_code = NULL;
    }
    if (share_transfer_dto_list_envelope->validation_details) {
        list_ForEach(listEntry, share_transfer_dto_list_envelope->validation_details) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(share_transfer_dto_list_envelope->validation_details);
        share_transfer_dto_list_envelope->validation_details = NULL;
    }
    if (share_transfer_dto_list_envelope->activity_id) {
        free(share_transfer_dto_list_envelope->activity_id);
        share_transfer_dto_list_envelope->activity_id = NULL;
    }
    if (share_transfer_dto_list_envelope->result) {
        list_ForEach(listEntry, share_transfer_dto_list_envelope->result) {
            share_transfer_dto_free(listEntry->data);
        }
        list_freeList(share_transfer_dto_list_envelope->result);
        share_transfer_dto_list_envelope->result = NULL;
    }
    free(share_transfer_dto_list_envelope);
}

cJSON *share_transfer_dto_list_envelope_convertToJSON(share_transfer_dto_list_envelope_t *share_transfer_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // share_transfer_dto_list_envelope->is_success
    if(share_transfer_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", share_transfer_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // share_transfer_dto_list_envelope->error_message
    if(share_transfer_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", share_transfer_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // share_transfer_dto_list_envelope->correlation_id
    if(share_transfer_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", share_transfer_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // share_transfer_dto_list_envelope->timestamp
    if(share_transfer_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", share_transfer_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // share_transfer_dto_list_envelope->http_status
    if(share_transfer_dto_list_envelope->http_status) {
    if(cJSON_AddNumberToObject(item, "httpStatus", share_transfer_dto_list_envelope->http_status) == NULL) {
    goto fail; //Numeric
    }
    }


    // share_transfer_dto_list_envelope->error_code
    if(share_transfer_dto_list_envelope->error_code) {
    if(cJSON_AddStringToObject(item, "errorCode", share_transfer_dto_list_envelope->error_code) == NULL) {
    goto fail; //String
    }
    }


    // share_transfer_dto_list_envelope->validation_details
    if(share_transfer_dto_list_envelope->validation_details) {
    cJSON *validation_details = cJSON_AddObjectToObject(item, "validationDetails");
    if(validation_details == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = validation_details;
    listEntry_t *validation_detailsListEntry;
    if (share_transfer_dto_list_envelope->validation_details) {
    list_ForEach(validation_detailsListEntry, share_transfer_dto_list_envelope->validation_details) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)validation_detailsListEntry->data;
    }
    }
    }


    // share_transfer_dto_list_envelope->activity_id
    if(share_transfer_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", share_transfer_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // share_transfer_dto_list_envelope->result
    if(share_transfer_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (share_transfer_dto_list_envelope->result) {
    list_ForEach(resultListEntry, share_transfer_dto_list_envelope->result) {
    cJSON *itemLocal = share_transfer_dto_convertToJSON(resultListEntry->data);
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

share_transfer_dto_list_envelope_t *share_transfer_dto_list_envelope_parseFromJSON(cJSON *share_transfer_dto_list_envelopeJSON){

    share_transfer_dto_list_envelope_t *share_transfer_dto_list_envelope_local_var = NULL;

    // define the local map for share_transfer_dto_list_envelope->validation_details
    list_t *validation_detailsList = NULL;

    // define the local list for share_transfer_dto_list_envelope->result
    list_t *resultList = NULL;

    // share_transfer_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(share_transfer_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // share_transfer_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(share_transfer_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // share_transfer_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(share_transfer_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // share_transfer_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(share_transfer_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // share_transfer_dto_list_envelope->http_status
    cJSON *http_status = cJSON_GetObjectItemCaseSensitive(share_transfer_dto_list_envelopeJSON, "httpStatus");
    if (http_status) { 
    if(!cJSON_IsNumber(http_status))
    {
    goto end; //Numeric
    }
    }

    // share_transfer_dto_list_envelope->error_code
    cJSON *error_code = cJSON_GetObjectItemCaseSensitive(share_transfer_dto_list_envelopeJSON, "errorCode");
    if (error_code) { 
    if(!cJSON_IsString(error_code) && !cJSON_IsNull(error_code))
    {
    goto end; //String
    }
    }

    // share_transfer_dto_list_envelope->validation_details
    cJSON *validation_details = cJSON_GetObjectItemCaseSensitive(share_transfer_dto_list_envelopeJSON, "validationDetails");
    if (validation_details) { 
    cJSON *validation_details_local_map = NULL;
    if(!cJSON_IsObject(validation_details) && !cJSON_IsNull(validation_details))
    {
        goto end;//primitive map container
    }
    if(cJSON_IsObject(validation_details))
    {
        validation_detailsList = list_createList();
        keyValuePair_t *localMapKeyPair;
        cJSON_ArrayForEach(validation_details_local_map, validation_details)
        {
            cJSON *localMapObject = validation_details_local_map;
            list_addElement(validation_detailsList , localMapKeyPair);
        }
    }
    }

    // share_transfer_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(share_transfer_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // share_transfer_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(share_transfer_dto_list_envelopeJSON, "result");
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
        share_transfer_dto_t *resultItem = share_transfer_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    share_transfer_dto_list_envelope_local_var = share_transfer_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        http_status ? http_status->valuedouble : 0,
        error_code && !cJSON_IsNull(error_code) ? strdup(error_code->valuestring) : NULL,
        validation_details ? validation_detailsList : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return share_transfer_dto_list_envelope_local_var;
end:
    if (validation_detailsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, validation_detailsList) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free(localKeyValue->key);
            localKeyValue->key = NULL;
            keyValuePair_free(localKeyValue);
            localKeyValue = NULL;
        }
        list_freeList(validation_detailsList);
        validation_detailsList = NULL;
    }
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            share_transfer_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
