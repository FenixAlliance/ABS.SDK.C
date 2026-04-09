#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "deal_unit_flow_dto_list_envelope.h"



deal_unit_flow_dto_list_envelope_t *deal_unit_flow_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    deal_unit_flow_dto_list_envelope_t *deal_unit_flow_dto_list_envelope_local_var = malloc(sizeof(deal_unit_flow_dto_list_envelope_t));
    if (!deal_unit_flow_dto_list_envelope_local_var) {
        return NULL;
    }
    deal_unit_flow_dto_list_envelope_local_var->is_success = is_success;
    deal_unit_flow_dto_list_envelope_local_var->error_message = error_message;
    deal_unit_flow_dto_list_envelope_local_var->correlation_id = correlation_id;
    deal_unit_flow_dto_list_envelope_local_var->timestamp = timestamp;
    deal_unit_flow_dto_list_envelope_local_var->activity_id = activity_id;
    deal_unit_flow_dto_list_envelope_local_var->result = result;

    return deal_unit_flow_dto_list_envelope_local_var;
}


void deal_unit_flow_dto_list_envelope_free(deal_unit_flow_dto_list_envelope_t *deal_unit_flow_dto_list_envelope) {
    if(NULL == deal_unit_flow_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (deal_unit_flow_dto_list_envelope->error_message) {
        free(deal_unit_flow_dto_list_envelope->error_message);
        deal_unit_flow_dto_list_envelope->error_message = NULL;
    }
    if (deal_unit_flow_dto_list_envelope->correlation_id) {
        free(deal_unit_flow_dto_list_envelope->correlation_id);
        deal_unit_flow_dto_list_envelope->correlation_id = NULL;
    }
    if (deal_unit_flow_dto_list_envelope->timestamp) {
        free(deal_unit_flow_dto_list_envelope->timestamp);
        deal_unit_flow_dto_list_envelope->timestamp = NULL;
    }
    if (deal_unit_flow_dto_list_envelope->activity_id) {
        free(deal_unit_flow_dto_list_envelope->activity_id);
        deal_unit_flow_dto_list_envelope->activity_id = NULL;
    }
    if (deal_unit_flow_dto_list_envelope->result) {
        list_ForEach(listEntry, deal_unit_flow_dto_list_envelope->result) {
            deal_unit_flow_dto_free(listEntry->data);
        }
        list_freeList(deal_unit_flow_dto_list_envelope->result);
        deal_unit_flow_dto_list_envelope->result = NULL;
    }
    free(deal_unit_flow_dto_list_envelope);
}

cJSON *deal_unit_flow_dto_list_envelope_convertToJSON(deal_unit_flow_dto_list_envelope_t *deal_unit_flow_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // deal_unit_flow_dto_list_envelope->is_success
    if(deal_unit_flow_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", deal_unit_flow_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // deal_unit_flow_dto_list_envelope->error_message
    if(deal_unit_flow_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", deal_unit_flow_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_flow_dto_list_envelope->correlation_id
    if(deal_unit_flow_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", deal_unit_flow_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_flow_dto_list_envelope->timestamp
    if(deal_unit_flow_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", deal_unit_flow_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // deal_unit_flow_dto_list_envelope->activity_id
    if(deal_unit_flow_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", deal_unit_flow_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_flow_dto_list_envelope->result
    if(deal_unit_flow_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (deal_unit_flow_dto_list_envelope->result) {
    list_ForEach(resultListEntry, deal_unit_flow_dto_list_envelope->result) {
    cJSON *itemLocal = deal_unit_flow_dto_convertToJSON(resultListEntry->data);
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

deal_unit_flow_dto_list_envelope_t *deal_unit_flow_dto_list_envelope_parseFromJSON(cJSON *deal_unit_flow_dto_list_envelopeJSON){

    deal_unit_flow_dto_list_envelope_t *deal_unit_flow_dto_list_envelope_local_var = NULL;

    // define the local list for deal_unit_flow_dto_list_envelope->result
    list_t *resultList = NULL;

    // deal_unit_flow_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(deal_unit_flow_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // deal_unit_flow_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(deal_unit_flow_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // deal_unit_flow_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(deal_unit_flow_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // deal_unit_flow_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(deal_unit_flow_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // deal_unit_flow_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(deal_unit_flow_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // deal_unit_flow_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(deal_unit_flow_dto_list_envelopeJSON, "result");
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
        deal_unit_flow_dto_t *resultItem = deal_unit_flow_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    deal_unit_flow_dto_list_envelope_local_var = deal_unit_flow_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return deal_unit_flow_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            deal_unit_flow_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
