#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "catalog_item_dto_list_envelope.h"



catalog_item_dto_list_envelope_t *catalog_item_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    catalog_item_dto_list_envelope_t *catalog_item_dto_list_envelope_local_var = malloc(sizeof(catalog_item_dto_list_envelope_t));
    if (!catalog_item_dto_list_envelope_local_var) {
        return NULL;
    }
    catalog_item_dto_list_envelope_local_var->is_success = is_success;
    catalog_item_dto_list_envelope_local_var->error_message = error_message;
    catalog_item_dto_list_envelope_local_var->correlation_id = correlation_id;
    catalog_item_dto_list_envelope_local_var->timestamp = timestamp;
    catalog_item_dto_list_envelope_local_var->activity_id = activity_id;
    catalog_item_dto_list_envelope_local_var->result = result;

    return catalog_item_dto_list_envelope_local_var;
}


void catalog_item_dto_list_envelope_free(catalog_item_dto_list_envelope_t *catalog_item_dto_list_envelope) {
    if(NULL == catalog_item_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (catalog_item_dto_list_envelope->error_message) {
        free(catalog_item_dto_list_envelope->error_message);
        catalog_item_dto_list_envelope->error_message = NULL;
    }
    if (catalog_item_dto_list_envelope->correlation_id) {
        free(catalog_item_dto_list_envelope->correlation_id);
        catalog_item_dto_list_envelope->correlation_id = NULL;
    }
    if (catalog_item_dto_list_envelope->timestamp) {
        free(catalog_item_dto_list_envelope->timestamp);
        catalog_item_dto_list_envelope->timestamp = NULL;
    }
    if (catalog_item_dto_list_envelope->activity_id) {
        free(catalog_item_dto_list_envelope->activity_id);
        catalog_item_dto_list_envelope->activity_id = NULL;
    }
    if (catalog_item_dto_list_envelope->result) {
        list_ForEach(listEntry, catalog_item_dto_list_envelope->result) {
            catalog_item_dto_free(listEntry->data);
        }
        list_freeList(catalog_item_dto_list_envelope->result);
        catalog_item_dto_list_envelope->result = NULL;
    }
    free(catalog_item_dto_list_envelope);
}

cJSON *catalog_item_dto_list_envelope_convertToJSON(catalog_item_dto_list_envelope_t *catalog_item_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // catalog_item_dto_list_envelope->is_success
    if(catalog_item_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", catalog_item_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // catalog_item_dto_list_envelope->error_message
    if(catalog_item_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", catalog_item_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_dto_list_envelope->correlation_id
    if(catalog_item_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", catalog_item_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_dto_list_envelope->timestamp
    if(catalog_item_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", catalog_item_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // catalog_item_dto_list_envelope->activity_id
    if(catalog_item_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", catalog_item_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_dto_list_envelope->result
    if(catalog_item_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (catalog_item_dto_list_envelope->result) {
    list_ForEach(resultListEntry, catalog_item_dto_list_envelope->result) {
    cJSON *itemLocal = catalog_item_dto_convertToJSON(resultListEntry->data);
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

catalog_item_dto_list_envelope_t *catalog_item_dto_list_envelope_parseFromJSON(cJSON *catalog_item_dto_list_envelopeJSON){

    catalog_item_dto_list_envelope_t *catalog_item_dto_list_envelope_local_var = NULL;

    // define the local list for catalog_item_dto_list_envelope->result
    list_t *resultList = NULL;

    // catalog_item_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(catalog_item_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // catalog_item_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(catalog_item_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // catalog_item_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(catalog_item_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // catalog_item_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(catalog_item_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // catalog_item_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(catalog_item_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // catalog_item_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(catalog_item_dto_list_envelopeJSON, "result");
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
        catalog_item_dto_t *resultItem = catalog_item_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    catalog_item_dto_list_envelope_local_var = catalog_item_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return catalog_item_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            catalog_item_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
