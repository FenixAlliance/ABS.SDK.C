#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "extended_tenant_enrollment_dto_list_envelope.h"



extended_tenant_enrollment_dto_list_envelope_t *extended_tenant_enrollment_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    extended_tenant_enrollment_dto_list_envelope_t *extended_tenant_enrollment_dto_list_envelope_local_var = malloc(sizeof(extended_tenant_enrollment_dto_list_envelope_t));
    if (!extended_tenant_enrollment_dto_list_envelope_local_var) {
        return NULL;
    }
    extended_tenant_enrollment_dto_list_envelope_local_var->is_success = is_success;
    extended_tenant_enrollment_dto_list_envelope_local_var->error_message = error_message;
    extended_tenant_enrollment_dto_list_envelope_local_var->correlation_id = correlation_id;
    extended_tenant_enrollment_dto_list_envelope_local_var->timestamp = timestamp;
    extended_tenant_enrollment_dto_list_envelope_local_var->activity_id = activity_id;
    extended_tenant_enrollment_dto_list_envelope_local_var->result = result;

    return extended_tenant_enrollment_dto_list_envelope_local_var;
}


void extended_tenant_enrollment_dto_list_envelope_free(extended_tenant_enrollment_dto_list_envelope_t *extended_tenant_enrollment_dto_list_envelope) {
    if(NULL == extended_tenant_enrollment_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (extended_tenant_enrollment_dto_list_envelope->error_message) {
        free(extended_tenant_enrollment_dto_list_envelope->error_message);
        extended_tenant_enrollment_dto_list_envelope->error_message = NULL;
    }
    if (extended_tenant_enrollment_dto_list_envelope->correlation_id) {
        free(extended_tenant_enrollment_dto_list_envelope->correlation_id);
        extended_tenant_enrollment_dto_list_envelope->correlation_id = NULL;
    }
    if (extended_tenant_enrollment_dto_list_envelope->timestamp) {
        free(extended_tenant_enrollment_dto_list_envelope->timestamp);
        extended_tenant_enrollment_dto_list_envelope->timestamp = NULL;
    }
    if (extended_tenant_enrollment_dto_list_envelope->activity_id) {
        free(extended_tenant_enrollment_dto_list_envelope->activity_id);
        extended_tenant_enrollment_dto_list_envelope->activity_id = NULL;
    }
    if (extended_tenant_enrollment_dto_list_envelope->result) {
        list_ForEach(listEntry, extended_tenant_enrollment_dto_list_envelope->result) {
            extended_tenant_enrollment_dto_free(listEntry->data);
        }
        list_freeList(extended_tenant_enrollment_dto_list_envelope->result);
        extended_tenant_enrollment_dto_list_envelope->result = NULL;
    }
    free(extended_tenant_enrollment_dto_list_envelope);
}

cJSON *extended_tenant_enrollment_dto_list_envelope_convertToJSON(extended_tenant_enrollment_dto_list_envelope_t *extended_tenant_enrollment_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // extended_tenant_enrollment_dto_list_envelope->is_success
    if(extended_tenant_enrollment_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", extended_tenant_enrollment_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // extended_tenant_enrollment_dto_list_envelope->error_message
    if(extended_tenant_enrollment_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", extended_tenant_enrollment_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // extended_tenant_enrollment_dto_list_envelope->correlation_id
    if(extended_tenant_enrollment_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", extended_tenant_enrollment_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_tenant_enrollment_dto_list_envelope->timestamp
    if(extended_tenant_enrollment_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", extended_tenant_enrollment_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // extended_tenant_enrollment_dto_list_envelope->activity_id
    if(extended_tenant_enrollment_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", extended_tenant_enrollment_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_tenant_enrollment_dto_list_envelope->result
    if(extended_tenant_enrollment_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (extended_tenant_enrollment_dto_list_envelope->result) {
    list_ForEach(resultListEntry, extended_tenant_enrollment_dto_list_envelope->result) {
    cJSON *itemLocal = extended_tenant_enrollment_dto_convertToJSON(resultListEntry->data);
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

extended_tenant_enrollment_dto_list_envelope_t *extended_tenant_enrollment_dto_list_envelope_parseFromJSON(cJSON *extended_tenant_enrollment_dto_list_envelopeJSON){

    extended_tenant_enrollment_dto_list_envelope_t *extended_tenant_enrollment_dto_list_envelope_local_var = NULL;

    // define the local list for extended_tenant_enrollment_dto_list_envelope->result
    list_t *resultList = NULL;

    // extended_tenant_enrollment_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(extended_tenant_enrollment_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // extended_tenant_enrollment_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(extended_tenant_enrollment_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // extended_tenant_enrollment_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(extended_tenant_enrollment_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // extended_tenant_enrollment_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(extended_tenant_enrollment_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // extended_tenant_enrollment_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(extended_tenant_enrollment_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // extended_tenant_enrollment_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(extended_tenant_enrollment_dto_list_envelopeJSON, "result");
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
        extended_tenant_enrollment_dto_t *resultItem = extended_tenant_enrollment_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    extended_tenant_enrollment_dto_list_envelope_local_var = extended_tenant_enrollment_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return extended_tenant_enrollment_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            extended_tenant_enrollment_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
