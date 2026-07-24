#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "trust_signing_readiness_dto_envelope.h"



trust_signing_readiness_dto_envelope_t *trust_signing_readiness_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    trust_signing_readiness_dto_t *result
    ) {
    trust_signing_readiness_dto_envelope_t *trust_signing_readiness_dto_envelope_local_var = malloc(sizeof(trust_signing_readiness_dto_envelope_t));
    if (!trust_signing_readiness_dto_envelope_local_var) {
        return NULL;
    }
    trust_signing_readiness_dto_envelope_local_var->is_success = is_success;
    trust_signing_readiness_dto_envelope_local_var->error_message = error_message;
    trust_signing_readiness_dto_envelope_local_var->correlation_id = correlation_id;
    trust_signing_readiness_dto_envelope_local_var->timestamp = timestamp;
    trust_signing_readiness_dto_envelope_local_var->activity_id = activity_id;
    trust_signing_readiness_dto_envelope_local_var->result = result;

    return trust_signing_readiness_dto_envelope_local_var;
}


void trust_signing_readiness_dto_envelope_free(trust_signing_readiness_dto_envelope_t *trust_signing_readiness_dto_envelope) {
    if(NULL == trust_signing_readiness_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (trust_signing_readiness_dto_envelope->error_message) {
        free(trust_signing_readiness_dto_envelope->error_message);
        trust_signing_readiness_dto_envelope->error_message = NULL;
    }
    if (trust_signing_readiness_dto_envelope->correlation_id) {
        free(trust_signing_readiness_dto_envelope->correlation_id);
        trust_signing_readiness_dto_envelope->correlation_id = NULL;
    }
    if (trust_signing_readiness_dto_envelope->timestamp) {
        free(trust_signing_readiness_dto_envelope->timestamp);
        trust_signing_readiness_dto_envelope->timestamp = NULL;
    }
    if (trust_signing_readiness_dto_envelope->activity_id) {
        free(trust_signing_readiness_dto_envelope->activity_id);
        trust_signing_readiness_dto_envelope->activity_id = NULL;
    }
    if (trust_signing_readiness_dto_envelope->result) {
        trust_signing_readiness_dto_free(trust_signing_readiness_dto_envelope->result);
        trust_signing_readiness_dto_envelope->result = NULL;
    }
    free(trust_signing_readiness_dto_envelope);
}

cJSON *trust_signing_readiness_dto_envelope_convertToJSON(trust_signing_readiness_dto_envelope_t *trust_signing_readiness_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // trust_signing_readiness_dto_envelope->is_success
    if(trust_signing_readiness_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", trust_signing_readiness_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // trust_signing_readiness_dto_envelope->error_message
    if(trust_signing_readiness_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", trust_signing_readiness_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // trust_signing_readiness_dto_envelope->correlation_id
    if(trust_signing_readiness_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", trust_signing_readiness_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // trust_signing_readiness_dto_envelope->timestamp
    if(trust_signing_readiness_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", trust_signing_readiness_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // trust_signing_readiness_dto_envelope->activity_id
    if(trust_signing_readiness_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", trust_signing_readiness_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // trust_signing_readiness_dto_envelope->result
    if(trust_signing_readiness_dto_envelope->result) {
    cJSON *result_local_JSON = trust_signing_readiness_dto_convertToJSON(trust_signing_readiness_dto_envelope->result);
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

trust_signing_readiness_dto_envelope_t *trust_signing_readiness_dto_envelope_parseFromJSON(cJSON *trust_signing_readiness_dto_envelopeJSON){

    trust_signing_readiness_dto_envelope_t *trust_signing_readiness_dto_envelope_local_var = NULL;

    // define the local variable for trust_signing_readiness_dto_envelope->result
    trust_signing_readiness_dto_t *result_local_nonprim = NULL;

    // trust_signing_readiness_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(trust_signing_readiness_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // trust_signing_readiness_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(trust_signing_readiness_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // trust_signing_readiness_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(trust_signing_readiness_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // trust_signing_readiness_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(trust_signing_readiness_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // trust_signing_readiness_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(trust_signing_readiness_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // trust_signing_readiness_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(trust_signing_readiness_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = trust_signing_readiness_dto_parseFromJSON(result); //nonprimitive
    }


    trust_signing_readiness_dto_envelope_local_var = trust_signing_readiness_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return trust_signing_readiness_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        trust_signing_readiness_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
