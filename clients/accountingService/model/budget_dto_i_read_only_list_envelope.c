#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "budget_dto_i_read_only_list_envelope.h"



budget_dto_i_read_only_list_envelope_t *budget_dto_i_read_only_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    budget_dto_i_read_only_list_envelope_t *budget_dto_i_read_only_list_envelope_local_var = malloc(sizeof(budget_dto_i_read_only_list_envelope_t));
    if (!budget_dto_i_read_only_list_envelope_local_var) {
        return NULL;
    }
    budget_dto_i_read_only_list_envelope_local_var->is_success = is_success;
    budget_dto_i_read_only_list_envelope_local_var->error_message = error_message;
    budget_dto_i_read_only_list_envelope_local_var->correlation_id = correlation_id;
    budget_dto_i_read_only_list_envelope_local_var->timestamp = timestamp;
    budget_dto_i_read_only_list_envelope_local_var->activity_id = activity_id;
    budget_dto_i_read_only_list_envelope_local_var->result = result;

    return budget_dto_i_read_only_list_envelope_local_var;
}


void budget_dto_i_read_only_list_envelope_free(budget_dto_i_read_only_list_envelope_t *budget_dto_i_read_only_list_envelope) {
    if(NULL == budget_dto_i_read_only_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (budget_dto_i_read_only_list_envelope->error_message) {
        free(budget_dto_i_read_only_list_envelope->error_message);
        budget_dto_i_read_only_list_envelope->error_message = NULL;
    }
    if (budget_dto_i_read_only_list_envelope->correlation_id) {
        free(budget_dto_i_read_only_list_envelope->correlation_id);
        budget_dto_i_read_only_list_envelope->correlation_id = NULL;
    }
    if (budget_dto_i_read_only_list_envelope->timestamp) {
        free(budget_dto_i_read_only_list_envelope->timestamp);
        budget_dto_i_read_only_list_envelope->timestamp = NULL;
    }
    if (budget_dto_i_read_only_list_envelope->activity_id) {
        free(budget_dto_i_read_only_list_envelope->activity_id);
        budget_dto_i_read_only_list_envelope->activity_id = NULL;
    }
    if (budget_dto_i_read_only_list_envelope->result) {
        list_ForEach(listEntry, budget_dto_i_read_only_list_envelope->result) {
            budget_dto_free(listEntry->data);
        }
        list_freeList(budget_dto_i_read_only_list_envelope->result);
        budget_dto_i_read_only_list_envelope->result = NULL;
    }
    free(budget_dto_i_read_only_list_envelope);
}

cJSON *budget_dto_i_read_only_list_envelope_convertToJSON(budget_dto_i_read_only_list_envelope_t *budget_dto_i_read_only_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // budget_dto_i_read_only_list_envelope->is_success
    if(budget_dto_i_read_only_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", budget_dto_i_read_only_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // budget_dto_i_read_only_list_envelope->error_message
    if(budget_dto_i_read_only_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", budget_dto_i_read_only_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // budget_dto_i_read_only_list_envelope->correlation_id
    if(budget_dto_i_read_only_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", budget_dto_i_read_only_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // budget_dto_i_read_only_list_envelope->timestamp
    if(budget_dto_i_read_only_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", budget_dto_i_read_only_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // budget_dto_i_read_only_list_envelope->activity_id
    if(budget_dto_i_read_only_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", budget_dto_i_read_only_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // budget_dto_i_read_only_list_envelope->result
    if(budget_dto_i_read_only_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (budget_dto_i_read_only_list_envelope->result) {
    list_ForEach(resultListEntry, budget_dto_i_read_only_list_envelope->result) {
    cJSON *itemLocal = budget_dto_convertToJSON(resultListEntry->data);
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

budget_dto_i_read_only_list_envelope_t *budget_dto_i_read_only_list_envelope_parseFromJSON(cJSON *budget_dto_i_read_only_list_envelopeJSON){

    budget_dto_i_read_only_list_envelope_t *budget_dto_i_read_only_list_envelope_local_var = NULL;

    // define the local list for budget_dto_i_read_only_list_envelope->result
    list_t *resultList = NULL;

    // budget_dto_i_read_only_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(budget_dto_i_read_only_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // budget_dto_i_read_only_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(budget_dto_i_read_only_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // budget_dto_i_read_only_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(budget_dto_i_read_only_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // budget_dto_i_read_only_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(budget_dto_i_read_only_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // budget_dto_i_read_only_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(budget_dto_i_read_only_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // budget_dto_i_read_only_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(budget_dto_i_read_only_list_envelopeJSON, "result");
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
        budget_dto_t *resultItem = budget_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    budget_dto_i_read_only_list_envelope_local_var = budget_dto_i_read_only_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return budget_dto_i_read_only_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            budget_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
