#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "support_ticket_type_dto_list_envelope.h"



support_ticket_type_dto_list_envelope_t *support_ticket_type_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    support_ticket_type_dto_list_envelope_t *support_ticket_type_dto_list_envelope_local_var = malloc(sizeof(support_ticket_type_dto_list_envelope_t));
    if (!support_ticket_type_dto_list_envelope_local_var) {
        return NULL;
    }
    support_ticket_type_dto_list_envelope_local_var->is_success = is_success;
    support_ticket_type_dto_list_envelope_local_var->error_message = error_message;
    support_ticket_type_dto_list_envelope_local_var->correlation_id = correlation_id;
    support_ticket_type_dto_list_envelope_local_var->timestamp = timestamp;
    support_ticket_type_dto_list_envelope_local_var->activity_id = activity_id;
    support_ticket_type_dto_list_envelope_local_var->result = result;

    return support_ticket_type_dto_list_envelope_local_var;
}


void support_ticket_type_dto_list_envelope_free(support_ticket_type_dto_list_envelope_t *support_ticket_type_dto_list_envelope) {
    if(NULL == support_ticket_type_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (support_ticket_type_dto_list_envelope->error_message) {
        free(support_ticket_type_dto_list_envelope->error_message);
        support_ticket_type_dto_list_envelope->error_message = NULL;
    }
    if (support_ticket_type_dto_list_envelope->correlation_id) {
        free(support_ticket_type_dto_list_envelope->correlation_id);
        support_ticket_type_dto_list_envelope->correlation_id = NULL;
    }
    if (support_ticket_type_dto_list_envelope->timestamp) {
        free(support_ticket_type_dto_list_envelope->timestamp);
        support_ticket_type_dto_list_envelope->timestamp = NULL;
    }
    if (support_ticket_type_dto_list_envelope->activity_id) {
        free(support_ticket_type_dto_list_envelope->activity_id);
        support_ticket_type_dto_list_envelope->activity_id = NULL;
    }
    if (support_ticket_type_dto_list_envelope->result) {
        list_ForEach(listEntry, support_ticket_type_dto_list_envelope->result) {
            support_ticket_type_dto_free(listEntry->data);
        }
        list_freeList(support_ticket_type_dto_list_envelope->result);
        support_ticket_type_dto_list_envelope->result = NULL;
    }
    free(support_ticket_type_dto_list_envelope);
}

cJSON *support_ticket_type_dto_list_envelope_convertToJSON(support_ticket_type_dto_list_envelope_t *support_ticket_type_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // support_ticket_type_dto_list_envelope->is_success
    if(support_ticket_type_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", support_ticket_type_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // support_ticket_type_dto_list_envelope->error_message
    if(support_ticket_type_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", support_ticket_type_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // support_ticket_type_dto_list_envelope->correlation_id
    if(support_ticket_type_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", support_ticket_type_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // support_ticket_type_dto_list_envelope->timestamp
    if(support_ticket_type_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", support_ticket_type_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // support_ticket_type_dto_list_envelope->activity_id
    if(support_ticket_type_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", support_ticket_type_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // support_ticket_type_dto_list_envelope->result
    if(support_ticket_type_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (support_ticket_type_dto_list_envelope->result) {
    list_ForEach(resultListEntry, support_ticket_type_dto_list_envelope->result) {
    cJSON *itemLocal = support_ticket_type_dto_convertToJSON(resultListEntry->data);
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

support_ticket_type_dto_list_envelope_t *support_ticket_type_dto_list_envelope_parseFromJSON(cJSON *support_ticket_type_dto_list_envelopeJSON){

    support_ticket_type_dto_list_envelope_t *support_ticket_type_dto_list_envelope_local_var = NULL;

    // define the local list for support_ticket_type_dto_list_envelope->result
    list_t *resultList = NULL;

    // support_ticket_type_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(support_ticket_type_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // support_ticket_type_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(support_ticket_type_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // support_ticket_type_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(support_ticket_type_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // support_ticket_type_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(support_ticket_type_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // support_ticket_type_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(support_ticket_type_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // support_ticket_type_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(support_ticket_type_dto_list_envelopeJSON, "result");
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
        support_ticket_type_dto_t *resultItem = support_ticket_type_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    support_ticket_type_dto_list_envelope_local_var = support_ticket_type_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return support_ticket_type_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            support_ticket_type_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
