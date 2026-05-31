#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "employee_type_dto_envelope.h"



employee_type_dto_envelope_t *employee_type_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    employee_type_dto_t *result
    ) {
    employee_type_dto_envelope_t *employee_type_dto_envelope_local_var = malloc(sizeof(employee_type_dto_envelope_t));
    if (!employee_type_dto_envelope_local_var) {
        return NULL;
    }
    employee_type_dto_envelope_local_var->is_success = is_success;
    employee_type_dto_envelope_local_var->error_message = error_message;
    employee_type_dto_envelope_local_var->correlation_id = correlation_id;
    employee_type_dto_envelope_local_var->timestamp = timestamp;
    employee_type_dto_envelope_local_var->activity_id = activity_id;
    employee_type_dto_envelope_local_var->result = result;

    return employee_type_dto_envelope_local_var;
}


void employee_type_dto_envelope_free(employee_type_dto_envelope_t *employee_type_dto_envelope) {
    if(NULL == employee_type_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (employee_type_dto_envelope->error_message) {
        free(employee_type_dto_envelope->error_message);
        employee_type_dto_envelope->error_message = NULL;
    }
    if (employee_type_dto_envelope->correlation_id) {
        free(employee_type_dto_envelope->correlation_id);
        employee_type_dto_envelope->correlation_id = NULL;
    }
    if (employee_type_dto_envelope->timestamp) {
        free(employee_type_dto_envelope->timestamp);
        employee_type_dto_envelope->timestamp = NULL;
    }
    if (employee_type_dto_envelope->activity_id) {
        free(employee_type_dto_envelope->activity_id);
        employee_type_dto_envelope->activity_id = NULL;
    }
    if (employee_type_dto_envelope->result) {
        employee_type_dto_free(employee_type_dto_envelope->result);
        employee_type_dto_envelope->result = NULL;
    }
    free(employee_type_dto_envelope);
}

cJSON *employee_type_dto_envelope_convertToJSON(employee_type_dto_envelope_t *employee_type_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // employee_type_dto_envelope->is_success
    if(employee_type_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", employee_type_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // employee_type_dto_envelope->error_message
    if(employee_type_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", employee_type_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // employee_type_dto_envelope->correlation_id
    if(employee_type_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", employee_type_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // employee_type_dto_envelope->timestamp
    if(employee_type_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", employee_type_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // employee_type_dto_envelope->activity_id
    if(employee_type_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", employee_type_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // employee_type_dto_envelope->result
    if(employee_type_dto_envelope->result) {
    cJSON *result_local_JSON = employee_type_dto_convertToJSON(employee_type_dto_envelope->result);
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

employee_type_dto_envelope_t *employee_type_dto_envelope_parseFromJSON(cJSON *employee_type_dto_envelopeJSON){

    employee_type_dto_envelope_t *employee_type_dto_envelope_local_var = NULL;

    // define the local variable for employee_type_dto_envelope->result
    employee_type_dto_t *result_local_nonprim = NULL;

    // employee_type_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(employee_type_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // employee_type_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(employee_type_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // employee_type_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(employee_type_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // employee_type_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(employee_type_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // employee_type_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(employee_type_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // employee_type_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(employee_type_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = employee_type_dto_parseFromJSON(result); //nonprimitive
    }


    employee_type_dto_envelope_local_var = employee_type_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return employee_type_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        employee_type_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
