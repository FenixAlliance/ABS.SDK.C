#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "signature_dto_list_envelope.h"



signature_dto_list_envelope_t *signature_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    signature_dto_list_envelope_t *signature_dto_list_envelope_local_var = malloc(sizeof(signature_dto_list_envelope_t));
    if (!signature_dto_list_envelope_local_var) {
        return NULL;
    }
    signature_dto_list_envelope_local_var->is_success = is_success;
    signature_dto_list_envelope_local_var->error_message = error_message;
    signature_dto_list_envelope_local_var->correlation_id = correlation_id;
    signature_dto_list_envelope_local_var->timestamp = timestamp;
    signature_dto_list_envelope_local_var->activity_id = activity_id;
    signature_dto_list_envelope_local_var->result = result;

    return signature_dto_list_envelope_local_var;
}


void signature_dto_list_envelope_free(signature_dto_list_envelope_t *signature_dto_list_envelope) {
    if(NULL == signature_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (signature_dto_list_envelope->error_message) {
        free(signature_dto_list_envelope->error_message);
        signature_dto_list_envelope->error_message = NULL;
    }
    if (signature_dto_list_envelope->correlation_id) {
        free(signature_dto_list_envelope->correlation_id);
        signature_dto_list_envelope->correlation_id = NULL;
    }
    if (signature_dto_list_envelope->timestamp) {
        free(signature_dto_list_envelope->timestamp);
        signature_dto_list_envelope->timestamp = NULL;
    }
    if (signature_dto_list_envelope->activity_id) {
        free(signature_dto_list_envelope->activity_id);
        signature_dto_list_envelope->activity_id = NULL;
    }
    if (signature_dto_list_envelope->result) {
        list_ForEach(listEntry, signature_dto_list_envelope->result) {
            signature_dto_free(listEntry->data);
        }
        list_freeList(signature_dto_list_envelope->result);
        signature_dto_list_envelope->result = NULL;
    }
    free(signature_dto_list_envelope);
}

cJSON *signature_dto_list_envelope_convertToJSON(signature_dto_list_envelope_t *signature_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // signature_dto_list_envelope->is_success
    if(signature_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", signature_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // signature_dto_list_envelope->error_message
    if(signature_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", signature_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // signature_dto_list_envelope->correlation_id
    if(signature_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", signature_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // signature_dto_list_envelope->timestamp
    if(signature_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", signature_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // signature_dto_list_envelope->activity_id
    if(signature_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", signature_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // signature_dto_list_envelope->result
    if(signature_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (signature_dto_list_envelope->result) {
    list_ForEach(resultListEntry, signature_dto_list_envelope->result) {
    cJSON *itemLocal = signature_dto_convertToJSON(resultListEntry->data);
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

signature_dto_list_envelope_t *signature_dto_list_envelope_parseFromJSON(cJSON *signature_dto_list_envelopeJSON){

    signature_dto_list_envelope_t *signature_dto_list_envelope_local_var = NULL;

    // define the local list for signature_dto_list_envelope->result
    list_t *resultList = NULL;

    // signature_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(signature_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // signature_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(signature_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // signature_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(signature_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // signature_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(signature_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // signature_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(signature_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // signature_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(signature_dto_list_envelopeJSON, "result");
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
        signature_dto_t *resultItem = signature_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    signature_dto_list_envelope_local_var = signature_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return signature_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            signature_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
