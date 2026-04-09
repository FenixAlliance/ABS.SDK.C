#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tenant_position_dto_envelope.h"



tenant_position_dto_envelope_t *tenant_position_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    tenant_position_dto_t *result
    ) {
    tenant_position_dto_envelope_t *tenant_position_dto_envelope_local_var = malloc(sizeof(tenant_position_dto_envelope_t));
    if (!tenant_position_dto_envelope_local_var) {
        return NULL;
    }
    tenant_position_dto_envelope_local_var->is_success = is_success;
    tenant_position_dto_envelope_local_var->error_message = error_message;
    tenant_position_dto_envelope_local_var->correlation_id = correlation_id;
    tenant_position_dto_envelope_local_var->timestamp = timestamp;
    tenant_position_dto_envelope_local_var->activity_id = activity_id;
    tenant_position_dto_envelope_local_var->result = result;

    return tenant_position_dto_envelope_local_var;
}


void tenant_position_dto_envelope_free(tenant_position_dto_envelope_t *tenant_position_dto_envelope) {
    if(NULL == tenant_position_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (tenant_position_dto_envelope->error_message) {
        free(tenant_position_dto_envelope->error_message);
        tenant_position_dto_envelope->error_message = NULL;
    }
    if (tenant_position_dto_envelope->correlation_id) {
        free(tenant_position_dto_envelope->correlation_id);
        tenant_position_dto_envelope->correlation_id = NULL;
    }
    if (tenant_position_dto_envelope->timestamp) {
        free(tenant_position_dto_envelope->timestamp);
        tenant_position_dto_envelope->timestamp = NULL;
    }
    if (tenant_position_dto_envelope->activity_id) {
        free(tenant_position_dto_envelope->activity_id);
        tenant_position_dto_envelope->activity_id = NULL;
    }
    if (tenant_position_dto_envelope->result) {
        tenant_position_dto_free(tenant_position_dto_envelope->result);
        tenant_position_dto_envelope->result = NULL;
    }
    free(tenant_position_dto_envelope);
}

cJSON *tenant_position_dto_envelope_convertToJSON(tenant_position_dto_envelope_t *tenant_position_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // tenant_position_dto_envelope->is_success
    if(tenant_position_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", tenant_position_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // tenant_position_dto_envelope->error_message
    if(tenant_position_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", tenant_position_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // tenant_position_dto_envelope->correlation_id
    if(tenant_position_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", tenant_position_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_position_dto_envelope->timestamp
    if(tenant_position_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", tenant_position_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // tenant_position_dto_envelope->activity_id
    if(tenant_position_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", tenant_position_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_position_dto_envelope->result
    if(tenant_position_dto_envelope->result) {
    cJSON *result_local_JSON = tenant_position_dto_convertToJSON(tenant_position_dto_envelope->result);
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

tenant_position_dto_envelope_t *tenant_position_dto_envelope_parseFromJSON(cJSON *tenant_position_dto_envelopeJSON){

    tenant_position_dto_envelope_t *tenant_position_dto_envelope_local_var = NULL;

    // define the local variable for tenant_position_dto_envelope->result
    tenant_position_dto_t *result_local_nonprim = NULL;

    // tenant_position_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(tenant_position_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // tenant_position_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(tenant_position_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // tenant_position_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(tenant_position_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // tenant_position_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(tenant_position_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // tenant_position_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(tenant_position_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // tenant_position_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(tenant_position_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = tenant_position_dto_parseFromJSON(result); //nonprimitive
    }


    tenant_position_dto_envelope_local_var = tenant_position_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return tenant_position_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        tenant_position_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
