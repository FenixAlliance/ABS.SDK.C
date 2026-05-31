#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "maintenance_visit_dto_list_envelope.h"



maintenance_visit_dto_list_envelope_t *maintenance_visit_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    maintenance_visit_dto_list_envelope_t *maintenance_visit_dto_list_envelope_local_var = malloc(sizeof(maintenance_visit_dto_list_envelope_t));
    if (!maintenance_visit_dto_list_envelope_local_var) {
        return NULL;
    }
    maintenance_visit_dto_list_envelope_local_var->is_success = is_success;
    maintenance_visit_dto_list_envelope_local_var->error_message = error_message;
    maintenance_visit_dto_list_envelope_local_var->correlation_id = correlation_id;
    maintenance_visit_dto_list_envelope_local_var->timestamp = timestamp;
    maintenance_visit_dto_list_envelope_local_var->activity_id = activity_id;
    maintenance_visit_dto_list_envelope_local_var->result = result;

    return maintenance_visit_dto_list_envelope_local_var;
}


void maintenance_visit_dto_list_envelope_free(maintenance_visit_dto_list_envelope_t *maintenance_visit_dto_list_envelope) {
    if(NULL == maintenance_visit_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (maintenance_visit_dto_list_envelope->error_message) {
        free(maintenance_visit_dto_list_envelope->error_message);
        maintenance_visit_dto_list_envelope->error_message = NULL;
    }
    if (maintenance_visit_dto_list_envelope->correlation_id) {
        free(maintenance_visit_dto_list_envelope->correlation_id);
        maintenance_visit_dto_list_envelope->correlation_id = NULL;
    }
    if (maintenance_visit_dto_list_envelope->timestamp) {
        free(maintenance_visit_dto_list_envelope->timestamp);
        maintenance_visit_dto_list_envelope->timestamp = NULL;
    }
    if (maintenance_visit_dto_list_envelope->activity_id) {
        free(maintenance_visit_dto_list_envelope->activity_id);
        maintenance_visit_dto_list_envelope->activity_id = NULL;
    }
    if (maintenance_visit_dto_list_envelope->result) {
        list_ForEach(listEntry, maintenance_visit_dto_list_envelope->result) {
            maintenance_visit_dto_free(listEntry->data);
        }
        list_freeList(maintenance_visit_dto_list_envelope->result);
        maintenance_visit_dto_list_envelope->result = NULL;
    }
    free(maintenance_visit_dto_list_envelope);
}

cJSON *maintenance_visit_dto_list_envelope_convertToJSON(maintenance_visit_dto_list_envelope_t *maintenance_visit_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // maintenance_visit_dto_list_envelope->is_success
    if(maintenance_visit_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", maintenance_visit_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // maintenance_visit_dto_list_envelope->error_message
    if(maintenance_visit_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", maintenance_visit_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // maintenance_visit_dto_list_envelope->correlation_id
    if(maintenance_visit_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", maintenance_visit_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // maintenance_visit_dto_list_envelope->timestamp
    if(maintenance_visit_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", maintenance_visit_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // maintenance_visit_dto_list_envelope->activity_id
    if(maintenance_visit_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", maintenance_visit_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // maintenance_visit_dto_list_envelope->result
    if(maintenance_visit_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (maintenance_visit_dto_list_envelope->result) {
    list_ForEach(resultListEntry, maintenance_visit_dto_list_envelope->result) {
    cJSON *itemLocal = maintenance_visit_dto_convertToJSON(resultListEntry->data);
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

maintenance_visit_dto_list_envelope_t *maintenance_visit_dto_list_envelope_parseFromJSON(cJSON *maintenance_visit_dto_list_envelopeJSON){

    maintenance_visit_dto_list_envelope_t *maintenance_visit_dto_list_envelope_local_var = NULL;

    // define the local list for maintenance_visit_dto_list_envelope->result
    list_t *resultList = NULL;

    // maintenance_visit_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(maintenance_visit_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // maintenance_visit_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(maintenance_visit_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // maintenance_visit_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(maintenance_visit_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // maintenance_visit_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(maintenance_visit_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // maintenance_visit_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(maintenance_visit_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // maintenance_visit_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(maintenance_visit_dto_list_envelopeJSON, "result");
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
        maintenance_visit_dto_t *resultItem = maintenance_visit_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    maintenance_visit_dto_list_envelope_local_var = maintenance_visit_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return maintenance_visit_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            maintenance_visit_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
