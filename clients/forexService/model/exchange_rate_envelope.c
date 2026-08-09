#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "exchange_rate_envelope.h"



exchange_rate_envelope_t *exchange_rate_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    int http_status,
    char *error_code,
    list_t* validation_details,
    char *activity_id,
    exchange_rate_t *result
    ) {
    exchange_rate_envelope_t *exchange_rate_envelope_local_var = malloc(sizeof(exchange_rate_envelope_t));
    if (!exchange_rate_envelope_local_var) {
        return NULL;
    }
    exchange_rate_envelope_local_var->is_success = is_success;
    exchange_rate_envelope_local_var->error_message = error_message;
    exchange_rate_envelope_local_var->correlation_id = correlation_id;
    exchange_rate_envelope_local_var->timestamp = timestamp;
    exchange_rate_envelope_local_var->http_status = http_status;
    exchange_rate_envelope_local_var->error_code = error_code;
    exchange_rate_envelope_local_var->validation_details = validation_details;
    exchange_rate_envelope_local_var->activity_id = activity_id;
    exchange_rate_envelope_local_var->result = result;

    return exchange_rate_envelope_local_var;
}


void exchange_rate_envelope_free(exchange_rate_envelope_t *exchange_rate_envelope) {
    if(NULL == exchange_rate_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (exchange_rate_envelope->error_message) {
        free(exchange_rate_envelope->error_message);
        exchange_rate_envelope->error_message = NULL;
    }
    if (exchange_rate_envelope->correlation_id) {
        free(exchange_rate_envelope->correlation_id);
        exchange_rate_envelope->correlation_id = NULL;
    }
    if (exchange_rate_envelope->timestamp) {
        free(exchange_rate_envelope->timestamp);
        exchange_rate_envelope->timestamp = NULL;
    }
    if (exchange_rate_envelope->error_code) {
        free(exchange_rate_envelope->error_code);
        exchange_rate_envelope->error_code = NULL;
    }
    if (exchange_rate_envelope->validation_details) {
        list_ForEach(listEntry, exchange_rate_envelope->validation_details) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(exchange_rate_envelope->validation_details);
        exchange_rate_envelope->validation_details = NULL;
    }
    if (exchange_rate_envelope->activity_id) {
        free(exchange_rate_envelope->activity_id);
        exchange_rate_envelope->activity_id = NULL;
    }
    if (exchange_rate_envelope->result) {
        exchange_rate_free(exchange_rate_envelope->result);
        exchange_rate_envelope->result = NULL;
    }
    free(exchange_rate_envelope);
}

cJSON *exchange_rate_envelope_convertToJSON(exchange_rate_envelope_t *exchange_rate_envelope) {
    cJSON *item = cJSON_CreateObject();

    // exchange_rate_envelope->is_success
    if(exchange_rate_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", exchange_rate_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // exchange_rate_envelope->error_message
    if(exchange_rate_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", exchange_rate_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // exchange_rate_envelope->correlation_id
    if(exchange_rate_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", exchange_rate_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // exchange_rate_envelope->timestamp
    if(exchange_rate_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", exchange_rate_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // exchange_rate_envelope->http_status
    if(exchange_rate_envelope->http_status) {
    if(cJSON_AddNumberToObject(item, "httpStatus", exchange_rate_envelope->http_status) == NULL) {
    goto fail; //Numeric
    }
    }


    // exchange_rate_envelope->error_code
    if(exchange_rate_envelope->error_code) {
    if(cJSON_AddStringToObject(item, "errorCode", exchange_rate_envelope->error_code) == NULL) {
    goto fail; //String
    }
    }


    // exchange_rate_envelope->validation_details
    if(exchange_rate_envelope->validation_details) {
    cJSON *validation_details = cJSON_AddObjectToObject(item, "validationDetails");
    if(validation_details == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = validation_details;
    listEntry_t *validation_detailsListEntry;
    if (exchange_rate_envelope->validation_details) {
    list_ForEach(validation_detailsListEntry, exchange_rate_envelope->validation_details) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)validation_detailsListEntry->data;
    }
    }
    }


    // exchange_rate_envelope->activity_id
    if(exchange_rate_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", exchange_rate_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // exchange_rate_envelope->result
    if(exchange_rate_envelope->result) {
    cJSON *result_local_JSON = exchange_rate_convertToJSON(exchange_rate_envelope->result);
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

exchange_rate_envelope_t *exchange_rate_envelope_parseFromJSON(cJSON *exchange_rate_envelopeJSON){

    exchange_rate_envelope_t *exchange_rate_envelope_local_var = NULL;

    // define the local map for exchange_rate_envelope->validation_details
    list_t *validation_detailsList = NULL;

    // define the local variable for exchange_rate_envelope->result
    exchange_rate_t *result_local_nonprim = NULL;

    // exchange_rate_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(exchange_rate_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // exchange_rate_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(exchange_rate_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // exchange_rate_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(exchange_rate_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // exchange_rate_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(exchange_rate_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // exchange_rate_envelope->http_status
    cJSON *http_status = cJSON_GetObjectItemCaseSensitive(exchange_rate_envelopeJSON, "httpStatus");
    if (http_status) { 
    if(!cJSON_IsNumber(http_status))
    {
    goto end; //Numeric
    }
    }

    // exchange_rate_envelope->error_code
    cJSON *error_code = cJSON_GetObjectItemCaseSensitive(exchange_rate_envelopeJSON, "errorCode");
    if (error_code) { 
    if(!cJSON_IsString(error_code) && !cJSON_IsNull(error_code))
    {
    goto end; //String
    }
    }

    // exchange_rate_envelope->validation_details
    cJSON *validation_details = cJSON_GetObjectItemCaseSensitive(exchange_rate_envelopeJSON, "validationDetails");
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

    // exchange_rate_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(exchange_rate_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // exchange_rate_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(exchange_rate_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = exchange_rate_parseFromJSON(result); //nonprimitive
    }


    exchange_rate_envelope_local_var = exchange_rate_envelope_create (
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

    return exchange_rate_envelope_local_var;
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
        exchange_rate_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
