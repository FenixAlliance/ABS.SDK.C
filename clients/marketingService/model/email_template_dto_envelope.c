#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "email_template_dto_envelope.h"



email_template_dto_envelope_t *email_template_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    email_template_dto_t *result
    ) {
    email_template_dto_envelope_t *email_template_dto_envelope_local_var = malloc(sizeof(email_template_dto_envelope_t));
    if (!email_template_dto_envelope_local_var) {
        return NULL;
    }
    email_template_dto_envelope_local_var->is_success = is_success;
    email_template_dto_envelope_local_var->error_message = error_message;
    email_template_dto_envelope_local_var->correlation_id = correlation_id;
    email_template_dto_envelope_local_var->timestamp = timestamp;
    email_template_dto_envelope_local_var->activity_id = activity_id;
    email_template_dto_envelope_local_var->result = result;

    return email_template_dto_envelope_local_var;
}


void email_template_dto_envelope_free(email_template_dto_envelope_t *email_template_dto_envelope) {
    if(NULL == email_template_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (email_template_dto_envelope->error_message) {
        free(email_template_dto_envelope->error_message);
        email_template_dto_envelope->error_message = NULL;
    }
    if (email_template_dto_envelope->correlation_id) {
        free(email_template_dto_envelope->correlation_id);
        email_template_dto_envelope->correlation_id = NULL;
    }
    if (email_template_dto_envelope->timestamp) {
        free(email_template_dto_envelope->timestamp);
        email_template_dto_envelope->timestamp = NULL;
    }
    if (email_template_dto_envelope->activity_id) {
        free(email_template_dto_envelope->activity_id);
        email_template_dto_envelope->activity_id = NULL;
    }
    if (email_template_dto_envelope->result) {
        email_template_dto_free(email_template_dto_envelope->result);
        email_template_dto_envelope->result = NULL;
    }
    free(email_template_dto_envelope);
}

cJSON *email_template_dto_envelope_convertToJSON(email_template_dto_envelope_t *email_template_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // email_template_dto_envelope->is_success
    if(email_template_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", email_template_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // email_template_dto_envelope->error_message
    if(email_template_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", email_template_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // email_template_dto_envelope->correlation_id
    if(email_template_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", email_template_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // email_template_dto_envelope->timestamp
    if(email_template_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", email_template_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // email_template_dto_envelope->activity_id
    if(email_template_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", email_template_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // email_template_dto_envelope->result
    if(email_template_dto_envelope->result) {
    cJSON *result_local_JSON = email_template_dto_convertToJSON(email_template_dto_envelope->result);
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

email_template_dto_envelope_t *email_template_dto_envelope_parseFromJSON(cJSON *email_template_dto_envelopeJSON){

    email_template_dto_envelope_t *email_template_dto_envelope_local_var = NULL;

    // define the local variable for email_template_dto_envelope->result
    email_template_dto_t *result_local_nonprim = NULL;

    // email_template_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(email_template_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // email_template_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(email_template_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // email_template_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(email_template_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // email_template_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(email_template_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // email_template_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(email_template_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // email_template_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(email_template_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = email_template_dto_parseFromJSON(result); //nonprimitive
    }


    email_template_dto_envelope_local_var = email_template_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return email_template_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        email_template_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
