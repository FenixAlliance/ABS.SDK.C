#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "social_reaction_dto_list_envelope.h"



social_reaction_dto_list_envelope_t *social_reaction_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    social_reaction_dto_list_envelope_t *social_reaction_dto_list_envelope_local_var = malloc(sizeof(social_reaction_dto_list_envelope_t));
    if (!social_reaction_dto_list_envelope_local_var) {
        return NULL;
    }
    social_reaction_dto_list_envelope_local_var->is_success = is_success;
    social_reaction_dto_list_envelope_local_var->error_message = error_message;
    social_reaction_dto_list_envelope_local_var->correlation_id = correlation_id;
    social_reaction_dto_list_envelope_local_var->timestamp = timestamp;
    social_reaction_dto_list_envelope_local_var->activity_id = activity_id;
    social_reaction_dto_list_envelope_local_var->result = result;

    return social_reaction_dto_list_envelope_local_var;
}


void social_reaction_dto_list_envelope_free(social_reaction_dto_list_envelope_t *social_reaction_dto_list_envelope) {
    if(NULL == social_reaction_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (social_reaction_dto_list_envelope->error_message) {
        free(social_reaction_dto_list_envelope->error_message);
        social_reaction_dto_list_envelope->error_message = NULL;
    }
    if (social_reaction_dto_list_envelope->correlation_id) {
        free(social_reaction_dto_list_envelope->correlation_id);
        social_reaction_dto_list_envelope->correlation_id = NULL;
    }
    if (social_reaction_dto_list_envelope->timestamp) {
        free(social_reaction_dto_list_envelope->timestamp);
        social_reaction_dto_list_envelope->timestamp = NULL;
    }
    if (social_reaction_dto_list_envelope->activity_id) {
        free(social_reaction_dto_list_envelope->activity_id);
        social_reaction_dto_list_envelope->activity_id = NULL;
    }
    if (social_reaction_dto_list_envelope->result) {
        list_ForEach(listEntry, social_reaction_dto_list_envelope->result) {
            social_reaction_dto_free(listEntry->data);
        }
        list_freeList(social_reaction_dto_list_envelope->result);
        social_reaction_dto_list_envelope->result = NULL;
    }
    free(social_reaction_dto_list_envelope);
}

cJSON *social_reaction_dto_list_envelope_convertToJSON(social_reaction_dto_list_envelope_t *social_reaction_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // social_reaction_dto_list_envelope->is_success
    if(social_reaction_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", social_reaction_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // social_reaction_dto_list_envelope->error_message
    if(social_reaction_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", social_reaction_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // social_reaction_dto_list_envelope->correlation_id
    if(social_reaction_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", social_reaction_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // social_reaction_dto_list_envelope->timestamp
    if(social_reaction_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", social_reaction_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // social_reaction_dto_list_envelope->activity_id
    if(social_reaction_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", social_reaction_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // social_reaction_dto_list_envelope->result
    if(social_reaction_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (social_reaction_dto_list_envelope->result) {
    list_ForEach(resultListEntry, social_reaction_dto_list_envelope->result) {
    cJSON *itemLocal = social_reaction_dto_convertToJSON(resultListEntry->data);
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

social_reaction_dto_list_envelope_t *social_reaction_dto_list_envelope_parseFromJSON(cJSON *social_reaction_dto_list_envelopeJSON){

    social_reaction_dto_list_envelope_t *social_reaction_dto_list_envelope_local_var = NULL;

    // define the local list for social_reaction_dto_list_envelope->result
    list_t *resultList = NULL;

    // social_reaction_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(social_reaction_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // social_reaction_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(social_reaction_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // social_reaction_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(social_reaction_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // social_reaction_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(social_reaction_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // social_reaction_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(social_reaction_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // social_reaction_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(social_reaction_dto_list_envelopeJSON, "result");
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
        social_reaction_dto_t *resultItem = social_reaction_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    social_reaction_dto_list_envelope_local_var = social_reaction_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return social_reaction_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            social_reaction_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
