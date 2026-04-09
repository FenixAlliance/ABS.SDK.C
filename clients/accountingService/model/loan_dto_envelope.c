#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "loan_dto_envelope.h"



loan_dto_envelope_t *loan_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    loan_dto_t *result
    ) {
    loan_dto_envelope_t *loan_dto_envelope_local_var = malloc(sizeof(loan_dto_envelope_t));
    if (!loan_dto_envelope_local_var) {
        return NULL;
    }
    loan_dto_envelope_local_var->is_success = is_success;
    loan_dto_envelope_local_var->error_message = error_message;
    loan_dto_envelope_local_var->correlation_id = correlation_id;
    loan_dto_envelope_local_var->timestamp = timestamp;
    loan_dto_envelope_local_var->activity_id = activity_id;
    loan_dto_envelope_local_var->result = result;

    return loan_dto_envelope_local_var;
}


void loan_dto_envelope_free(loan_dto_envelope_t *loan_dto_envelope) {
    if(NULL == loan_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (loan_dto_envelope->error_message) {
        free(loan_dto_envelope->error_message);
        loan_dto_envelope->error_message = NULL;
    }
    if (loan_dto_envelope->correlation_id) {
        free(loan_dto_envelope->correlation_id);
        loan_dto_envelope->correlation_id = NULL;
    }
    if (loan_dto_envelope->timestamp) {
        free(loan_dto_envelope->timestamp);
        loan_dto_envelope->timestamp = NULL;
    }
    if (loan_dto_envelope->activity_id) {
        free(loan_dto_envelope->activity_id);
        loan_dto_envelope->activity_id = NULL;
    }
    if (loan_dto_envelope->result) {
        loan_dto_free(loan_dto_envelope->result);
        loan_dto_envelope->result = NULL;
    }
    free(loan_dto_envelope);
}

cJSON *loan_dto_envelope_convertToJSON(loan_dto_envelope_t *loan_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // loan_dto_envelope->is_success
    if(loan_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", loan_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // loan_dto_envelope->error_message
    if(loan_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", loan_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // loan_dto_envelope->correlation_id
    if(loan_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", loan_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // loan_dto_envelope->timestamp
    if(loan_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", loan_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // loan_dto_envelope->activity_id
    if(loan_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", loan_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // loan_dto_envelope->result
    if(loan_dto_envelope->result) {
    cJSON *result_local_JSON = loan_dto_convertToJSON(loan_dto_envelope->result);
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

loan_dto_envelope_t *loan_dto_envelope_parseFromJSON(cJSON *loan_dto_envelopeJSON){

    loan_dto_envelope_t *loan_dto_envelope_local_var = NULL;

    // define the local variable for loan_dto_envelope->result
    loan_dto_t *result_local_nonprim = NULL;

    // loan_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(loan_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // loan_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(loan_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // loan_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(loan_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // loan_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(loan_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // loan_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(loan_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // loan_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(loan_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = loan_dto_parseFromJSON(result); //nonprimitive
    }


    loan_dto_envelope_local_var = loan_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return loan_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        loan_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
