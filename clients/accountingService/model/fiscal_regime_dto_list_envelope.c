#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "fiscal_regime_dto_list_envelope.h"



fiscal_regime_dto_list_envelope_t *fiscal_regime_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    fiscal_regime_dto_list_envelope_t *fiscal_regime_dto_list_envelope_local_var = malloc(sizeof(fiscal_regime_dto_list_envelope_t));
    if (!fiscal_regime_dto_list_envelope_local_var) {
        return NULL;
    }
    fiscal_regime_dto_list_envelope_local_var->is_success = is_success;
    fiscal_regime_dto_list_envelope_local_var->error_message = error_message;
    fiscal_regime_dto_list_envelope_local_var->correlation_id = correlation_id;
    fiscal_regime_dto_list_envelope_local_var->timestamp = timestamp;
    fiscal_regime_dto_list_envelope_local_var->activity_id = activity_id;
    fiscal_regime_dto_list_envelope_local_var->result = result;

    return fiscal_regime_dto_list_envelope_local_var;
}


void fiscal_regime_dto_list_envelope_free(fiscal_regime_dto_list_envelope_t *fiscal_regime_dto_list_envelope) {
    if(NULL == fiscal_regime_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (fiscal_regime_dto_list_envelope->error_message) {
        free(fiscal_regime_dto_list_envelope->error_message);
        fiscal_regime_dto_list_envelope->error_message = NULL;
    }
    if (fiscal_regime_dto_list_envelope->correlation_id) {
        free(fiscal_regime_dto_list_envelope->correlation_id);
        fiscal_regime_dto_list_envelope->correlation_id = NULL;
    }
    if (fiscal_regime_dto_list_envelope->timestamp) {
        free(fiscal_regime_dto_list_envelope->timestamp);
        fiscal_regime_dto_list_envelope->timestamp = NULL;
    }
    if (fiscal_regime_dto_list_envelope->activity_id) {
        free(fiscal_regime_dto_list_envelope->activity_id);
        fiscal_regime_dto_list_envelope->activity_id = NULL;
    }
    if (fiscal_regime_dto_list_envelope->result) {
        list_ForEach(listEntry, fiscal_regime_dto_list_envelope->result) {
            fiscal_regime_dto_free(listEntry->data);
        }
        list_freeList(fiscal_regime_dto_list_envelope->result);
        fiscal_regime_dto_list_envelope->result = NULL;
    }
    free(fiscal_regime_dto_list_envelope);
}

cJSON *fiscal_regime_dto_list_envelope_convertToJSON(fiscal_regime_dto_list_envelope_t *fiscal_regime_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // fiscal_regime_dto_list_envelope->is_success
    if(fiscal_regime_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", fiscal_regime_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // fiscal_regime_dto_list_envelope->error_message
    if(fiscal_regime_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", fiscal_regime_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // fiscal_regime_dto_list_envelope->correlation_id
    if(fiscal_regime_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", fiscal_regime_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // fiscal_regime_dto_list_envelope->timestamp
    if(fiscal_regime_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", fiscal_regime_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // fiscal_regime_dto_list_envelope->activity_id
    if(fiscal_regime_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", fiscal_regime_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // fiscal_regime_dto_list_envelope->result
    if(fiscal_regime_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (fiscal_regime_dto_list_envelope->result) {
    list_ForEach(resultListEntry, fiscal_regime_dto_list_envelope->result) {
    cJSON *itemLocal = fiscal_regime_dto_convertToJSON(resultListEntry->data);
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

fiscal_regime_dto_list_envelope_t *fiscal_regime_dto_list_envelope_parseFromJSON(cJSON *fiscal_regime_dto_list_envelopeJSON){

    fiscal_regime_dto_list_envelope_t *fiscal_regime_dto_list_envelope_local_var = NULL;

    // define the local list for fiscal_regime_dto_list_envelope->result
    list_t *resultList = NULL;

    // fiscal_regime_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(fiscal_regime_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // fiscal_regime_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(fiscal_regime_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // fiscal_regime_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(fiscal_regime_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // fiscal_regime_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(fiscal_regime_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // fiscal_regime_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(fiscal_regime_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // fiscal_regime_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(fiscal_regime_dto_list_envelopeJSON, "result");
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
        fiscal_regime_dto_t *resultItem = fiscal_regime_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    fiscal_regime_dto_list_envelope_local_var = fiscal_regime_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return fiscal_regime_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            fiscal_regime_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
