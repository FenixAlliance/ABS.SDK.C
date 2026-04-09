#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "o_auth_authorization_dto_list_envelope.h"



o_auth_authorization_dto_list_envelope_t *o_auth_authorization_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    o_auth_authorization_dto_list_envelope_t *o_auth_authorization_dto_list_envelope_local_var = malloc(sizeof(o_auth_authorization_dto_list_envelope_t));
    if (!o_auth_authorization_dto_list_envelope_local_var) {
        return NULL;
    }
    o_auth_authorization_dto_list_envelope_local_var->is_success = is_success;
    o_auth_authorization_dto_list_envelope_local_var->error_message = error_message;
    o_auth_authorization_dto_list_envelope_local_var->correlation_id = correlation_id;
    o_auth_authorization_dto_list_envelope_local_var->timestamp = timestamp;
    o_auth_authorization_dto_list_envelope_local_var->activity_id = activity_id;
    o_auth_authorization_dto_list_envelope_local_var->result = result;

    return o_auth_authorization_dto_list_envelope_local_var;
}


void o_auth_authorization_dto_list_envelope_free(o_auth_authorization_dto_list_envelope_t *o_auth_authorization_dto_list_envelope) {
    if(NULL == o_auth_authorization_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (o_auth_authorization_dto_list_envelope->error_message) {
        free(o_auth_authorization_dto_list_envelope->error_message);
        o_auth_authorization_dto_list_envelope->error_message = NULL;
    }
    if (o_auth_authorization_dto_list_envelope->correlation_id) {
        free(o_auth_authorization_dto_list_envelope->correlation_id);
        o_auth_authorization_dto_list_envelope->correlation_id = NULL;
    }
    if (o_auth_authorization_dto_list_envelope->timestamp) {
        free(o_auth_authorization_dto_list_envelope->timestamp);
        o_auth_authorization_dto_list_envelope->timestamp = NULL;
    }
    if (o_auth_authorization_dto_list_envelope->activity_id) {
        free(o_auth_authorization_dto_list_envelope->activity_id);
        o_auth_authorization_dto_list_envelope->activity_id = NULL;
    }
    if (o_auth_authorization_dto_list_envelope->result) {
        list_ForEach(listEntry, o_auth_authorization_dto_list_envelope->result) {
            o_auth_authorization_dto_free(listEntry->data);
        }
        list_freeList(o_auth_authorization_dto_list_envelope->result);
        o_auth_authorization_dto_list_envelope->result = NULL;
    }
    free(o_auth_authorization_dto_list_envelope);
}

cJSON *o_auth_authorization_dto_list_envelope_convertToJSON(o_auth_authorization_dto_list_envelope_t *o_auth_authorization_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // o_auth_authorization_dto_list_envelope->is_success
    if(o_auth_authorization_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", o_auth_authorization_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // o_auth_authorization_dto_list_envelope->error_message
    if(o_auth_authorization_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", o_auth_authorization_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // o_auth_authorization_dto_list_envelope->correlation_id
    if(o_auth_authorization_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", o_auth_authorization_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // o_auth_authorization_dto_list_envelope->timestamp
    if(o_auth_authorization_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", o_auth_authorization_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // o_auth_authorization_dto_list_envelope->activity_id
    if(o_auth_authorization_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", o_auth_authorization_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // o_auth_authorization_dto_list_envelope->result
    if(o_auth_authorization_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (o_auth_authorization_dto_list_envelope->result) {
    list_ForEach(resultListEntry, o_auth_authorization_dto_list_envelope->result) {
    cJSON *itemLocal = o_auth_authorization_dto_convertToJSON(resultListEntry->data);
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

o_auth_authorization_dto_list_envelope_t *o_auth_authorization_dto_list_envelope_parseFromJSON(cJSON *o_auth_authorization_dto_list_envelopeJSON){

    o_auth_authorization_dto_list_envelope_t *o_auth_authorization_dto_list_envelope_local_var = NULL;

    // define the local list for o_auth_authorization_dto_list_envelope->result
    list_t *resultList = NULL;

    // o_auth_authorization_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(o_auth_authorization_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // o_auth_authorization_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(o_auth_authorization_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // o_auth_authorization_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(o_auth_authorization_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // o_auth_authorization_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(o_auth_authorization_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // o_auth_authorization_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(o_auth_authorization_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // o_auth_authorization_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(o_auth_authorization_dto_list_envelopeJSON, "result");
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
        o_auth_authorization_dto_t *resultItem = o_auth_authorization_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    o_auth_authorization_dto_list_envelope_local_var = o_auth_authorization_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return o_auth_authorization_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            o_auth_authorization_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
