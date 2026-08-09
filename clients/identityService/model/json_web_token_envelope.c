#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "json_web_token_envelope.h"



json_web_token_envelope_t *json_web_token_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    int http_status,
    char *error_code,
    list_t* validation_details,
    char *activity_id,
    json_web_token_t *result
    ) {
    json_web_token_envelope_t *json_web_token_envelope_local_var = malloc(sizeof(json_web_token_envelope_t));
    if (!json_web_token_envelope_local_var) {
        return NULL;
    }
    json_web_token_envelope_local_var->is_success = is_success;
    json_web_token_envelope_local_var->error_message = error_message;
    json_web_token_envelope_local_var->correlation_id = correlation_id;
    json_web_token_envelope_local_var->timestamp = timestamp;
    json_web_token_envelope_local_var->http_status = http_status;
    json_web_token_envelope_local_var->error_code = error_code;
    json_web_token_envelope_local_var->validation_details = validation_details;
    json_web_token_envelope_local_var->activity_id = activity_id;
    json_web_token_envelope_local_var->result = result;

    return json_web_token_envelope_local_var;
}


void json_web_token_envelope_free(json_web_token_envelope_t *json_web_token_envelope) {
    if(NULL == json_web_token_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (json_web_token_envelope->error_message) {
        free(json_web_token_envelope->error_message);
        json_web_token_envelope->error_message = NULL;
    }
    if (json_web_token_envelope->correlation_id) {
        free(json_web_token_envelope->correlation_id);
        json_web_token_envelope->correlation_id = NULL;
    }
    if (json_web_token_envelope->timestamp) {
        free(json_web_token_envelope->timestamp);
        json_web_token_envelope->timestamp = NULL;
    }
    if (json_web_token_envelope->error_code) {
        free(json_web_token_envelope->error_code);
        json_web_token_envelope->error_code = NULL;
    }
    if (json_web_token_envelope->validation_details) {
        list_ForEach(listEntry, json_web_token_envelope->validation_details) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(json_web_token_envelope->validation_details);
        json_web_token_envelope->validation_details = NULL;
    }
    if (json_web_token_envelope->activity_id) {
        free(json_web_token_envelope->activity_id);
        json_web_token_envelope->activity_id = NULL;
    }
    if (json_web_token_envelope->result) {
        json_web_token_free(json_web_token_envelope->result);
        json_web_token_envelope->result = NULL;
    }
    free(json_web_token_envelope);
}

cJSON *json_web_token_envelope_convertToJSON(json_web_token_envelope_t *json_web_token_envelope) {
    cJSON *item = cJSON_CreateObject();

    // json_web_token_envelope->is_success
    if(json_web_token_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", json_web_token_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // json_web_token_envelope->error_message
    if(json_web_token_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", json_web_token_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // json_web_token_envelope->correlation_id
    if(json_web_token_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", json_web_token_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // json_web_token_envelope->timestamp
    if(json_web_token_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", json_web_token_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // json_web_token_envelope->http_status
    if(json_web_token_envelope->http_status) {
    if(cJSON_AddNumberToObject(item, "httpStatus", json_web_token_envelope->http_status) == NULL) {
    goto fail; //Numeric
    }
    }


    // json_web_token_envelope->error_code
    if(json_web_token_envelope->error_code) {
    if(cJSON_AddStringToObject(item, "errorCode", json_web_token_envelope->error_code) == NULL) {
    goto fail; //String
    }
    }


    // json_web_token_envelope->validation_details
    if(json_web_token_envelope->validation_details) {
    cJSON *validation_details = cJSON_AddObjectToObject(item, "validationDetails");
    if(validation_details == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = validation_details;
    listEntry_t *validation_detailsListEntry;
    if (json_web_token_envelope->validation_details) {
    list_ForEach(validation_detailsListEntry, json_web_token_envelope->validation_details) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)validation_detailsListEntry->data;
    }
    }
    }


    // json_web_token_envelope->activity_id
    if(json_web_token_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", json_web_token_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // json_web_token_envelope->result
    if(json_web_token_envelope->result) {
    cJSON *result_local_JSON = json_web_token_convertToJSON(json_web_token_envelope->result);
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

json_web_token_envelope_t *json_web_token_envelope_parseFromJSON(cJSON *json_web_token_envelopeJSON){

    json_web_token_envelope_t *json_web_token_envelope_local_var = NULL;

    // define the local map for json_web_token_envelope->validation_details
    list_t *validation_detailsList = NULL;

    // define the local variable for json_web_token_envelope->result
    json_web_token_t *result_local_nonprim = NULL;

    // json_web_token_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(json_web_token_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // json_web_token_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(json_web_token_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // json_web_token_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(json_web_token_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // json_web_token_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(json_web_token_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // json_web_token_envelope->http_status
    cJSON *http_status = cJSON_GetObjectItemCaseSensitive(json_web_token_envelopeJSON, "httpStatus");
    if (http_status) { 
    if(!cJSON_IsNumber(http_status))
    {
    goto end; //Numeric
    }
    }

    // json_web_token_envelope->error_code
    cJSON *error_code = cJSON_GetObjectItemCaseSensitive(json_web_token_envelopeJSON, "errorCode");
    if (error_code) { 
    if(!cJSON_IsString(error_code) && !cJSON_IsNull(error_code))
    {
    goto end; //String
    }
    }

    // json_web_token_envelope->validation_details
    cJSON *validation_details = cJSON_GetObjectItemCaseSensitive(json_web_token_envelopeJSON, "validationDetails");
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

    // json_web_token_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(json_web_token_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // json_web_token_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(json_web_token_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = json_web_token_parseFromJSON(result); //nonprimitive
    }


    json_web_token_envelope_local_var = json_web_token_envelope_create (
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

    return json_web_token_envelope_local_var;
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
        json_web_token_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
