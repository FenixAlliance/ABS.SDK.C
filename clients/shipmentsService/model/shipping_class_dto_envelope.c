#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "shipping_class_dto_envelope.h"



shipping_class_dto_envelope_t *shipping_class_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    shipping_class_dto_t *result
    ) {
    shipping_class_dto_envelope_t *shipping_class_dto_envelope_local_var = malloc(sizeof(shipping_class_dto_envelope_t));
    if (!shipping_class_dto_envelope_local_var) {
        return NULL;
    }
    shipping_class_dto_envelope_local_var->is_success = is_success;
    shipping_class_dto_envelope_local_var->error_message = error_message;
    shipping_class_dto_envelope_local_var->correlation_id = correlation_id;
    shipping_class_dto_envelope_local_var->timestamp = timestamp;
    shipping_class_dto_envelope_local_var->activity_id = activity_id;
    shipping_class_dto_envelope_local_var->result = result;

    return shipping_class_dto_envelope_local_var;
}


void shipping_class_dto_envelope_free(shipping_class_dto_envelope_t *shipping_class_dto_envelope) {
    if(NULL == shipping_class_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (shipping_class_dto_envelope->error_message) {
        free(shipping_class_dto_envelope->error_message);
        shipping_class_dto_envelope->error_message = NULL;
    }
    if (shipping_class_dto_envelope->correlation_id) {
        free(shipping_class_dto_envelope->correlation_id);
        shipping_class_dto_envelope->correlation_id = NULL;
    }
    if (shipping_class_dto_envelope->timestamp) {
        free(shipping_class_dto_envelope->timestamp);
        shipping_class_dto_envelope->timestamp = NULL;
    }
    if (shipping_class_dto_envelope->activity_id) {
        free(shipping_class_dto_envelope->activity_id);
        shipping_class_dto_envelope->activity_id = NULL;
    }
    if (shipping_class_dto_envelope->result) {
        shipping_class_dto_free(shipping_class_dto_envelope->result);
        shipping_class_dto_envelope->result = NULL;
    }
    free(shipping_class_dto_envelope);
}

cJSON *shipping_class_dto_envelope_convertToJSON(shipping_class_dto_envelope_t *shipping_class_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // shipping_class_dto_envelope->is_success
    if(shipping_class_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", shipping_class_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // shipping_class_dto_envelope->error_message
    if(shipping_class_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", shipping_class_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // shipping_class_dto_envelope->correlation_id
    if(shipping_class_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", shipping_class_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // shipping_class_dto_envelope->timestamp
    if(shipping_class_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", shipping_class_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // shipping_class_dto_envelope->activity_id
    if(shipping_class_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", shipping_class_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // shipping_class_dto_envelope->result
    if(shipping_class_dto_envelope->result) {
    cJSON *result_local_JSON = shipping_class_dto_convertToJSON(shipping_class_dto_envelope->result);
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

shipping_class_dto_envelope_t *shipping_class_dto_envelope_parseFromJSON(cJSON *shipping_class_dto_envelopeJSON){

    shipping_class_dto_envelope_t *shipping_class_dto_envelope_local_var = NULL;

    // define the local variable for shipping_class_dto_envelope->result
    shipping_class_dto_t *result_local_nonprim = NULL;

    // shipping_class_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(shipping_class_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // shipping_class_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(shipping_class_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // shipping_class_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(shipping_class_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // shipping_class_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(shipping_class_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // shipping_class_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(shipping_class_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // shipping_class_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(shipping_class_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = shipping_class_dto_parseFromJSON(result); //nonprimitive
    }


    shipping_class_dto_envelope_local_var = shipping_class_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return shipping_class_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        shipping_class_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
