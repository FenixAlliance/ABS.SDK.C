#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "financial_book_dto_envelope.h"



financial_book_dto_envelope_t *financial_book_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    financial_book_dto_t *result
    ) {
    financial_book_dto_envelope_t *financial_book_dto_envelope_local_var = malloc(sizeof(financial_book_dto_envelope_t));
    if (!financial_book_dto_envelope_local_var) {
        return NULL;
    }
    financial_book_dto_envelope_local_var->is_success = is_success;
    financial_book_dto_envelope_local_var->error_message = error_message;
    financial_book_dto_envelope_local_var->correlation_id = correlation_id;
    financial_book_dto_envelope_local_var->timestamp = timestamp;
    financial_book_dto_envelope_local_var->activity_id = activity_id;
    financial_book_dto_envelope_local_var->result = result;

    return financial_book_dto_envelope_local_var;
}


void financial_book_dto_envelope_free(financial_book_dto_envelope_t *financial_book_dto_envelope) {
    if(NULL == financial_book_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (financial_book_dto_envelope->error_message) {
        free(financial_book_dto_envelope->error_message);
        financial_book_dto_envelope->error_message = NULL;
    }
    if (financial_book_dto_envelope->correlation_id) {
        free(financial_book_dto_envelope->correlation_id);
        financial_book_dto_envelope->correlation_id = NULL;
    }
    if (financial_book_dto_envelope->timestamp) {
        free(financial_book_dto_envelope->timestamp);
        financial_book_dto_envelope->timestamp = NULL;
    }
    if (financial_book_dto_envelope->activity_id) {
        free(financial_book_dto_envelope->activity_id);
        financial_book_dto_envelope->activity_id = NULL;
    }
    if (financial_book_dto_envelope->result) {
        financial_book_dto_free(financial_book_dto_envelope->result);
        financial_book_dto_envelope->result = NULL;
    }
    free(financial_book_dto_envelope);
}

cJSON *financial_book_dto_envelope_convertToJSON(financial_book_dto_envelope_t *financial_book_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // financial_book_dto_envelope->is_success
    if(financial_book_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", financial_book_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // financial_book_dto_envelope->error_message
    if(financial_book_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", financial_book_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // financial_book_dto_envelope->correlation_id
    if(financial_book_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", financial_book_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // financial_book_dto_envelope->timestamp
    if(financial_book_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", financial_book_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // financial_book_dto_envelope->activity_id
    if(financial_book_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", financial_book_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // financial_book_dto_envelope->result
    if(financial_book_dto_envelope->result) {
    cJSON *result_local_JSON = financial_book_dto_convertToJSON(financial_book_dto_envelope->result);
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

financial_book_dto_envelope_t *financial_book_dto_envelope_parseFromJSON(cJSON *financial_book_dto_envelopeJSON){

    financial_book_dto_envelope_t *financial_book_dto_envelope_local_var = NULL;

    // define the local variable for financial_book_dto_envelope->result
    financial_book_dto_t *result_local_nonprim = NULL;

    // financial_book_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(financial_book_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // financial_book_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(financial_book_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // financial_book_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(financial_book_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // financial_book_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(financial_book_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // financial_book_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(financial_book_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // financial_book_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(financial_book_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = financial_book_dto_parseFromJSON(result); //nonprimitive
    }


    financial_book_dto_envelope_local_var = financial_book_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return financial_book_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        financial_book_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
