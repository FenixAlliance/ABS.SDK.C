#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "business_application_dto_envelope.h"



business_application_dto_envelope_t *business_application_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    business_application_dto_t *result
    ) {
    business_application_dto_envelope_t *business_application_dto_envelope_local_var = malloc(sizeof(business_application_dto_envelope_t));
    if (!business_application_dto_envelope_local_var) {
        return NULL;
    }
    business_application_dto_envelope_local_var->is_success = is_success;
    business_application_dto_envelope_local_var->error_message = error_message;
    business_application_dto_envelope_local_var->correlation_id = correlation_id;
    business_application_dto_envelope_local_var->timestamp = timestamp;
    business_application_dto_envelope_local_var->activity_id = activity_id;
    business_application_dto_envelope_local_var->result = result;

    return business_application_dto_envelope_local_var;
}


void business_application_dto_envelope_free(business_application_dto_envelope_t *business_application_dto_envelope) {
    if(NULL == business_application_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (business_application_dto_envelope->error_message) {
        free(business_application_dto_envelope->error_message);
        business_application_dto_envelope->error_message = NULL;
    }
    if (business_application_dto_envelope->correlation_id) {
        free(business_application_dto_envelope->correlation_id);
        business_application_dto_envelope->correlation_id = NULL;
    }
    if (business_application_dto_envelope->timestamp) {
        free(business_application_dto_envelope->timestamp);
        business_application_dto_envelope->timestamp = NULL;
    }
    if (business_application_dto_envelope->activity_id) {
        free(business_application_dto_envelope->activity_id);
        business_application_dto_envelope->activity_id = NULL;
    }
    if (business_application_dto_envelope->result) {
        business_application_dto_free(business_application_dto_envelope->result);
        business_application_dto_envelope->result = NULL;
    }
    free(business_application_dto_envelope);
}

cJSON *business_application_dto_envelope_convertToJSON(business_application_dto_envelope_t *business_application_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // business_application_dto_envelope->is_success
    if(business_application_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", business_application_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // business_application_dto_envelope->error_message
    if(business_application_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", business_application_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // business_application_dto_envelope->correlation_id
    if(business_application_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", business_application_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // business_application_dto_envelope->timestamp
    if(business_application_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", business_application_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // business_application_dto_envelope->activity_id
    if(business_application_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", business_application_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // business_application_dto_envelope->result
    if(business_application_dto_envelope->result) {
    cJSON *result_local_JSON = business_application_dto_convertToJSON(business_application_dto_envelope->result);
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

business_application_dto_envelope_t *business_application_dto_envelope_parseFromJSON(cJSON *business_application_dto_envelopeJSON){

    business_application_dto_envelope_t *business_application_dto_envelope_local_var = NULL;

    // define the local variable for business_application_dto_envelope->result
    business_application_dto_t *result_local_nonprim = NULL;

    // business_application_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(business_application_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // business_application_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(business_application_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // business_application_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(business_application_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // business_application_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(business_application_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // business_application_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(business_application_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // business_application_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(business_application_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = business_application_dto_parseFromJSON(result); //nonprimitive
    }


    business_application_dto_envelope_local_var = business_application_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return business_application_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        business_application_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
