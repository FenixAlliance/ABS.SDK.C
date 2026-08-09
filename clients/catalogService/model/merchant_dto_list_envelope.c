#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "merchant_dto_list_envelope.h"



merchant_dto_list_envelope_t *merchant_dto_list_envelope_create(
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
    merchant_dto_list_envelope_t *merchant_dto_list_envelope_local_var = malloc(sizeof(merchant_dto_list_envelope_t));
    if (!merchant_dto_list_envelope_local_var) {
        return NULL;
    }
    merchant_dto_list_envelope_local_var->is_success = is_success;
    merchant_dto_list_envelope_local_var->error_message = error_message;
    merchant_dto_list_envelope_local_var->correlation_id = correlation_id;
    merchant_dto_list_envelope_local_var->timestamp = timestamp;
    merchant_dto_list_envelope_local_var->http_status = http_status;
    merchant_dto_list_envelope_local_var->error_code = error_code;
    merchant_dto_list_envelope_local_var->validation_details = validation_details;
    merchant_dto_list_envelope_local_var->activity_id = activity_id;
    merchant_dto_list_envelope_local_var->result = result;

    return merchant_dto_list_envelope_local_var;
}


void merchant_dto_list_envelope_free(merchant_dto_list_envelope_t *merchant_dto_list_envelope) {
    if(NULL == merchant_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (merchant_dto_list_envelope->error_message) {
        free(merchant_dto_list_envelope->error_message);
        merchant_dto_list_envelope->error_message = NULL;
    }
    if (merchant_dto_list_envelope->correlation_id) {
        free(merchant_dto_list_envelope->correlation_id);
        merchant_dto_list_envelope->correlation_id = NULL;
    }
    if (merchant_dto_list_envelope->timestamp) {
        free(merchant_dto_list_envelope->timestamp);
        merchant_dto_list_envelope->timestamp = NULL;
    }
    if (merchant_dto_list_envelope->error_code) {
        free(merchant_dto_list_envelope->error_code);
        merchant_dto_list_envelope->error_code = NULL;
    }
    if (merchant_dto_list_envelope->validation_details) {
        list_ForEach(listEntry, merchant_dto_list_envelope->validation_details) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(merchant_dto_list_envelope->validation_details);
        merchant_dto_list_envelope->validation_details = NULL;
    }
    if (merchant_dto_list_envelope->activity_id) {
        free(merchant_dto_list_envelope->activity_id);
        merchant_dto_list_envelope->activity_id = NULL;
    }
    if (merchant_dto_list_envelope->result) {
        list_ForEach(listEntry, merchant_dto_list_envelope->result) {
            merchant_dto_free(listEntry->data);
        }
        list_freeList(merchant_dto_list_envelope->result);
        merchant_dto_list_envelope->result = NULL;
    }
    free(merchant_dto_list_envelope);
}

cJSON *merchant_dto_list_envelope_convertToJSON(merchant_dto_list_envelope_t *merchant_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // merchant_dto_list_envelope->is_success
    if(merchant_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", merchant_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // merchant_dto_list_envelope->error_message
    if(merchant_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", merchant_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // merchant_dto_list_envelope->correlation_id
    if(merchant_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", merchant_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // merchant_dto_list_envelope->timestamp
    if(merchant_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", merchant_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // merchant_dto_list_envelope->http_status
    if(merchant_dto_list_envelope->http_status) {
    if(cJSON_AddNumberToObject(item, "httpStatus", merchant_dto_list_envelope->http_status) == NULL) {
    goto fail; //Numeric
    }
    }


    // merchant_dto_list_envelope->error_code
    if(merchant_dto_list_envelope->error_code) {
    if(cJSON_AddStringToObject(item, "errorCode", merchant_dto_list_envelope->error_code) == NULL) {
    goto fail; //String
    }
    }


    // merchant_dto_list_envelope->validation_details
    if(merchant_dto_list_envelope->validation_details) {
    cJSON *validation_details = cJSON_AddObjectToObject(item, "validationDetails");
    if(validation_details == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = validation_details;
    listEntry_t *validation_detailsListEntry;
    if (merchant_dto_list_envelope->validation_details) {
    list_ForEach(validation_detailsListEntry, merchant_dto_list_envelope->validation_details) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)validation_detailsListEntry->data;
    }
    }
    }


    // merchant_dto_list_envelope->activity_id
    if(merchant_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", merchant_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // merchant_dto_list_envelope->result
    if(merchant_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (merchant_dto_list_envelope->result) {
    list_ForEach(resultListEntry, merchant_dto_list_envelope->result) {
    cJSON *itemLocal = merchant_dto_convertToJSON(resultListEntry->data);
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

merchant_dto_list_envelope_t *merchant_dto_list_envelope_parseFromJSON(cJSON *merchant_dto_list_envelopeJSON){

    merchant_dto_list_envelope_t *merchant_dto_list_envelope_local_var = NULL;

    // define the local map for merchant_dto_list_envelope->validation_details
    list_t *validation_detailsList = NULL;

    // define the local list for merchant_dto_list_envelope->result
    list_t *resultList = NULL;

    // merchant_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(merchant_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // merchant_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(merchant_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // merchant_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(merchant_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // merchant_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(merchant_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // merchant_dto_list_envelope->http_status
    cJSON *http_status = cJSON_GetObjectItemCaseSensitive(merchant_dto_list_envelopeJSON, "httpStatus");
    if (http_status) { 
    if(!cJSON_IsNumber(http_status))
    {
    goto end; //Numeric
    }
    }

    // merchant_dto_list_envelope->error_code
    cJSON *error_code = cJSON_GetObjectItemCaseSensitive(merchant_dto_list_envelopeJSON, "errorCode");
    if (error_code) { 
    if(!cJSON_IsString(error_code) && !cJSON_IsNull(error_code))
    {
    goto end; //String
    }
    }

    // merchant_dto_list_envelope->validation_details
    cJSON *validation_details = cJSON_GetObjectItemCaseSensitive(merchant_dto_list_envelopeJSON, "validationDetails");
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

    // merchant_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(merchant_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // merchant_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(merchant_dto_list_envelopeJSON, "result");
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
        merchant_dto_t *resultItem = merchant_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    merchant_dto_list_envelope_local_var = merchant_dto_list_envelope_create (
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

    return merchant_dto_list_envelope_local_var;
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
            merchant_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
