#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "email_template_dto_list_envelope.h"



email_template_dto_list_envelope_t *email_template_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    email_template_dto_list_envelope_t *email_template_dto_list_envelope_local_var = malloc(sizeof(email_template_dto_list_envelope_t));
    if (!email_template_dto_list_envelope_local_var) {
        return NULL;
    }
    email_template_dto_list_envelope_local_var->is_success = is_success;
    email_template_dto_list_envelope_local_var->error_message = error_message;
    email_template_dto_list_envelope_local_var->correlation_id = correlation_id;
    email_template_dto_list_envelope_local_var->timestamp = timestamp;
    email_template_dto_list_envelope_local_var->activity_id = activity_id;
    email_template_dto_list_envelope_local_var->result = result;

    return email_template_dto_list_envelope_local_var;
}


void email_template_dto_list_envelope_free(email_template_dto_list_envelope_t *email_template_dto_list_envelope) {
    if(NULL == email_template_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (email_template_dto_list_envelope->error_message) {
        free(email_template_dto_list_envelope->error_message);
        email_template_dto_list_envelope->error_message = NULL;
    }
    if (email_template_dto_list_envelope->correlation_id) {
        free(email_template_dto_list_envelope->correlation_id);
        email_template_dto_list_envelope->correlation_id = NULL;
    }
    if (email_template_dto_list_envelope->timestamp) {
        free(email_template_dto_list_envelope->timestamp);
        email_template_dto_list_envelope->timestamp = NULL;
    }
    if (email_template_dto_list_envelope->activity_id) {
        free(email_template_dto_list_envelope->activity_id);
        email_template_dto_list_envelope->activity_id = NULL;
    }
    if (email_template_dto_list_envelope->result) {
        list_ForEach(listEntry, email_template_dto_list_envelope->result) {
            email_template_dto_free(listEntry->data);
        }
        list_freeList(email_template_dto_list_envelope->result);
        email_template_dto_list_envelope->result = NULL;
    }
    free(email_template_dto_list_envelope);
}

cJSON *email_template_dto_list_envelope_convertToJSON(email_template_dto_list_envelope_t *email_template_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // email_template_dto_list_envelope->is_success
    if(email_template_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", email_template_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // email_template_dto_list_envelope->error_message
    if(email_template_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", email_template_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // email_template_dto_list_envelope->correlation_id
    if(email_template_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", email_template_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // email_template_dto_list_envelope->timestamp
    if(email_template_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", email_template_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // email_template_dto_list_envelope->activity_id
    if(email_template_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", email_template_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // email_template_dto_list_envelope->result
    if(email_template_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (email_template_dto_list_envelope->result) {
    list_ForEach(resultListEntry, email_template_dto_list_envelope->result) {
    cJSON *itemLocal = email_template_dto_convertToJSON(resultListEntry->data);
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

email_template_dto_list_envelope_t *email_template_dto_list_envelope_parseFromJSON(cJSON *email_template_dto_list_envelopeJSON){

    email_template_dto_list_envelope_t *email_template_dto_list_envelope_local_var = NULL;

    // define the local list for email_template_dto_list_envelope->result
    list_t *resultList = NULL;

    // email_template_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(email_template_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // email_template_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(email_template_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // email_template_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(email_template_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // email_template_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(email_template_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // email_template_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(email_template_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // email_template_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(email_template_dto_list_envelopeJSON, "result");
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
        email_template_dto_t *resultItem = email_template_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    email_template_dto_list_envelope_local_var = email_template_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return email_template_dto_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            email_template_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
