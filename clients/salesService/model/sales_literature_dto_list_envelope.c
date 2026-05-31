#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "sales_literature_dto_list_envelope.h"



sales_literature_dto_list_envelope_t *sales_literature_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    sales_literature_dto_list_envelope_t *sales_literature_dto_list_envelope_local_var = malloc(sizeof(sales_literature_dto_list_envelope_t));
    if (!sales_literature_dto_list_envelope_local_var) {
        return NULL;
    }
    sales_literature_dto_list_envelope_local_var->is_success = is_success;
    sales_literature_dto_list_envelope_local_var->error_message = error_message;
    sales_literature_dto_list_envelope_local_var->correlation_id = correlation_id;
    sales_literature_dto_list_envelope_local_var->timestamp = timestamp;
    sales_literature_dto_list_envelope_local_var->activity_id = activity_id;
    sales_literature_dto_list_envelope_local_var->result = result;

    return sales_literature_dto_list_envelope_local_var;
}


void sales_literature_dto_list_envelope_free(sales_literature_dto_list_envelope_t *sales_literature_dto_list_envelope) {
    if(NULL == sales_literature_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (sales_literature_dto_list_envelope->error_message) {
        free(sales_literature_dto_list_envelope->error_message);
        sales_literature_dto_list_envelope->error_message = NULL;
    }
    if (sales_literature_dto_list_envelope->correlation_id) {
        free(sales_literature_dto_list_envelope->correlation_id);
        sales_literature_dto_list_envelope->correlation_id = NULL;
    }
    if (sales_literature_dto_list_envelope->timestamp) {
        free(sales_literature_dto_list_envelope->timestamp);
        sales_literature_dto_list_envelope->timestamp = NULL;
    }
    if (sales_literature_dto_list_envelope->activity_id) {
        free(sales_literature_dto_list_envelope->activity_id);
        sales_literature_dto_list_envelope->activity_id = NULL;
    }
    if (sales_literature_dto_list_envelope->result) {
        list_ForEach(listEntry, sales_literature_dto_list_envelope->result) {
            sales_literature_dto_free(listEntry->data);
        }
        list_freeList(sales_literature_dto_list_envelope->result);
        sales_literature_dto_list_envelope->result = NULL;
    }
    free(sales_literature_dto_list_envelope);
}

cJSON *sales_literature_dto_list_envelope_convertToJSON(sales_literature_dto_list_envelope_t *sales_literature_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // sales_literature_dto_list_envelope->is_success
    if(sales_literature_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", sales_literature_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // sales_literature_dto_list_envelope->error_message
    if(sales_literature_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", sales_literature_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // sales_literature_dto_list_envelope->correlation_id
    if(sales_literature_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", sales_literature_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // sales_literature_dto_list_envelope->timestamp
    if(sales_literature_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", sales_literature_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // sales_literature_dto_list_envelope->activity_id
    if(sales_literature_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", sales_literature_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // sales_literature_dto_list_envelope->result
    if(sales_literature_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (sales_literature_dto_list_envelope->result) {
    list_ForEach(resultListEntry, sales_literature_dto_list_envelope->result) {
    cJSON *itemLocal = sales_literature_dto_convertToJSON(resultListEntry->data);
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

sales_literature_dto_list_envelope_t *sales_literature_dto_list_envelope_parseFromJSON(cJSON *sales_literature_dto_list_envelopeJSON){

    sales_literature_dto_list_envelope_t *sales_literature_dto_list_envelope_local_var = NULL;

    // define the local list for sales_literature_dto_list_envelope->result
    list_t *resultList = NULL;

    // sales_literature_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(sales_literature_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // sales_literature_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(sales_literature_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // sales_literature_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(sales_literature_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // sales_literature_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(sales_literature_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // sales_literature_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(sales_literature_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // sales_literature_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(sales_literature_dto_list_envelopeJSON, "result");
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
        sales_literature_dto_t *resultItem = sales_literature_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    sales_literature_dto_list_envelope_local_var = sales_literature_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return sales_literature_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            sales_literature_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
