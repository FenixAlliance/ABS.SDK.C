#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "grant_dto_i_read_only_list_envelope.h"



grant_dto_i_read_only_list_envelope_t *grant_dto_i_read_only_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    grant_dto_i_read_only_list_envelope_t *grant_dto_i_read_only_list_envelope_local_var = malloc(sizeof(grant_dto_i_read_only_list_envelope_t));
    if (!grant_dto_i_read_only_list_envelope_local_var) {
        return NULL;
    }
    grant_dto_i_read_only_list_envelope_local_var->is_success = is_success;
    grant_dto_i_read_only_list_envelope_local_var->error_message = error_message;
    grant_dto_i_read_only_list_envelope_local_var->correlation_id = correlation_id;
    grant_dto_i_read_only_list_envelope_local_var->timestamp = timestamp;
    grant_dto_i_read_only_list_envelope_local_var->activity_id = activity_id;
    grant_dto_i_read_only_list_envelope_local_var->result = result;

    return grant_dto_i_read_only_list_envelope_local_var;
}


void grant_dto_i_read_only_list_envelope_free(grant_dto_i_read_only_list_envelope_t *grant_dto_i_read_only_list_envelope) {
    if(NULL == grant_dto_i_read_only_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (grant_dto_i_read_only_list_envelope->error_message) {
        free(grant_dto_i_read_only_list_envelope->error_message);
        grant_dto_i_read_only_list_envelope->error_message = NULL;
    }
    if (grant_dto_i_read_only_list_envelope->correlation_id) {
        free(grant_dto_i_read_only_list_envelope->correlation_id);
        grant_dto_i_read_only_list_envelope->correlation_id = NULL;
    }
    if (grant_dto_i_read_only_list_envelope->timestamp) {
        free(grant_dto_i_read_only_list_envelope->timestamp);
        grant_dto_i_read_only_list_envelope->timestamp = NULL;
    }
    if (grant_dto_i_read_only_list_envelope->activity_id) {
        free(grant_dto_i_read_only_list_envelope->activity_id);
        grant_dto_i_read_only_list_envelope->activity_id = NULL;
    }
    if (grant_dto_i_read_only_list_envelope->result) {
        list_ForEach(listEntry, grant_dto_i_read_only_list_envelope->result) {
            grant_dto_free(listEntry->data);
        }
        list_freeList(grant_dto_i_read_only_list_envelope->result);
        grant_dto_i_read_only_list_envelope->result = NULL;
    }
    free(grant_dto_i_read_only_list_envelope);
}

cJSON *grant_dto_i_read_only_list_envelope_convertToJSON(grant_dto_i_read_only_list_envelope_t *grant_dto_i_read_only_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // grant_dto_i_read_only_list_envelope->is_success
    if(grant_dto_i_read_only_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", grant_dto_i_read_only_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // grant_dto_i_read_only_list_envelope->error_message
    if(grant_dto_i_read_only_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", grant_dto_i_read_only_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // grant_dto_i_read_only_list_envelope->correlation_id
    if(grant_dto_i_read_only_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", grant_dto_i_read_only_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // grant_dto_i_read_only_list_envelope->timestamp
    if(grant_dto_i_read_only_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", grant_dto_i_read_only_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // grant_dto_i_read_only_list_envelope->activity_id
    if(grant_dto_i_read_only_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", grant_dto_i_read_only_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // grant_dto_i_read_only_list_envelope->result
    if(grant_dto_i_read_only_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (grant_dto_i_read_only_list_envelope->result) {
    list_ForEach(resultListEntry, grant_dto_i_read_only_list_envelope->result) {
    cJSON *itemLocal = grant_dto_convertToJSON(resultListEntry->data);
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

grant_dto_i_read_only_list_envelope_t *grant_dto_i_read_only_list_envelope_parseFromJSON(cJSON *grant_dto_i_read_only_list_envelopeJSON){

    grant_dto_i_read_only_list_envelope_t *grant_dto_i_read_only_list_envelope_local_var = NULL;

    // define the local list for grant_dto_i_read_only_list_envelope->result
    list_t *resultList = NULL;

    // grant_dto_i_read_only_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(grant_dto_i_read_only_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // grant_dto_i_read_only_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(grant_dto_i_read_only_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // grant_dto_i_read_only_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(grant_dto_i_read_only_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // grant_dto_i_read_only_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(grant_dto_i_read_only_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // grant_dto_i_read_only_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(grant_dto_i_read_only_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // grant_dto_i_read_only_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(grant_dto_i_read_only_list_envelopeJSON, "result");
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
        grant_dto_t *resultItem = grant_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    grant_dto_i_read_only_list_envelope_local_var = grant_dto_i_read_only_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return grant_dto_i_read_only_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            grant_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
