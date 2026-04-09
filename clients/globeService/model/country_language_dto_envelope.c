#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "country_language_dto_envelope.h"



country_language_dto_envelope_t *country_language_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    country_language_dto_t *result
    ) {
    country_language_dto_envelope_t *country_language_dto_envelope_local_var = malloc(sizeof(country_language_dto_envelope_t));
    if (!country_language_dto_envelope_local_var) {
        return NULL;
    }
    country_language_dto_envelope_local_var->is_success = is_success;
    country_language_dto_envelope_local_var->error_message = error_message;
    country_language_dto_envelope_local_var->correlation_id = correlation_id;
    country_language_dto_envelope_local_var->timestamp = timestamp;
    country_language_dto_envelope_local_var->activity_id = activity_id;
    country_language_dto_envelope_local_var->result = result;

    return country_language_dto_envelope_local_var;
}


void country_language_dto_envelope_free(country_language_dto_envelope_t *country_language_dto_envelope) {
    if(NULL == country_language_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (country_language_dto_envelope->error_message) {
        free(country_language_dto_envelope->error_message);
        country_language_dto_envelope->error_message = NULL;
    }
    if (country_language_dto_envelope->correlation_id) {
        free(country_language_dto_envelope->correlation_id);
        country_language_dto_envelope->correlation_id = NULL;
    }
    if (country_language_dto_envelope->timestamp) {
        free(country_language_dto_envelope->timestamp);
        country_language_dto_envelope->timestamp = NULL;
    }
    if (country_language_dto_envelope->activity_id) {
        free(country_language_dto_envelope->activity_id);
        country_language_dto_envelope->activity_id = NULL;
    }
    if (country_language_dto_envelope->result) {
        country_language_dto_free(country_language_dto_envelope->result);
        country_language_dto_envelope->result = NULL;
    }
    free(country_language_dto_envelope);
}

cJSON *country_language_dto_envelope_convertToJSON(country_language_dto_envelope_t *country_language_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // country_language_dto_envelope->is_success
    if(country_language_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", country_language_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // country_language_dto_envelope->error_message
    if(country_language_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", country_language_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // country_language_dto_envelope->correlation_id
    if(country_language_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", country_language_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // country_language_dto_envelope->timestamp
    if(country_language_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", country_language_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // country_language_dto_envelope->activity_id
    if(country_language_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", country_language_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // country_language_dto_envelope->result
    if(country_language_dto_envelope->result) {
    cJSON *result_local_JSON = country_language_dto_convertToJSON(country_language_dto_envelope->result);
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

country_language_dto_envelope_t *country_language_dto_envelope_parseFromJSON(cJSON *country_language_dto_envelopeJSON){

    country_language_dto_envelope_t *country_language_dto_envelope_local_var = NULL;

    // define the local variable for country_language_dto_envelope->result
    country_language_dto_t *result_local_nonprim = NULL;

    // country_language_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(country_language_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // country_language_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(country_language_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // country_language_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(country_language_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // country_language_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(country_language_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // country_language_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(country_language_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // country_language_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(country_language_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = country_language_dto_parseFromJSON(result); //nonprimitive
    }


    country_language_dto_envelope_local_var = country_language_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return country_language_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        country_language_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
