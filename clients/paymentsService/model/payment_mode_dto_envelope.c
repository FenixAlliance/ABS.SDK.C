#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "payment_mode_dto_envelope.h"



payment_mode_dto_envelope_t *payment_mode_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    payment_mode_dto_t *result
    ) {
    payment_mode_dto_envelope_t *payment_mode_dto_envelope_local_var = malloc(sizeof(payment_mode_dto_envelope_t));
    if (!payment_mode_dto_envelope_local_var) {
        return NULL;
    }
    payment_mode_dto_envelope_local_var->is_success = is_success;
    payment_mode_dto_envelope_local_var->error_message = error_message;
    payment_mode_dto_envelope_local_var->correlation_id = correlation_id;
    payment_mode_dto_envelope_local_var->timestamp = timestamp;
    payment_mode_dto_envelope_local_var->activity_id = activity_id;
    payment_mode_dto_envelope_local_var->result = result;

    return payment_mode_dto_envelope_local_var;
}


void payment_mode_dto_envelope_free(payment_mode_dto_envelope_t *payment_mode_dto_envelope) {
    if(NULL == payment_mode_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (payment_mode_dto_envelope->error_message) {
        free(payment_mode_dto_envelope->error_message);
        payment_mode_dto_envelope->error_message = NULL;
    }
    if (payment_mode_dto_envelope->correlation_id) {
        free(payment_mode_dto_envelope->correlation_id);
        payment_mode_dto_envelope->correlation_id = NULL;
    }
    if (payment_mode_dto_envelope->timestamp) {
        free(payment_mode_dto_envelope->timestamp);
        payment_mode_dto_envelope->timestamp = NULL;
    }
    if (payment_mode_dto_envelope->activity_id) {
        free(payment_mode_dto_envelope->activity_id);
        payment_mode_dto_envelope->activity_id = NULL;
    }
    if (payment_mode_dto_envelope->result) {
        payment_mode_dto_free(payment_mode_dto_envelope->result);
        payment_mode_dto_envelope->result = NULL;
    }
    free(payment_mode_dto_envelope);
}

cJSON *payment_mode_dto_envelope_convertToJSON(payment_mode_dto_envelope_t *payment_mode_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // payment_mode_dto_envelope->is_success
    if(payment_mode_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", payment_mode_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // payment_mode_dto_envelope->error_message
    if(payment_mode_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", payment_mode_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // payment_mode_dto_envelope->correlation_id
    if(payment_mode_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", payment_mode_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // payment_mode_dto_envelope->timestamp
    if(payment_mode_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", payment_mode_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // payment_mode_dto_envelope->activity_id
    if(payment_mode_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", payment_mode_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // payment_mode_dto_envelope->result
    if(payment_mode_dto_envelope->result) {
    cJSON *result_local_JSON = payment_mode_dto_convertToJSON(payment_mode_dto_envelope->result);
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

payment_mode_dto_envelope_t *payment_mode_dto_envelope_parseFromJSON(cJSON *payment_mode_dto_envelopeJSON){

    payment_mode_dto_envelope_t *payment_mode_dto_envelope_local_var = NULL;

    // define the local variable for payment_mode_dto_envelope->result
    payment_mode_dto_t *result_local_nonprim = NULL;

    // payment_mode_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(payment_mode_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // payment_mode_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(payment_mode_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // payment_mode_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(payment_mode_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // payment_mode_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(payment_mode_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // payment_mode_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(payment_mode_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // payment_mode_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(payment_mode_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = payment_mode_dto_parseFromJSON(result); //nonprimitive
    }


    payment_mode_dto_envelope_local_var = payment_mode_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return payment_mode_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        payment_mode_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
