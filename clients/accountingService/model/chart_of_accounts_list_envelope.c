#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "chart_of_accounts_list_envelope.h"



chart_of_accounts_list_envelope_t *chart_of_accounts_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    chart_of_accounts_list_envelope_t *chart_of_accounts_list_envelope_local_var = malloc(sizeof(chart_of_accounts_list_envelope_t));
    if (!chart_of_accounts_list_envelope_local_var) {
        return NULL;
    }
    chart_of_accounts_list_envelope_local_var->is_success = is_success;
    chart_of_accounts_list_envelope_local_var->error_message = error_message;
    chart_of_accounts_list_envelope_local_var->correlation_id = correlation_id;
    chart_of_accounts_list_envelope_local_var->timestamp = timestamp;
    chart_of_accounts_list_envelope_local_var->activity_id = activity_id;
    chart_of_accounts_list_envelope_local_var->result = result;

    return chart_of_accounts_list_envelope_local_var;
}


void chart_of_accounts_list_envelope_free(chart_of_accounts_list_envelope_t *chart_of_accounts_list_envelope) {
    if(NULL == chart_of_accounts_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (chart_of_accounts_list_envelope->error_message) {
        free(chart_of_accounts_list_envelope->error_message);
        chart_of_accounts_list_envelope->error_message = NULL;
    }
    if (chart_of_accounts_list_envelope->correlation_id) {
        free(chart_of_accounts_list_envelope->correlation_id);
        chart_of_accounts_list_envelope->correlation_id = NULL;
    }
    if (chart_of_accounts_list_envelope->timestamp) {
        free(chart_of_accounts_list_envelope->timestamp);
        chart_of_accounts_list_envelope->timestamp = NULL;
    }
    if (chart_of_accounts_list_envelope->activity_id) {
        free(chart_of_accounts_list_envelope->activity_id);
        chart_of_accounts_list_envelope->activity_id = NULL;
    }
    if (chart_of_accounts_list_envelope->result) {
        list_ForEach(listEntry, chart_of_accounts_list_envelope->result) {
            chart_of_accounts_free(listEntry->data);
        }
        list_freeList(chart_of_accounts_list_envelope->result);
        chart_of_accounts_list_envelope->result = NULL;
    }
    free(chart_of_accounts_list_envelope);
}

cJSON *chart_of_accounts_list_envelope_convertToJSON(chart_of_accounts_list_envelope_t *chart_of_accounts_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // chart_of_accounts_list_envelope->is_success
    if(chart_of_accounts_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", chart_of_accounts_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // chart_of_accounts_list_envelope->error_message
    if(chart_of_accounts_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", chart_of_accounts_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // chart_of_accounts_list_envelope->correlation_id
    if(chart_of_accounts_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", chart_of_accounts_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // chart_of_accounts_list_envelope->timestamp
    if(chart_of_accounts_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", chart_of_accounts_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // chart_of_accounts_list_envelope->activity_id
    if(chart_of_accounts_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", chart_of_accounts_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // chart_of_accounts_list_envelope->result
    if(chart_of_accounts_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (chart_of_accounts_list_envelope->result) {
    list_ForEach(resultListEntry, chart_of_accounts_list_envelope->result) {
    cJSON *itemLocal = chart_of_accounts_convertToJSON(resultListEntry->data);
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

chart_of_accounts_list_envelope_t *chart_of_accounts_list_envelope_parseFromJSON(cJSON *chart_of_accounts_list_envelopeJSON){

    chart_of_accounts_list_envelope_t *chart_of_accounts_list_envelope_local_var = NULL;

    // define the local list for chart_of_accounts_list_envelope->result
    list_t *resultList = NULL;

    // chart_of_accounts_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(chart_of_accounts_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // chart_of_accounts_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(chart_of_accounts_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // chart_of_accounts_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(chart_of_accounts_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // chart_of_accounts_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(chart_of_accounts_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // chart_of_accounts_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(chart_of_accounts_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // chart_of_accounts_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(chart_of_accounts_list_envelopeJSON, "result");
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
        chart_of_accounts_t *resultItem = chart_of_accounts_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    chart_of_accounts_list_envelope_local_var = chart_of_accounts_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return chart_of_accounts_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            chart_of_accounts_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
