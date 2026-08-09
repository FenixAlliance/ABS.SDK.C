#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "web_template_dto_envelope.h"



web_template_dto_envelope_t *web_template_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    int http_status,
    char *error_code,
    list_t* validation_details,
    char *activity_id,
    web_template_dto_t *result
    ) {
    web_template_dto_envelope_t *web_template_dto_envelope_local_var = malloc(sizeof(web_template_dto_envelope_t));
    if (!web_template_dto_envelope_local_var) {
        return NULL;
    }
    web_template_dto_envelope_local_var->is_success = is_success;
    web_template_dto_envelope_local_var->error_message = error_message;
    web_template_dto_envelope_local_var->correlation_id = correlation_id;
    web_template_dto_envelope_local_var->timestamp = timestamp;
    web_template_dto_envelope_local_var->http_status = http_status;
    web_template_dto_envelope_local_var->error_code = error_code;
    web_template_dto_envelope_local_var->validation_details = validation_details;
    web_template_dto_envelope_local_var->activity_id = activity_id;
    web_template_dto_envelope_local_var->result = result;

    return web_template_dto_envelope_local_var;
}


void web_template_dto_envelope_free(web_template_dto_envelope_t *web_template_dto_envelope) {
    if(NULL == web_template_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (web_template_dto_envelope->error_message) {
        free(web_template_dto_envelope->error_message);
        web_template_dto_envelope->error_message = NULL;
    }
    if (web_template_dto_envelope->correlation_id) {
        free(web_template_dto_envelope->correlation_id);
        web_template_dto_envelope->correlation_id = NULL;
    }
    if (web_template_dto_envelope->timestamp) {
        free(web_template_dto_envelope->timestamp);
        web_template_dto_envelope->timestamp = NULL;
    }
    if (web_template_dto_envelope->error_code) {
        free(web_template_dto_envelope->error_code);
        web_template_dto_envelope->error_code = NULL;
    }
    if (web_template_dto_envelope->validation_details) {
        list_ForEach(listEntry, web_template_dto_envelope->validation_details) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(web_template_dto_envelope->validation_details);
        web_template_dto_envelope->validation_details = NULL;
    }
    if (web_template_dto_envelope->activity_id) {
        free(web_template_dto_envelope->activity_id);
        web_template_dto_envelope->activity_id = NULL;
    }
    if (web_template_dto_envelope->result) {
        web_template_dto_free(web_template_dto_envelope->result);
        web_template_dto_envelope->result = NULL;
    }
    free(web_template_dto_envelope);
}

cJSON *web_template_dto_envelope_convertToJSON(web_template_dto_envelope_t *web_template_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // web_template_dto_envelope->is_success
    if(web_template_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", web_template_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // web_template_dto_envelope->error_message
    if(web_template_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", web_template_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // web_template_dto_envelope->correlation_id
    if(web_template_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", web_template_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // web_template_dto_envelope->timestamp
    if(web_template_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", web_template_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // web_template_dto_envelope->http_status
    if(web_template_dto_envelope->http_status) {
    if(cJSON_AddNumberToObject(item, "httpStatus", web_template_dto_envelope->http_status) == NULL) {
    goto fail; //Numeric
    }
    }


    // web_template_dto_envelope->error_code
    if(web_template_dto_envelope->error_code) {
    if(cJSON_AddStringToObject(item, "errorCode", web_template_dto_envelope->error_code) == NULL) {
    goto fail; //String
    }
    }


    // web_template_dto_envelope->validation_details
    if(web_template_dto_envelope->validation_details) {
    cJSON *validation_details = cJSON_AddObjectToObject(item, "validationDetails");
    if(validation_details == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = validation_details;
    listEntry_t *validation_detailsListEntry;
    if (web_template_dto_envelope->validation_details) {
    list_ForEach(validation_detailsListEntry, web_template_dto_envelope->validation_details) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)validation_detailsListEntry->data;
    }
    }
    }


    // web_template_dto_envelope->activity_id
    if(web_template_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", web_template_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // web_template_dto_envelope->result
    if(web_template_dto_envelope->result) {
    cJSON *result_local_JSON = web_template_dto_convertToJSON(web_template_dto_envelope->result);
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

web_template_dto_envelope_t *web_template_dto_envelope_parseFromJSON(cJSON *web_template_dto_envelopeJSON){

    web_template_dto_envelope_t *web_template_dto_envelope_local_var = NULL;

    // define the local map for web_template_dto_envelope->validation_details
    list_t *validation_detailsList = NULL;

    // define the local variable for web_template_dto_envelope->result
    web_template_dto_t *result_local_nonprim = NULL;

    // web_template_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(web_template_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // web_template_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(web_template_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // web_template_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(web_template_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // web_template_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(web_template_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // web_template_dto_envelope->http_status
    cJSON *http_status = cJSON_GetObjectItemCaseSensitive(web_template_dto_envelopeJSON, "httpStatus");
    if (http_status) { 
    if(!cJSON_IsNumber(http_status))
    {
    goto end; //Numeric
    }
    }

    // web_template_dto_envelope->error_code
    cJSON *error_code = cJSON_GetObjectItemCaseSensitive(web_template_dto_envelopeJSON, "errorCode");
    if (error_code) { 
    if(!cJSON_IsString(error_code) && !cJSON_IsNull(error_code))
    {
    goto end; //String
    }
    }

    // web_template_dto_envelope->validation_details
    cJSON *validation_details = cJSON_GetObjectItemCaseSensitive(web_template_dto_envelopeJSON, "validationDetails");
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

    // web_template_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(web_template_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // web_template_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(web_template_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = web_template_dto_parseFromJSON(result); //nonprimitive
    }


    web_template_dto_envelope_local_var = web_template_dto_envelope_create (
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

    return web_template_dto_envelope_local_var;
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
        web_template_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
