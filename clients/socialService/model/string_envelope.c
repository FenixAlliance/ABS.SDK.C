#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "string_envelope.h"



string_envelope_t *string_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    int http_status,
    char *error_code,
    list_t* validation_details,
    char *activity_id,
    char *result
    ) {
    string_envelope_t *string_envelope_local_var = malloc(sizeof(string_envelope_t));
    if (!string_envelope_local_var) {
        return NULL;
    }
    string_envelope_local_var->is_success = is_success;
    string_envelope_local_var->error_message = error_message;
    string_envelope_local_var->correlation_id = correlation_id;
    string_envelope_local_var->timestamp = timestamp;
    string_envelope_local_var->http_status = http_status;
    string_envelope_local_var->error_code = error_code;
    string_envelope_local_var->validation_details = validation_details;
    string_envelope_local_var->activity_id = activity_id;
    string_envelope_local_var->result = result;

    return string_envelope_local_var;
}


void string_envelope_free(string_envelope_t *string_envelope) {
    if(NULL == string_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (string_envelope->error_message) {
        free(string_envelope->error_message);
        string_envelope->error_message = NULL;
    }
    if (string_envelope->correlation_id) {
        free(string_envelope->correlation_id);
        string_envelope->correlation_id = NULL;
    }
    if (string_envelope->timestamp) {
        free(string_envelope->timestamp);
        string_envelope->timestamp = NULL;
    }
    if (string_envelope->error_code) {
        free(string_envelope->error_code);
        string_envelope->error_code = NULL;
    }
    if (string_envelope->validation_details) {
        list_ForEach(listEntry, string_envelope->validation_details) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(string_envelope->validation_details);
        string_envelope->validation_details = NULL;
    }
    if (string_envelope->activity_id) {
        free(string_envelope->activity_id);
        string_envelope->activity_id = NULL;
    }
    if (string_envelope->result) {
        free(string_envelope->result);
        string_envelope->result = NULL;
    }
    free(string_envelope);
}

cJSON *string_envelope_convertToJSON(string_envelope_t *string_envelope) {
    cJSON *item = cJSON_CreateObject();

    // string_envelope->is_success
    if(string_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", string_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // string_envelope->error_message
    if(string_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", string_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // string_envelope->correlation_id
    if(string_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", string_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // string_envelope->timestamp
    if(string_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", string_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // string_envelope->http_status
    if(string_envelope->http_status) {
    if(cJSON_AddNumberToObject(item, "httpStatus", string_envelope->http_status) == NULL) {
    goto fail; //Numeric
    }
    }


    // string_envelope->error_code
    if(string_envelope->error_code) {
    if(cJSON_AddStringToObject(item, "errorCode", string_envelope->error_code) == NULL) {
    goto fail; //String
    }
    }


    // string_envelope->validation_details
    if(string_envelope->validation_details) {
    cJSON *validation_details = cJSON_AddObjectToObject(item, "validationDetails");
    if(validation_details == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = validation_details;
    listEntry_t *validation_detailsListEntry;
    if (string_envelope->validation_details) {
    list_ForEach(validation_detailsListEntry, string_envelope->validation_details) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)validation_detailsListEntry->data;
    }
    }
    }


    // string_envelope->activity_id
    if(string_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", string_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // string_envelope->result
    if(string_envelope->result) {
    if(cJSON_AddStringToObject(item, "result", string_envelope->result) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

string_envelope_t *string_envelope_parseFromJSON(cJSON *string_envelopeJSON){

    string_envelope_t *string_envelope_local_var = NULL;

    // define the local map for string_envelope->validation_details
    list_t *validation_detailsList = NULL;

    // string_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(string_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // string_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(string_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // string_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(string_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // string_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(string_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // string_envelope->http_status
    cJSON *http_status = cJSON_GetObjectItemCaseSensitive(string_envelopeJSON, "httpStatus");
    if (http_status) { 
    if(!cJSON_IsNumber(http_status))
    {
    goto end; //Numeric
    }
    }

    // string_envelope->error_code
    cJSON *error_code = cJSON_GetObjectItemCaseSensitive(string_envelopeJSON, "errorCode");
    if (error_code) { 
    if(!cJSON_IsString(error_code) && !cJSON_IsNull(error_code))
    {
    goto end; //String
    }
    }

    // string_envelope->validation_details
    cJSON *validation_details = cJSON_GetObjectItemCaseSensitive(string_envelopeJSON, "validationDetails");
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

    // string_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(string_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // string_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(string_envelopeJSON, "result");
    if (result) { 
    if(!cJSON_IsString(result) && !cJSON_IsNull(result))
    {
    goto end; //String
    }
    }


    string_envelope_local_var = string_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        http_status ? http_status->valuedouble : 0,
        error_code && !cJSON_IsNull(error_code) ? strdup(error_code->valuestring) : NULL,
        validation_details ? validation_detailsList : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result && !cJSON_IsNull(result) ? strdup(result->valuestring) : NULL
        );

    return string_envelope_local_var;
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
    return NULL;

}
