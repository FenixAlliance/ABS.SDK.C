#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ip_lookup_dto_envelope.h"



ip_lookup_dto_envelope_t *ip_lookup_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    ip_lookup_dto_t *result
    ) {
    ip_lookup_dto_envelope_t *ip_lookup_dto_envelope_local_var = malloc(sizeof(ip_lookup_dto_envelope_t));
    if (!ip_lookup_dto_envelope_local_var) {
        return NULL;
    }
    ip_lookup_dto_envelope_local_var->is_success = is_success;
    ip_lookup_dto_envelope_local_var->error_message = error_message;
    ip_lookup_dto_envelope_local_var->correlation_id = correlation_id;
    ip_lookup_dto_envelope_local_var->timestamp = timestamp;
    ip_lookup_dto_envelope_local_var->activity_id = activity_id;
    ip_lookup_dto_envelope_local_var->result = result;

    return ip_lookup_dto_envelope_local_var;
}


void ip_lookup_dto_envelope_free(ip_lookup_dto_envelope_t *ip_lookup_dto_envelope) {
    if(NULL == ip_lookup_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (ip_lookup_dto_envelope->error_message) {
        free(ip_lookup_dto_envelope->error_message);
        ip_lookup_dto_envelope->error_message = NULL;
    }
    if (ip_lookup_dto_envelope->correlation_id) {
        free(ip_lookup_dto_envelope->correlation_id);
        ip_lookup_dto_envelope->correlation_id = NULL;
    }
    if (ip_lookup_dto_envelope->timestamp) {
        free(ip_lookup_dto_envelope->timestamp);
        ip_lookup_dto_envelope->timestamp = NULL;
    }
    if (ip_lookup_dto_envelope->activity_id) {
        free(ip_lookup_dto_envelope->activity_id);
        ip_lookup_dto_envelope->activity_id = NULL;
    }
    if (ip_lookup_dto_envelope->result) {
        ip_lookup_dto_free(ip_lookup_dto_envelope->result);
        ip_lookup_dto_envelope->result = NULL;
    }
    free(ip_lookup_dto_envelope);
}

cJSON *ip_lookup_dto_envelope_convertToJSON(ip_lookup_dto_envelope_t *ip_lookup_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // ip_lookup_dto_envelope->is_success
    if(ip_lookup_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", ip_lookup_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // ip_lookup_dto_envelope->error_message
    if(ip_lookup_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", ip_lookup_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // ip_lookup_dto_envelope->correlation_id
    if(ip_lookup_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", ip_lookup_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // ip_lookup_dto_envelope->timestamp
    if(ip_lookup_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", ip_lookup_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // ip_lookup_dto_envelope->activity_id
    if(ip_lookup_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", ip_lookup_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // ip_lookup_dto_envelope->result
    if(ip_lookup_dto_envelope->result) {
    cJSON *result_local_JSON = ip_lookup_dto_convertToJSON(ip_lookup_dto_envelope->result);
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

ip_lookup_dto_envelope_t *ip_lookup_dto_envelope_parseFromJSON(cJSON *ip_lookup_dto_envelopeJSON){

    ip_lookup_dto_envelope_t *ip_lookup_dto_envelope_local_var = NULL;

    // define the local variable for ip_lookup_dto_envelope->result
    ip_lookup_dto_t *result_local_nonprim = NULL;

    // ip_lookup_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(ip_lookup_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // ip_lookup_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(ip_lookup_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // ip_lookup_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(ip_lookup_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // ip_lookup_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(ip_lookup_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // ip_lookup_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(ip_lookup_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // ip_lookup_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(ip_lookup_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = ip_lookup_dto_parseFromJSON(result); //nonprimitive
    }


    ip_lookup_dto_envelope_local_var = ip_lookup_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return ip_lookup_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        ip_lookup_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
