#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "security_permission_dto_list_envelope.h"



security_permission_dto_list_envelope_t *security_permission_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    security_permission_dto_list_envelope_t *security_permission_dto_list_envelope_local_var = malloc(sizeof(security_permission_dto_list_envelope_t));
    if (!security_permission_dto_list_envelope_local_var) {
        return NULL;
    }
    security_permission_dto_list_envelope_local_var->is_success = is_success;
    security_permission_dto_list_envelope_local_var->error_message = error_message;
    security_permission_dto_list_envelope_local_var->correlation_id = correlation_id;
    security_permission_dto_list_envelope_local_var->timestamp = timestamp;
    security_permission_dto_list_envelope_local_var->activity_id = activity_id;
    security_permission_dto_list_envelope_local_var->result = result;

    return security_permission_dto_list_envelope_local_var;
}


void security_permission_dto_list_envelope_free(security_permission_dto_list_envelope_t *security_permission_dto_list_envelope) {
    if(NULL == security_permission_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (security_permission_dto_list_envelope->error_message) {
        free(security_permission_dto_list_envelope->error_message);
        security_permission_dto_list_envelope->error_message = NULL;
    }
    if (security_permission_dto_list_envelope->correlation_id) {
        free(security_permission_dto_list_envelope->correlation_id);
        security_permission_dto_list_envelope->correlation_id = NULL;
    }
    if (security_permission_dto_list_envelope->timestamp) {
        free(security_permission_dto_list_envelope->timestamp);
        security_permission_dto_list_envelope->timestamp = NULL;
    }
    if (security_permission_dto_list_envelope->activity_id) {
        free(security_permission_dto_list_envelope->activity_id);
        security_permission_dto_list_envelope->activity_id = NULL;
    }
    if (security_permission_dto_list_envelope->result) {
        list_ForEach(listEntry, security_permission_dto_list_envelope->result) {
            security_permission_dto_free(listEntry->data);
        }
        list_freeList(security_permission_dto_list_envelope->result);
        security_permission_dto_list_envelope->result = NULL;
    }
    free(security_permission_dto_list_envelope);
}

cJSON *security_permission_dto_list_envelope_convertToJSON(security_permission_dto_list_envelope_t *security_permission_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // security_permission_dto_list_envelope->is_success
    if(security_permission_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", security_permission_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // security_permission_dto_list_envelope->error_message
    if(security_permission_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", security_permission_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // security_permission_dto_list_envelope->correlation_id
    if(security_permission_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", security_permission_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // security_permission_dto_list_envelope->timestamp
    if(security_permission_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", security_permission_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // security_permission_dto_list_envelope->activity_id
    if(security_permission_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", security_permission_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // security_permission_dto_list_envelope->result
    if(security_permission_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (security_permission_dto_list_envelope->result) {
    list_ForEach(resultListEntry, security_permission_dto_list_envelope->result) {
    cJSON *itemLocal = security_permission_dto_convertToJSON(resultListEntry->data);
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

security_permission_dto_list_envelope_t *security_permission_dto_list_envelope_parseFromJSON(cJSON *security_permission_dto_list_envelopeJSON){

    security_permission_dto_list_envelope_t *security_permission_dto_list_envelope_local_var = NULL;

    // define the local list for security_permission_dto_list_envelope->result
    list_t *resultList = NULL;

    // security_permission_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(security_permission_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // security_permission_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(security_permission_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // security_permission_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(security_permission_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // security_permission_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(security_permission_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // security_permission_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(security_permission_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // security_permission_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(security_permission_dto_list_envelopeJSON, "result");
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
        security_permission_dto_t *resultItem = security_permission_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    security_permission_dto_list_envelope_local_var = security_permission_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return security_permission_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            security_permission_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
