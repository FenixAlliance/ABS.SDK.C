#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "auth_result_envelope.h"



auth_result_envelope_t *auth_result_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    int http_status,
    char *error_code,
    list_t* validation_details,
    char *activity_id,
    auth_result_t *result
    ) {
    auth_result_envelope_t *auth_result_envelope_local_var = malloc(sizeof(auth_result_envelope_t));
    if (!auth_result_envelope_local_var) {
        return NULL;
    }
    auth_result_envelope_local_var->is_success = is_success;
    auth_result_envelope_local_var->error_message = error_message;
    auth_result_envelope_local_var->correlation_id = correlation_id;
    auth_result_envelope_local_var->timestamp = timestamp;
    auth_result_envelope_local_var->http_status = http_status;
    auth_result_envelope_local_var->error_code = error_code;
    auth_result_envelope_local_var->validation_details = validation_details;
    auth_result_envelope_local_var->activity_id = activity_id;
    auth_result_envelope_local_var->result = result;

    return auth_result_envelope_local_var;
}


void auth_result_envelope_free(auth_result_envelope_t *auth_result_envelope) {
    if(NULL == auth_result_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (auth_result_envelope->error_message) {
        free(auth_result_envelope->error_message);
        auth_result_envelope->error_message = NULL;
    }
    if (auth_result_envelope->correlation_id) {
        free(auth_result_envelope->correlation_id);
        auth_result_envelope->correlation_id = NULL;
    }
    if (auth_result_envelope->timestamp) {
        free(auth_result_envelope->timestamp);
        auth_result_envelope->timestamp = NULL;
    }
    if (auth_result_envelope->error_code) {
        free(auth_result_envelope->error_code);
        auth_result_envelope->error_code = NULL;
    }
    if (auth_result_envelope->validation_details) {
        list_ForEach(listEntry, auth_result_envelope->validation_details) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(auth_result_envelope->validation_details);
        auth_result_envelope->validation_details = NULL;
    }
    if (auth_result_envelope->activity_id) {
        free(auth_result_envelope->activity_id);
        auth_result_envelope->activity_id = NULL;
    }
    if (auth_result_envelope->result) {
        auth_result_free(auth_result_envelope->result);
        auth_result_envelope->result = NULL;
    }
    free(auth_result_envelope);
}

cJSON *auth_result_envelope_convertToJSON(auth_result_envelope_t *auth_result_envelope) {
    cJSON *item = cJSON_CreateObject();

    // auth_result_envelope->is_success
    if(auth_result_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", auth_result_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // auth_result_envelope->error_message
    if(auth_result_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", auth_result_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // auth_result_envelope->correlation_id
    if(auth_result_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", auth_result_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // auth_result_envelope->timestamp
    if(auth_result_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", auth_result_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // auth_result_envelope->http_status
    if(auth_result_envelope->http_status) {
    if(cJSON_AddNumberToObject(item, "httpStatus", auth_result_envelope->http_status) == NULL) {
    goto fail; //Numeric
    }
    }


    // auth_result_envelope->error_code
    if(auth_result_envelope->error_code) {
    if(cJSON_AddStringToObject(item, "errorCode", auth_result_envelope->error_code) == NULL) {
    goto fail; //String
    }
    }


    // auth_result_envelope->validation_details
    if(auth_result_envelope->validation_details) {
    cJSON *validation_details = cJSON_AddObjectToObject(item, "validationDetails");
    if(validation_details == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = validation_details;
    listEntry_t *validation_detailsListEntry;
    if (auth_result_envelope->validation_details) {
    list_ForEach(validation_detailsListEntry, auth_result_envelope->validation_details) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)validation_detailsListEntry->data;
    }
    }
    }


    // auth_result_envelope->activity_id
    if(auth_result_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", auth_result_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // auth_result_envelope->result
    if(auth_result_envelope->result) {
    cJSON *result_local_JSON = auth_result_convertToJSON(auth_result_envelope->result);
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

auth_result_envelope_t *auth_result_envelope_parseFromJSON(cJSON *auth_result_envelopeJSON){

    auth_result_envelope_t *auth_result_envelope_local_var = NULL;

    // define the local map for auth_result_envelope->validation_details
    list_t *validation_detailsList = NULL;

    // define the local variable for auth_result_envelope->result
    auth_result_t *result_local_nonprim = NULL;

    // auth_result_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(auth_result_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // auth_result_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(auth_result_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // auth_result_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(auth_result_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // auth_result_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(auth_result_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // auth_result_envelope->http_status
    cJSON *http_status = cJSON_GetObjectItemCaseSensitive(auth_result_envelopeJSON, "httpStatus");
    if (http_status) { 
    if(!cJSON_IsNumber(http_status))
    {
    goto end; //Numeric
    }
    }

    // auth_result_envelope->error_code
    cJSON *error_code = cJSON_GetObjectItemCaseSensitive(auth_result_envelopeJSON, "errorCode");
    if (error_code) { 
    if(!cJSON_IsString(error_code) && !cJSON_IsNull(error_code))
    {
    goto end; //String
    }
    }

    // auth_result_envelope->validation_details
    cJSON *validation_details = cJSON_GetObjectItemCaseSensitive(auth_result_envelopeJSON, "validationDetails");
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

    // auth_result_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(auth_result_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // auth_result_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(auth_result_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = auth_result_parseFromJSON(result); //nonprimitive
    }


    auth_result_envelope_local_var = auth_result_envelope_create (
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

    return auth_result_envelope_local_var;
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
        auth_result_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
