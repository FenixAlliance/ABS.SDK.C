#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "invoice_enumeration_range_dto_list_envelope.h"



invoice_enumeration_range_dto_list_envelope_t *invoice_enumeration_range_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    invoice_enumeration_range_dto_list_envelope_t *invoice_enumeration_range_dto_list_envelope_local_var = malloc(sizeof(invoice_enumeration_range_dto_list_envelope_t));
    if (!invoice_enumeration_range_dto_list_envelope_local_var) {
        return NULL;
    }
    invoice_enumeration_range_dto_list_envelope_local_var->is_success = is_success;
    invoice_enumeration_range_dto_list_envelope_local_var->error_message = error_message;
    invoice_enumeration_range_dto_list_envelope_local_var->correlation_id = correlation_id;
    invoice_enumeration_range_dto_list_envelope_local_var->timestamp = timestamp;
    invoice_enumeration_range_dto_list_envelope_local_var->activity_id = activity_id;
    invoice_enumeration_range_dto_list_envelope_local_var->result = result;

    return invoice_enumeration_range_dto_list_envelope_local_var;
}


void invoice_enumeration_range_dto_list_envelope_free(invoice_enumeration_range_dto_list_envelope_t *invoice_enumeration_range_dto_list_envelope) {
    if(NULL == invoice_enumeration_range_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (invoice_enumeration_range_dto_list_envelope->error_message) {
        free(invoice_enumeration_range_dto_list_envelope->error_message);
        invoice_enumeration_range_dto_list_envelope->error_message = NULL;
    }
    if (invoice_enumeration_range_dto_list_envelope->correlation_id) {
        free(invoice_enumeration_range_dto_list_envelope->correlation_id);
        invoice_enumeration_range_dto_list_envelope->correlation_id = NULL;
    }
    if (invoice_enumeration_range_dto_list_envelope->timestamp) {
        free(invoice_enumeration_range_dto_list_envelope->timestamp);
        invoice_enumeration_range_dto_list_envelope->timestamp = NULL;
    }
    if (invoice_enumeration_range_dto_list_envelope->activity_id) {
        free(invoice_enumeration_range_dto_list_envelope->activity_id);
        invoice_enumeration_range_dto_list_envelope->activity_id = NULL;
    }
    if (invoice_enumeration_range_dto_list_envelope->result) {
        list_ForEach(listEntry, invoice_enumeration_range_dto_list_envelope->result) {
            invoice_enumeration_range_dto_free(listEntry->data);
        }
        list_freeList(invoice_enumeration_range_dto_list_envelope->result);
        invoice_enumeration_range_dto_list_envelope->result = NULL;
    }
    free(invoice_enumeration_range_dto_list_envelope);
}

cJSON *invoice_enumeration_range_dto_list_envelope_convertToJSON(invoice_enumeration_range_dto_list_envelope_t *invoice_enumeration_range_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // invoice_enumeration_range_dto_list_envelope->is_success
    if(invoice_enumeration_range_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", invoice_enumeration_range_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // invoice_enumeration_range_dto_list_envelope->error_message
    if(invoice_enumeration_range_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", invoice_enumeration_range_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // invoice_enumeration_range_dto_list_envelope->correlation_id
    if(invoice_enumeration_range_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", invoice_enumeration_range_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_enumeration_range_dto_list_envelope->timestamp
    if(invoice_enumeration_range_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", invoice_enumeration_range_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // invoice_enumeration_range_dto_list_envelope->activity_id
    if(invoice_enumeration_range_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", invoice_enumeration_range_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_enumeration_range_dto_list_envelope->result
    if(invoice_enumeration_range_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (invoice_enumeration_range_dto_list_envelope->result) {
    list_ForEach(resultListEntry, invoice_enumeration_range_dto_list_envelope->result) {
    cJSON *itemLocal = invoice_enumeration_range_dto_convertToJSON(resultListEntry->data);
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

invoice_enumeration_range_dto_list_envelope_t *invoice_enumeration_range_dto_list_envelope_parseFromJSON(cJSON *invoice_enumeration_range_dto_list_envelopeJSON){

    invoice_enumeration_range_dto_list_envelope_t *invoice_enumeration_range_dto_list_envelope_local_var = NULL;

    // define the local list for invoice_enumeration_range_dto_list_envelope->result
    list_t *resultList = NULL;

    // invoice_enumeration_range_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(invoice_enumeration_range_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // invoice_enumeration_range_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(invoice_enumeration_range_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // invoice_enumeration_range_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(invoice_enumeration_range_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // invoice_enumeration_range_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(invoice_enumeration_range_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // invoice_enumeration_range_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(invoice_enumeration_range_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // invoice_enumeration_range_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(invoice_enumeration_range_dto_list_envelopeJSON, "result");
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
        invoice_enumeration_range_dto_t *resultItem = invoice_enumeration_range_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    invoice_enumeration_range_dto_list_envelope_local_var = invoice_enumeration_range_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return invoice_enumeration_range_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            invoice_enumeration_range_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
