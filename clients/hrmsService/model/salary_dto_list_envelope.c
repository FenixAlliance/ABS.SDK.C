#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "salary_dto_list_envelope.h"



salary_dto_list_envelope_t *salary_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    salary_dto_list_envelope_t *salary_dto_list_envelope_local_var = malloc(sizeof(salary_dto_list_envelope_t));
    if (!salary_dto_list_envelope_local_var) {
        return NULL;
    }
    salary_dto_list_envelope_local_var->is_success = is_success;
    salary_dto_list_envelope_local_var->error_message = error_message;
    salary_dto_list_envelope_local_var->correlation_id = correlation_id;
    salary_dto_list_envelope_local_var->timestamp = timestamp;
    salary_dto_list_envelope_local_var->activity_id = activity_id;
    salary_dto_list_envelope_local_var->result = result;

    return salary_dto_list_envelope_local_var;
}


void salary_dto_list_envelope_free(salary_dto_list_envelope_t *salary_dto_list_envelope) {
    if(NULL == salary_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (salary_dto_list_envelope->error_message) {
        free(salary_dto_list_envelope->error_message);
        salary_dto_list_envelope->error_message = NULL;
    }
    if (salary_dto_list_envelope->correlation_id) {
        free(salary_dto_list_envelope->correlation_id);
        salary_dto_list_envelope->correlation_id = NULL;
    }
    if (salary_dto_list_envelope->timestamp) {
        free(salary_dto_list_envelope->timestamp);
        salary_dto_list_envelope->timestamp = NULL;
    }
    if (salary_dto_list_envelope->activity_id) {
        free(salary_dto_list_envelope->activity_id);
        salary_dto_list_envelope->activity_id = NULL;
    }
    if (salary_dto_list_envelope->result) {
        list_ForEach(listEntry, salary_dto_list_envelope->result) {
            salary_dto_free(listEntry->data);
        }
        list_freeList(salary_dto_list_envelope->result);
        salary_dto_list_envelope->result = NULL;
    }
    free(salary_dto_list_envelope);
}

cJSON *salary_dto_list_envelope_convertToJSON(salary_dto_list_envelope_t *salary_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // salary_dto_list_envelope->is_success
    if(salary_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", salary_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // salary_dto_list_envelope->error_message
    if(salary_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", salary_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // salary_dto_list_envelope->correlation_id
    if(salary_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", salary_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // salary_dto_list_envelope->timestamp
    if(salary_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", salary_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // salary_dto_list_envelope->activity_id
    if(salary_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", salary_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // salary_dto_list_envelope->result
    if(salary_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (salary_dto_list_envelope->result) {
    list_ForEach(resultListEntry, salary_dto_list_envelope->result) {
    cJSON *itemLocal = salary_dto_convertToJSON(resultListEntry->data);
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

salary_dto_list_envelope_t *salary_dto_list_envelope_parseFromJSON(cJSON *salary_dto_list_envelopeJSON){

    salary_dto_list_envelope_t *salary_dto_list_envelope_local_var = NULL;

    // define the local list for salary_dto_list_envelope->result
    list_t *resultList = NULL;

    // salary_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(salary_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // salary_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(salary_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // salary_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(salary_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // salary_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(salary_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // salary_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(salary_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // salary_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(salary_dto_list_envelopeJSON, "result");
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
        salary_dto_t *resultItem = salary_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    salary_dto_list_envelope_local_var = salary_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return salary_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            salary_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
