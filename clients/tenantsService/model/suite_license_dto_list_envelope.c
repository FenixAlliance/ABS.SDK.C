#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "suite_license_dto_list_envelope.h"



suite_license_dto_list_envelope_t *suite_license_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    suite_license_dto_list_envelope_t *suite_license_dto_list_envelope_local_var = malloc(sizeof(suite_license_dto_list_envelope_t));
    if (!suite_license_dto_list_envelope_local_var) {
        return NULL;
    }
    suite_license_dto_list_envelope_local_var->is_success = is_success;
    suite_license_dto_list_envelope_local_var->error_message = error_message;
    suite_license_dto_list_envelope_local_var->correlation_id = correlation_id;
    suite_license_dto_list_envelope_local_var->timestamp = timestamp;
    suite_license_dto_list_envelope_local_var->activity_id = activity_id;
    suite_license_dto_list_envelope_local_var->result = result;

    return suite_license_dto_list_envelope_local_var;
}


void suite_license_dto_list_envelope_free(suite_license_dto_list_envelope_t *suite_license_dto_list_envelope) {
    if(NULL == suite_license_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (suite_license_dto_list_envelope->error_message) {
        free(suite_license_dto_list_envelope->error_message);
        suite_license_dto_list_envelope->error_message = NULL;
    }
    if (suite_license_dto_list_envelope->correlation_id) {
        free(suite_license_dto_list_envelope->correlation_id);
        suite_license_dto_list_envelope->correlation_id = NULL;
    }
    if (suite_license_dto_list_envelope->timestamp) {
        free(suite_license_dto_list_envelope->timestamp);
        suite_license_dto_list_envelope->timestamp = NULL;
    }
    if (suite_license_dto_list_envelope->activity_id) {
        free(suite_license_dto_list_envelope->activity_id);
        suite_license_dto_list_envelope->activity_id = NULL;
    }
    if (suite_license_dto_list_envelope->result) {
        list_ForEach(listEntry, suite_license_dto_list_envelope->result) {
            suite_license_dto_free(listEntry->data);
        }
        list_freeList(suite_license_dto_list_envelope->result);
        suite_license_dto_list_envelope->result = NULL;
    }
    free(suite_license_dto_list_envelope);
}

cJSON *suite_license_dto_list_envelope_convertToJSON(suite_license_dto_list_envelope_t *suite_license_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // suite_license_dto_list_envelope->is_success
    if(suite_license_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", suite_license_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // suite_license_dto_list_envelope->error_message
    if(suite_license_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", suite_license_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // suite_license_dto_list_envelope->correlation_id
    if(suite_license_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", suite_license_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // suite_license_dto_list_envelope->timestamp
    if(suite_license_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", suite_license_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // suite_license_dto_list_envelope->activity_id
    if(suite_license_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", suite_license_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // suite_license_dto_list_envelope->result
    if(suite_license_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (suite_license_dto_list_envelope->result) {
    list_ForEach(resultListEntry, suite_license_dto_list_envelope->result) {
    cJSON *itemLocal = suite_license_dto_convertToJSON(resultListEntry->data);
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

suite_license_dto_list_envelope_t *suite_license_dto_list_envelope_parseFromJSON(cJSON *suite_license_dto_list_envelopeJSON){

    suite_license_dto_list_envelope_t *suite_license_dto_list_envelope_local_var = NULL;

    // define the local list for suite_license_dto_list_envelope->result
    list_t *resultList = NULL;

    // suite_license_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(suite_license_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // suite_license_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(suite_license_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // suite_license_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(suite_license_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // suite_license_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(suite_license_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // suite_license_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(suite_license_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // suite_license_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(suite_license_dto_list_envelopeJSON, "result");
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
        suite_license_dto_t *resultItem = suite_license_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    suite_license_dto_list_envelope_local_var = suite_license_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return suite_license_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            suite_license_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
