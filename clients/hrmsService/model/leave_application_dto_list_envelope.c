#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "leave_application_dto_list_envelope.h"



leave_application_dto_list_envelope_t *leave_application_dto_list_envelope_create(
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
    leave_application_dto_list_envelope_t *leave_application_dto_list_envelope_local_var = malloc(sizeof(leave_application_dto_list_envelope_t));
    if (!leave_application_dto_list_envelope_local_var) {
        return NULL;
    }
    leave_application_dto_list_envelope_local_var->is_success = is_success;
    leave_application_dto_list_envelope_local_var->error_message = error_message;
    leave_application_dto_list_envelope_local_var->correlation_id = correlation_id;
    leave_application_dto_list_envelope_local_var->timestamp = timestamp;
    leave_application_dto_list_envelope_local_var->http_status = http_status;
    leave_application_dto_list_envelope_local_var->error_code = error_code;
    leave_application_dto_list_envelope_local_var->validation_details = validation_details;
    leave_application_dto_list_envelope_local_var->activity_id = activity_id;
    leave_application_dto_list_envelope_local_var->result = result;

    return leave_application_dto_list_envelope_local_var;
}


void leave_application_dto_list_envelope_free(leave_application_dto_list_envelope_t *leave_application_dto_list_envelope) {
    if(NULL == leave_application_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (leave_application_dto_list_envelope->error_message) {
        free(leave_application_dto_list_envelope->error_message);
        leave_application_dto_list_envelope->error_message = NULL;
    }
    if (leave_application_dto_list_envelope->correlation_id) {
        free(leave_application_dto_list_envelope->correlation_id);
        leave_application_dto_list_envelope->correlation_id = NULL;
    }
    if (leave_application_dto_list_envelope->timestamp) {
        free(leave_application_dto_list_envelope->timestamp);
        leave_application_dto_list_envelope->timestamp = NULL;
    }
    if (leave_application_dto_list_envelope->error_code) {
        free(leave_application_dto_list_envelope->error_code);
        leave_application_dto_list_envelope->error_code = NULL;
    }
    if (leave_application_dto_list_envelope->validation_details) {
        list_ForEach(listEntry, leave_application_dto_list_envelope->validation_details) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(leave_application_dto_list_envelope->validation_details);
        leave_application_dto_list_envelope->validation_details = NULL;
    }
    if (leave_application_dto_list_envelope->activity_id) {
        free(leave_application_dto_list_envelope->activity_id);
        leave_application_dto_list_envelope->activity_id = NULL;
    }
    if (leave_application_dto_list_envelope->result) {
        list_ForEach(listEntry, leave_application_dto_list_envelope->result) {
            leave_application_dto_free(listEntry->data);
        }
        list_freeList(leave_application_dto_list_envelope->result);
        leave_application_dto_list_envelope->result = NULL;
    }
    free(leave_application_dto_list_envelope);
}

cJSON *leave_application_dto_list_envelope_convertToJSON(leave_application_dto_list_envelope_t *leave_application_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // leave_application_dto_list_envelope->is_success
    if(leave_application_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", leave_application_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // leave_application_dto_list_envelope->error_message
    if(leave_application_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", leave_application_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // leave_application_dto_list_envelope->correlation_id
    if(leave_application_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", leave_application_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // leave_application_dto_list_envelope->timestamp
    if(leave_application_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", leave_application_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // leave_application_dto_list_envelope->http_status
    if(leave_application_dto_list_envelope->http_status) {
    if(cJSON_AddNumberToObject(item, "httpStatus", leave_application_dto_list_envelope->http_status) == NULL) {
    goto fail; //Numeric
    }
    }


    // leave_application_dto_list_envelope->error_code
    if(leave_application_dto_list_envelope->error_code) {
    if(cJSON_AddStringToObject(item, "errorCode", leave_application_dto_list_envelope->error_code) == NULL) {
    goto fail; //String
    }
    }


    // leave_application_dto_list_envelope->validation_details
    if(leave_application_dto_list_envelope->validation_details) {
    cJSON *validation_details = cJSON_AddObjectToObject(item, "validationDetails");
    if(validation_details == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = validation_details;
    listEntry_t *validation_detailsListEntry;
    if (leave_application_dto_list_envelope->validation_details) {
    list_ForEach(validation_detailsListEntry, leave_application_dto_list_envelope->validation_details) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)validation_detailsListEntry->data;
    }
    }
    }


    // leave_application_dto_list_envelope->activity_id
    if(leave_application_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", leave_application_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // leave_application_dto_list_envelope->result
    if(leave_application_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (leave_application_dto_list_envelope->result) {
    list_ForEach(resultListEntry, leave_application_dto_list_envelope->result) {
    cJSON *itemLocal = leave_application_dto_convertToJSON(resultListEntry->data);
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

leave_application_dto_list_envelope_t *leave_application_dto_list_envelope_parseFromJSON(cJSON *leave_application_dto_list_envelopeJSON){

    leave_application_dto_list_envelope_t *leave_application_dto_list_envelope_local_var = NULL;

    // define the local map for leave_application_dto_list_envelope->validation_details
    list_t *validation_detailsList = NULL;

    // define the local list for leave_application_dto_list_envelope->result
    list_t *resultList = NULL;

    // leave_application_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(leave_application_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // leave_application_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(leave_application_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // leave_application_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(leave_application_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // leave_application_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(leave_application_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // leave_application_dto_list_envelope->http_status
    cJSON *http_status = cJSON_GetObjectItemCaseSensitive(leave_application_dto_list_envelopeJSON, "httpStatus");
    if (http_status) { 
    if(!cJSON_IsNumber(http_status))
    {
    goto end; //Numeric
    }
    }

    // leave_application_dto_list_envelope->error_code
    cJSON *error_code = cJSON_GetObjectItemCaseSensitive(leave_application_dto_list_envelopeJSON, "errorCode");
    if (error_code) { 
    if(!cJSON_IsString(error_code) && !cJSON_IsNull(error_code))
    {
    goto end; //String
    }
    }

    // leave_application_dto_list_envelope->validation_details
    cJSON *validation_details = cJSON_GetObjectItemCaseSensitive(leave_application_dto_list_envelopeJSON, "validationDetails");
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

    // leave_application_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(leave_application_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // leave_application_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(leave_application_dto_list_envelopeJSON, "result");
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
        leave_application_dto_t *resultItem = leave_application_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    leave_application_dto_list_envelope_local_var = leave_application_dto_list_envelope_create (
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

    return leave_application_dto_list_envelope_local_var;
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
            leave_application_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
