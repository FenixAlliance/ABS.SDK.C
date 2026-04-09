#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "business_security_log_dto_list_envelope.h"



business_security_log_dto_list_envelope_t *business_security_log_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    business_security_log_dto_list_envelope_t *business_security_log_dto_list_envelope_local_var = malloc(sizeof(business_security_log_dto_list_envelope_t));
    if (!business_security_log_dto_list_envelope_local_var) {
        return NULL;
    }
    business_security_log_dto_list_envelope_local_var->is_success = is_success;
    business_security_log_dto_list_envelope_local_var->error_message = error_message;
    business_security_log_dto_list_envelope_local_var->correlation_id = correlation_id;
    business_security_log_dto_list_envelope_local_var->timestamp = timestamp;
    business_security_log_dto_list_envelope_local_var->activity_id = activity_id;
    business_security_log_dto_list_envelope_local_var->result = result;

    return business_security_log_dto_list_envelope_local_var;
}


void business_security_log_dto_list_envelope_free(business_security_log_dto_list_envelope_t *business_security_log_dto_list_envelope) {
    if(NULL == business_security_log_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (business_security_log_dto_list_envelope->error_message) {
        free(business_security_log_dto_list_envelope->error_message);
        business_security_log_dto_list_envelope->error_message = NULL;
    }
    if (business_security_log_dto_list_envelope->correlation_id) {
        free(business_security_log_dto_list_envelope->correlation_id);
        business_security_log_dto_list_envelope->correlation_id = NULL;
    }
    if (business_security_log_dto_list_envelope->timestamp) {
        free(business_security_log_dto_list_envelope->timestamp);
        business_security_log_dto_list_envelope->timestamp = NULL;
    }
    if (business_security_log_dto_list_envelope->activity_id) {
        free(business_security_log_dto_list_envelope->activity_id);
        business_security_log_dto_list_envelope->activity_id = NULL;
    }
    if (business_security_log_dto_list_envelope->result) {
        list_ForEach(listEntry, business_security_log_dto_list_envelope->result) {
            business_security_log_dto_free(listEntry->data);
        }
        list_freeList(business_security_log_dto_list_envelope->result);
        business_security_log_dto_list_envelope->result = NULL;
    }
    free(business_security_log_dto_list_envelope);
}

cJSON *business_security_log_dto_list_envelope_convertToJSON(business_security_log_dto_list_envelope_t *business_security_log_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // business_security_log_dto_list_envelope->is_success
    if(business_security_log_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", business_security_log_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // business_security_log_dto_list_envelope->error_message
    if(business_security_log_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", business_security_log_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // business_security_log_dto_list_envelope->correlation_id
    if(business_security_log_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", business_security_log_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // business_security_log_dto_list_envelope->timestamp
    if(business_security_log_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", business_security_log_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // business_security_log_dto_list_envelope->activity_id
    if(business_security_log_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", business_security_log_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // business_security_log_dto_list_envelope->result
    if(business_security_log_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (business_security_log_dto_list_envelope->result) {
    list_ForEach(resultListEntry, business_security_log_dto_list_envelope->result) {
    cJSON *itemLocal = business_security_log_dto_convertToJSON(resultListEntry->data);
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

business_security_log_dto_list_envelope_t *business_security_log_dto_list_envelope_parseFromJSON(cJSON *business_security_log_dto_list_envelopeJSON){

    business_security_log_dto_list_envelope_t *business_security_log_dto_list_envelope_local_var = NULL;

    // define the local list for business_security_log_dto_list_envelope->result
    list_t *resultList = NULL;

    // business_security_log_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(business_security_log_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // business_security_log_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(business_security_log_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // business_security_log_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(business_security_log_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // business_security_log_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(business_security_log_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // business_security_log_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(business_security_log_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // business_security_log_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(business_security_log_dto_list_envelopeJSON, "result");
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
        business_security_log_dto_t *resultItem = business_security_log_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    business_security_log_dto_list_envelope_local_var = business_security_log_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return business_security_log_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            business_security_log_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
