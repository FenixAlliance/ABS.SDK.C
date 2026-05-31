#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "airway_bill_dto_envelope.h"



airway_bill_dto_envelope_t *airway_bill_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    airway_bill_dto_t *result
    ) {
    airway_bill_dto_envelope_t *airway_bill_dto_envelope_local_var = malloc(sizeof(airway_bill_dto_envelope_t));
    if (!airway_bill_dto_envelope_local_var) {
        return NULL;
    }
    airway_bill_dto_envelope_local_var->is_success = is_success;
    airway_bill_dto_envelope_local_var->error_message = error_message;
    airway_bill_dto_envelope_local_var->correlation_id = correlation_id;
    airway_bill_dto_envelope_local_var->timestamp = timestamp;
    airway_bill_dto_envelope_local_var->activity_id = activity_id;
    airway_bill_dto_envelope_local_var->result = result;

    return airway_bill_dto_envelope_local_var;
}


void airway_bill_dto_envelope_free(airway_bill_dto_envelope_t *airway_bill_dto_envelope) {
    if(NULL == airway_bill_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (airway_bill_dto_envelope->error_message) {
        free(airway_bill_dto_envelope->error_message);
        airway_bill_dto_envelope->error_message = NULL;
    }
    if (airway_bill_dto_envelope->correlation_id) {
        free(airway_bill_dto_envelope->correlation_id);
        airway_bill_dto_envelope->correlation_id = NULL;
    }
    if (airway_bill_dto_envelope->timestamp) {
        free(airway_bill_dto_envelope->timestamp);
        airway_bill_dto_envelope->timestamp = NULL;
    }
    if (airway_bill_dto_envelope->activity_id) {
        free(airway_bill_dto_envelope->activity_id);
        airway_bill_dto_envelope->activity_id = NULL;
    }
    if (airway_bill_dto_envelope->result) {
        airway_bill_dto_free(airway_bill_dto_envelope->result);
        airway_bill_dto_envelope->result = NULL;
    }
    free(airway_bill_dto_envelope);
}

cJSON *airway_bill_dto_envelope_convertToJSON(airway_bill_dto_envelope_t *airway_bill_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // airway_bill_dto_envelope->is_success
    if(airway_bill_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", airway_bill_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // airway_bill_dto_envelope->error_message
    if(airway_bill_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", airway_bill_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // airway_bill_dto_envelope->correlation_id
    if(airway_bill_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", airway_bill_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // airway_bill_dto_envelope->timestamp
    if(airway_bill_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", airway_bill_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // airway_bill_dto_envelope->activity_id
    if(airway_bill_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", airway_bill_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // airway_bill_dto_envelope->result
    if(airway_bill_dto_envelope->result) {
    cJSON *result_local_JSON = airway_bill_dto_convertToJSON(airway_bill_dto_envelope->result);
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

airway_bill_dto_envelope_t *airway_bill_dto_envelope_parseFromJSON(cJSON *airway_bill_dto_envelopeJSON){

    airway_bill_dto_envelope_t *airway_bill_dto_envelope_local_var = NULL;

    // define the local variable for airway_bill_dto_envelope->result
    airway_bill_dto_t *result_local_nonprim = NULL;

    // airway_bill_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(airway_bill_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // airway_bill_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(airway_bill_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // airway_bill_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(airway_bill_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // airway_bill_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(airway_bill_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // airway_bill_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(airway_bill_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // airway_bill_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(airway_bill_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = airway_bill_dto_parseFromJSON(result); //nonprimitive
    }


    airway_bill_dto_envelope_local_var = airway_bill_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return airway_bill_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        airway_bill_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
