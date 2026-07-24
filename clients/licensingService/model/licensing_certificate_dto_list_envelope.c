#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "licensing_certificate_dto_list_envelope.h"



licensing_certificate_dto_list_envelope_t *licensing_certificate_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    licensing_certificate_dto_list_envelope_t *licensing_certificate_dto_list_envelope_local_var = malloc(sizeof(licensing_certificate_dto_list_envelope_t));
    if (!licensing_certificate_dto_list_envelope_local_var) {
        return NULL;
    }
    licensing_certificate_dto_list_envelope_local_var->is_success = is_success;
    licensing_certificate_dto_list_envelope_local_var->error_message = error_message;
    licensing_certificate_dto_list_envelope_local_var->correlation_id = correlation_id;
    licensing_certificate_dto_list_envelope_local_var->timestamp = timestamp;
    licensing_certificate_dto_list_envelope_local_var->activity_id = activity_id;
    licensing_certificate_dto_list_envelope_local_var->result = result;

    return licensing_certificate_dto_list_envelope_local_var;
}


void licensing_certificate_dto_list_envelope_free(licensing_certificate_dto_list_envelope_t *licensing_certificate_dto_list_envelope) {
    if(NULL == licensing_certificate_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (licensing_certificate_dto_list_envelope->error_message) {
        free(licensing_certificate_dto_list_envelope->error_message);
        licensing_certificate_dto_list_envelope->error_message = NULL;
    }
    if (licensing_certificate_dto_list_envelope->correlation_id) {
        free(licensing_certificate_dto_list_envelope->correlation_id);
        licensing_certificate_dto_list_envelope->correlation_id = NULL;
    }
    if (licensing_certificate_dto_list_envelope->timestamp) {
        free(licensing_certificate_dto_list_envelope->timestamp);
        licensing_certificate_dto_list_envelope->timestamp = NULL;
    }
    if (licensing_certificate_dto_list_envelope->activity_id) {
        free(licensing_certificate_dto_list_envelope->activity_id);
        licensing_certificate_dto_list_envelope->activity_id = NULL;
    }
    if (licensing_certificate_dto_list_envelope->result) {
        list_ForEach(listEntry, licensing_certificate_dto_list_envelope->result) {
            licensing_certificate_dto_free(listEntry->data);
        }
        list_freeList(licensing_certificate_dto_list_envelope->result);
        licensing_certificate_dto_list_envelope->result = NULL;
    }
    free(licensing_certificate_dto_list_envelope);
}

cJSON *licensing_certificate_dto_list_envelope_convertToJSON(licensing_certificate_dto_list_envelope_t *licensing_certificate_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // licensing_certificate_dto_list_envelope->is_success
    if(licensing_certificate_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", licensing_certificate_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // licensing_certificate_dto_list_envelope->error_message
    if(licensing_certificate_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", licensing_certificate_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // licensing_certificate_dto_list_envelope->correlation_id
    if(licensing_certificate_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", licensing_certificate_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // licensing_certificate_dto_list_envelope->timestamp
    if(licensing_certificate_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", licensing_certificate_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // licensing_certificate_dto_list_envelope->activity_id
    if(licensing_certificate_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", licensing_certificate_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // licensing_certificate_dto_list_envelope->result
    if(licensing_certificate_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (licensing_certificate_dto_list_envelope->result) {
    list_ForEach(resultListEntry, licensing_certificate_dto_list_envelope->result) {
    cJSON *itemLocal = licensing_certificate_dto_convertToJSON(resultListEntry->data);
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

licensing_certificate_dto_list_envelope_t *licensing_certificate_dto_list_envelope_parseFromJSON(cJSON *licensing_certificate_dto_list_envelopeJSON){

    licensing_certificate_dto_list_envelope_t *licensing_certificate_dto_list_envelope_local_var = NULL;

    // define the local list for licensing_certificate_dto_list_envelope->result
    list_t *resultList = NULL;

    // licensing_certificate_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(licensing_certificate_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // licensing_certificate_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(licensing_certificate_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // licensing_certificate_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(licensing_certificate_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // licensing_certificate_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(licensing_certificate_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // licensing_certificate_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(licensing_certificate_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // licensing_certificate_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(licensing_certificate_dto_list_envelopeJSON, "result");
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
        licensing_certificate_dto_t *resultItem = licensing_certificate_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    licensing_certificate_dto_list_envelope_local_var = licensing_certificate_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return licensing_certificate_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            licensing_certificate_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
