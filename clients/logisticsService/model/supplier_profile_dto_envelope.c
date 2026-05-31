#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "supplier_profile_dto_envelope.h"



supplier_profile_dto_envelope_t *supplier_profile_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    supplier_profile_dto_t *result
    ) {
    supplier_profile_dto_envelope_t *supplier_profile_dto_envelope_local_var = malloc(sizeof(supplier_profile_dto_envelope_t));
    if (!supplier_profile_dto_envelope_local_var) {
        return NULL;
    }
    supplier_profile_dto_envelope_local_var->is_success = is_success;
    supplier_profile_dto_envelope_local_var->error_message = error_message;
    supplier_profile_dto_envelope_local_var->correlation_id = correlation_id;
    supplier_profile_dto_envelope_local_var->timestamp = timestamp;
    supplier_profile_dto_envelope_local_var->activity_id = activity_id;
    supplier_profile_dto_envelope_local_var->result = result;

    return supplier_profile_dto_envelope_local_var;
}


void supplier_profile_dto_envelope_free(supplier_profile_dto_envelope_t *supplier_profile_dto_envelope) {
    if(NULL == supplier_profile_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (supplier_profile_dto_envelope->error_message) {
        free(supplier_profile_dto_envelope->error_message);
        supplier_profile_dto_envelope->error_message = NULL;
    }
    if (supplier_profile_dto_envelope->correlation_id) {
        free(supplier_profile_dto_envelope->correlation_id);
        supplier_profile_dto_envelope->correlation_id = NULL;
    }
    if (supplier_profile_dto_envelope->timestamp) {
        free(supplier_profile_dto_envelope->timestamp);
        supplier_profile_dto_envelope->timestamp = NULL;
    }
    if (supplier_profile_dto_envelope->activity_id) {
        free(supplier_profile_dto_envelope->activity_id);
        supplier_profile_dto_envelope->activity_id = NULL;
    }
    if (supplier_profile_dto_envelope->result) {
        supplier_profile_dto_free(supplier_profile_dto_envelope->result);
        supplier_profile_dto_envelope->result = NULL;
    }
    free(supplier_profile_dto_envelope);
}

cJSON *supplier_profile_dto_envelope_convertToJSON(supplier_profile_dto_envelope_t *supplier_profile_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // supplier_profile_dto_envelope->is_success
    if(supplier_profile_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", supplier_profile_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // supplier_profile_dto_envelope->error_message
    if(supplier_profile_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", supplier_profile_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // supplier_profile_dto_envelope->correlation_id
    if(supplier_profile_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", supplier_profile_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // supplier_profile_dto_envelope->timestamp
    if(supplier_profile_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", supplier_profile_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // supplier_profile_dto_envelope->activity_id
    if(supplier_profile_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", supplier_profile_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // supplier_profile_dto_envelope->result
    if(supplier_profile_dto_envelope->result) {
    cJSON *result_local_JSON = supplier_profile_dto_convertToJSON(supplier_profile_dto_envelope->result);
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

supplier_profile_dto_envelope_t *supplier_profile_dto_envelope_parseFromJSON(cJSON *supplier_profile_dto_envelopeJSON){

    supplier_profile_dto_envelope_t *supplier_profile_dto_envelope_local_var = NULL;

    // define the local variable for supplier_profile_dto_envelope->result
    supplier_profile_dto_t *result_local_nonprim = NULL;

    // supplier_profile_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(supplier_profile_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // supplier_profile_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(supplier_profile_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // supplier_profile_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(supplier_profile_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // supplier_profile_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(supplier_profile_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // supplier_profile_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(supplier_profile_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // supplier_profile_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(supplier_profile_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = supplier_profile_dto_parseFromJSON(result); //nonprimitive
    }


    supplier_profile_dto_envelope_local_var = supplier_profile_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return supplier_profile_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        supplier_profile_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
