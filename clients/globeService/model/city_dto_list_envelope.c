#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "city_dto_list_envelope.h"



city_dto_list_envelope_t *city_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    city_dto_list_envelope_t *city_dto_list_envelope_local_var = malloc(sizeof(city_dto_list_envelope_t));
    if (!city_dto_list_envelope_local_var) {
        return NULL;
    }
    city_dto_list_envelope_local_var->is_success = is_success;
    city_dto_list_envelope_local_var->error_message = error_message;
    city_dto_list_envelope_local_var->correlation_id = correlation_id;
    city_dto_list_envelope_local_var->timestamp = timestamp;
    city_dto_list_envelope_local_var->activity_id = activity_id;
    city_dto_list_envelope_local_var->result = result;

    return city_dto_list_envelope_local_var;
}


void city_dto_list_envelope_free(city_dto_list_envelope_t *city_dto_list_envelope) {
    if(NULL == city_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (city_dto_list_envelope->error_message) {
        free(city_dto_list_envelope->error_message);
        city_dto_list_envelope->error_message = NULL;
    }
    if (city_dto_list_envelope->correlation_id) {
        free(city_dto_list_envelope->correlation_id);
        city_dto_list_envelope->correlation_id = NULL;
    }
    if (city_dto_list_envelope->timestamp) {
        free(city_dto_list_envelope->timestamp);
        city_dto_list_envelope->timestamp = NULL;
    }
    if (city_dto_list_envelope->activity_id) {
        free(city_dto_list_envelope->activity_id);
        city_dto_list_envelope->activity_id = NULL;
    }
    if (city_dto_list_envelope->result) {
        list_ForEach(listEntry, city_dto_list_envelope->result) {
            city_dto_free(listEntry->data);
        }
        list_freeList(city_dto_list_envelope->result);
        city_dto_list_envelope->result = NULL;
    }
    free(city_dto_list_envelope);
}

cJSON *city_dto_list_envelope_convertToJSON(city_dto_list_envelope_t *city_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // city_dto_list_envelope->is_success
    if(city_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", city_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // city_dto_list_envelope->error_message
    if(city_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", city_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // city_dto_list_envelope->correlation_id
    if(city_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", city_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // city_dto_list_envelope->timestamp
    if(city_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", city_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // city_dto_list_envelope->activity_id
    if(city_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", city_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // city_dto_list_envelope->result
    if(city_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (city_dto_list_envelope->result) {
    list_ForEach(resultListEntry, city_dto_list_envelope->result) {
    cJSON *itemLocal = city_dto_convertToJSON(resultListEntry->data);
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

city_dto_list_envelope_t *city_dto_list_envelope_parseFromJSON(cJSON *city_dto_list_envelopeJSON){

    city_dto_list_envelope_t *city_dto_list_envelope_local_var = NULL;

    // define the local list for city_dto_list_envelope->result
    list_t *resultList = NULL;

    // city_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(city_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // city_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(city_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // city_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(city_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // city_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(city_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // city_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(city_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // city_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(city_dto_list_envelopeJSON, "result");
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
        city_dto_t *resultItem = city_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    city_dto_list_envelope_local_var = city_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return city_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            city_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
