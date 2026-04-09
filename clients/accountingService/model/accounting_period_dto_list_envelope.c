#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "accounting_period_dto_list_envelope.h"



accounting_period_dto_list_envelope_t *accounting_period_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    accounting_period_dto_list_envelope_t *accounting_period_dto_list_envelope_local_var = malloc(sizeof(accounting_period_dto_list_envelope_t));
    if (!accounting_period_dto_list_envelope_local_var) {
        return NULL;
    }
    accounting_period_dto_list_envelope_local_var->is_success = is_success;
    accounting_period_dto_list_envelope_local_var->error_message = error_message;
    accounting_period_dto_list_envelope_local_var->correlation_id = correlation_id;
    accounting_period_dto_list_envelope_local_var->timestamp = timestamp;
    accounting_period_dto_list_envelope_local_var->activity_id = activity_id;
    accounting_period_dto_list_envelope_local_var->result = result;

    return accounting_period_dto_list_envelope_local_var;
}


void accounting_period_dto_list_envelope_free(accounting_period_dto_list_envelope_t *accounting_period_dto_list_envelope) {
    if(NULL == accounting_period_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (accounting_period_dto_list_envelope->error_message) {
        free(accounting_period_dto_list_envelope->error_message);
        accounting_period_dto_list_envelope->error_message = NULL;
    }
    if (accounting_period_dto_list_envelope->correlation_id) {
        free(accounting_period_dto_list_envelope->correlation_id);
        accounting_period_dto_list_envelope->correlation_id = NULL;
    }
    if (accounting_period_dto_list_envelope->timestamp) {
        free(accounting_period_dto_list_envelope->timestamp);
        accounting_period_dto_list_envelope->timestamp = NULL;
    }
    if (accounting_period_dto_list_envelope->activity_id) {
        free(accounting_period_dto_list_envelope->activity_id);
        accounting_period_dto_list_envelope->activity_id = NULL;
    }
    if (accounting_period_dto_list_envelope->result) {
        list_ForEach(listEntry, accounting_period_dto_list_envelope->result) {
            accounting_period_dto_free(listEntry->data);
        }
        list_freeList(accounting_period_dto_list_envelope->result);
        accounting_period_dto_list_envelope->result = NULL;
    }
    free(accounting_period_dto_list_envelope);
}

cJSON *accounting_period_dto_list_envelope_convertToJSON(accounting_period_dto_list_envelope_t *accounting_period_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // accounting_period_dto_list_envelope->is_success
    if(accounting_period_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", accounting_period_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // accounting_period_dto_list_envelope->error_message
    if(accounting_period_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", accounting_period_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // accounting_period_dto_list_envelope->correlation_id
    if(accounting_period_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", accounting_period_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // accounting_period_dto_list_envelope->timestamp
    if(accounting_period_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", accounting_period_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // accounting_period_dto_list_envelope->activity_id
    if(accounting_period_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", accounting_period_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // accounting_period_dto_list_envelope->result
    if(accounting_period_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (accounting_period_dto_list_envelope->result) {
    list_ForEach(resultListEntry, accounting_period_dto_list_envelope->result) {
    cJSON *itemLocal = accounting_period_dto_convertToJSON(resultListEntry->data);
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

accounting_period_dto_list_envelope_t *accounting_period_dto_list_envelope_parseFromJSON(cJSON *accounting_period_dto_list_envelopeJSON){

    accounting_period_dto_list_envelope_t *accounting_period_dto_list_envelope_local_var = NULL;

    // define the local list for accounting_period_dto_list_envelope->result
    list_t *resultList = NULL;

    // accounting_period_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(accounting_period_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // accounting_period_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(accounting_period_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // accounting_period_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(accounting_period_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // accounting_period_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(accounting_period_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // accounting_period_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(accounting_period_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // accounting_period_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(accounting_period_dto_list_envelopeJSON, "result");
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
        accounting_period_dto_t *resultItem = accounting_period_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    accounting_period_dto_list_envelope_local_var = accounting_period_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return accounting_period_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            accounting_period_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
