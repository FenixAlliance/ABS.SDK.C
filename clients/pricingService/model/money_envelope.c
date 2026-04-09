#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "money_envelope.h"



money_envelope_t *money_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    money_t *result
    ) {
    money_envelope_t *money_envelope_local_var = malloc(sizeof(money_envelope_t));
    if (!money_envelope_local_var) {
        return NULL;
    }
    money_envelope_local_var->is_success = is_success;
    money_envelope_local_var->error_message = error_message;
    money_envelope_local_var->correlation_id = correlation_id;
    money_envelope_local_var->timestamp = timestamp;
    money_envelope_local_var->activity_id = activity_id;
    money_envelope_local_var->result = result;

    return money_envelope_local_var;
}


void money_envelope_free(money_envelope_t *money_envelope) {
    if(NULL == money_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (money_envelope->error_message) {
        free(money_envelope->error_message);
        money_envelope->error_message = NULL;
    }
    if (money_envelope->correlation_id) {
        free(money_envelope->correlation_id);
        money_envelope->correlation_id = NULL;
    }
    if (money_envelope->timestamp) {
        free(money_envelope->timestamp);
        money_envelope->timestamp = NULL;
    }
    if (money_envelope->activity_id) {
        free(money_envelope->activity_id);
        money_envelope->activity_id = NULL;
    }
    if (money_envelope->result) {
        money_free(money_envelope->result);
        money_envelope->result = NULL;
    }
    free(money_envelope);
}

cJSON *money_envelope_convertToJSON(money_envelope_t *money_envelope) {
    cJSON *item = cJSON_CreateObject();

    // money_envelope->is_success
    if(money_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", money_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // money_envelope->error_message
    if(money_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", money_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // money_envelope->correlation_id
    if(money_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", money_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // money_envelope->timestamp
    if(money_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", money_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // money_envelope->activity_id
    if(money_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", money_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // money_envelope->result
    if(money_envelope->result) {
    cJSON *result_local_JSON = money_convertToJSON(money_envelope->result);
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

money_envelope_t *money_envelope_parseFromJSON(cJSON *money_envelopeJSON){

    money_envelope_t *money_envelope_local_var = NULL;

    // define the local variable for money_envelope->result
    money_t *result_local_nonprim = NULL;

    // money_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(money_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // money_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(money_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // money_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(money_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // money_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(money_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // money_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(money_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // money_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(money_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = money_parseFromJSON(result); //nonprimitive
    }


    money_envelope_local_var = money_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return money_envelope_local_var;
end:
    if (result_local_nonprim) {
        money_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
