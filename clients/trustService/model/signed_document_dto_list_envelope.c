#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "signed_document_dto_list_envelope.h"



signed_document_dto_list_envelope_t *signed_document_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    signed_document_dto_list_envelope_t *signed_document_dto_list_envelope_local_var = malloc(sizeof(signed_document_dto_list_envelope_t));
    if (!signed_document_dto_list_envelope_local_var) {
        return NULL;
    }
    signed_document_dto_list_envelope_local_var->is_success = is_success;
    signed_document_dto_list_envelope_local_var->error_message = error_message;
    signed_document_dto_list_envelope_local_var->correlation_id = correlation_id;
    signed_document_dto_list_envelope_local_var->timestamp = timestamp;
    signed_document_dto_list_envelope_local_var->activity_id = activity_id;
    signed_document_dto_list_envelope_local_var->result = result;

    return signed_document_dto_list_envelope_local_var;
}


void signed_document_dto_list_envelope_free(signed_document_dto_list_envelope_t *signed_document_dto_list_envelope) {
    if(NULL == signed_document_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (signed_document_dto_list_envelope->error_message) {
        free(signed_document_dto_list_envelope->error_message);
        signed_document_dto_list_envelope->error_message = NULL;
    }
    if (signed_document_dto_list_envelope->correlation_id) {
        free(signed_document_dto_list_envelope->correlation_id);
        signed_document_dto_list_envelope->correlation_id = NULL;
    }
    if (signed_document_dto_list_envelope->timestamp) {
        free(signed_document_dto_list_envelope->timestamp);
        signed_document_dto_list_envelope->timestamp = NULL;
    }
    if (signed_document_dto_list_envelope->activity_id) {
        free(signed_document_dto_list_envelope->activity_id);
        signed_document_dto_list_envelope->activity_id = NULL;
    }
    if (signed_document_dto_list_envelope->result) {
        list_ForEach(listEntry, signed_document_dto_list_envelope->result) {
            signed_document_dto_free(listEntry->data);
        }
        list_freeList(signed_document_dto_list_envelope->result);
        signed_document_dto_list_envelope->result = NULL;
    }
    free(signed_document_dto_list_envelope);
}

cJSON *signed_document_dto_list_envelope_convertToJSON(signed_document_dto_list_envelope_t *signed_document_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // signed_document_dto_list_envelope->is_success
    if(signed_document_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", signed_document_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // signed_document_dto_list_envelope->error_message
    if(signed_document_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", signed_document_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_dto_list_envelope->correlation_id
    if(signed_document_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", signed_document_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_dto_list_envelope->timestamp
    if(signed_document_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", signed_document_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // signed_document_dto_list_envelope->activity_id
    if(signed_document_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", signed_document_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_dto_list_envelope->result
    if(signed_document_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (signed_document_dto_list_envelope->result) {
    list_ForEach(resultListEntry, signed_document_dto_list_envelope->result) {
    cJSON *itemLocal = signed_document_dto_convertToJSON(resultListEntry->data);
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

signed_document_dto_list_envelope_t *signed_document_dto_list_envelope_parseFromJSON(cJSON *signed_document_dto_list_envelopeJSON){

    signed_document_dto_list_envelope_t *signed_document_dto_list_envelope_local_var = NULL;

    // define the local list for signed_document_dto_list_envelope->result
    list_t *resultList = NULL;

    // signed_document_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(signed_document_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // signed_document_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(signed_document_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // signed_document_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(signed_document_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // signed_document_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(signed_document_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // signed_document_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(signed_document_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // signed_document_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(signed_document_dto_list_envelopeJSON, "result");
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
        signed_document_dto_t *resultItem = signed_document_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    signed_document_dto_list_envelope_local_var = signed_document_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return signed_document_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            signed_document_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
