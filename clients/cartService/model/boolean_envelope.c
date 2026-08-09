#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "boolean_envelope.h"



boolean_envelope_t *boolean_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    int http_status,
    char *error_code,
    list_t* validation_details,
    char *activity_id,
    int result
    ) {
    boolean_envelope_t *boolean_envelope_local_var = malloc(sizeof(boolean_envelope_t));
    if (!boolean_envelope_local_var) {
        return NULL;
    }
    boolean_envelope_local_var->is_success = is_success;
    boolean_envelope_local_var->error_message = error_message;
    boolean_envelope_local_var->correlation_id = correlation_id;
    boolean_envelope_local_var->timestamp = timestamp;
    boolean_envelope_local_var->http_status = http_status;
    boolean_envelope_local_var->error_code = error_code;
    boolean_envelope_local_var->validation_details = validation_details;
    boolean_envelope_local_var->activity_id = activity_id;
    boolean_envelope_local_var->result = result;

    return boolean_envelope_local_var;
}


void boolean_envelope_free(boolean_envelope_t *boolean_envelope) {
    if(NULL == boolean_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (boolean_envelope->error_message) {
        free(boolean_envelope->error_message);
        boolean_envelope->error_message = NULL;
    }
    if (boolean_envelope->correlation_id) {
        free(boolean_envelope->correlation_id);
        boolean_envelope->correlation_id = NULL;
    }
    if (boolean_envelope->timestamp) {
        free(boolean_envelope->timestamp);
        boolean_envelope->timestamp = NULL;
    }
    if (boolean_envelope->error_code) {
        free(boolean_envelope->error_code);
        boolean_envelope->error_code = NULL;
    }
    if (boolean_envelope->validation_details) {
        list_ForEach(listEntry, boolean_envelope->validation_details) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(boolean_envelope->validation_details);
        boolean_envelope->validation_details = NULL;
    }
    if (boolean_envelope->activity_id) {
        free(boolean_envelope->activity_id);
        boolean_envelope->activity_id = NULL;
    }
    free(boolean_envelope);
}

cJSON *boolean_envelope_convertToJSON(boolean_envelope_t *boolean_envelope) {
    cJSON *item = cJSON_CreateObject();

    // boolean_envelope->is_success
    if(boolean_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", boolean_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // boolean_envelope->error_message
    if(boolean_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", boolean_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // boolean_envelope->correlation_id
    if(boolean_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", boolean_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // boolean_envelope->timestamp
    if(boolean_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", boolean_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // boolean_envelope->http_status
    if(boolean_envelope->http_status) {
    if(cJSON_AddNumberToObject(item, "httpStatus", boolean_envelope->http_status) == NULL) {
    goto fail; //Numeric
    }
    }


    // boolean_envelope->error_code
    if(boolean_envelope->error_code) {
    if(cJSON_AddStringToObject(item, "errorCode", boolean_envelope->error_code) == NULL) {
    goto fail; //String
    }
    }


    // boolean_envelope->validation_details
    if(boolean_envelope->validation_details) {
    cJSON *validation_details = cJSON_AddObjectToObject(item, "validationDetails");
    if(validation_details == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = validation_details;
    listEntry_t *validation_detailsListEntry;
    if (boolean_envelope->validation_details) {
    list_ForEach(validation_detailsListEntry, boolean_envelope->validation_details) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)validation_detailsListEntry->data;
    }
    }
    }


    // boolean_envelope->activity_id
    if(boolean_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", boolean_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // boolean_envelope->result
    if(boolean_envelope->result) {
    if(cJSON_AddBoolToObject(item, "result", boolean_envelope->result) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

boolean_envelope_t *boolean_envelope_parseFromJSON(cJSON *boolean_envelopeJSON){

    boolean_envelope_t *boolean_envelope_local_var = NULL;

    // define the local map for boolean_envelope->validation_details
    list_t *validation_detailsList = NULL;

    // boolean_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(boolean_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // boolean_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(boolean_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // boolean_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(boolean_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // boolean_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(boolean_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // boolean_envelope->http_status
    cJSON *http_status = cJSON_GetObjectItemCaseSensitive(boolean_envelopeJSON, "httpStatus");
    if (http_status) { 
    if(!cJSON_IsNumber(http_status))
    {
    goto end; //Numeric
    }
    }

    // boolean_envelope->error_code
    cJSON *error_code = cJSON_GetObjectItemCaseSensitive(boolean_envelopeJSON, "errorCode");
    if (error_code) { 
    if(!cJSON_IsString(error_code) && !cJSON_IsNull(error_code))
    {
    goto end; //String
    }
    }

    // boolean_envelope->validation_details
    cJSON *validation_details = cJSON_GetObjectItemCaseSensitive(boolean_envelopeJSON, "validationDetails");
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

    // boolean_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(boolean_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // boolean_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(boolean_envelopeJSON, "result");
    if (result) { 
    if(!cJSON_IsBool(result))
    {
    goto end; //Bool
    }
    }


    boolean_envelope_local_var = boolean_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        http_status ? http_status->valuedouble : 0,
        error_code && !cJSON_IsNull(error_code) ? strdup(error_code->valuestring) : NULL,
        validation_details ? validation_detailsList : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result->valueint : 0
        );

    return boolean_envelope_local_var;
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
