#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "module_list_envelope.h"



module_list_envelope_t *module_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
    ) {
    module_list_envelope_t *module_list_envelope_local_var = malloc(sizeof(module_list_envelope_t));
    if (!module_list_envelope_local_var) {
        return NULL;
    }
    module_list_envelope_local_var->is_success = is_success;
    module_list_envelope_local_var->error_message = error_message;
    module_list_envelope_local_var->correlation_id = correlation_id;
    module_list_envelope_local_var->timestamp = timestamp;
    module_list_envelope_local_var->activity_id = activity_id;
    module_list_envelope_local_var->result = result;

    return module_list_envelope_local_var;
}


void module_list_envelope_free(module_list_envelope_t *module_list_envelope) {
    if(NULL == module_list_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (module_list_envelope->error_message) {
        free(module_list_envelope->error_message);
        module_list_envelope->error_message = NULL;
    }
    if (module_list_envelope->correlation_id) {
        free(module_list_envelope->correlation_id);
        module_list_envelope->correlation_id = NULL;
    }
    if (module_list_envelope->timestamp) {
        free(module_list_envelope->timestamp);
        module_list_envelope->timestamp = NULL;
    }
    if (module_list_envelope->activity_id) {
        free(module_list_envelope->activity_id);
        module_list_envelope->activity_id = NULL;
    }
    if (module_list_envelope->result) {
        list_ForEach(listEntry, module_list_envelope->result) {
            module_free(listEntry->data);
        }
        list_freeList(module_list_envelope->result);
        module_list_envelope->result = NULL;
    }
    free(module_list_envelope);
}

cJSON *module_list_envelope_convertToJSON(module_list_envelope_t *module_list_envelope) {
    cJSON *item = cJSON_CreateObject();

    // module_list_envelope->is_success
    if(module_list_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", module_list_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // module_list_envelope->error_message
    if(module_list_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", module_list_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // module_list_envelope->correlation_id
    if(module_list_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", module_list_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // module_list_envelope->timestamp
    if(module_list_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", module_list_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // module_list_envelope->activity_id
    if(module_list_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", module_list_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // module_list_envelope->result
    if(module_list_envelope->result) {
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (module_list_envelope->result) {
    list_ForEach(resultListEntry, module_list_envelope->result) {
    cJSON *itemLocal = module_convertToJSON(resultListEntry->data);
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

module_list_envelope_t *module_list_envelope_parseFromJSON(cJSON *module_list_envelopeJSON){

    module_list_envelope_t *module_list_envelope_local_var = NULL;

    // define the local list for module_list_envelope->result
    list_t *resultList = NULL;

    // module_list_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(module_list_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // module_list_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(module_list_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // module_list_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(module_list_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // module_list_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(module_list_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // module_list_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(module_list_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // module_list_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(module_list_envelopeJSON, "result");
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
        module_t *resultItem = module_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    module_list_envelope_local_var = module_list_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? resultList : NULL
        );

    return module_list_envelope_local_var;
end:
    if (resultList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultList) {
            module_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultList);
        resultList = NULL;
    }
    return NULL;

}
