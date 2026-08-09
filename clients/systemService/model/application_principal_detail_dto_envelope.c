#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "application_principal_detail_dto_envelope.h"



application_principal_detail_dto_envelope_t *application_principal_detail_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    int http_status,
    char *error_code,
    list_t* validation_details,
    char *activity_id,
    application_principal_detail_dto_t *result
    ) {
    application_principal_detail_dto_envelope_t *application_principal_detail_dto_envelope_local_var = malloc(sizeof(application_principal_detail_dto_envelope_t));
    if (!application_principal_detail_dto_envelope_local_var) {
        return NULL;
    }
    application_principal_detail_dto_envelope_local_var->is_success = is_success;
    application_principal_detail_dto_envelope_local_var->error_message = error_message;
    application_principal_detail_dto_envelope_local_var->correlation_id = correlation_id;
    application_principal_detail_dto_envelope_local_var->timestamp = timestamp;
    application_principal_detail_dto_envelope_local_var->http_status = http_status;
    application_principal_detail_dto_envelope_local_var->error_code = error_code;
    application_principal_detail_dto_envelope_local_var->validation_details = validation_details;
    application_principal_detail_dto_envelope_local_var->activity_id = activity_id;
    application_principal_detail_dto_envelope_local_var->result = result;

    return application_principal_detail_dto_envelope_local_var;
}


void application_principal_detail_dto_envelope_free(application_principal_detail_dto_envelope_t *application_principal_detail_dto_envelope) {
    if(NULL == application_principal_detail_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (application_principal_detail_dto_envelope->error_message) {
        free(application_principal_detail_dto_envelope->error_message);
        application_principal_detail_dto_envelope->error_message = NULL;
    }
    if (application_principal_detail_dto_envelope->correlation_id) {
        free(application_principal_detail_dto_envelope->correlation_id);
        application_principal_detail_dto_envelope->correlation_id = NULL;
    }
    if (application_principal_detail_dto_envelope->timestamp) {
        free(application_principal_detail_dto_envelope->timestamp);
        application_principal_detail_dto_envelope->timestamp = NULL;
    }
    if (application_principal_detail_dto_envelope->error_code) {
        free(application_principal_detail_dto_envelope->error_code);
        application_principal_detail_dto_envelope->error_code = NULL;
    }
    if (application_principal_detail_dto_envelope->validation_details) {
        list_ForEach(listEntry, application_principal_detail_dto_envelope->validation_details) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(application_principal_detail_dto_envelope->validation_details);
        application_principal_detail_dto_envelope->validation_details = NULL;
    }
    if (application_principal_detail_dto_envelope->activity_id) {
        free(application_principal_detail_dto_envelope->activity_id);
        application_principal_detail_dto_envelope->activity_id = NULL;
    }
    if (application_principal_detail_dto_envelope->result) {
        application_principal_detail_dto_free(application_principal_detail_dto_envelope->result);
        application_principal_detail_dto_envelope->result = NULL;
    }
    free(application_principal_detail_dto_envelope);
}

cJSON *application_principal_detail_dto_envelope_convertToJSON(application_principal_detail_dto_envelope_t *application_principal_detail_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // application_principal_detail_dto_envelope->is_success
    if(application_principal_detail_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", application_principal_detail_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // application_principal_detail_dto_envelope->error_message
    if(application_principal_detail_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", application_principal_detail_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // application_principal_detail_dto_envelope->correlation_id
    if(application_principal_detail_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", application_principal_detail_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // application_principal_detail_dto_envelope->timestamp
    if(application_principal_detail_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", application_principal_detail_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // application_principal_detail_dto_envelope->http_status
    if(application_principal_detail_dto_envelope->http_status) {
    if(cJSON_AddNumberToObject(item, "httpStatus", application_principal_detail_dto_envelope->http_status) == NULL) {
    goto fail; //Numeric
    }
    }


    // application_principal_detail_dto_envelope->error_code
    if(application_principal_detail_dto_envelope->error_code) {
    if(cJSON_AddStringToObject(item, "errorCode", application_principal_detail_dto_envelope->error_code) == NULL) {
    goto fail; //String
    }
    }


    // application_principal_detail_dto_envelope->validation_details
    if(application_principal_detail_dto_envelope->validation_details) {
    cJSON *validation_details = cJSON_AddObjectToObject(item, "validationDetails");
    if(validation_details == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = validation_details;
    listEntry_t *validation_detailsListEntry;
    if (application_principal_detail_dto_envelope->validation_details) {
    list_ForEach(validation_detailsListEntry, application_principal_detail_dto_envelope->validation_details) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)validation_detailsListEntry->data;
    }
    }
    }


    // application_principal_detail_dto_envelope->activity_id
    if(application_principal_detail_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", application_principal_detail_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // application_principal_detail_dto_envelope->result
    if(application_principal_detail_dto_envelope->result) {
    cJSON *result_local_JSON = application_principal_detail_dto_convertToJSON(application_principal_detail_dto_envelope->result);
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

application_principal_detail_dto_envelope_t *application_principal_detail_dto_envelope_parseFromJSON(cJSON *application_principal_detail_dto_envelopeJSON){

    application_principal_detail_dto_envelope_t *application_principal_detail_dto_envelope_local_var = NULL;

    // define the local map for application_principal_detail_dto_envelope->validation_details
    list_t *validation_detailsList = NULL;

    // define the local variable for application_principal_detail_dto_envelope->result
    application_principal_detail_dto_t *result_local_nonprim = NULL;

    // application_principal_detail_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(application_principal_detail_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // application_principal_detail_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(application_principal_detail_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // application_principal_detail_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(application_principal_detail_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // application_principal_detail_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(application_principal_detail_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // application_principal_detail_dto_envelope->http_status
    cJSON *http_status = cJSON_GetObjectItemCaseSensitive(application_principal_detail_dto_envelopeJSON, "httpStatus");
    if (http_status) { 
    if(!cJSON_IsNumber(http_status))
    {
    goto end; //Numeric
    }
    }

    // application_principal_detail_dto_envelope->error_code
    cJSON *error_code = cJSON_GetObjectItemCaseSensitive(application_principal_detail_dto_envelopeJSON, "errorCode");
    if (error_code) { 
    if(!cJSON_IsString(error_code) && !cJSON_IsNull(error_code))
    {
    goto end; //String
    }
    }

    // application_principal_detail_dto_envelope->validation_details
    cJSON *validation_details = cJSON_GetObjectItemCaseSensitive(application_principal_detail_dto_envelopeJSON, "validationDetails");
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

    // application_principal_detail_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(application_principal_detail_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // application_principal_detail_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(application_principal_detail_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = application_principal_detail_dto_parseFromJSON(result); //nonprimitive
    }


    application_principal_detail_dto_envelope_local_var = application_principal_detail_dto_envelope_create (
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

    return application_principal_detail_dto_envelope_local_var;
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
        application_principal_detail_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
