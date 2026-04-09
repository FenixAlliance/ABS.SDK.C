#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "marketing_list_dto_list_envelope.h"



marketing_list_dto_list_envelope_t *marketing_list_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    marketing_list_dto_list_envelope_t *marketing_list_dto_list_envelope_local_var = malloc(sizeof(marketing_list_dto_list_envelope_t));
    if (!marketing_list_dto_list_envelope_local_var) {
        return NULL;
    }
    marketing_list_dto_list_envelope_local_var->is_success = is_success;
    marketing_list_dto_list_envelope_local_var->error_message = error_message;
    marketing_list_dto_list_envelope_local_var->correlation_id = correlation_id;
    marketing_list_dto_list_envelope_local_var->timestamp = timestamp;
    marketing_list_dto_list_envelope_local_var->activity_id = activity_id;
    marketing_list_dto_list_envelope_local_var->result = result;

    return marketing_list_dto_list_envelope_local_var;
}


void marketing_list_dto_list_envelope_free(marketing_list_dto_list_envelope_t *marketing_list_dto_list_envelope) {
    if(NULL == marketing_list_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (marketing_list_dto_list_envelope->error_message) {
        free(marketing_list_dto_list_envelope->error_message);
        marketing_list_dto_list_envelope->error_message = NULL;
    }
    if (marketing_list_dto_list_envelope->correlation_id) {
        free(marketing_list_dto_list_envelope->correlation_id);
        marketing_list_dto_list_envelope->correlation_id = NULL;
    }
    if (marketing_list_dto_list_envelope->timestamp) {
        free(marketing_list_dto_list_envelope->timestamp);
        marketing_list_dto_list_envelope->timestamp = NULL;
    }
    if (marketing_list_dto_list_envelope->activity_id) {
        free(marketing_list_dto_list_envelope->activity_id);
        marketing_list_dto_list_envelope->activity_id = NULL;
    }
    if (marketing_list_dto_list_envelope->result) {
        list_ForEach(listEntry, marketing_list_dto_list_envelope->result) {
            marketing_list_dto_free(listEntry->data);
        }
        list_freeList(marketing_list_dto_list_envelope->result);
        marketing_list_dto_list_envelope->result = NULL;
    }
    free(marketing_list_dto_list_envelope);
}

cJSON *marketing_list_dto_list_envelope_convertToJSON(marketing_list_dto_list_envelope_t *marketing_list_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // marketing_list_dto_list_envelope->is_success
    if(marketing_list_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", marketing_list_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // marketing_list_dto_list_envelope->error_message
    if(marketing_list_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", marketing_list_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // marketing_list_dto_list_envelope->correlation_id
    if(marketing_list_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", marketing_list_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // marketing_list_dto_list_envelope->timestamp
    if(marketing_list_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", marketing_list_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // marketing_list_dto_list_envelope->activity_id
    if(marketing_list_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", marketing_list_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // marketing_list_dto_list_envelope->result
    if(marketing_list_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (marketing_list_dto_list_envelope->result) {
    list_ForEach(resultListEntry, marketing_list_dto_list_envelope->result) {
    cJSON *itemLocal = marketing_list_dto_convertToJSON(resultListEntry->data);
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

marketing_list_dto_list_envelope_t *marketing_list_dto_list_envelope_parseFromJSON(cJSON *marketing_list_dto_list_envelopeJSON){

    marketing_list_dto_list_envelope_t *marketing_list_dto_list_envelope_local_var = NULL;

    // define the local list for marketing_list_dto_list_envelope->result
    list_t *resultList = NULL;

    // marketing_list_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(marketing_list_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // marketing_list_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(marketing_list_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // marketing_list_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(marketing_list_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // marketing_list_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(marketing_list_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // marketing_list_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(marketing_list_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // marketing_list_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(marketing_list_dto_list_envelopeJSON, "result");
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
        marketing_list_dto_t *resultItem = marketing_list_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    marketing_list_dto_list_envelope_local_var = marketing_list_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return marketing_list_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            marketing_list_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
