#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "execution_context_envelope.h"



execution_context_envelope_t *execution_context_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    int http_status,
    char *error_code,
    list_t* validation_details,
    char *activity_id,
    execution_context_t *result
    ) {
    execution_context_envelope_t *execution_context_envelope_local_var = malloc(sizeof(execution_context_envelope_t));
    if (!execution_context_envelope_local_var) {
        return NULL;
    }
    execution_context_envelope_local_var->is_success = is_success;
    execution_context_envelope_local_var->error_message = error_message;
    execution_context_envelope_local_var->correlation_id = correlation_id;
    execution_context_envelope_local_var->timestamp = timestamp;
    execution_context_envelope_local_var->http_status = http_status;
    execution_context_envelope_local_var->error_code = error_code;
    execution_context_envelope_local_var->validation_details = validation_details;
    execution_context_envelope_local_var->activity_id = activity_id;
    execution_context_envelope_local_var->result = result;

    return execution_context_envelope_local_var;
}


void execution_context_envelope_free(execution_context_envelope_t *execution_context_envelope) {
    if(NULL == execution_context_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (execution_context_envelope->error_message) {
        free(execution_context_envelope->error_message);
        execution_context_envelope->error_message = NULL;
    }
    if (execution_context_envelope->correlation_id) {
        free(execution_context_envelope->correlation_id);
        execution_context_envelope->correlation_id = NULL;
    }
    if (execution_context_envelope->timestamp) {
        free(execution_context_envelope->timestamp);
        execution_context_envelope->timestamp = NULL;
    }
    if (execution_context_envelope->error_code) {
        free(execution_context_envelope->error_code);
        execution_context_envelope->error_code = NULL;
    }
    if (execution_context_envelope->validation_details) {
        list_ForEach(listEntry, execution_context_envelope->validation_details) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(execution_context_envelope->validation_details);
        execution_context_envelope->validation_details = NULL;
    }
    if (execution_context_envelope->activity_id) {
        free(execution_context_envelope->activity_id);
        execution_context_envelope->activity_id = NULL;
    }
    if (execution_context_envelope->result) {
        execution_context_free(execution_context_envelope->result);
        execution_context_envelope->result = NULL;
    }
    free(execution_context_envelope);
}

cJSON *execution_context_envelope_convertToJSON(execution_context_envelope_t *execution_context_envelope) {
    cJSON *item = cJSON_CreateObject();

    // execution_context_envelope->is_success
    if(execution_context_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", execution_context_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // execution_context_envelope->error_message
    if(execution_context_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", execution_context_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // execution_context_envelope->correlation_id
    if(execution_context_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", execution_context_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // execution_context_envelope->timestamp
    if(execution_context_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", execution_context_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // execution_context_envelope->http_status
    if(execution_context_envelope->http_status) {
    if(cJSON_AddNumberToObject(item, "httpStatus", execution_context_envelope->http_status) == NULL) {
    goto fail; //Numeric
    }
    }


    // execution_context_envelope->error_code
    if(execution_context_envelope->error_code) {
    if(cJSON_AddStringToObject(item, "errorCode", execution_context_envelope->error_code) == NULL) {
    goto fail; //String
    }
    }


    // execution_context_envelope->validation_details
    if(execution_context_envelope->validation_details) {
    cJSON *validation_details = cJSON_AddObjectToObject(item, "validationDetails");
    if(validation_details == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = validation_details;
    listEntry_t *validation_detailsListEntry;
    if (execution_context_envelope->validation_details) {
    list_ForEach(validation_detailsListEntry, execution_context_envelope->validation_details) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)validation_detailsListEntry->data;
    }
    }
    }


    // execution_context_envelope->activity_id
    if(execution_context_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", execution_context_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // execution_context_envelope->result
    if(execution_context_envelope->result) {
    cJSON *result_local_JSON = execution_context_convertToJSON(execution_context_envelope->result);
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

execution_context_envelope_t *execution_context_envelope_parseFromJSON(cJSON *execution_context_envelopeJSON){

    execution_context_envelope_t *execution_context_envelope_local_var = NULL;

    // define the local map for execution_context_envelope->validation_details
    list_t *validation_detailsList = NULL;

    // define the local variable for execution_context_envelope->result
    execution_context_t *result_local_nonprim = NULL;

    // execution_context_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(execution_context_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // execution_context_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(execution_context_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // execution_context_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(execution_context_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // execution_context_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(execution_context_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // execution_context_envelope->http_status
    cJSON *http_status = cJSON_GetObjectItemCaseSensitive(execution_context_envelopeJSON, "httpStatus");
    if (http_status) { 
    if(!cJSON_IsNumber(http_status))
    {
    goto end; //Numeric
    }
    }

    // execution_context_envelope->error_code
    cJSON *error_code = cJSON_GetObjectItemCaseSensitive(execution_context_envelopeJSON, "errorCode");
    if (error_code) { 
    if(!cJSON_IsString(error_code) && !cJSON_IsNull(error_code))
    {
    goto end; //String
    }
    }

    // execution_context_envelope->validation_details
    cJSON *validation_details = cJSON_GetObjectItemCaseSensitive(execution_context_envelopeJSON, "validationDetails");
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

    // execution_context_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(execution_context_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // execution_context_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(execution_context_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = execution_context_parseFromJSON(result); //nonprimitive
    }


    execution_context_envelope_local_var = execution_context_envelope_create (
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

    return execution_context_envelope_local_var;
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
        execution_context_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
