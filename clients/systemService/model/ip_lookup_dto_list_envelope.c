#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ip_lookup_dto_list_envelope.h"



ip_lookup_dto_list_envelope_t *ip_lookup_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    ip_lookup_dto_list_envelope_t *ip_lookup_dto_list_envelope_local_var = malloc(sizeof(ip_lookup_dto_list_envelope_t));
    if (!ip_lookup_dto_list_envelope_local_var) {
        return NULL;
    }
    ip_lookup_dto_list_envelope_local_var->is_success = is_success;
    ip_lookup_dto_list_envelope_local_var->error_message = error_message;
    ip_lookup_dto_list_envelope_local_var->correlation_id = correlation_id;
    ip_lookup_dto_list_envelope_local_var->timestamp = timestamp;
    ip_lookup_dto_list_envelope_local_var->activity_id = activity_id;
    ip_lookup_dto_list_envelope_local_var->result = result;

    return ip_lookup_dto_list_envelope_local_var;
}


void ip_lookup_dto_list_envelope_free(ip_lookup_dto_list_envelope_t *ip_lookup_dto_list_envelope) {
    if(NULL == ip_lookup_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (ip_lookup_dto_list_envelope->error_message) {
        free(ip_lookup_dto_list_envelope->error_message);
        ip_lookup_dto_list_envelope->error_message = NULL;
    }
    if (ip_lookup_dto_list_envelope->correlation_id) {
        free(ip_lookup_dto_list_envelope->correlation_id);
        ip_lookup_dto_list_envelope->correlation_id = NULL;
    }
    if (ip_lookup_dto_list_envelope->timestamp) {
        free(ip_lookup_dto_list_envelope->timestamp);
        ip_lookup_dto_list_envelope->timestamp = NULL;
    }
    if (ip_lookup_dto_list_envelope->activity_id) {
        free(ip_lookup_dto_list_envelope->activity_id);
        ip_lookup_dto_list_envelope->activity_id = NULL;
    }
    if (ip_lookup_dto_list_envelope->result) {
        list_ForEach(listEntry, ip_lookup_dto_list_envelope->result) {
            ip_lookup_dto_free(listEntry->data);
        }
        list_freeList(ip_lookup_dto_list_envelope->result);
        ip_lookup_dto_list_envelope->result = NULL;
    }
    free(ip_lookup_dto_list_envelope);
}

cJSON *ip_lookup_dto_list_envelope_convertToJSON(ip_lookup_dto_list_envelope_t *ip_lookup_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // ip_lookup_dto_list_envelope->is_success
    if(ip_lookup_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", ip_lookup_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // ip_lookup_dto_list_envelope->error_message
    if(ip_lookup_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", ip_lookup_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // ip_lookup_dto_list_envelope->correlation_id
    if(ip_lookup_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", ip_lookup_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // ip_lookup_dto_list_envelope->timestamp
    if(ip_lookup_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", ip_lookup_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // ip_lookup_dto_list_envelope->activity_id
    if(ip_lookup_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", ip_lookup_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // ip_lookup_dto_list_envelope->result
    if(ip_lookup_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (ip_lookup_dto_list_envelope->result) {
    list_ForEach(resultListEntry, ip_lookup_dto_list_envelope->result) {
    cJSON *itemLocal = ip_lookup_dto_convertToJSON(resultListEntry->data);
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

ip_lookup_dto_list_envelope_t *ip_lookup_dto_list_envelope_parseFromJSON(cJSON *ip_lookup_dto_list_envelopeJSON){

    ip_lookup_dto_list_envelope_t *ip_lookup_dto_list_envelope_local_var = NULL;

    // define the local list for ip_lookup_dto_list_envelope->result
    list_t *resultList = NULL;

    // ip_lookup_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(ip_lookup_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // ip_lookup_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(ip_lookup_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // ip_lookup_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(ip_lookup_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // ip_lookup_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(ip_lookup_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // ip_lookup_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(ip_lookup_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // ip_lookup_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(ip_lookup_dto_list_envelopeJSON, "result");
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
        ip_lookup_dto_t *resultItem = ip_lookup_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    ip_lookup_dto_list_envelope_local_var = ip_lookup_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return ip_lookup_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            ip_lookup_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
