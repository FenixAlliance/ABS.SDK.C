#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "warehouse_dto_envelope.h"



warehouse_dto_envelope_t *warehouse_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    warehouse_dto_t *result
    ) {
    warehouse_dto_envelope_t *warehouse_dto_envelope_local_var = malloc(sizeof(warehouse_dto_envelope_t));
    if (!warehouse_dto_envelope_local_var) {
        return NULL;
    }
    warehouse_dto_envelope_local_var->is_success = is_success;
    warehouse_dto_envelope_local_var->error_message = error_message;
    warehouse_dto_envelope_local_var->correlation_id = correlation_id;
    warehouse_dto_envelope_local_var->timestamp = timestamp;
    warehouse_dto_envelope_local_var->activity_id = activity_id;
    warehouse_dto_envelope_local_var->result = result;

    return warehouse_dto_envelope_local_var;
}


void warehouse_dto_envelope_free(warehouse_dto_envelope_t *warehouse_dto_envelope) {
    if(NULL == warehouse_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (warehouse_dto_envelope->error_message) {
        free(warehouse_dto_envelope->error_message);
        warehouse_dto_envelope->error_message = NULL;
    }
    if (warehouse_dto_envelope->correlation_id) {
        free(warehouse_dto_envelope->correlation_id);
        warehouse_dto_envelope->correlation_id = NULL;
    }
    if (warehouse_dto_envelope->timestamp) {
        free(warehouse_dto_envelope->timestamp);
        warehouse_dto_envelope->timestamp = NULL;
    }
    if (warehouse_dto_envelope->activity_id) {
        free(warehouse_dto_envelope->activity_id);
        warehouse_dto_envelope->activity_id = NULL;
    }
    if (warehouse_dto_envelope->result) {
        warehouse_dto_free(warehouse_dto_envelope->result);
        warehouse_dto_envelope->result = NULL;
    }
    free(warehouse_dto_envelope);
}

cJSON *warehouse_dto_envelope_convertToJSON(warehouse_dto_envelope_t *warehouse_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // warehouse_dto_envelope->is_success
    if(warehouse_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", warehouse_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // warehouse_dto_envelope->error_message
    if(warehouse_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", warehouse_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // warehouse_dto_envelope->correlation_id
    if(warehouse_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", warehouse_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // warehouse_dto_envelope->timestamp
    if(warehouse_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", warehouse_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // warehouse_dto_envelope->activity_id
    if(warehouse_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", warehouse_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // warehouse_dto_envelope->result
    if(warehouse_dto_envelope->result) {
    cJSON *result_local_JSON = warehouse_dto_convertToJSON(warehouse_dto_envelope->result);
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

warehouse_dto_envelope_t *warehouse_dto_envelope_parseFromJSON(cJSON *warehouse_dto_envelopeJSON){

    warehouse_dto_envelope_t *warehouse_dto_envelope_local_var = NULL;

    // define the local variable for warehouse_dto_envelope->result
    warehouse_dto_t *result_local_nonprim = NULL;

    // warehouse_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(warehouse_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // warehouse_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(warehouse_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // warehouse_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(warehouse_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // warehouse_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(warehouse_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // warehouse_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(warehouse_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // warehouse_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(warehouse_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = warehouse_dto_parseFromJSON(result); //nonprimitive
    }


    warehouse_dto_envelope_local_var = warehouse_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return warehouse_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        warehouse_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
