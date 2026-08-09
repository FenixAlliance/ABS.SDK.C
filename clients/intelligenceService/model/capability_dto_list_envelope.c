#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "capability_dto_list_envelope.h"



capability_dto_list_envelope_t *capability_dto_list_envelope_create(
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
    capability_dto_list_envelope_t *capability_dto_list_envelope_local_var = malloc(sizeof(capability_dto_list_envelope_t));
    if (!capability_dto_list_envelope_local_var) {
        return NULL;
    }
    capability_dto_list_envelope_local_var->is_success = is_success;
    capability_dto_list_envelope_local_var->error_message = error_message;
    capability_dto_list_envelope_local_var->correlation_id = correlation_id;
    capability_dto_list_envelope_local_var->timestamp = timestamp;
    capability_dto_list_envelope_local_var->http_status = http_status;
    capability_dto_list_envelope_local_var->error_code = error_code;
    capability_dto_list_envelope_local_var->validation_details = validation_details;
    capability_dto_list_envelope_local_var->activity_id = activity_id;
    capability_dto_list_envelope_local_var->result = result;

    return capability_dto_list_envelope_local_var;
}


void capability_dto_list_envelope_free(capability_dto_list_envelope_t *capability_dto_list_envelope) {
    if(NULL == capability_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (capability_dto_list_envelope->error_message) {
        free(capability_dto_list_envelope->error_message);
        capability_dto_list_envelope->error_message = NULL;
    }
    if (capability_dto_list_envelope->correlation_id) {
        free(capability_dto_list_envelope->correlation_id);
        capability_dto_list_envelope->correlation_id = NULL;
    }
    if (capability_dto_list_envelope->timestamp) {
        free(capability_dto_list_envelope->timestamp);
        capability_dto_list_envelope->timestamp = NULL;
    }
    if (capability_dto_list_envelope->error_code) {
        free(capability_dto_list_envelope->error_code);
        capability_dto_list_envelope->error_code = NULL;
    }
    if (capability_dto_list_envelope->validation_details) {
        list_ForEach(listEntry, capability_dto_list_envelope->validation_details) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(capability_dto_list_envelope->validation_details);
        capability_dto_list_envelope->validation_details = NULL;
    }
    if (capability_dto_list_envelope->activity_id) {
        free(capability_dto_list_envelope->activity_id);
        capability_dto_list_envelope->activity_id = NULL;
    }
    if (capability_dto_list_envelope->result) {
        list_ForEach(listEntry, capability_dto_list_envelope->result) {
            capability_dto_free(listEntry->data);
        }
        list_freeList(capability_dto_list_envelope->result);
        capability_dto_list_envelope->result = NULL;
    }
    free(capability_dto_list_envelope);
}

cJSON *capability_dto_list_envelope_convertToJSON(capability_dto_list_envelope_t *capability_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // capability_dto_list_envelope->is_success
    if(capability_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", capability_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // capability_dto_list_envelope->error_message
    if(capability_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", capability_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // capability_dto_list_envelope->correlation_id
    if(capability_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", capability_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // capability_dto_list_envelope->timestamp
    if(capability_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", capability_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // capability_dto_list_envelope->http_status
    if(capability_dto_list_envelope->http_status) {
    if(cJSON_AddNumberToObject(item, "httpStatus", capability_dto_list_envelope->http_status) == NULL) {
    goto fail; //Numeric
    }
    }


    // capability_dto_list_envelope->error_code
    if(capability_dto_list_envelope->error_code) {
    if(cJSON_AddStringToObject(item, "errorCode", capability_dto_list_envelope->error_code) == NULL) {
    goto fail; //String
    }
    }


    // capability_dto_list_envelope->validation_details
    if(capability_dto_list_envelope->validation_details) {
    cJSON *validation_details = cJSON_AddObjectToObject(item, "validationDetails");
    if(validation_details == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = validation_details;
    listEntry_t *validation_detailsListEntry;
    if (capability_dto_list_envelope->validation_details) {
    list_ForEach(validation_detailsListEntry, capability_dto_list_envelope->validation_details) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)validation_detailsListEntry->data;
    }
    }
    }


    // capability_dto_list_envelope->activity_id
    if(capability_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", capability_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // capability_dto_list_envelope->result
    if(capability_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (capability_dto_list_envelope->result) {
    list_ForEach(resultListEntry, capability_dto_list_envelope->result) {
    cJSON *itemLocal = capability_dto_convertToJSON(resultListEntry->data);
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

capability_dto_list_envelope_t *capability_dto_list_envelope_parseFromJSON(cJSON *capability_dto_list_envelopeJSON){

    capability_dto_list_envelope_t *capability_dto_list_envelope_local_var = NULL;

    // define the local map for capability_dto_list_envelope->validation_details
    list_t *validation_detailsList = NULL;

    // define the local list for capability_dto_list_envelope->result
    list_t *resultList = NULL;

    // capability_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(capability_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // capability_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(capability_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // capability_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(capability_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // capability_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(capability_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // capability_dto_list_envelope->http_status
    cJSON *http_status = cJSON_GetObjectItemCaseSensitive(capability_dto_list_envelopeJSON, "httpStatus");
    if (http_status) { 
    if(!cJSON_IsNumber(http_status))
    {
    goto end; //Numeric
    }
    }

    // capability_dto_list_envelope->error_code
    cJSON *error_code = cJSON_GetObjectItemCaseSensitive(capability_dto_list_envelopeJSON, "errorCode");
    if (error_code) { 
    if(!cJSON_IsString(error_code) && !cJSON_IsNull(error_code))
    {
    goto end; //String
    }
    }

    // capability_dto_list_envelope->validation_details
    cJSON *validation_details = cJSON_GetObjectItemCaseSensitive(capability_dto_list_envelopeJSON, "validationDetails");
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

    // capability_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(capability_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // capability_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(capability_dto_list_envelopeJSON, "result");
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
        capability_dto_t *resultItem = capability_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    capability_dto_list_envelope_local_var = capability_dto_list_envelope_create (
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

    return capability_dto_list_envelope_local_var;
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
            capability_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
