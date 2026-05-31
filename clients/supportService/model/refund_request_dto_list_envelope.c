#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "refund_request_dto_list_envelope.h"



refund_request_dto_list_envelope_t *refund_request_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    refund_request_dto_list_envelope_t *refund_request_dto_list_envelope_local_var = malloc(sizeof(refund_request_dto_list_envelope_t));
    if (!refund_request_dto_list_envelope_local_var) {
        return NULL;
    }
    refund_request_dto_list_envelope_local_var->is_success = is_success;
    refund_request_dto_list_envelope_local_var->error_message = error_message;
    refund_request_dto_list_envelope_local_var->correlation_id = correlation_id;
    refund_request_dto_list_envelope_local_var->timestamp = timestamp;
    refund_request_dto_list_envelope_local_var->activity_id = activity_id;
    refund_request_dto_list_envelope_local_var->result = result;

    return refund_request_dto_list_envelope_local_var;
}


void refund_request_dto_list_envelope_free(refund_request_dto_list_envelope_t *refund_request_dto_list_envelope) {
    if(NULL == refund_request_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (refund_request_dto_list_envelope->error_message) {
        free(refund_request_dto_list_envelope->error_message);
        refund_request_dto_list_envelope->error_message = NULL;
    }
    if (refund_request_dto_list_envelope->correlation_id) {
        free(refund_request_dto_list_envelope->correlation_id);
        refund_request_dto_list_envelope->correlation_id = NULL;
    }
    if (refund_request_dto_list_envelope->timestamp) {
        free(refund_request_dto_list_envelope->timestamp);
        refund_request_dto_list_envelope->timestamp = NULL;
    }
    if (refund_request_dto_list_envelope->activity_id) {
        free(refund_request_dto_list_envelope->activity_id);
        refund_request_dto_list_envelope->activity_id = NULL;
    }
    if (refund_request_dto_list_envelope->result) {
        list_ForEach(listEntry, refund_request_dto_list_envelope->result) {
            refund_request_dto_free(listEntry->data);
        }
        list_freeList(refund_request_dto_list_envelope->result);
        refund_request_dto_list_envelope->result = NULL;
    }
    free(refund_request_dto_list_envelope);
}

cJSON *refund_request_dto_list_envelope_convertToJSON(refund_request_dto_list_envelope_t *refund_request_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // refund_request_dto_list_envelope->is_success
    if(refund_request_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", refund_request_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // refund_request_dto_list_envelope->error_message
    if(refund_request_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", refund_request_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // refund_request_dto_list_envelope->correlation_id
    if(refund_request_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", refund_request_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // refund_request_dto_list_envelope->timestamp
    if(refund_request_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", refund_request_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // refund_request_dto_list_envelope->activity_id
    if(refund_request_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", refund_request_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // refund_request_dto_list_envelope->result
    if(refund_request_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (refund_request_dto_list_envelope->result) {
    list_ForEach(resultListEntry, refund_request_dto_list_envelope->result) {
    cJSON *itemLocal = refund_request_dto_convertToJSON(resultListEntry->data);
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

refund_request_dto_list_envelope_t *refund_request_dto_list_envelope_parseFromJSON(cJSON *refund_request_dto_list_envelopeJSON){

    refund_request_dto_list_envelope_t *refund_request_dto_list_envelope_local_var = NULL;

    // define the local list for refund_request_dto_list_envelope->result
    list_t *resultList = NULL;

    // refund_request_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(refund_request_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // refund_request_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(refund_request_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // refund_request_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(refund_request_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // refund_request_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(refund_request_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // refund_request_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(refund_request_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // refund_request_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(refund_request_dto_list_envelopeJSON, "result");
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
        refund_request_dto_t *resultItem = refund_request_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    refund_request_dto_list_envelope_local_var = refund_request_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return refund_request_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            refund_request_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
