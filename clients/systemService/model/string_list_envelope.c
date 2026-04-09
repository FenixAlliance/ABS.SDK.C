#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "string_list_envelope.h"



string_list_envelope_t *string_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    string_list_envelope_t *string_list_envelope_local_var = malloc(sizeof(string_list_envelope_t));
    if (!string_list_envelope_local_var) {
        return NULL;
    }
    string_list_envelope_local_var->is_success = is_success;
    string_list_envelope_local_var->error_message = error_message;
    string_list_envelope_local_var->correlation_id = correlation_id;
    string_list_envelope_local_var->timestamp = timestamp;
    string_list_envelope_local_var->activity_id = activity_id;
    string_list_envelope_local_var->result = result;

    return string_list_envelope_local_var;
}


void string_list_envelope_free(string_list_envelope_t *string_list_envelope) {
    if(NULL == string_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (string_list_envelope->error_message) {
        free(string_list_envelope->error_message);
        string_list_envelope->error_message = NULL;
    }
    if (string_list_envelope->correlation_id) {
        free(string_list_envelope->correlation_id);
        string_list_envelope->correlation_id = NULL;
    }
    if (string_list_envelope->timestamp) {
        free(string_list_envelope->timestamp);
        string_list_envelope->timestamp = NULL;
    }
    if (string_list_envelope->activity_id) {
        free(string_list_envelope->activity_id);
        string_list_envelope->activity_id = NULL;
    }
    if (string_list_envelope->result) {
        list_ForEach(listEntry, string_list_envelope->result) {
            free(listEntry->data);
        }
        list_freeList(string_list_envelope->result);
        string_list_envelope->result = NULL;
    }
    free(string_list_envelope);
}

cJSON *string_list_envelope_convertToJSON(string_list_envelope_t *string_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // string_list_envelope->is_success
    if(string_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", string_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // string_list_envelope->error_message
    if(string_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", string_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // string_list_envelope->correlation_id
    if(string_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", string_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // string_list_envelope->timestamp
    if(string_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", string_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // string_list_envelope->activity_id
    if(string_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", string_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // string_list_envelope->result
    if(string_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *resultListEntry;
    list_ForEach(resultListEntry, string_list_envelope->result) {
    if(cJSON_AddStringToObject(result, "", (char*)resultListEntry->data) == NULL)
    {
        goto fail;
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

string_list_envelope_t *string_list_envelope_parseFromJSON(cJSON *string_list_envelopeJSON){

    string_list_envelope_t *string_list_envelope_local_var = NULL;

    // define the local list for string_list_envelope->result
    list_t *resultList = NULL;

    // string_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(string_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // string_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(string_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // string_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(string_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // string_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(string_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // string_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(string_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // string_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(string_list_envelopeJSON, "result");
    if (result) { 
    cJSON *result_local = NULL;
    if(!cJSON_IsArray(result)) {
        goto end;//primitive container
    }
    resultList = list_createList();

    cJSON_ArrayForEach(result_local, result)
    {
        if(!cJSON_IsString(result_local))
        {
            goto end;
        }
        list_addElement(resultList , strdup(result_local->valuestring));
    }
    }


    string_list_envelope_local_var = string_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return string_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
