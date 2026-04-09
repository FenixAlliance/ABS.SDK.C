#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "receipt_dto_envelope.h"



receipt_dto_envelope_t *receipt_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    receipt_dto_t *result
    ) {
    receipt_dto_envelope_t *receipt_dto_envelope_local_var = malloc(sizeof(receipt_dto_envelope_t));
    if (!receipt_dto_envelope_local_var) {
        return NULL;
    }
    receipt_dto_envelope_local_var->is_success = is_success;
    receipt_dto_envelope_local_var->error_message = error_message;
    receipt_dto_envelope_local_var->correlation_id = correlation_id;
    receipt_dto_envelope_local_var->timestamp = timestamp;
    receipt_dto_envelope_local_var->activity_id = activity_id;
    receipt_dto_envelope_local_var->result = result;

    return receipt_dto_envelope_local_var;
}


void receipt_dto_envelope_free(receipt_dto_envelope_t *receipt_dto_envelope) {
    if(NULL == receipt_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (receipt_dto_envelope->error_message) {
        free(receipt_dto_envelope->error_message);
        receipt_dto_envelope->error_message = NULL;
    }
    if (receipt_dto_envelope->correlation_id) {
        free(receipt_dto_envelope->correlation_id);
        receipt_dto_envelope->correlation_id = NULL;
    }
    if (receipt_dto_envelope->timestamp) {
        free(receipt_dto_envelope->timestamp);
        receipt_dto_envelope->timestamp = NULL;
    }
    if (receipt_dto_envelope->activity_id) {
        free(receipt_dto_envelope->activity_id);
        receipt_dto_envelope->activity_id = NULL;
    }
    if (receipt_dto_envelope->result) {
        receipt_dto_free(receipt_dto_envelope->result);
        receipt_dto_envelope->result = NULL;
    }
    free(receipt_dto_envelope);
}

cJSON *receipt_dto_envelope_convertToJSON(receipt_dto_envelope_t *receipt_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // receipt_dto_envelope->is_success
    if(receipt_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", receipt_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // receipt_dto_envelope->error_message
    if(receipt_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", receipt_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // receipt_dto_envelope->correlation_id
    if(receipt_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", receipt_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // receipt_dto_envelope->timestamp
    if(receipt_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", receipt_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // receipt_dto_envelope->activity_id
    if(receipt_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", receipt_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // receipt_dto_envelope->result
    if(receipt_dto_envelope->result) {
    cJSON *result_local_JSON = receipt_dto_convertToJSON(receipt_dto_envelope->result);
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

receipt_dto_envelope_t *receipt_dto_envelope_parseFromJSON(cJSON *receipt_dto_envelopeJSON){

    receipt_dto_envelope_t *receipt_dto_envelope_local_var = NULL;

    // define the local variable for receipt_dto_envelope->result
    receipt_dto_t *result_local_nonprim = NULL;

    // receipt_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(receipt_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // receipt_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(receipt_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // receipt_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(receipt_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // receipt_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(receipt_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // receipt_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(receipt_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // receipt_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(receipt_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = receipt_dto_parseFromJSON(result); //nonprimitive
    }


    receipt_dto_envelope_local_var = receipt_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return receipt_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        receipt_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
