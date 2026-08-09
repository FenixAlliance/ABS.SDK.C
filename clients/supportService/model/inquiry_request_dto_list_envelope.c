#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inquiry_request_dto_list_envelope.h"



inquiry_request_dto_list_envelope_t *inquiry_request_dto_list_envelope_create(
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
    inquiry_request_dto_list_envelope_t *inquiry_request_dto_list_envelope_local_var = malloc(sizeof(inquiry_request_dto_list_envelope_t));
    if (!inquiry_request_dto_list_envelope_local_var) {
        return NULL;
    }
    inquiry_request_dto_list_envelope_local_var->is_success = is_success;
    inquiry_request_dto_list_envelope_local_var->error_message = error_message;
    inquiry_request_dto_list_envelope_local_var->correlation_id = correlation_id;
    inquiry_request_dto_list_envelope_local_var->timestamp = timestamp;
    inquiry_request_dto_list_envelope_local_var->http_status = http_status;
    inquiry_request_dto_list_envelope_local_var->error_code = error_code;
    inquiry_request_dto_list_envelope_local_var->validation_details = validation_details;
    inquiry_request_dto_list_envelope_local_var->activity_id = activity_id;
    inquiry_request_dto_list_envelope_local_var->result = result;

    return inquiry_request_dto_list_envelope_local_var;
}


void inquiry_request_dto_list_envelope_free(inquiry_request_dto_list_envelope_t *inquiry_request_dto_list_envelope) {
    if(NULL == inquiry_request_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (inquiry_request_dto_list_envelope->error_message) {
        free(inquiry_request_dto_list_envelope->error_message);
        inquiry_request_dto_list_envelope->error_message = NULL;
    }
    if (inquiry_request_dto_list_envelope->correlation_id) {
        free(inquiry_request_dto_list_envelope->correlation_id);
        inquiry_request_dto_list_envelope->correlation_id = NULL;
    }
    if (inquiry_request_dto_list_envelope->timestamp) {
        free(inquiry_request_dto_list_envelope->timestamp);
        inquiry_request_dto_list_envelope->timestamp = NULL;
    }
    if (inquiry_request_dto_list_envelope->error_code) {
        free(inquiry_request_dto_list_envelope->error_code);
        inquiry_request_dto_list_envelope->error_code = NULL;
    }
    if (inquiry_request_dto_list_envelope->validation_details) {
        list_ForEach(listEntry, inquiry_request_dto_list_envelope->validation_details) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(inquiry_request_dto_list_envelope->validation_details);
        inquiry_request_dto_list_envelope->validation_details = NULL;
    }
    if (inquiry_request_dto_list_envelope->activity_id) {
        free(inquiry_request_dto_list_envelope->activity_id);
        inquiry_request_dto_list_envelope->activity_id = NULL;
    }
    if (inquiry_request_dto_list_envelope->result) {
        list_ForEach(listEntry, inquiry_request_dto_list_envelope->result) {
            inquiry_request_dto_free(listEntry->data);
        }
        list_freeList(inquiry_request_dto_list_envelope->result);
        inquiry_request_dto_list_envelope->result = NULL;
    }
    free(inquiry_request_dto_list_envelope);
}

cJSON *inquiry_request_dto_list_envelope_convertToJSON(inquiry_request_dto_list_envelope_t *inquiry_request_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // inquiry_request_dto_list_envelope->is_success
    if(inquiry_request_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", inquiry_request_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // inquiry_request_dto_list_envelope->error_message
    if(inquiry_request_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", inquiry_request_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // inquiry_request_dto_list_envelope->correlation_id
    if(inquiry_request_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", inquiry_request_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // inquiry_request_dto_list_envelope->timestamp
    if(inquiry_request_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", inquiry_request_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // inquiry_request_dto_list_envelope->http_status
    if(inquiry_request_dto_list_envelope->http_status) {
    if(cJSON_AddNumberToObject(item, "httpStatus", inquiry_request_dto_list_envelope->http_status) == NULL) {
    goto fail; //Numeric
    }
    }


    // inquiry_request_dto_list_envelope->error_code
    if(inquiry_request_dto_list_envelope->error_code) {
    if(cJSON_AddStringToObject(item, "errorCode", inquiry_request_dto_list_envelope->error_code) == NULL) {
    goto fail; //String
    }
    }


    // inquiry_request_dto_list_envelope->validation_details
    if(inquiry_request_dto_list_envelope->validation_details) {
    cJSON *validation_details = cJSON_AddObjectToObject(item, "validationDetails");
    if(validation_details == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = validation_details;
    listEntry_t *validation_detailsListEntry;
    if (inquiry_request_dto_list_envelope->validation_details) {
    list_ForEach(validation_detailsListEntry, inquiry_request_dto_list_envelope->validation_details) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)validation_detailsListEntry->data;
    }
    }
    }


    // inquiry_request_dto_list_envelope->activity_id
    if(inquiry_request_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", inquiry_request_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // inquiry_request_dto_list_envelope->result
    if(inquiry_request_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (inquiry_request_dto_list_envelope->result) {
    list_ForEach(resultListEntry, inquiry_request_dto_list_envelope->result) {
    cJSON *itemLocal = inquiry_request_dto_convertToJSON(resultListEntry->data);
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

inquiry_request_dto_list_envelope_t *inquiry_request_dto_list_envelope_parseFromJSON(cJSON *inquiry_request_dto_list_envelopeJSON){

    inquiry_request_dto_list_envelope_t *inquiry_request_dto_list_envelope_local_var = NULL;

    // define the local map for inquiry_request_dto_list_envelope->validation_details
    list_t *validation_detailsList = NULL;

    // define the local list for inquiry_request_dto_list_envelope->result
    list_t *resultList = NULL;

    // inquiry_request_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(inquiry_request_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // inquiry_request_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(inquiry_request_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // inquiry_request_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(inquiry_request_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // inquiry_request_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(inquiry_request_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // inquiry_request_dto_list_envelope->http_status
    cJSON *http_status = cJSON_GetObjectItemCaseSensitive(inquiry_request_dto_list_envelopeJSON, "httpStatus");
    if (http_status) { 
    if(!cJSON_IsNumber(http_status))
    {
    goto end; //Numeric
    }
    }

    // inquiry_request_dto_list_envelope->error_code
    cJSON *error_code = cJSON_GetObjectItemCaseSensitive(inquiry_request_dto_list_envelopeJSON, "errorCode");
    if (error_code) { 
    if(!cJSON_IsString(error_code) && !cJSON_IsNull(error_code))
    {
    goto end; //String
    }
    }

    // inquiry_request_dto_list_envelope->validation_details
    cJSON *validation_details = cJSON_GetObjectItemCaseSensitive(inquiry_request_dto_list_envelopeJSON, "validationDetails");
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

    // inquiry_request_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(inquiry_request_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // inquiry_request_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(inquiry_request_dto_list_envelopeJSON, "result");
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
        inquiry_request_dto_t *resultItem = inquiry_request_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    inquiry_request_dto_list_envelope_local_var = inquiry_request_dto_list_envelope_create (
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

    return inquiry_request_dto_list_envelope_local_var;
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
            inquiry_request_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
