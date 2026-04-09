#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "discount_list_dto_envelope.h"



discount_list_dto_envelope_t *discount_list_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    discount_list_dto_t *result
    ) {
    discount_list_dto_envelope_t *discount_list_dto_envelope_local_var = malloc(sizeof(discount_list_dto_envelope_t));
    if (!discount_list_dto_envelope_local_var) {
        return NULL;
    }
    discount_list_dto_envelope_local_var->is_success = is_success;
    discount_list_dto_envelope_local_var->error_message = error_message;
    discount_list_dto_envelope_local_var->correlation_id = correlation_id;
    discount_list_dto_envelope_local_var->timestamp = timestamp;
    discount_list_dto_envelope_local_var->activity_id = activity_id;
    discount_list_dto_envelope_local_var->result = result;

    return discount_list_dto_envelope_local_var;
}


void discount_list_dto_envelope_free(discount_list_dto_envelope_t *discount_list_dto_envelope) {
    if(NULL == discount_list_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (discount_list_dto_envelope->error_message) {
        free(discount_list_dto_envelope->error_message);
        discount_list_dto_envelope->error_message = NULL;
    }
    if (discount_list_dto_envelope->correlation_id) {
        free(discount_list_dto_envelope->correlation_id);
        discount_list_dto_envelope->correlation_id = NULL;
    }
    if (discount_list_dto_envelope->timestamp) {
        free(discount_list_dto_envelope->timestamp);
        discount_list_dto_envelope->timestamp = NULL;
    }
    if (discount_list_dto_envelope->activity_id) {
        free(discount_list_dto_envelope->activity_id);
        discount_list_dto_envelope->activity_id = NULL;
    }
    if (discount_list_dto_envelope->result) {
        discount_list_dto_free(discount_list_dto_envelope->result);
        discount_list_dto_envelope->result = NULL;
    }
    free(discount_list_dto_envelope);
}

cJSON *discount_list_dto_envelope_convertToJSON(discount_list_dto_envelope_t *discount_list_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // discount_list_dto_envelope->is_success
    if(discount_list_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", discount_list_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // discount_list_dto_envelope->error_message
    if(discount_list_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", discount_list_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // discount_list_dto_envelope->correlation_id
    if(discount_list_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", discount_list_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // discount_list_dto_envelope->timestamp
    if(discount_list_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", discount_list_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // discount_list_dto_envelope->activity_id
    if(discount_list_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", discount_list_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // discount_list_dto_envelope->result
    if(discount_list_dto_envelope->result) {
    cJSON *result_local_JSON = discount_list_dto_convertToJSON(discount_list_dto_envelope->result);
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

discount_list_dto_envelope_t *discount_list_dto_envelope_parseFromJSON(cJSON *discount_list_dto_envelopeJSON){

    discount_list_dto_envelope_t *discount_list_dto_envelope_local_var = NULL;

    // define the local variable for discount_list_dto_envelope->result
    discount_list_dto_t *result_local_nonprim = NULL;

    // discount_list_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(discount_list_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // discount_list_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(discount_list_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // discount_list_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(discount_list_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // discount_list_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(discount_list_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // discount_list_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(discount_list_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // discount_list_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(discount_list_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = discount_list_dto_parseFromJSON(result); //nonprimitive
    }


    discount_list_dto_envelope_local_var = discount_list_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return discount_list_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        discount_list_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
