#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "country_dto_list_envelope.h"



country_dto_list_envelope_t *country_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    country_dto_list_envelope_t *country_dto_list_envelope_local_var = malloc(sizeof(country_dto_list_envelope_t));
    if (!country_dto_list_envelope_local_var) {
        return NULL;
    }
    country_dto_list_envelope_local_var->is_success = is_success;
    country_dto_list_envelope_local_var->error_message = error_message;
    country_dto_list_envelope_local_var->correlation_id = correlation_id;
    country_dto_list_envelope_local_var->timestamp = timestamp;
    country_dto_list_envelope_local_var->activity_id = activity_id;
    country_dto_list_envelope_local_var->result = result;

    return country_dto_list_envelope_local_var;
}


void country_dto_list_envelope_free(country_dto_list_envelope_t *country_dto_list_envelope) {
    if(NULL == country_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (country_dto_list_envelope->error_message) {
        free(country_dto_list_envelope->error_message);
        country_dto_list_envelope->error_message = NULL;
    }
    if (country_dto_list_envelope->correlation_id) {
        free(country_dto_list_envelope->correlation_id);
        country_dto_list_envelope->correlation_id = NULL;
    }
    if (country_dto_list_envelope->timestamp) {
        free(country_dto_list_envelope->timestamp);
        country_dto_list_envelope->timestamp = NULL;
    }
    if (country_dto_list_envelope->activity_id) {
        free(country_dto_list_envelope->activity_id);
        country_dto_list_envelope->activity_id = NULL;
    }
    if (country_dto_list_envelope->result) {
        list_ForEach(listEntry, country_dto_list_envelope->result) {
            country_dto_free(listEntry->data);
        }
        list_freeList(country_dto_list_envelope->result);
        country_dto_list_envelope->result = NULL;
    }
    free(country_dto_list_envelope);
}

cJSON *country_dto_list_envelope_convertToJSON(country_dto_list_envelope_t *country_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // country_dto_list_envelope->is_success
    if(country_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", country_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // country_dto_list_envelope->error_message
    if(country_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", country_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // country_dto_list_envelope->correlation_id
    if(country_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", country_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // country_dto_list_envelope->timestamp
    if(country_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", country_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // country_dto_list_envelope->activity_id
    if(country_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", country_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // country_dto_list_envelope->result
    if(country_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (country_dto_list_envelope->result) {
    list_ForEach(resultListEntry, country_dto_list_envelope->result) {
    cJSON *itemLocal = country_dto_convertToJSON(resultListEntry->data);
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

country_dto_list_envelope_t *country_dto_list_envelope_parseFromJSON(cJSON *country_dto_list_envelopeJSON){

    country_dto_list_envelope_t *country_dto_list_envelope_local_var = NULL;

    // define the local list for country_dto_list_envelope->result
    list_t *resultList = NULL;

    // country_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(country_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // country_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(country_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // country_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(country_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // country_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(country_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // country_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(country_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // country_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(country_dto_list_envelopeJSON, "result");
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
        country_dto_t *resultItem = country_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    country_dto_list_envelope_local_var = country_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return country_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            country_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
