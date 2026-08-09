#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "envelope.h"



envelope_t *envelope_create(
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
    envelope_t *envelope_local_var = malloc(sizeof(envelope_t));
    if (!envelope_local_var) {
        return NULL;
    }
    envelope_local_var->is_success = is_success;
    envelope_local_var->error_message = error_message;
    envelope_local_var->correlation_id = correlation_id;
    envelope_local_var->timestamp = timestamp;
    envelope_local_var->http_status = http_status;
    envelope_local_var->error_code = error_code;
    envelope_local_var->validation_details = validation_details;
    envelope_local_var->activity_id = activity_id;
    envelope_local_var->result = result;

    return envelope_local_var;
}


void envelope_free(envelope_t *envelope) {
    if(NULL == envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (envelope->error_message) {
        free(envelope->error_message);
        envelope->error_message = NULL;
    }
    if (envelope->correlation_id) {
        free(envelope->correlation_id);
        envelope->correlation_id = NULL;
    }
    if (envelope->timestamp) {
        free(envelope->timestamp);
        envelope->timestamp = NULL;
    }
    if (envelope->error_code) {
        free(envelope->error_code);
        envelope->error_code = NULL;
    }
    if (envelope->validation_details) {
        list_ForEach(listEntry, envelope->validation_details) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(envelope->validation_details);
        envelope->validation_details = NULL;
    }
    if (envelope->activity_id) {
        free(envelope->activity_id);
        envelope->activity_id = NULL;
    }
    if (envelope->result) {
        free(envelope->result);
        envelope->result = NULL;
    }
    free(envelope);
}

cJSON *envelope_convertToJSON(envelope_t *envelope) {
    cJSON *item = cJSON_CreateObject();

    // envelope->is_success
    if(envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // envelope->error_message
    if(envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // envelope->correlation_id
    if(envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // envelope->timestamp
    if(envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // envelope->http_status
    if(envelope->http_status) {
    if(cJSON_AddNumberToObject(item, "httpStatus", envelope->http_status) == NULL) {
    goto fail; //Numeric
    }
    }


    // envelope->error_code
    if(envelope->error_code) {
    if(cJSON_AddStringToObject(item, "errorCode", envelope->error_code) == NULL) {
    goto fail; //String
    }
    }


    // envelope->validation_details
    if(envelope->validation_details) {
    cJSON *validation_details = cJSON_AddObjectToObject(item, "validationDetails");
    if(validation_details == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = validation_details;
    listEntry_t *validation_detailsListEntry;
    if (envelope->validation_details) {
    list_ForEach(validation_detailsListEntry, envelope->validation_details) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)validation_detailsListEntry->data;
    }
    }
    }


    // envelope->activity_id
    if(envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // envelope->result
    if(envelope->result) {
    if(cJSON_AddStringToObject(item, "result", envelope->result) == NULL) {
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

envelope_t *envelope_parseFromJSON(cJSON *envelopeJSON){

    envelope_t *envelope_local_var = NULL;

    // define the local map for envelope->validation_details
    list_t *validation_detailsList = NULL;

    // envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // envelope->http_status
    cJSON *http_status = cJSON_GetObjectItemCaseSensitive(envelopeJSON, "httpStatus");
    if (http_status) { 
    if(!cJSON_IsNumber(http_status))
    {
    goto end; //Numeric
    }
    }

    // envelope->error_code
    cJSON *error_code = cJSON_GetObjectItemCaseSensitive(envelopeJSON, "errorCode");
    if (error_code) { 
    if(!cJSON_IsString(error_code) && !cJSON_IsNull(error_code))
    {
    goto end; //String
    }
    }

    // envelope->validation_details
    cJSON *validation_details = cJSON_GetObjectItemCaseSensitive(envelopeJSON, "validationDetails");
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

    // envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(envelopeJSON, "result");
    if (result) { 
    if(!cJSON_IsString(result) && !cJSON_IsNull(result))
    {
    goto end; //String
    }
    }


    envelope_local_var = envelope_create (
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

    return envelope_local_var;
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
