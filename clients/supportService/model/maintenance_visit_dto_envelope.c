#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "maintenance_visit_dto_envelope.h"



maintenance_visit_dto_envelope_t *maintenance_visit_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    maintenance_visit_dto_t *result
    ) {
    maintenance_visit_dto_envelope_t *maintenance_visit_dto_envelope_local_var = malloc(sizeof(maintenance_visit_dto_envelope_t));
    if (!maintenance_visit_dto_envelope_local_var) {
        return NULL;
    }
    maintenance_visit_dto_envelope_local_var->is_success = is_success;
    maintenance_visit_dto_envelope_local_var->error_message = error_message;
    maintenance_visit_dto_envelope_local_var->correlation_id = correlation_id;
    maintenance_visit_dto_envelope_local_var->timestamp = timestamp;
    maintenance_visit_dto_envelope_local_var->activity_id = activity_id;
    maintenance_visit_dto_envelope_local_var->result = result;

    return maintenance_visit_dto_envelope_local_var;
}


void maintenance_visit_dto_envelope_free(maintenance_visit_dto_envelope_t *maintenance_visit_dto_envelope) {
    if(NULL == maintenance_visit_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (maintenance_visit_dto_envelope->error_message) {
        free(maintenance_visit_dto_envelope->error_message);
        maintenance_visit_dto_envelope->error_message = NULL;
    }
    if (maintenance_visit_dto_envelope->correlation_id) {
        free(maintenance_visit_dto_envelope->correlation_id);
        maintenance_visit_dto_envelope->correlation_id = NULL;
    }
    if (maintenance_visit_dto_envelope->timestamp) {
        free(maintenance_visit_dto_envelope->timestamp);
        maintenance_visit_dto_envelope->timestamp = NULL;
    }
    if (maintenance_visit_dto_envelope->activity_id) {
        free(maintenance_visit_dto_envelope->activity_id);
        maintenance_visit_dto_envelope->activity_id = NULL;
    }
    if (maintenance_visit_dto_envelope->result) {
        maintenance_visit_dto_free(maintenance_visit_dto_envelope->result);
        maintenance_visit_dto_envelope->result = NULL;
    }
    free(maintenance_visit_dto_envelope);
}

cJSON *maintenance_visit_dto_envelope_convertToJSON(maintenance_visit_dto_envelope_t *maintenance_visit_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // maintenance_visit_dto_envelope->is_success
    if(maintenance_visit_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", maintenance_visit_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // maintenance_visit_dto_envelope->error_message
    if(maintenance_visit_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", maintenance_visit_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // maintenance_visit_dto_envelope->correlation_id
    if(maintenance_visit_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", maintenance_visit_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // maintenance_visit_dto_envelope->timestamp
    if(maintenance_visit_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", maintenance_visit_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // maintenance_visit_dto_envelope->activity_id
    if(maintenance_visit_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", maintenance_visit_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // maintenance_visit_dto_envelope->result
    if(maintenance_visit_dto_envelope->result) {
    cJSON *result_local_JSON = maintenance_visit_dto_convertToJSON(maintenance_visit_dto_envelope->result);
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

maintenance_visit_dto_envelope_t *maintenance_visit_dto_envelope_parseFromJSON(cJSON *maintenance_visit_dto_envelopeJSON){

    maintenance_visit_dto_envelope_t *maintenance_visit_dto_envelope_local_var = NULL;

    // define the local variable for maintenance_visit_dto_envelope->result
    maintenance_visit_dto_t *result_local_nonprim = NULL;

    // maintenance_visit_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(maintenance_visit_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // maintenance_visit_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(maintenance_visit_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // maintenance_visit_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(maintenance_visit_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // maintenance_visit_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(maintenance_visit_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // maintenance_visit_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(maintenance_visit_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // maintenance_visit_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(maintenance_visit_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = maintenance_visit_dto_parseFromJSON(result); //nonprimitive
    }


    maintenance_visit_dto_envelope_local_var = maintenance_visit_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return maintenance_visit_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        maintenance_visit_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
