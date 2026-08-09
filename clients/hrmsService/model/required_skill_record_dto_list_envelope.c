#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "required_skill_record_dto_list_envelope.h"



required_skill_record_dto_list_envelope_t *required_skill_record_dto_list_envelope_create(
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
    required_skill_record_dto_list_envelope_t *required_skill_record_dto_list_envelope_local_var = malloc(sizeof(required_skill_record_dto_list_envelope_t));
    if (!required_skill_record_dto_list_envelope_local_var) {
        return NULL;
    }
    required_skill_record_dto_list_envelope_local_var->is_success = is_success;
    required_skill_record_dto_list_envelope_local_var->error_message = error_message;
    required_skill_record_dto_list_envelope_local_var->correlation_id = correlation_id;
    required_skill_record_dto_list_envelope_local_var->timestamp = timestamp;
    required_skill_record_dto_list_envelope_local_var->http_status = http_status;
    required_skill_record_dto_list_envelope_local_var->error_code = error_code;
    required_skill_record_dto_list_envelope_local_var->validation_details = validation_details;
    required_skill_record_dto_list_envelope_local_var->activity_id = activity_id;
    required_skill_record_dto_list_envelope_local_var->result = result;

    return required_skill_record_dto_list_envelope_local_var;
}


void required_skill_record_dto_list_envelope_free(required_skill_record_dto_list_envelope_t *required_skill_record_dto_list_envelope) {
    if(NULL == required_skill_record_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (required_skill_record_dto_list_envelope->error_message) {
        free(required_skill_record_dto_list_envelope->error_message);
        required_skill_record_dto_list_envelope->error_message = NULL;
    }
    if (required_skill_record_dto_list_envelope->correlation_id) {
        free(required_skill_record_dto_list_envelope->correlation_id);
        required_skill_record_dto_list_envelope->correlation_id = NULL;
    }
    if (required_skill_record_dto_list_envelope->timestamp) {
        free(required_skill_record_dto_list_envelope->timestamp);
        required_skill_record_dto_list_envelope->timestamp = NULL;
    }
    if (required_skill_record_dto_list_envelope->error_code) {
        free(required_skill_record_dto_list_envelope->error_code);
        required_skill_record_dto_list_envelope->error_code = NULL;
    }
    if (required_skill_record_dto_list_envelope->validation_details) {
        list_ForEach(listEntry, required_skill_record_dto_list_envelope->validation_details) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(required_skill_record_dto_list_envelope->validation_details);
        required_skill_record_dto_list_envelope->validation_details = NULL;
    }
    if (required_skill_record_dto_list_envelope->activity_id) {
        free(required_skill_record_dto_list_envelope->activity_id);
        required_skill_record_dto_list_envelope->activity_id = NULL;
    }
    if (required_skill_record_dto_list_envelope->result) {
        list_ForEach(listEntry, required_skill_record_dto_list_envelope->result) {
            required_skill_record_dto_free(listEntry->data);
        }
        list_freeList(required_skill_record_dto_list_envelope->result);
        required_skill_record_dto_list_envelope->result = NULL;
    }
    free(required_skill_record_dto_list_envelope);
}

cJSON *required_skill_record_dto_list_envelope_convertToJSON(required_skill_record_dto_list_envelope_t *required_skill_record_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // required_skill_record_dto_list_envelope->is_success
    if(required_skill_record_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", required_skill_record_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // required_skill_record_dto_list_envelope->error_message
    if(required_skill_record_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", required_skill_record_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // required_skill_record_dto_list_envelope->correlation_id
    if(required_skill_record_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", required_skill_record_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // required_skill_record_dto_list_envelope->timestamp
    if(required_skill_record_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", required_skill_record_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // required_skill_record_dto_list_envelope->http_status
    if(required_skill_record_dto_list_envelope->http_status) {
    if(cJSON_AddNumberToObject(item, "httpStatus", required_skill_record_dto_list_envelope->http_status) == NULL) {
    goto fail; //Numeric
    }
    }


    // required_skill_record_dto_list_envelope->error_code
    if(required_skill_record_dto_list_envelope->error_code) {
    if(cJSON_AddStringToObject(item, "errorCode", required_skill_record_dto_list_envelope->error_code) == NULL) {
    goto fail; //String
    }
    }


    // required_skill_record_dto_list_envelope->validation_details
    if(required_skill_record_dto_list_envelope->validation_details) {
    cJSON *validation_details = cJSON_AddObjectToObject(item, "validationDetails");
    if(validation_details == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = validation_details;
    listEntry_t *validation_detailsListEntry;
    if (required_skill_record_dto_list_envelope->validation_details) {
    list_ForEach(validation_detailsListEntry, required_skill_record_dto_list_envelope->validation_details) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)validation_detailsListEntry->data;
    }
    }
    }


    // required_skill_record_dto_list_envelope->activity_id
    if(required_skill_record_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", required_skill_record_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // required_skill_record_dto_list_envelope->result
    if(required_skill_record_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (required_skill_record_dto_list_envelope->result) {
    list_ForEach(resultListEntry, required_skill_record_dto_list_envelope->result) {
    cJSON *itemLocal = required_skill_record_dto_convertToJSON(resultListEntry->data);
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

required_skill_record_dto_list_envelope_t *required_skill_record_dto_list_envelope_parseFromJSON(cJSON *required_skill_record_dto_list_envelopeJSON){

    required_skill_record_dto_list_envelope_t *required_skill_record_dto_list_envelope_local_var = NULL;

    // define the local map for required_skill_record_dto_list_envelope->validation_details
    list_t *validation_detailsList = NULL;

    // define the local list for required_skill_record_dto_list_envelope->result
    list_t *resultList = NULL;

    // required_skill_record_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(required_skill_record_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // required_skill_record_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(required_skill_record_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // required_skill_record_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(required_skill_record_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // required_skill_record_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(required_skill_record_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // required_skill_record_dto_list_envelope->http_status
    cJSON *http_status = cJSON_GetObjectItemCaseSensitive(required_skill_record_dto_list_envelopeJSON, "httpStatus");
    if (http_status) { 
    if(!cJSON_IsNumber(http_status))
    {
    goto end; //Numeric
    }
    }

    // required_skill_record_dto_list_envelope->error_code
    cJSON *error_code = cJSON_GetObjectItemCaseSensitive(required_skill_record_dto_list_envelopeJSON, "errorCode");
    if (error_code) { 
    if(!cJSON_IsString(error_code) && !cJSON_IsNull(error_code))
    {
    goto end; //String
    }
    }

    // required_skill_record_dto_list_envelope->validation_details
    cJSON *validation_details = cJSON_GetObjectItemCaseSensitive(required_skill_record_dto_list_envelopeJSON, "validationDetails");
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

    // required_skill_record_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(required_skill_record_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // required_skill_record_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(required_skill_record_dto_list_envelopeJSON, "result");
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
        required_skill_record_dto_t *resultItem = required_skill_record_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    required_skill_record_dto_list_envelope_local_var = required_skill_record_dto_list_envelope_create (
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

    return required_skill_record_dto_list_envelope_local_var;
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
            required_skill_record_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
