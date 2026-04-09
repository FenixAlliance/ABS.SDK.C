#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "billing_profile_dto_envelope.h"



billing_profile_dto_envelope_t *billing_profile_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    billing_profile_dto_t *result
    ) {
    billing_profile_dto_envelope_t *billing_profile_dto_envelope_local_var = malloc(sizeof(billing_profile_dto_envelope_t));
    if (!billing_profile_dto_envelope_local_var) {
        return NULL;
    }
    billing_profile_dto_envelope_local_var->is_success = is_success;
    billing_profile_dto_envelope_local_var->error_message = error_message;
    billing_profile_dto_envelope_local_var->correlation_id = correlation_id;
    billing_profile_dto_envelope_local_var->timestamp = timestamp;
    billing_profile_dto_envelope_local_var->activity_id = activity_id;
    billing_profile_dto_envelope_local_var->result = result;

    return billing_profile_dto_envelope_local_var;
}


void billing_profile_dto_envelope_free(billing_profile_dto_envelope_t *billing_profile_dto_envelope) {
    if(NULL == billing_profile_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (billing_profile_dto_envelope->error_message) {
        free(billing_profile_dto_envelope->error_message);
        billing_profile_dto_envelope->error_message = NULL;
    }
    if (billing_profile_dto_envelope->correlation_id) {
        free(billing_profile_dto_envelope->correlation_id);
        billing_profile_dto_envelope->correlation_id = NULL;
    }
    if (billing_profile_dto_envelope->timestamp) {
        free(billing_profile_dto_envelope->timestamp);
        billing_profile_dto_envelope->timestamp = NULL;
    }
    if (billing_profile_dto_envelope->activity_id) {
        free(billing_profile_dto_envelope->activity_id);
        billing_profile_dto_envelope->activity_id = NULL;
    }
    if (billing_profile_dto_envelope->result) {
        billing_profile_dto_free(billing_profile_dto_envelope->result);
        billing_profile_dto_envelope->result = NULL;
    }
    free(billing_profile_dto_envelope);
}

cJSON *billing_profile_dto_envelope_convertToJSON(billing_profile_dto_envelope_t *billing_profile_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // billing_profile_dto_envelope->is_success
    if(billing_profile_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", billing_profile_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // billing_profile_dto_envelope->error_message
    if(billing_profile_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", billing_profile_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto_envelope->correlation_id
    if(billing_profile_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", billing_profile_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto_envelope->timestamp
    if(billing_profile_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", billing_profile_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // billing_profile_dto_envelope->activity_id
    if(billing_profile_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", billing_profile_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto_envelope->result
    if(billing_profile_dto_envelope->result) {
    cJSON *result_local_JSON = billing_profile_dto_convertToJSON(billing_profile_dto_envelope->result);
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

billing_profile_dto_envelope_t *billing_profile_dto_envelope_parseFromJSON(cJSON *billing_profile_dto_envelopeJSON){

    billing_profile_dto_envelope_t *billing_profile_dto_envelope_local_var = NULL;

    // define the local variable for billing_profile_dto_envelope->result
    billing_profile_dto_t *result_local_nonprim = NULL;

    // billing_profile_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(billing_profile_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // billing_profile_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(billing_profile_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // billing_profile_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(billing_profile_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // billing_profile_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(billing_profile_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // billing_profile_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(billing_profile_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // billing_profile_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(billing_profile_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = billing_profile_dto_parseFromJSON(result); //nonprimitive
    }


    billing_profile_dto_envelope_local_var = billing_profile_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return billing_profile_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        billing_profile_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
