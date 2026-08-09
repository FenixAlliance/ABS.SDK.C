#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "module_grant_dto_list_envelope.h"



module_grant_dto_list_envelope_t *module_grant_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    int http_status,
    char *error_code,
    list_t* validation_details,
    char *activity_id,
    list_t *result
    ) {
    module_grant_dto_list_envelope_t *module_grant_dto_list_envelope_local_var = malloc(sizeof(module_grant_dto_list_envelope_t));
    if (!module_grant_dto_list_envelope_local_var) {
        return NULL;
    }
    module_grant_dto_list_envelope_local_var->is_success = is_success;
    module_grant_dto_list_envelope_local_var->error_message = error_message;
    module_grant_dto_list_envelope_local_var->correlation_id = correlation_id;
    module_grant_dto_list_envelope_local_var->timestamp = timestamp;
    module_grant_dto_list_envelope_local_var->http_status = http_status;
    module_grant_dto_list_envelope_local_var->error_code = error_code;
    module_grant_dto_list_envelope_local_var->validation_details = validation_details;
    module_grant_dto_list_envelope_local_var->activity_id = activity_id;
    module_grant_dto_list_envelope_local_var->result = result;

    return module_grant_dto_list_envelope_local_var;
}


void module_grant_dto_list_envelope_free(module_grant_dto_list_envelope_t *module_grant_dto_list_envelope) {
    if(NULL == module_grant_dto_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (module_grant_dto_list_envelope->error_message) {
        free(module_grant_dto_list_envelope->error_message);
        module_grant_dto_list_envelope->error_message = NULL;
    }
    if (module_grant_dto_list_envelope->correlation_id) {
        free(module_grant_dto_list_envelope->correlation_id);
        module_grant_dto_list_envelope->correlation_id = NULL;
    }
    if (module_grant_dto_list_envelope->timestamp) {
        free(module_grant_dto_list_envelope->timestamp);
        module_grant_dto_list_envelope->timestamp = NULL;
    }
    if (module_grant_dto_list_envelope->error_code) {
        free(module_grant_dto_list_envelope->error_code);
        module_grant_dto_list_envelope->error_code = NULL;
    }
    if (module_grant_dto_list_envelope->validation_details) {
        list_ForEach(listEntry, module_grant_dto_list_envelope->validation_details) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(module_grant_dto_list_envelope->validation_details);
        module_grant_dto_list_envelope->validation_details = NULL;
    }
    if (module_grant_dto_list_envelope->activity_id) {
        free(module_grant_dto_list_envelope->activity_id);
        module_grant_dto_list_envelope->activity_id = NULL;
    }
    if (module_grant_dto_list_envelope->result) {
        list_ForEach(listEntry, module_grant_dto_list_envelope->result) {
            module_grant_dto_free(listEntry->data);
        }
        list_freeList(module_grant_dto_list_envelope->result);
        module_grant_dto_list_envelope->result = NULL;
    }
    free(module_grant_dto_list_envelope);
}

cJSON *module_grant_dto_list_envelope_convertToJSON(module_grant_dto_list_envelope_t *module_grant_dto_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // module_grant_dto_list_envelope->is_success
    if(module_grant_dto_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", module_grant_dto_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // module_grant_dto_list_envelope->error_message
    if(module_grant_dto_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", module_grant_dto_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // module_grant_dto_list_envelope->correlation_id
    if(module_grant_dto_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", module_grant_dto_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // module_grant_dto_list_envelope->timestamp
    if(module_grant_dto_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", module_grant_dto_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // module_grant_dto_list_envelope->http_status
    if(module_grant_dto_list_envelope->http_status) {
    if(cJSON_AddNumberToObject(item, "httpStatus", module_grant_dto_list_envelope->http_status) == NULL) {
    goto fail; //Numeric
    }
    }


    // module_grant_dto_list_envelope->error_code
    if(module_grant_dto_list_envelope->error_code) {
    if(cJSON_AddStringToObject(item, "errorCode", module_grant_dto_list_envelope->error_code) == NULL) {
    goto fail; //String
    }
    }


    // module_grant_dto_list_envelope->validation_details
    if(module_grant_dto_list_envelope->validation_details) {
    cJSON *validation_details = cJSON_AddObjectToObject(item, "validationDetails");
    if(validation_details == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = validation_details;
    listEntry_t *validation_detailsListEntry;
    if (module_grant_dto_list_envelope->validation_details) {
    list_ForEach(validation_detailsListEntry, module_grant_dto_list_envelope->validation_details) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)validation_detailsListEntry->data;
    }
    }
    }


    // module_grant_dto_list_envelope->activity_id
    if(module_grant_dto_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", module_grant_dto_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // module_grant_dto_list_envelope->result
    if(module_grant_dto_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (module_grant_dto_list_envelope->result) {
    list_ForEach(resultListEntry, module_grant_dto_list_envelope->result) {
    cJSON *itemLocal = module_grant_dto_convertToJSON(resultListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(result, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

module_grant_dto_list_envelope_t *module_grant_dto_list_envelope_parseFromJSON(cJSON *module_grant_dto_list_envelopeJSON){

    module_grant_dto_list_envelope_t *module_grant_dto_list_envelope_local_var = NULL;

    // define the local map for module_grant_dto_list_envelope->validation_details
    list_t *validation_detailsList = NULL;

    // define the local list for module_grant_dto_list_envelope->result
    list_t *resultList = NULL;

    // module_grant_dto_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(module_grant_dto_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // module_grant_dto_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(module_grant_dto_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // module_grant_dto_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(module_grant_dto_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // module_grant_dto_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(module_grant_dto_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // module_grant_dto_list_envelope->http_status
    cJSON *http_status = cJSON_GetObjectItemCaseSensitive(module_grant_dto_list_envelopeJSON, "httpStatus");
    if (http_status) { 
    if(!cJSON_IsNumber(http_status))
    {
    goto end; //Numeric
    }
    }

    // module_grant_dto_list_envelope->error_code
    cJSON *error_code = cJSON_GetObjectItemCaseSensitive(module_grant_dto_list_envelopeJSON, "errorCode");
    if (error_code) { 
    if(!cJSON_IsString(error_code) && !cJSON_IsNull(error_code))
    {
    goto end; //String
    }
    }

    // module_grant_dto_list_envelope->validation_details
    cJSON *validation_details = cJSON_GetObjectItemCaseSensitive(module_grant_dto_list_envelopeJSON, "validationDetails");
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

    // module_grant_dto_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(module_grant_dto_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // module_grant_dto_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(module_grant_dto_list_envelopeJSON, "result");
    if (result) { 
    cJSON *result_local_nonprimitive = NULL;
    if(!cJSON_IsArray(result)){
        goto end; //nonprimitive container
    }

    resultList = list_createList();

    cJSON_ArrayForEach(result_local_nonprimitive,result )
    {
        if(!cJSON_IsObject(result_local_nonprimitive)){
            goto end;
        }
        module_grant_dto_t *resultItem = module_grant_dto_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    module_grant_dto_list_envelope_local_var = module_grant_dto_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        http_status ? http_status->valuedouble : 0,
        error_code && !cJSON_IsNull(error_code) ? strdup(error_code->valuestring) : NULL,
        validation_details ? validation_detailsList : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return module_grant_dto_list_envelope_local_var;
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
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            module_grant_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
