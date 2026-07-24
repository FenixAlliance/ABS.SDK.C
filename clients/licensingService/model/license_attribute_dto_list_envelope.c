#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "license_attribute_dto_list_envelope.h"



license_attribute_dto_list_envelope_t *license_attribute_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    license_attribute_dto_list_envelope_t *license_attribute_dto_list_envelope_local_var = malloc(sizeof(license_attribute_dto_list_envelope_t));
    if (!license_attribute_dto_list_envelope_local_var) {
        return NULL;
    }
    license_attribute_dto_list_envelope_local_var->is_success = is_success;
    license_attribute_dto_list_envelope_local_var->error_message = error_message;
    license_attribute_dto_list_envelope_local_var->correlation_id = correlation_id;
    license_attribute_dto_list_envelope_local_var->timestamp = timestamp;
    license_attribute_dto_list_envelope_local_var->activity_id = activity_id;
    license_attribute_dto_list_envelope_local_var->result = result;

    return license_attribute_dto_list_envelope_local_var;
}


void license_attribute_dto_list_envelope_free(license_attribute_dto_list_envelope_t *license_attribute_dto_list_envelope) {
    if(NULL == license_attribute_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (license_attribute_dto_list_envelope->error_message) {
        free(license_attribute_dto_list_envelope->error_message);
        license_attribute_dto_list_envelope->error_message = NULL;
    }
    if (license_attribute_dto_list_envelope->correlation_id) {
        free(license_attribute_dto_list_envelope->correlation_id);
        license_attribute_dto_list_envelope->correlation_id = NULL;
    }
    if (license_attribute_dto_list_envelope->timestamp) {
        free(license_attribute_dto_list_envelope->timestamp);
        license_attribute_dto_list_envelope->timestamp = NULL;
    }
    if (license_attribute_dto_list_envelope->activity_id) {
        free(license_attribute_dto_list_envelope->activity_id);
        license_attribute_dto_list_envelope->activity_id = NULL;
    }
    if (license_attribute_dto_list_envelope->result) {
        list_ForEach(listEntry, license_attribute_dto_list_envelope->result) {
            license_attribute_dto_free(listEntry->data);
        }
        list_freeList(license_attribute_dto_list_envelope->result);
        license_attribute_dto_list_envelope->result = NULL;
    }
    free(license_attribute_dto_list_envelope);
}

cJSON *license_attribute_dto_list_envelope_convertToJSON(license_attribute_dto_list_envelope_t *license_attribute_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // license_attribute_dto_list_envelope->is_success
    if(license_attribute_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", license_attribute_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // license_attribute_dto_list_envelope->error_message
    if(license_attribute_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", license_attribute_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // license_attribute_dto_list_envelope->correlation_id
    if(license_attribute_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", license_attribute_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // license_attribute_dto_list_envelope->timestamp
    if(license_attribute_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", license_attribute_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // license_attribute_dto_list_envelope->activity_id
    if(license_attribute_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", license_attribute_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // license_attribute_dto_list_envelope->result
    if(license_attribute_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (license_attribute_dto_list_envelope->result) {
    list_ForEach(resultListEntry, license_attribute_dto_list_envelope->result) {
    cJSON *itemLocal = license_attribute_dto_convertToJSON(resultListEntry->data);
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

license_attribute_dto_list_envelope_t *license_attribute_dto_list_envelope_parseFromJSON(cJSON *license_attribute_dto_list_envelopeJSON){

    license_attribute_dto_list_envelope_t *license_attribute_dto_list_envelope_local_var = NULL;

    // define the local list for license_attribute_dto_list_envelope->result
    list_t *resultList = NULL;

    // license_attribute_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(license_attribute_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // license_attribute_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(license_attribute_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // license_attribute_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(license_attribute_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // license_attribute_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(license_attribute_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // license_attribute_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(license_attribute_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // license_attribute_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(license_attribute_dto_list_envelopeJSON, "result");
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
        license_attribute_dto_t *resultItem = license_attribute_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    license_attribute_dto_list_envelope_local_var = license_attribute_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return license_attribute_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            license_attribute_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
