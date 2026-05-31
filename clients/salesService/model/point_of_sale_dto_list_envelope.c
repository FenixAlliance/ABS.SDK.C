#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "point_of_sale_dto_list_envelope.h"



point_of_sale_dto_list_envelope_t *point_of_sale_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    point_of_sale_dto_list_envelope_t *point_of_sale_dto_list_envelope_local_var = malloc(sizeof(point_of_sale_dto_list_envelope_t));
    if (!point_of_sale_dto_list_envelope_local_var) {
        return NULL;
    }
    point_of_sale_dto_list_envelope_local_var->is_success = is_success;
    point_of_sale_dto_list_envelope_local_var->error_message = error_message;
    point_of_sale_dto_list_envelope_local_var->correlation_id = correlation_id;
    point_of_sale_dto_list_envelope_local_var->timestamp = timestamp;
    point_of_sale_dto_list_envelope_local_var->activity_id = activity_id;
    point_of_sale_dto_list_envelope_local_var->result = result;

    return point_of_sale_dto_list_envelope_local_var;
}


void point_of_sale_dto_list_envelope_free(point_of_sale_dto_list_envelope_t *point_of_sale_dto_list_envelope) {
    if(NULL == point_of_sale_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (point_of_sale_dto_list_envelope->error_message) {
        free(point_of_sale_dto_list_envelope->error_message);
        point_of_sale_dto_list_envelope->error_message = NULL;
    }
    if (point_of_sale_dto_list_envelope->correlation_id) {
        free(point_of_sale_dto_list_envelope->correlation_id);
        point_of_sale_dto_list_envelope->correlation_id = NULL;
    }
    if (point_of_sale_dto_list_envelope->timestamp) {
        free(point_of_sale_dto_list_envelope->timestamp);
        point_of_sale_dto_list_envelope->timestamp = NULL;
    }
    if (point_of_sale_dto_list_envelope->activity_id) {
        free(point_of_sale_dto_list_envelope->activity_id);
        point_of_sale_dto_list_envelope->activity_id = NULL;
    }
    if (point_of_sale_dto_list_envelope->result) {
        list_ForEach(listEntry, point_of_sale_dto_list_envelope->result) {
            point_of_sale_dto_free(listEntry->data);
        }
        list_freeList(point_of_sale_dto_list_envelope->result);
        point_of_sale_dto_list_envelope->result = NULL;
    }
    free(point_of_sale_dto_list_envelope);
}

cJSON *point_of_sale_dto_list_envelope_convertToJSON(point_of_sale_dto_list_envelope_t *point_of_sale_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // point_of_sale_dto_list_envelope->is_success
    if(point_of_sale_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", point_of_sale_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // point_of_sale_dto_list_envelope->error_message
    if(point_of_sale_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", point_of_sale_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // point_of_sale_dto_list_envelope->correlation_id
    if(point_of_sale_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", point_of_sale_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // point_of_sale_dto_list_envelope->timestamp
    if(point_of_sale_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", point_of_sale_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // point_of_sale_dto_list_envelope->activity_id
    if(point_of_sale_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", point_of_sale_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // point_of_sale_dto_list_envelope->result
    if(point_of_sale_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (point_of_sale_dto_list_envelope->result) {
    list_ForEach(resultListEntry, point_of_sale_dto_list_envelope->result) {
    cJSON *itemLocal = point_of_sale_dto_convertToJSON(resultListEntry->data);
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

point_of_sale_dto_list_envelope_t *point_of_sale_dto_list_envelope_parseFromJSON(cJSON *point_of_sale_dto_list_envelopeJSON){

    point_of_sale_dto_list_envelope_t *point_of_sale_dto_list_envelope_local_var = NULL;

    // define the local list for point_of_sale_dto_list_envelope->result
    list_t *resultList = NULL;

    // point_of_sale_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(point_of_sale_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // point_of_sale_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(point_of_sale_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // point_of_sale_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(point_of_sale_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // point_of_sale_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(point_of_sale_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // point_of_sale_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(point_of_sale_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // point_of_sale_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(point_of_sale_dto_list_envelopeJSON, "result");
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
        point_of_sale_dto_t *resultItem = point_of_sale_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    point_of_sale_dto_list_envelope_local_var = point_of_sale_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return point_of_sale_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            point_of_sale_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
