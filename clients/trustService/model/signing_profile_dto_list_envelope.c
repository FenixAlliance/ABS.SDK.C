#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "signing_profile_dto_list_envelope.h"



signing_profile_dto_list_envelope_t *signing_profile_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    signing_profile_dto_list_envelope_t *signing_profile_dto_list_envelope_local_var = malloc(sizeof(signing_profile_dto_list_envelope_t));
    if (!signing_profile_dto_list_envelope_local_var) {
        return NULL;
    }
    signing_profile_dto_list_envelope_local_var->is_success = is_success;
    signing_profile_dto_list_envelope_local_var->error_message = error_message;
    signing_profile_dto_list_envelope_local_var->correlation_id = correlation_id;
    signing_profile_dto_list_envelope_local_var->timestamp = timestamp;
    signing_profile_dto_list_envelope_local_var->activity_id = activity_id;
    signing_profile_dto_list_envelope_local_var->result = result;

    return signing_profile_dto_list_envelope_local_var;
}


void signing_profile_dto_list_envelope_free(signing_profile_dto_list_envelope_t *signing_profile_dto_list_envelope) {
    if(NULL == signing_profile_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (signing_profile_dto_list_envelope->error_message) {
        free(signing_profile_dto_list_envelope->error_message);
        signing_profile_dto_list_envelope->error_message = NULL;
    }
    if (signing_profile_dto_list_envelope->correlation_id) {
        free(signing_profile_dto_list_envelope->correlation_id);
        signing_profile_dto_list_envelope->correlation_id = NULL;
    }
    if (signing_profile_dto_list_envelope->timestamp) {
        free(signing_profile_dto_list_envelope->timestamp);
        signing_profile_dto_list_envelope->timestamp = NULL;
    }
    if (signing_profile_dto_list_envelope->activity_id) {
        free(signing_profile_dto_list_envelope->activity_id);
        signing_profile_dto_list_envelope->activity_id = NULL;
    }
    if (signing_profile_dto_list_envelope->result) {
        list_ForEach(listEntry, signing_profile_dto_list_envelope->result) {
            signing_profile_dto_free(listEntry->data);
        }
        list_freeList(signing_profile_dto_list_envelope->result);
        signing_profile_dto_list_envelope->result = NULL;
    }
    free(signing_profile_dto_list_envelope);
}

cJSON *signing_profile_dto_list_envelope_convertToJSON(signing_profile_dto_list_envelope_t *signing_profile_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // signing_profile_dto_list_envelope->is_success
    if(signing_profile_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", signing_profile_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // signing_profile_dto_list_envelope->error_message
    if(signing_profile_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", signing_profile_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_dto_list_envelope->correlation_id
    if(signing_profile_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", signing_profile_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_dto_list_envelope->timestamp
    if(signing_profile_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", signing_profile_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // signing_profile_dto_list_envelope->activity_id
    if(signing_profile_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", signing_profile_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_dto_list_envelope->result
    if(signing_profile_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (signing_profile_dto_list_envelope->result) {
    list_ForEach(resultListEntry, signing_profile_dto_list_envelope->result) {
    cJSON *itemLocal = signing_profile_dto_convertToJSON(resultListEntry->data);
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

signing_profile_dto_list_envelope_t *signing_profile_dto_list_envelope_parseFromJSON(cJSON *signing_profile_dto_list_envelopeJSON){

    signing_profile_dto_list_envelope_t *signing_profile_dto_list_envelope_local_var = NULL;

    // define the local list for signing_profile_dto_list_envelope->result
    list_t *resultList = NULL;

    // signing_profile_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(signing_profile_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // signing_profile_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(signing_profile_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // signing_profile_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(signing_profile_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // signing_profile_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(signing_profile_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // signing_profile_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(signing_profile_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // signing_profile_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(signing_profile_dto_list_envelopeJSON, "result");
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
        signing_profile_dto_t *resultItem = signing_profile_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    signing_profile_dto_list_envelope_local_var = signing_profile_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return signing_profile_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            signing_profile_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
