#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "delivery_note_dto_envelope.h"



delivery_note_dto_envelope_t *delivery_note_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    delivery_note_dto_t *result
    ) {
    delivery_note_dto_envelope_t *delivery_note_dto_envelope_local_var = malloc(sizeof(delivery_note_dto_envelope_t));
    if (!delivery_note_dto_envelope_local_var) {
        return NULL;
    }
    delivery_note_dto_envelope_local_var->is_success = is_success;
    delivery_note_dto_envelope_local_var->error_message = error_message;
    delivery_note_dto_envelope_local_var->correlation_id = correlation_id;
    delivery_note_dto_envelope_local_var->timestamp = timestamp;
    delivery_note_dto_envelope_local_var->activity_id = activity_id;
    delivery_note_dto_envelope_local_var->result = result;

    return delivery_note_dto_envelope_local_var;
}


void delivery_note_dto_envelope_free(delivery_note_dto_envelope_t *delivery_note_dto_envelope) {
    if(NULL == delivery_note_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (delivery_note_dto_envelope->error_message) {
        free(delivery_note_dto_envelope->error_message);
        delivery_note_dto_envelope->error_message = NULL;
    }
    if (delivery_note_dto_envelope->correlation_id) {
        free(delivery_note_dto_envelope->correlation_id);
        delivery_note_dto_envelope->correlation_id = NULL;
    }
    if (delivery_note_dto_envelope->timestamp) {
        free(delivery_note_dto_envelope->timestamp);
        delivery_note_dto_envelope->timestamp = NULL;
    }
    if (delivery_note_dto_envelope->activity_id) {
        free(delivery_note_dto_envelope->activity_id);
        delivery_note_dto_envelope->activity_id = NULL;
    }
    if (delivery_note_dto_envelope->result) {
        delivery_note_dto_free(delivery_note_dto_envelope->result);
        delivery_note_dto_envelope->result = NULL;
    }
    free(delivery_note_dto_envelope);
}

cJSON *delivery_note_dto_envelope_convertToJSON(delivery_note_dto_envelope_t *delivery_note_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // delivery_note_dto_envelope->is_success
    if(delivery_note_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", delivery_note_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // delivery_note_dto_envelope->error_message
    if(delivery_note_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", delivery_note_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // delivery_note_dto_envelope->correlation_id
    if(delivery_note_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", delivery_note_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // delivery_note_dto_envelope->timestamp
    if(delivery_note_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", delivery_note_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // delivery_note_dto_envelope->activity_id
    if(delivery_note_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", delivery_note_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // delivery_note_dto_envelope->result
    if(delivery_note_dto_envelope->result) {
    cJSON *result_local_JSON = delivery_note_dto_convertToJSON(delivery_note_dto_envelope->result);
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

delivery_note_dto_envelope_t *delivery_note_dto_envelope_parseFromJSON(cJSON *delivery_note_dto_envelopeJSON){

    delivery_note_dto_envelope_t *delivery_note_dto_envelope_local_var = NULL;

    // define the local variable for delivery_note_dto_envelope->result
    delivery_note_dto_t *result_local_nonprim = NULL;

    // delivery_note_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(delivery_note_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // delivery_note_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(delivery_note_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // delivery_note_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(delivery_note_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // delivery_note_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(delivery_note_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // delivery_note_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(delivery_note_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // delivery_note_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(delivery_note_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = delivery_note_dto_parseFromJSON(result); //nonprimitive
    }


    delivery_note_dto_envelope_local_var = delivery_note_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return delivery_note_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        delivery_note_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
