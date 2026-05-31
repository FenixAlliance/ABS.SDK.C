#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "proof_of_delivery_dto_envelope.h"



proof_of_delivery_dto_envelope_t *proof_of_delivery_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    proof_of_delivery_dto_t *result
    ) {
    proof_of_delivery_dto_envelope_t *proof_of_delivery_dto_envelope_local_var = malloc(sizeof(proof_of_delivery_dto_envelope_t));
    if (!proof_of_delivery_dto_envelope_local_var) {
        return NULL;
    }
    proof_of_delivery_dto_envelope_local_var->is_success = is_success;
    proof_of_delivery_dto_envelope_local_var->error_message = error_message;
    proof_of_delivery_dto_envelope_local_var->correlation_id = correlation_id;
    proof_of_delivery_dto_envelope_local_var->timestamp = timestamp;
    proof_of_delivery_dto_envelope_local_var->activity_id = activity_id;
    proof_of_delivery_dto_envelope_local_var->result = result;

    return proof_of_delivery_dto_envelope_local_var;
}


void proof_of_delivery_dto_envelope_free(proof_of_delivery_dto_envelope_t *proof_of_delivery_dto_envelope) {
    if(NULL == proof_of_delivery_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (proof_of_delivery_dto_envelope->error_message) {
        free(proof_of_delivery_dto_envelope->error_message);
        proof_of_delivery_dto_envelope->error_message = NULL;
    }
    if (proof_of_delivery_dto_envelope->correlation_id) {
        free(proof_of_delivery_dto_envelope->correlation_id);
        proof_of_delivery_dto_envelope->correlation_id = NULL;
    }
    if (proof_of_delivery_dto_envelope->timestamp) {
        free(proof_of_delivery_dto_envelope->timestamp);
        proof_of_delivery_dto_envelope->timestamp = NULL;
    }
    if (proof_of_delivery_dto_envelope->activity_id) {
        free(proof_of_delivery_dto_envelope->activity_id);
        proof_of_delivery_dto_envelope->activity_id = NULL;
    }
    if (proof_of_delivery_dto_envelope->result) {
        proof_of_delivery_dto_free(proof_of_delivery_dto_envelope->result);
        proof_of_delivery_dto_envelope->result = NULL;
    }
    free(proof_of_delivery_dto_envelope);
}

cJSON *proof_of_delivery_dto_envelope_convertToJSON(proof_of_delivery_dto_envelope_t *proof_of_delivery_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // proof_of_delivery_dto_envelope->is_success
    if(proof_of_delivery_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", proof_of_delivery_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // proof_of_delivery_dto_envelope->error_message
    if(proof_of_delivery_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", proof_of_delivery_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // proof_of_delivery_dto_envelope->correlation_id
    if(proof_of_delivery_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", proof_of_delivery_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // proof_of_delivery_dto_envelope->timestamp
    if(proof_of_delivery_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", proof_of_delivery_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // proof_of_delivery_dto_envelope->activity_id
    if(proof_of_delivery_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", proof_of_delivery_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // proof_of_delivery_dto_envelope->result
    if(proof_of_delivery_dto_envelope->result) {
    cJSON *result_local_JSON = proof_of_delivery_dto_convertToJSON(proof_of_delivery_dto_envelope->result);
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

proof_of_delivery_dto_envelope_t *proof_of_delivery_dto_envelope_parseFromJSON(cJSON *proof_of_delivery_dto_envelopeJSON){

    proof_of_delivery_dto_envelope_t *proof_of_delivery_dto_envelope_local_var = NULL;

    // define the local variable for proof_of_delivery_dto_envelope->result
    proof_of_delivery_dto_t *result_local_nonprim = NULL;

    // proof_of_delivery_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // proof_of_delivery_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // proof_of_delivery_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // proof_of_delivery_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // proof_of_delivery_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // proof_of_delivery_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = proof_of_delivery_dto_parseFromJSON(result); //nonprimitive
    }


    proof_of_delivery_dto_envelope_local_var = proof_of_delivery_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return proof_of_delivery_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        proof_of_delivery_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
