#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "quote_line_dto_envelope.h"



quote_line_dto_envelope_t *quote_line_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    quote_line_dto_t *result
    ) {
    quote_line_dto_envelope_t *quote_line_dto_envelope_local_var = malloc(sizeof(quote_line_dto_envelope_t));
    if (!quote_line_dto_envelope_local_var) {
        return NULL;
    }
    quote_line_dto_envelope_local_var->is_success = is_success;
    quote_line_dto_envelope_local_var->error_message = error_message;
    quote_line_dto_envelope_local_var->correlation_id = correlation_id;
    quote_line_dto_envelope_local_var->timestamp = timestamp;
    quote_line_dto_envelope_local_var->activity_id = activity_id;
    quote_line_dto_envelope_local_var->result = result;

    return quote_line_dto_envelope_local_var;
}


void quote_line_dto_envelope_free(quote_line_dto_envelope_t *quote_line_dto_envelope) {
    if(NULL == quote_line_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (quote_line_dto_envelope->error_message) {
        free(quote_line_dto_envelope->error_message);
        quote_line_dto_envelope->error_message = NULL;
    }
    if (quote_line_dto_envelope->correlation_id) {
        free(quote_line_dto_envelope->correlation_id);
        quote_line_dto_envelope->correlation_id = NULL;
    }
    if (quote_line_dto_envelope->timestamp) {
        free(quote_line_dto_envelope->timestamp);
        quote_line_dto_envelope->timestamp = NULL;
    }
    if (quote_line_dto_envelope->activity_id) {
        free(quote_line_dto_envelope->activity_id);
        quote_line_dto_envelope->activity_id = NULL;
    }
    if (quote_line_dto_envelope->result) {
        quote_line_dto_free(quote_line_dto_envelope->result);
        quote_line_dto_envelope->result = NULL;
    }
    free(quote_line_dto_envelope);
}

cJSON *quote_line_dto_envelope_convertToJSON(quote_line_dto_envelope_t *quote_line_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // quote_line_dto_envelope->is_success
    if(quote_line_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", quote_line_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // quote_line_dto_envelope->error_message
    if(quote_line_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", quote_line_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // quote_line_dto_envelope->correlation_id
    if(quote_line_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", quote_line_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_line_dto_envelope->timestamp
    if(quote_line_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", quote_line_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // quote_line_dto_envelope->activity_id
    if(quote_line_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", quote_line_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_line_dto_envelope->result
    if(quote_line_dto_envelope->result) {
    cJSON *result_local_JSON = quote_line_dto_convertToJSON(quote_line_dto_envelope->result);
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

quote_line_dto_envelope_t *quote_line_dto_envelope_parseFromJSON(cJSON *quote_line_dto_envelopeJSON){

    quote_line_dto_envelope_t *quote_line_dto_envelope_local_var = NULL;

    // define the local variable for quote_line_dto_envelope->result
    quote_line_dto_t *result_local_nonprim = NULL;

    // quote_line_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(quote_line_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // quote_line_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(quote_line_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // quote_line_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(quote_line_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // quote_line_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(quote_line_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // quote_line_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(quote_line_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // quote_line_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(quote_line_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = quote_line_dto_parseFromJSON(result); //nonprimitive
    }


    quote_line_dto_envelope_local_var = quote_line_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return quote_line_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        quote_line_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
