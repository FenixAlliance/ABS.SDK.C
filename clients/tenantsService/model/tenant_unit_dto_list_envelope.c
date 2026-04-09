#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tenant_unit_dto_list_envelope.h"



tenant_unit_dto_list_envelope_t *tenant_unit_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    tenant_unit_dto_list_envelope_t *tenant_unit_dto_list_envelope_local_var = malloc(sizeof(tenant_unit_dto_list_envelope_t));
    if (!tenant_unit_dto_list_envelope_local_var) {
        return NULL;
    }
    tenant_unit_dto_list_envelope_local_var->is_success = is_success;
    tenant_unit_dto_list_envelope_local_var->error_message = error_message;
    tenant_unit_dto_list_envelope_local_var->correlation_id = correlation_id;
    tenant_unit_dto_list_envelope_local_var->timestamp = timestamp;
    tenant_unit_dto_list_envelope_local_var->activity_id = activity_id;
    tenant_unit_dto_list_envelope_local_var->result = result;

    return tenant_unit_dto_list_envelope_local_var;
}


void tenant_unit_dto_list_envelope_free(tenant_unit_dto_list_envelope_t *tenant_unit_dto_list_envelope) {
    if(NULL == tenant_unit_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (tenant_unit_dto_list_envelope->error_message) {
        free(tenant_unit_dto_list_envelope->error_message);
        tenant_unit_dto_list_envelope->error_message = NULL;
    }
    if (tenant_unit_dto_list_envelope->correlation_id) {
        free(tenant_unit_dto_list_envelope->correlation_id);
        tenant_unit_dto_list_envelope->correlation_id = NULL;
    }
    if (tenant_unit_dto_list_envelope->timestamp) {
        free(tenant_unit_dto_list_envelope->timestamp);
        tenant_unit_dto_list_envelope->timestamp = NULL;
    }
    if (tenant_unit_dto_list_envelope->activity_id) {
        free(tenant_unit_dto_list_envelope->activity_id);
        tenant_unit_dto_list_envelope->activity_id = NULL;
    }
    if (tenant_unit_dto_list_envelope->result) {
        list_ForEach(listEntry, tenant_unit_dto_list_envelope->result) {
            tenant_unit_dto_free(listEntry->data);
        }
        list_freeList(tenant_unit_dto_list_envelope->result);
        tenant_unit_dto_list_envelope->result = NULL;
    }
    free(tenant_unit_dto_list_envelope);
}

cJSON *tenant_unit_dto_list_envelope_convertToJSON(tenant_unit_dto_list_envelope_t *tenant_unit_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // tenant_unit_dto_list_envelope->is_success
    if(tenant_unit_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", tenant_unit_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // tenant_unit_dto_list_envelope->error_message
    if(tenant_unit_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", tenant_unit_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // tenant_unit_dto_list_envelope->correlation_id
    if(tenant_unit_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", tenant_unit_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_unit_dto_list_envelope->timestamp
    if(tenant_unit_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", tenant_unit_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // tenant_unit_dto_list_envelope->activity_id
    if(tenant_unit_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", tenant_unit_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_unit_dto_list_envelope->result
    if(tenant_unit_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (tenant_unit_dto_list_envelope->result) {
    list_ForEach(resultListEntry, tenant_unit_dto_list_envelope->result) {
    cJSON *itemLocal = tenant_unit_dto_convertToJSON(resultListEntry->data);
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

tenant_unit_dto_list_envelope_t *tenant_unit_dto_list_envelope_parseFromJSON(cJSON *tenant_unit_dto_list_envelopeJSON){

    tenant_unit_dto_list_envelope_t *tenant_unit_dto_list_envelope_local_var = NULL;

    // define the local list for tenant_unit_dto_list_envelope->result
    list_t *resultList = NULL;

    // tenant_unit_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(tenant_unit_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // tenant_unit_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(tenant_unit_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // tenant_unit_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(tenant_unit_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // tenant_unit_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(tenant_unit_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // tenant_unit_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(tenant_unit_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // tenant_unit_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(tenant_unit_dto_list_envelopeJSON, "result");
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
        tenant_unit_dto_t *resultItem = tenant_unit_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    tenant_unit_dto_list_envelope_local_var = tenant_unit_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return tenant_unit_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            tenant_unit_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
