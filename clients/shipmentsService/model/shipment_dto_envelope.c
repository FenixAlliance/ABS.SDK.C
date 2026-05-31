#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "shipment_dto_envelope.h"



shipment_dto_envelope_t *shipment_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    shipment_dto_t *result
    ) {
    shipment_dto_envelope_t *shipment_dto_envelope_local_var = malloc(sizeof(shipment_dto_envelope_t));
    if (!shipment_dto_envelope_local_var) {
        return NULL;
    }
    shipment_dto_envelope_local_var->is_success = is_success;
    shipment_dto_envelope_local_var->error_message = error_message;
    shipment_dto_envelope_local_var->correlation_id = correlation_id;
    shipment_dto_envelope_local_var->timestamp = timestamp;
    shipment_dto_envelope_local_var->activity_id = activity_id;
    shipment_dto_envelope_local_var->result = result;

    return shipment_dto_envelope_local_var;
}


void shipment_dto_envelope_free(shipment_dto_envelope_t *shipment_dto_envelope) {
    if(NULL == shipment_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (shipment_dto_envelope->error_message) {
        free(shipment_dto_envelope->error_message);
        shipment_dto_envelope->error_message = NULL;
    }
    if (shipment_dto_envelope->correlation_id) {
        free(shipment_dto_envelope->correlation_id);
        shipment_dto_envelope->correlation_id = NULL;
    }
    if (shipment_dto_envelope->timestamp) {
        free(shipment_dto_envelope->timestamp);
        shipment_dto_envelope->timestamp = NULL;
    }
    if (shipment_dto_envelope->activity_id) {
        free(shipment_dto_envelope->activity_id);
        shipment_dto_envelope->activity_id = NULL;
    }
    if (shipment_dto_envelope->result) {
        shipment_dto_free(shipment_dto_envelope->result);
        shipment_dto_envelope->result = NULL;
    }
    free(shipment_dto_envelope);
}

cJSON *shipment_dto_envelope_convertToJSON(shipment_dto_envelope_t *shipment_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // shipment_dto_envelope->is_success
    if(shipment_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", shipment_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // shipment_dto_envelope->error_message
    if(shipment_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", shipment_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // shipment_dto_envelope->correlation_id
    if(shipment_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", shipment_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // shipment_dto_envelope->timestamp
    if(shipment_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", shipment_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // shipment_dto_envelope->activity_id
    if(shipment_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", shipment_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // shipment_dto_envelope->result
    if(shipment_dto_envelope->result) {
    cJSON *result_local_JSON = shipment_dto_convertToJSON(shipment_dto_envelope->result);
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

shipment_dto_envelope_t *shipment_dto_envelope_parseFromJSON(cJSON *shipment_dto_envelopeJSON){

    shipment_dto_envelope_t *shipment_dto_envelope_local_var = NULL;

    // define the local variable for shipment_dto_envelope->result
    shipment_dto_t *result_local_nonprim = NULL;

    // shipment_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(shipment_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // shipment_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(shipment_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // shipment_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(shipment_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // shipment_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(shipment_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // shipment_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(shipment_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // shipment_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(shipment_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = shipment_dto_parseFromJSON(result); //nonprimitive
    }


    shipment_dto_envelope_local_var = shipment_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return shipment_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        shipment_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
