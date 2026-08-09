#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "appraisal_stage_dto_envelope.h"



appraisal_stage_dto_envelope_t *appraisal_stage_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    int http_status,
    char *error_code,
    list_t* validation_details,
    char *activity_id,
    appraisal_stage_dto_t *result
    ) {
    appraisal_stage_dto_envelope_t *appraisal_stage_dto_envelope_local_var = malloc(sizeof(appraisal_stage_dto_envelope_t));
    if (!appraisal_stage_dto_envelope_local_var) {
        return NULL;
    }
    appraisal_stage_dto_envelope_local_var->is_success = is_success;
    appraisal_stage_dto_envelope_local_var->error_message = error_message;
    appraisal_stage_dto_envelope_local_var->correlation_id = correlation_id;
    appraisal_stage_dto_envelope_local_var->timestamp = timestamp;
    appraisal_stage_dto_envelope_local_var->http_status = http_status;
    appraisal_stage_dto_envelope_local_var->error_code = error_code;
    appraisal_stage_dto_envelope_local_var->validation_details = validation_details;
    appraisal_stage_dto_envelope_local_var->activity_id = activity_id;
    appraisal_stage_dto_envelope_local_var->result = result;

    return appraisal_stage_dto_envelope_local_var;
}


void appraisal_stage_dto_envelope_free(appraisal_stage_dto_envelope_t *appraisal_stage_dto_envelope) {
    if(NULL == appraisal_stage_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (appraisal_stage_dto_envelope->error_message) {
        free(appraisal_stage_dto_envelope->error_message);
        appraisal_stage_dto_envelope->error_message = NULL;
    }
    if (appraisal_stage_dto_envelope->correlation_id) {
        free(appraisal_stage_dto_envelope->correlation_id);
        appraisal_stage_dto_envelope->correlation_id = NULL;
    }
    if (appraisal_stage_dto_envelope->timestamp) {
        free(appraisal_stage_dto_envelope->timestamp);
        appraisal_stage_dto_envelope->timestamp = NULL;
    }
    if (appraisal_stage_dto_envelope->error_code) {
        free(appraisal_stage_dto_envelope->error_code);
        appraisal_stage_dto_envelope->error_code = NULL;
    }
    if (appraisal_stage_dto_envelope->validation_details) {
        list_ForEach(listEntry, appraisal_stage_dto_envelope->validation_details) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(appraisal_stage_dto_envelope->validation_details);
        appraisal_stage_dto_envelope->validation_details = NULL;
    }
    if (appraisal_stage_dto_envelope->activity_id) {
        free(appraisal_stage_dto_envelope->activity_id);
        appraisal_stage_dto_envelope->activity_id = NULL;
    }
    if (appraisal_stage_dto_envelope->result) {
        appraisal_stage_dto_free(appraisal_stage_dto_envelope->result);
        appraisal_stage_dto_envelope->result = NULL;
    }
    free(appraisal_stage_dto_envelope);
}

cJSON *appraisal_stage_dto_envelope_convertToJSON(appraisal_stage_dto_envelope_t *appraisal_stage_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // appraisal_stage_dto_envelope->is_success
    if(appraisal_stage_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", appraisal_stage_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // appraisal_stage_dto_envelope->error_message
    if(appraisal_stage_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", appraisal_stage_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // appraisal_stage_dto_envelope->correlation_id
    if(appraisal_stage_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", appraisal_stage_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // appraisal_stage_dto_envelope->timestamp
    if(appraisal_stage_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", appraisal_stage_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // appraisal_stage_dto_envelope->http_status
    if(appraisal_stage_dto_envelope->http_status) {
    if(cJSON_AddNumberToObject(item, "httpStatus", appraisal_stage_dto_envelope->http_status) == NULL) {
    goto fail; //Numeric
    }
    }


    // appraisal_stage_dto_envelope->error_code
    if(appraisal_stage_dto_envelope->error_code) {
    if(cJSON_AddStringToObject(item, "errorCode", appraisal_stage_dto_envelope->error_code) == NULL) {
    goto fail; //String
    }
    }


    // appraisal_stage_dto_envelope->validation_details
    if(appraisal_stage_dto_envelope->validation_details) {
    cJSON *validation_details = cJSON_AddObjectToObject(item, "validationDetails");
    if(validation_details == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = validation_details;
    listEntry_t *validation_detailsListEntry;
    if (appraisal_stage_dto_envelope->validation_details) {
    list_ForEach(validation_detailsListEntry, appraisal_stage_dto_envelope->validation_details) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)validation_detailsListEntry->data;
    }
    }
    }


    // appraisal_stage_dto_envelope->activity_id
    if(appraisal_stage_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", appraisal_stage_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // appraisal_stage_dto_envelope->result
    if(appraisal_stage_dto_envelope->result) {
    cJSON *result_local_JSON = appraisal_stage_dto_convertToJSON(appraisal_stage_dto_envelope->result);
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

appraisal_stage_dto_envelope_t *appraisal_stage_dto_envelope_parseFromJSON(cJSON *appraisal_stage_dto_envelopeJSON){

    appraisal_stage_dto_envelope_t *appraisal_stage_dto_envelope_local_var = NULL;

    // define the local map for appraisal_stage_dto_envelope->validation_details
    list_t *validation_detailsList = NULL;

    // define the local variable for appraisal_stage_dto_envelope->result
    appraisal_stage_dto_t *result_local_nonprim = NULL;

    // appraisal_stage_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(appraisal_stage_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // appraisal_stage_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(appraisal_stage_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // appraisal_stage_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(appraisal_stage_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // appraisal_stage_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(appraisal_stage_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // appraisal_stage_dto_envelope->http_status
    cJSON *http_status = cJSON_GetObjectItemCaseSensitive(appraisal_stage_dto_envelopeJSON, "httpStatus");
    if (http_status) { 
    if(!cJSON_IsNumber(http_status))
    {
    goto end; //Numeric
    }
    }

    // appraisal_stage_dto_envelope->error_code
    cJSON *error_code = cJSON_GetObjectItemCaseSensitive(appraisal_stage_dto_envelopeJSON, "errorCode");
    if (error_code) { 
    if(!cJSON_IsString(error_code) && !cJSON_IsNull(error_code))
    {
    goto end; //String
    }
    }

    // appraisal_stage_dto_envelope->validation_details
    cJSON *validation_details = cJSON_GetObjectItemCaseSensitive(appraisal_stage_dto_envelopeJSON, "validationDetails");
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

    // appraisal_stage_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(appraisal_stage_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // appraisal_stage_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(appraisal_stage_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = appraisal_stage_dto_parseFromJSON(result); //nonprimitive
    }


    appraisal_stage_dto_envelope_local_var = appraisal_stage_dto_envelope_create (
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

    return appraisal_stage_dto_envelope_local_var;
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
        appraisal_stage_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
