#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "employee_profile_dto_list_envelope.h"



employee_profile_dto_list_envelope_t *employee_profile_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    employee_profile_dto_list_envelope_t *employee_profile_dto_list_envelope_local_var = malloc(sizeof(employee_profile_dto_list_envelope_t));
    if (!employee_profile_dto_list_envelope_local_var) {
        return NULL;
    }
    employee_profile_dto_list_envelope_local_var->is_success = is_success;
    employee_profile_dto_list_envelope_local_var->error_message = error_message;
    employee_profile_dto_list_envelope_local_var->correlation_id = correlation_id;
    employee_profile_dto_list_envelope_local_var->timestamp = timestamp;
    employee_profile_dto_list_envelope_local_var->activity_id = activity_id;
    employee_profile_dto_list_envelope_local_var->result = result;

    return employee_profile_dto_list_envelope_local_var;
}


void employee_profile_dto_list_envelope_free(employee_profile_dto_list_envelope_t *employee_profile_dto_list_envelope) {
    if(NULL == employee_profile_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (employee_profile_dto_list_envelope->error_message) {
        free(employee_profile_dto_list_envelope->error_message);
        employee_profile_dto_list_envelope->error_message = NULL;
    }
    if (employee_profile_dto_list_envelope->correlation_id) {
        free(employee_profile_dto_list_envelope->correlation_id);
        employee_profile_dto_list_envelope->correlation_id = NULL;
    }
    if (employee_profile_dto_list_envelope->timestamp) {
        free(employee_profile_dto_list_envelope->timestamp);
        employee_profile_dto_list_envelope->timestamp = NULL;
    }
    if (employee_profile_dto_list_envelope->activity_id) {
        free(employee_profile_dto_list_envelope->activity_id);
        employee_profile_dto_list_envelope->activity_id = NULL;
    }
    if (employee_profile_dto_list_envelope->result) {
        list_ForEach(listEntry, employee_profile_dto_list_envelope->result) {
            employee_profile_dto_free(listEntry->data);
        }
        list_freeList(employee_profile_dto_list_envelope->result);
        employee_profile_dto_list_envelope->result = NULL;
    }
    free(employee_profile_dto_list_envelope);
}

cJSON *employee_profile_dto_list_envelope_convertToJSON(employee_profile_dto_list_envelope_t *employee_profile_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // employee_profile_dto_list_envelope->is_success
    if(employee_profile_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", employee_profile_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // employee_profile_dto_list_envelope->error_message
    if(employee_profile_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", employee_profile_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // employee_profile_dto_list_envelope->correlation_id
    if(employee_profile_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", employee_profile_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // employee_profile_dto_list_envelope->timestamp
    if(employee_profile_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", employee_profile_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // employee_profile_dto_list_envelope->activity_id
    if(employee_profile_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", employee_profile_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // employee_profile_dto_list_envelope->result
    if(employee_profile_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (employee_profile_dto_list_envelope->result) {
    list_ForEach(resultListEntry, employee_profile_dto_list_envelope->result) {
    cJSON *itemLocal = employee_profile_dto_convertToJSON(resultListEntry->data);
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

employee_profile_dto_list_envelope_t *employee_profile_dto_list_envelope_parseFromJSON(cJSON *employee_profile_dto_list_envelopeJSON){

    employee_profile_dto_list_envelope_t *employee_profile_dto_list_envelope_local_var = NULL;

    // define the local list for employee_profile_dto_list_envelope->result
    list_t *resultList = NULL;

    // employee_profile_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(employee_profile_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // employee_profile_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(employee_profile_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // employee_profile_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(employee_profile_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // employee_profile_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(employee_profile_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // employee_profile_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(employee_profile_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // employee_profile_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(employee_profile_dto_list_envelopeJSON, "result");
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
        employee_profile_dto_t *resultItem = employee_profile_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    employee_profile_dto_list_envelope_local_var = employee_profile_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return employee_profile_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            employee_profile_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
