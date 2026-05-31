#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "website_theme_dto_list_envelope.h"



website_theme_dto_list_envelope_t *website_theme_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    website_theme_dto_list_envelope_t *website_theme_dto_list_envelope_local_var = malloc(sizeof(website_theme_dto_list_envelope_t));
    if (!website_theme_dto_list_envelope_local_var) {
        return NULL;
    }
    website_theme_dto_list_envelope_local_var->is_success = is_success;
    website_theme_dto_list_envelope_local_var->error_message = error_message;
    website_theme_dto_list_envelope_local_var->correlation_id = correlation_id;
    website_theme_dto_list_envelope_local_var->timestamp = timestamp;
    website_theme_dto_list_envelope_local_var->activity_id = activity_id;
    website_theme_dto_list_envelope_local_var->result = result;

    return website_theme_dto_list_envelope_local_var;
}


void website_theme_dto_list_envelope_free(website_theme_dto_list_envelope_t *website_theme_dto_list_envelope) {
    if(NULL == website_theme_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (website_theme_dto_list_envelope->error_message) {
        free(website_theme_dto_list_envelope->error_message);
        website_theme_dto_list_envelope->error_message = NULL;
    }
    if (website_theme_dto_list_envelope->correlation_id) {
        free(website_theme_dto_list_envelope->correlation_id);
        website_theme_dto_list_envelope->correlation_id = NULL;
    }
    if (website_theme_dto_list_envelope->timestamp) {
        free(website_theme_dto_list_envelope->timestamp);
        website_theme_dto_list_envelope->timestamp = NULL;
    }
    if (website_theme_dto_list_envelope->activity_id) {
        free(website_theme_dto_list_envelope->activity_id);
        website_theme_dto_list_envelope->activity_id = NULL;
    }
    if (website_theme_dto_list_envelope->result) {
        list_ForEach(listEntry, website_theme_dto_list_envelope->result) {
            website_theme_dto_free(listEntry->data);
        }
        list_freeList(website_theme_dto_list_envelope->result);
        website_theme_dto_list_envelope->result = NULL;
    }
    free(website_theme_dto_list_envelope);
}

cJSON *website_theme_dto_list_envelope_convertToJSON(website_theme_dto_list_envelope_t *website_theme_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // website_theme_dto_list_envelope->is_success
    if(website_theme_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", website_theme_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // website_theme_dto_list_envelope->error_message
    if(website_theme_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", website_theme_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // website_theme_dto_list_envelope->correlation_id
    if(website_theme_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", website_theme_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // website_theme_dto_list_envelope->timestamp
    if(website_theme_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", website_theme_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // website_theme_dto_list_envelope->activity_id
    if(website_theme_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", website_theme_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // website_theme_dto_list_envelope->result
    if(website_theme_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (website_theme_dto_list_envelope->result) {
    list_ForEach(resultListEntry, website_theme_dto_list_envelope->result) {
    cJSON *itemLocal = website_theme_dto_convertToJSON(resultListEntry->data);
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

website_theme_dto_list_envelope_t *website_theme_dto_list_envelope_parseFromJSON(cJSON *website_theme_dto_list_envelopeJSON){

    website_theme_dto_list_envelope_t *website_theme_dto_list_envelope_local_var = NULL;

    // define the local list for website_theme_dto_list_envelope->result
    list_t *resultList = NULL;

    // website_theme_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(website_theme_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // website_theme_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(website_theme_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // website_theme_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(website_theme_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // website_theme_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(website_theme_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // website_theme_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(website_theme_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // website_theme_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(website_theme_dto_list_envelopeJSON, "result");
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
        website_theme_dto_t *resultItem = website_theme_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    website_theme_dto_list_envelope_local_var = website_theme_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return website_theme_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            website_theme_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
