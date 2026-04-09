#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "merchant_dto_envelope.h"



merchant_dto_envelope_t *merchant_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    merchant_dto_t *result
    ) {
    merchant_dto_envelope_t *merchant_dto_envelope_local_var = malloc(sizeof(merchant_dto_envelope_t));
    if (!merchant_dto_envelope_local_var) {
        return NULL;
    }
    merchant_dto_envelope_local_var->is_success = is_success;
    merchant_dto_envelope_local_var->error_message = error_message;
    merchant_dto_envelope_local_var->correlation_id = correlation_id;
    merchant_dto_envelope_local_var->timestamp = timestamp;
    merchant_dto_envelope_local_var->activity_id = activity_id;
    merchant_dto_envelope_local_var->result = result;

    return merchant_dto_envelope_local_var;
}


void merchant_dto_envelope_free(merchant_dto_envelope_t *merchant_dto_envelope) {
    if(NULL == merchant_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (merchant_dto_envelope->error_message) {
        free(merchant_dto_envelope->error_message);
        merchant_dto_envelope->error_message = NULL;
    }
    if (merchant_dto_envelope->correlation_id) {
        free(merchant_dto_envelope->correlation_id);
        merchant_dto_envelope->correlation_id = NULL;
    }
    if (merchant_dto_envelope->timestamp) {
        free(merchant_dto_envelope->timestamp);
        merchant_dto_envelope->timestamp = NULL;
    }
    if (merchant_dto_envelope->activity_id) {
        free(merchant_dto_envelope->activity_id);
        merchant_dto_envelope->activity_id = NULL;
    }
    if (merchant_dto_envelope->result) {
        merchant_dto_free(merchant_dto_envelope->result);
        merchant_dto_envelope->result = NULL;
    }
    free(merchant_dto_envelope);
}

cJSON *merchant_dto_envelope_convertToJSON(merchant_dto_envelope_t *merchant_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // merchant_dto_envelope->is_success
    if(merchant_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", merchant_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // merchant_dto_envelope->error_message
    if(merchant_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", merchant_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // merchant_dto_envelope->correlation_id
    if(merchant_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", merchant_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // merchant_dto_envelope->timestamp
    if(merchant_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", merchant_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // merchant_dto_envelope->activity_id
    if(merchant_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", merchant_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // merchant_dto_envelope->result
    if(merchant_dto_envelope->result) {
    cJSON *result_local_JSON = merchant_dto_convertToJSON(merchant_dto_envelope->result);
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

merchant_dto_envelope_t *merchant_dto_envelope_parseFromJSON(cJSON *merchant_dto_envelopeJSON){

    merchant_dto_envelope_t *merchant_dto_envelope_local_var = NULL;

    // define the local variable for merchant_dto_envelope->result
    merchant_dto_t *result_local_nonprim = NULL;

    // merchant_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(merchant_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // merchant_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(merchant_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // merchant_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(merchant_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // merchant_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(merchant_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // merchant_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(merchant_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // merchant_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(merchant_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = merchant_dto_parseFromJSON(result); //nonprimitive
    }


    merchant_dto_envelope_local_var = merchant_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return merchant_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        merchant_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
