#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "journal_dto_i_read_only_list_envelope.h"



journal_dto_i_read_only_list_envelope_t *journal_dto_i_read_only_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    int http_status,
    char *error_code,
    list_t* validation_details,
    char *activity_id,
    list_t *result
    ) {
    journal_dto_i_read_only_list_envelope_t *journal_dto_i_read_only_list_envelope_local_var = malloc(sizeof(journal_dto_i_read_only_list_envelope_t));
    if (!journal_dto_i_read_only_list_envelope_local_var) {
        return NULL;
    }
    journal_dto_i_read_only_list_envelope_local_var->is_success = is_success;
    journal_dto_i_read_only_list_envelope_local_var->error_message = error_message;
    journal_dto_i_read_only_list_envelope_local_var->correlation_id = correlation_id;
    journal_dto_i_read_only_list_envelope_local_var->timestamp = timestamp;
    journal_dto_i_read_only_list_envelope_local_var->http_status = http_status;
    journal_dto_i_read_only_list_envelope_local_var->error_code = error_code;
    journal_dto_i_read_only_list_envelope_local_var->validation_details = validation_details;
    journal_dto_i_read_only_list_envelope_local_var->activity_id = activity_id;
    journal_dto_i_read_only_list_envelope_local_var->result = result;

    return journal_dto_i_read_only_list_envelope_local_var;
}


void journal_dto_i_read_only_list_envelope_free(journal_dto_i_read_only_list_envelope_t *journal_dto_i_read_only_list_envelope) {
    if(NULL == journal_dto_i_read_only_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (journal_dto_i_read_only_list_envelope->error_message) {
        free(journal_dto_i_read_only_list_envelope->error_message);
        journal_dto_i_read_only_list_envelope->error_message = NULL;
    }
    if (journal_dto_i_read_only_list_envelope->correlation_id) {
        free(journal_dto_i_read_only_list_envelope->correlation_id);
        journal_dto_i_read_only_list_envelope->correlation_id = NULL;
    }
    if (journal_dto_i_read_only_list_envelope->timestamp) {
        free(journal_dto_i_read_only_list_envelope->timestamp);
        journal_dto_i_read_only_list_envelope->timestamp = NULL;
    }
    if (journal_dto_i_read_only_list_envelope->error_code) {
        free(journal_dto_i_read_only_list_envelope->error_code);
        journal_dto_i_read_only_list_envelope->error_code = NULL;
    }
    if (journal_dto_i_read_only_list_envelope->validation_details) {
        list_ForEach(listEntry, journal_dto_i_read_only_list_envelope->validation_details) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(journal_dto_i_read_only_list_envelope->validation_details);
        journal_dto_i_read_only_list_envelope->validation_details = NULL;
    }
    if (journal_dto_i_read_only_list_envelope->activity_id) {
        free(journal_dto_i_read_only_list_envelope->activity_id);
        journal_dto_i_read_only_list_envelope->activity_id = NULL;
    }
    if (journal_dto_i_read_only_list_envelope->result) {
        list_ForEach(listEntry, journal_dto_i_read_only_list_envelope->result) {
            journal_dto_free(listEntry->data);
        }
        list_freeList(journal_dto_i_read_only_list_envelope->result);
        journal_dto_i_read_only_list_envelope->result = NULL;
    }
    free(journal_dto_i_read_only_list_envelope);
}

cJSON *journal_dto_i_read_only_list_envelope_convertToJSON(journal_dto_i_read_only_list_envelope_t *journal_dto_i_read_only_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // journal_dto_i_read_only_list_envelope->is_success
    if(journal_dto_i_read_only_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", journal_dto_i_read_only_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // journal_dto_i_read_only_list_envelope->error_message
    if(journal_dto_i_read_only_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", journal_dto_i_read_only_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // journal_dto_i_read_only_list_envelope->correlation_id
    if(journal_dto_i_read_only_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", journal_dto_i_read_only_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // journal_dto_i_read_only_list_envelope->timestamp
    if(journal_dto_i_read_only_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", journal_dto_i_read_only_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // journal_dto_i_read_only_list_envelope->http_status
    if(journal_dto_i_read_only_list_envelope->http_status) {
    if(cJSON_AddNumberToObject(item, "httpStatus", journal_dto_i_read_only_list_envelope->http_status) == NULL) {
    goto fail; //Numeric
    }
    }


    // journal_dto_i_read_only_list_envelope->error_code
    if(journal_dto_i_read_only_list_envelope->error_code) {
    if(cJSON_AddStringToObject(item, "errorCode", journal_dto_i_read_only_list_envelope->error_code) == NULL) {
    goto fail; //String
    }
    }


    // journal_dto_i_read_only_list_envelope->validation_details
    if(journal_dto_i_read_only_list_envelope->validation_details) {
    cJSON *validation_details = cJSON_AddObjectToObject(item, "validationDetails");
    if(validation_details == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = validation_details;
    listEntry_t *validation_detailsListEntry;
    if (journal_dto_i_read_only_list_envelope->validation_details) {
    list_ForEach(validation_detailsListEntry, journal_dto_i_read_only_list_envelope->validation_details) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)validation_detailsListEntry->data;
    }
    }
    }


    // journal_dto_i_read_only_list_envelope->activity_id
    if(journal_dto_i_read_only_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", journal_dto_i_read_only_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // journal_dto_i_read_only_list_envelope->result
    if(journal_dto_i_read_only_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (journal_dto_i_read_only_list_envelope->result) {
    list_ForEach(resultListEntry, journal_dto_i_read_only_list_envelope->result) {
    cJSON *itemLocal = journal_dto_convertToJSON(resultListEntry->data);
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

journal_dto_i_read_only_list_envelope_t *journal_dto_i_read_only_list_envelope_parseFromJSON(cJSON *journal_dto_i_read_only_list_envelopeJSON){

    journal_dto_i_read_only_list_envelope_t *journal_dto_i_read_only_list_envelope_local_var = NULL;

    // define the local map for journal_dto_i_read_only_list_envelope->validation_details
    list_t *validation_detailsList = NULL;

    // define the local list for journal_dto_i_read_only_list_envelope->result
    list_t *resultList = NULL;

    // journal_dto_i_read_only_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(journal_dto_i_read_only_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // journal_dto_i_read_only_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(journal_dto_i_read_only_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // journal_dto_i_read_only_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(journal_dto_i_read_only_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // journal_dto_i_read_only_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(journal_dto_i_read_only_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // journal_dto_i_read_only_list_envelope->http_status
    cJSON *http_status = cJSON_GetObjectItemCaseSensitive(journal_dto_i_read_only_list_envelopeJSON, "httpStatus");
    if (http_status) { 
    if(!cJSON_IsNumber(http_status))
    {
    goto end; //Numeric
    }
    }

    // journal_dto_i_read_only_list_envelope->error_code
    cJSON *error_code = cJSON_GetObjectItemCaseSensitive(journal_dto_i_read_only_list_envelopeJSON, "errorCode");
    if (error_code) { 
    if(!cJSON_IsString(error_code) && !cJSON_IsNull(error_code))
    {
    goto end; //String
    }
    }

    // journal_dto_i_read_only_list_envelope->validation_details
    cJSON *validation_details = cJSON_GetObjectItemCaseSensitive(journal_dto_i_read_only_list_envelopeJSON, "validationDetails");
    if (validation_details) { 
    cJSON *validation_details_local_map = NULL;
    if(!cJSON_IsObject(validation_details) && !cJSON_IsNull(validation_details))
    {
        goto end;//primitive map container
    }
    if(cJSON_IsObject(validation_details))
    {
        validation_detailsList = list_createList();
        keyValuePair_t *localMapKeyPair;
        cJSON_ArrayForEach(validation_details_local_map, validation_details)
        {
            cJSON *localMapObject = validation_details_local_map;
            list_addElement(validation_detailsList , localMapKeyPair);
        }
    }
    }

    // journal_dto_i_read_only_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(journal_dto_i_read_only_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // journal_dto_i_read_only_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(journal_dto_i_read_only_list_envelopeJSON, "result");
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
        journal_dto_t *resultItem = journal_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    journal_dto_i_read_only_list_envelope_local_var = journal_dto_i_read_only_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        http_status ? http_status->valuedouble : 0,
        error_code && !cJSON_IsNull(error_code) ? strdup(error_code->valuestring) : NULL,
        validation_details ? validation_detailsList : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return journal_dto_i_read_only_list_envelope_local_var;
end:
    if (validation_detailsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, validation_detailsList) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free(localKeyValue->key);
            localKeyValue->key = NULL;
            keyValuePair_free(localKeyValue);
            localKeyValue = NULL;
        }
        list_freeList(validation_detailsList);
        validation_detailsList = NULL;
    }
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            journal_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
