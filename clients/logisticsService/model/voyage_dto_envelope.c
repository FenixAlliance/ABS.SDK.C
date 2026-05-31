#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "voyage_dto_envelope.h"



voyage_dto_envelope_t *voyage_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    voyage_dto_t *result
    ) {
    voyage_dto_envelope_t *voyage_dto_envelope_local_var = malloc(sizeof(voyage_dto_envelope_t));
    if (!voyage_dto_envelope_local_var) {
        return NULL;
    }
    voyage_dto_envelope_local_var->is_success = is_success;
    voyage_dto_envelope_local_var->error_message = error_message;
    voyage_dto_envelope_local_var->correlation_id = correlation_id;
    voyage_dto_envelope_local_var->timestamp = timestamp;
    voyage_dto_envelope_local_var->activity_id = activity_id;
    voyage_dto_envelope_local_var->result = result;

    return voyage_dto_envelope_local_var;
}


void voyage_dto_envelope_free(voyage_dto_envelope_t *voyage_dto_envelope) {
    if(NULL == voyage_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (voyage_dto_envelope->error_message) {
        free(voyage_dto_envelope->error_message);
        voyage_dto_envelope->error_message = NULL;
    }
    if (voyage_dto_envelope->correlation_id) {
        free(voyage_dto_envelope->correlation_id);
        voyage_dto_envelope->correlation_id = NULL;
    }
    if (voyage_dto_envelope->timestamp) {
        free(voyage_dto_envelope->timestamp);
        voyage_dto_envelope->timestamp = NULL;
    }
    if (voyage_dto_envelope->activity_id) {
        free(voyage_dto_envelope->activity_id);
        voyage_dto_envelope->activity_id = NULL;
    }
    if (voyage_dto_envelope->result) {
        voyage_dto_free(voyage_dto_envelope->result);
        voyage_dto_envelope->result = NULL;
    }
    free(voyage_dto_envelope);
}

cJSON *voyage_dto_envelope_convertToJSON(voyage_dto_envelope_t *voyage_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // voyage_dto_envelope->is_success
    if(voyage_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", voyage_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // voyage_dto_envelope->error_message
    if(voyage_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", voyage_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // voyage_dto_envelope->correlation_id
    if(voyage_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", voyage_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // voyage_dto_envelope->timestamp
    if(voyage_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", voyage_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // voyage_dto_envelope->activity_id
    if(voyage_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", voyage_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // voyage_dto_envelope->result
    if(voyage_dto_envelope->result) {
    cJSON *result_local_JSON = voyage_dto_convertToJSON(voyage_dto_envelope->result);
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

voyage_dto_envelope_t *voyage_dto_envelope_parseFromJSON(cJSON *voyage_dto_envelopeJSON){

    voyage_dto_envelope_t *voyage_dto_envelope_local_var = NULL;

    // define the local variable for voyage_dto_envelope->result
    voyage_dto_t *result_local_nonprim = NULL;

    // voyage_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(voyage_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // voyage_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(voyage_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // voyage_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(voyage_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // voyage_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(voyage_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // voyage_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(voyage_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // voyage_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(voyage_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = voyage_dto_parseFromJSON(result); //nonprimitive
    }


    voyage_dto_envelope_local_var = voyage_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return voyage_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        voyage_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
