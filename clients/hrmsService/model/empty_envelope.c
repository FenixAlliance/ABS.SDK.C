#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "empty_envelope.h"



empty_envelope_t *empty_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    int http_status,
    char *error_code,
    list_t* validation_details,
    char *activity_id
    ) {
    empty_envelope_t *empty_envelope_local_var = malloc(sizeof(empty_envelope_t));
    if (!empty_envelope_local_var) {
        return NULL;
    }
    empty_envelope_local_var->is_success = is_success;
    empty_envelope_local_var->error_message = error_message;
    empty_envelope_local_var->correlation_id = correlation_id;
    empty_envelope_local_var->timestamp = timestamp;
    empty_envelope_local_var->http_status = http_status;
    empty_envelope_local_var->error_code = error_code;
    empty_envelope_local_var->validation_details = validation_details;
    empty_envelope_local_var->activity_id = activity_id;

    return empty_envelope_local_var;
}


void empty_envelope_free(empty_envelope_t *empty_envelope) {
    if(NULL == empty_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (empty_envelope->error_message) {
        free(empty_envelope->error_message);
        empty_envelope->error_message = NULL;
    }
    if (empty_envelope->correlation_id) {
        free(empty_envelope->correlation_id);
        empty_envelope->correlation_id = NULL;
    }
    if (empty_envelope->timestamp) {
        free(empty_envelope->timestamp);
        empty_envelope->timestamp = NULL;
    }
    if (empty_envelope->error_code) {
        free(empty_envelope->error_code);
        empty_envelope->error_code = NULL;
    }
    if (empty_envelope->validation_details) {
        list_ForEach(listEntry, empty_envelope->validation_details) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(empty_envelope->validation_details);
        empty_envelope->validation_details = NULL;
    }
    if (empty_envelope->activity_id) {
        free(empty_envelope->activity_id);
        empty_envelope->activity_id = NULL;
    }
    free(empty_envelope);
}

cJSON *empty_envelope_convertToJSON(empty_envelope_t *empty_envelope) {
    cJSON *item = cJSON_CreateObject();

    // empty_envelope->is_success
    if(empty_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", empty_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // empty_envelope->error_message
    if(empty_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", empty_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // empty_envelope->correlation_id
    if(empty_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", empty_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // empty_envelope->timestamp
    if(empty_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", empty_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // empty_envelope->http_status
    if(empty_envelope->http_status) {
    if(cJSON_AddNumberToObject(item, "httpStatus", empty_envelope->http_status) == NULL) {
    goto fail; //Numeric
    }
    }


    // empty_envelope->error_code
    if(empty_envelope->error_code) {
    if(cJSON_AddStringToObject(item, "errorCode", empty_envelope->error_code) == NULL) {
    goto fail; //String
    }
    }


    // empty_envelope->validation_details
    if(empty_envelope->validation_details) {
    cJSON *validation_details = cJSON_AddObjectToObject(item, "validationDetails");
    if(validation_details == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = validation_details;
    listEntry_t *validation_detailsListEntry;
    if (empty_envelope->validation_details) {
    list_ForEach(validation_detailsListEntry, empty_envelope->validation_details) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)validation_detailsListEntry->data;
    }
    }
    }


    // empty_envelope->activity_id
    if(empty_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", empty_envelope->activity_id) == NULL) {
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

empty_envelope_t *empty_envelope_parseFromJSON(cJSON *empty_envelopeJSON){

    empty_envelope_t *empty_envelope_local_var = NULL;

    // define the local map for empty_envelope->validation_details
    list_t *validation_detailsList = NULL;

    // empty_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(empty_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // empty_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(empty_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // empty_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(empty_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // empty_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(empty_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // empty_envelope->http_status
    cJSON *http_status = cJSON_GetObjectItemCaseSensitive(empty_envelopeJSON, "httpStatus");
    if (http_status) { 
    if(!cJSON_IsNumber(http_status))
    {
    goto end; //Numeric
    }
    }

    // empty_envelope->error_code
    cJSON *error_code = cJSON_GetObjectItemCaseSensitive(empty_envelopeJSON, "errorCode");
    if (error_code) { 
    if(!cJSON_IsString(error_code) && !cJSON_IsNull(error_code))
    {
    goto end; //String
    }
    }

    // empty_envelope->validation_details
    cJSON *validation_details = cJSON_GetObjectItemCaseSensitive(empty_envelopeJSON, "validationDetails");
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

    // empty_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(empty_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }


    empty_envelope_local_var = empty_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        http_status ? http_status->valuedouble : 0,
        error_code && !cJSON_IsNull(error_code) ? strdup(error_code->valuestring) : NULL,
        validation_details ? validation_detailsList : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL
        );

    return empty_envelope_local_var;
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
