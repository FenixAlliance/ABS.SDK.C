#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "i_validation_failure_list_envelope.h"



i_validation_failure_list_envelope_t *i_validation_failure_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    i_validation_failure_list_envelope_t *i_validation_failure_list_envelope_local_var = malloc(sizeof(i_validation_failure_list_envelope_t));
    if (!i_validation_failure_list_envelope_local_var) {
        return NULL;
    }
    i_validation_failure_list_envelope_local_var->is_success = is_success;
    i_validation_failure_list_envelope_local_var->error_message = error_message;
    i_validation_failure_list_envelope_local_var->correlation_id = correlation_id;
    i_validation_failure_list_envelope_local_var->timestamp = timestamp;
    i_validation_failure_list_envelope_local_var->activity_id = activity_id;
    i_validation_failure_list_envelope_local_var->result = result;

    return i_validation_failure_list_envelope_local_var;
}


void i_validation_failure_list_envelope_free(i_validation_failure_list_envelope_t *i_validation_failure_list_envelope) {
    if(NULL == i_validation_failure_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (i_validation_failure_list_envelope->error_message) {
        free(i_validation_failure_list_envelope->error_message);
        i_validation_failure_list_envelope->error_message = NULL;
    }
    if (i_validation_failure_list_envelope->correlation_id) {
        free(i_validation_failure_list_envelope->correlation_id);
        i_validation_failure_list_envelope->correlation_id = NULL;
    }
    if (i_validation_failure_list_envelope->timestamp) {
        free(i_validation_failure_list_envelope->timestamp);
        i_validation_failure_list_envelope->timestamp = NULL;
    }
    if (i_validation_failure_list_envelope->activity_id) {
        free(i_validation_failure_list_envelope->activity_id);
        i_validation_failure_list_envelope->activity_id = NULL;
    }
    if (i_validation_failure_list_envelope->result) {
        list_ForEach(listEntry, i_validation_failure_list_envelope->result) {
            i_validation_failure_free(listEntry->data);
        }
        list_freeList(i_validation_failure_list_envelope->result);
        i_validation_failure_list_envelope->result = NULL;
    }
    free(i_validation_failure_list_envelope);
}

cJSON *i_validation_failure_list_envelope_convertToJSON(i_validation_failure_list_envelope_t *i_validation_failure_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // i_validation_failure_list_envelope->is_success
    if(i_validation_failure_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", i_validation_failure_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // i_validation_failure_list_envelope->error_message
    if(i_validation_failure_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", i_validation_failure_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // i_validation_failure_list_envelope->correlation_id
    if(i_validation_failure_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", i_validation_failure_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // i_validation_failure_list_envelope->timestamp
    if(i_validation_failure_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", i_validation_failure_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // i_validation_failure_list_envelope->activity_id
    if(i_validation_failure_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", i_validation_failure_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // i_validation_failure_list_envelope->result
    if(i_validation_failure_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (i_validation_failure_list_envelope->result) {
    list_ForEach(resultListEntry, i_validation_failure_list_envelope->result) {
    cJSON *itemLocal = i_validation_failure_convertToJSON(resultListEntry->data);
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

i_validation_failure_list_envelope_t *i_validation_failure_list_envelope_parseFromJSON(cJSON *i_validation_failure_list_envelopeJSON){

    i_validation_failure_list_envelope_t *i_validation_failure_list_envelope_local_var = NULL;

    // define the local list for i_validation_failure_list_envelope->result
    list_t *resultList = NULL;

    // i_validation_failure_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(i_validation_failure_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // i_validation_failure_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(i_validation_failure_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // i_validation_failure_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(i_validation_failure_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // i_validation_failure_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(i_validation_failure_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // i_validation_failure_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(i_validation_failure_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // i_validation_failure_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(i_validation_failure_list_envelopeJSON, "result");
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
        i_validation_failure_t *resultItem = i_validation_failure_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    i_validation_failure_list_envelope_local_var = i_validation_failure_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return i_validation_failure_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            i_validation_failure_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
