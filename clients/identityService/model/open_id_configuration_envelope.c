#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "open_id_configuration_envelope.h"



open_id_configuration_envelope_t *open_id_configuration_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    int http_status,
    char *error_code,
    list_t* validation_details,
    char *activity_id,
    open_id_configuration_t *result
    ) {
    open_id_configuration_envelope_t *open_id_configuration_envelope_local_var = malloc(sizeof(open_id_configuration_envelope_t));
    if (!open_id_configuration_envelope_local_var) {
        return NULL;
    }
    open_id_configuration_envelope_local_var->is_success = is_success;
    open_id_configuration_envelope_local_var->error_message = error_message;
    open_id_configuration_envelope_local_var->correlation_id = correlation_id;
    open_id_configuration_envelope_local_var->timestamp = timestamp;
    open_id_configuration_envelope_local_var->http_status = http_status;
    open_id_configuration_envelope_local_var->error_code = error_code;
    open_id_configuration_envelope_local_var->validation_details = validation_details;
    open_id_configuration_envelope_local_var->activity_id = activity_id;
    open_id_configuration_envelope_local_var->result = result;

    return open_id_configuration_envelope_local_var;
}


void open_id_configuration_envelope_free(open_id_configuration_envelope_t *open_id_configuration_envelope) {
    if(NULL == open_id_configuration_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (open_id_configuration_envelope->error_message) {
        free(open_id_configuration_envelope->error_message);
        open_id_configuration_envelope->error_message = NULL;
    }
    if (open_id_configuration_envelope->correlation_id) {
        free(open_id_configuration_envelope->correlation_id);
        open_id_configuration_envelope->correlation_id = NULL;
    }
    if (open_id_configuration_envelope->timestamp) {
        free(open_id_configuration_envelope->timestamp);
        open_id_configuration_envelope->timestamp = NULL;
    }
    if (open_id_configuration_envelope->error_code) {
        free(open_id_configuration_envelope->error_code);
        open_id_configuration_envelope->error_code = NULL;
    }
    if (open_id_configuration_envelope->validation_details) {
        list_ForEach(listEntry, open_id_configuration_envelope->validation_details) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(open_id_configuration_envelope->validation_details);
        open_id_configuration_envelope->validation_details = NULL;
    }
    if (open_id_configuration_envelope->activity_id) {
        free(open_id_configuration_envelope->activity_id);
        open_id_configuration_envelope->activity_id = NULL;
    }
    if (open_id_configuration_envelope->result) {
        open_id_configuration_free(open_id_configuration_envelope->result);
        open_id_configuration_envelope->result = NULL;
    }
    free(open_id_configuration_envelope);
}

cJSON *open_id_configuration_envelope_convertToJSON(open_id_configuration_envelope_t *open_id_configuration_envelope) {
    cJSON *item = cJSON_CreateObject();

    // open_id_configuration_envelope->is_success
    if(open_id_configuration_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", open_id_configuration_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // open_id_configuration_envelope->error_message
    if(open_id_configuration_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", open_id_configuration_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // open_id_configuration_envelope->correlation_id
    if(open_id_configuration_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", open_id_configuration_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // open_id_configuration_envelope->timestamp
    if(open_id_configuration_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", open_id_configuration_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // open_id_configuration_envelope->http_status
    if(open_id_configuration_envelope->http_status) {
    if(cJSON_AddNumberToObject(item, "httpStatus", open_id_configuration_envelope->http_status) == NULL) {
    goto fail; //Numeric
    }
    }


    // open_id_configuration_envelope->error_code
    if(open_id_configuration_envelope->error_code) {
    if(cJSON_AddStringToObject(item, "errorCode", open_id_configuration_envelope->error_code) == NULL) {
    goto fail; //String
    }
    }


    // open_id_configuration_envelope->validation_details
    if(open_id_configuration_envelope->validation_details) {
    cJSON *validation_details = cJSON_AddObjectToObject(item, "validationDetails");
    if(validation_details == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = validation_details;
    listEntry_t *validation_detailsListEntry;
    if (open_id_configuration_envelope->validation_details) {
    list_ForEach(validation_detailsListEntry, open_id_configuration_envelope->validation_details) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)validation_detailsListEntry->data;
    }
    }
    }


    // open_id_configuration_envelope->activity_id
    if(open_id_configuration_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", open_id_configuration_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // open_id_configuration_envelope->result
    if(open_id_configuration_envelope->result) {
    cJSON *result_local_JSON = open_id_configuration_convertToJSON(open_id_configuration_envelope->result);
    if(result_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "result", result_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

open_id_configuration_envelope_t *open_id_configuration_envelope_parseFromJSON(cJSON *open_id_configuration_envelopeJSON){

    open_id_configuration_envelope_t *open_id_configuration_envelope_local_var = NULL;

    // define the local map for open_id_configuration_envelope->validation_details
    list_t *validation_detailsList = NULL;

    // define the local variable for open_id_configuration_envelope->result
    open_id_configuration_t *result_local_nonprim = NULL;

    // open_id_configuration_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(open_id_configuration_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // open_id_configuration_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(open_id_configuration_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // open_id_configuration_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(open_id_configuration_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // open_id_configuration_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(open_id_configuration_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // open_id_configuration_envelope->http_status
    cJSON *http_status = cJSON_GetObjectItemCaseSensitive(open_id_configuration_envelopeJSON, "httpStatus");
    if (http_status) { 
    if(!cJSON_IsNumber(http_status))
    {
    goto end; //Numeric
    }
    }

    // open_id_configuration_envelope->error_code
    cJSON *error_code = cJSON_GetObjectItemCaseSensitive(open_id_configuration_envelopeJSON, "errorCode");
    if (error_code) { 
    if(!cJSON_IsString(error_code) && !cJSON_IsNull(error_code))
    {
    goto end; //String
    }
    }

    // open_id_configuration_envelope->validation_details
    cJSON *validation_details = cJSON_GetObjectItemCaseSensitive(open_id_configuration_envelopeJSON, "validationDetails");
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

    // open_id_configuration_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(open_id_configuration_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // open_id_configuration_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(open_id_configuration_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = open_id_configuration_parseFromJSON(result); //nonprimitive
    }


    open_id_configuration_envelope_local_var = open_id_configuration_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        http_status ? http_status->valuedouble : 0,
        error_code && !cJSON_IsNull(error_code) ? strdup(error_code->valuestring) : NULL,
        validation_details ? validation_detailsList : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return open_id_configuration_envelope_local_var;
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
    if (result_local_nonprim) {
        open_id_configuration_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
