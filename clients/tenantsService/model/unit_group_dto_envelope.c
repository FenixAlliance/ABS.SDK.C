#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "unit_group_dto_envelope.h"



unit_group_dto_envelope_t *unit_group_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    unit_group_dto_t *result
    ) {
    unit_group_dto_envelope_t *unit_group_dto_envelope_local_var = malloc(sizeof(unit_group_dto_envelope_t));
    if (!unit_group_dto_envelope_local_var) {
        return NULL;
    }
    unit_group_dto_envelope_local_var->is_success = is_success;
    unit_group_dto_envelope_local_var->error_message = error_message;
    unit_group_dto_envelope_local_var->correlation_id = correlation_id;
    unit_group_dto_envelope_local_var->timestamp = timestamp;
    unit_group_dto_envelope_local_var->activity_id = activity_id;
    unit_group_dto_envelope_local_var->result = result;

    return unit_group_dto_envelope_local_var;
}


void unit_group_dto_envelope_free(unit_group_dto_envelope_t *unit_group_dto_envelope) {
    if(NULL == unit_group_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (unit_group_dto_envelope->error_message) {
        free(unit_group_dto_envelope->error_message);
        unit_group_dto_envelope->error_message = NULL;
    }
    if (unit_group_dto_envelope->correlation_id) {
        free(unit_group_dto_envelope->correlation_id);
        unit_group_dto_envelope->correlation_id = NULL;
    }
    if (unit_group_dto_envelope->timestamp) {
        free(unit_group_dto_envelope->timestamp);
        unit_group_dto_envelope->timestamp = NULL;
    }
    if (unit_group_dto_envelope->activity_id) {
        free(unit_group_dto_envelope->activity_id);
        unit_group_dto_envelope->activity_id = NULL;
    }
    if (unit_group_dto_envelope->result) {
        unit_group_dto_free(unit_group_dto_envelope->result);
        unit_group_dto_envelope->result = NULL;
    }
    free(unit_group_dto_envelope);
}

cJSON *unit_group_dto_envelope_convertToJSON(unit_group_dto_envelope_t *unit_group_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // unit_group_dto_envelope->is_success
    if(unit_group_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", unit_group_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // unit_group_dto_envelope->error_message
    if(unit_group_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", unit_group_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // unit_group_dto_envelope->correlation_id
    if(unit_group_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", unit_group_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // unit_group_dto_envelope->timestamp
    if(unit_group_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", unit_group_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // unit_group_dto_envelope->activity_id
    if(unit_group_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", unit_group_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // unit_group_dto_envelope->result
    if(unit_group_dto_envelope->result) {
    cJSON *result_local_JSON = unit_group_dto_convertToJSON(unit_group_dto_envelope->result);
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

unit_group_dto_envelope_t *unit_group_dto_envelope_parseFromJSON(cJSON *unit_group_dto_envelopeJSON){

    unit_group_dto_envelope_t *unit_group_dto_envelope_local_var = NULL;

    // define the local variable for unit_group_dto_envelope->result
    unit_group_dto_t *result_local_nonprim = NULL;

    // unit_group_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(unit_group_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // unit_group_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(unit_group_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // unit_group_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(unit_group_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // unit_group_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(unit_group_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // unit_group_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(unit_group_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // unit_group_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(unit_group_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = unit_group_dto_parseFromJSON(result); //nonprimitive
    }


    unit_group_dto_envelope_local_var = unit_group_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return unit_group_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        unit_group_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
