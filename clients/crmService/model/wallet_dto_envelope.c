#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "wallet_dto_envelope.h"



wallet_dto_envelope_t *wallet_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    wallet_dto_t *result
    ) {
    wallet_dto_envelope_t *wallet_dto_envelope_local_var = malloc(sizeof(wallet_dto_envelope_t));
    if (!wallet_dto_envelope_local_var) {
        return NULL;
    }
    wallet_dto_envelope_local_var->is_success = is_success;
    wallet_dto_envelope_local_var->error_message = error_message;
    wallet_dto_envelope_local_var->correlation_id = correlation_id;
    wallet_dto_envelope_local_var->timestamp = timestamp;
    wallet_dto_envelope_local_var->activity_id = activity_id;
    wallet_dto_envelope_local_var->result = result;

    return wallet_dto_envelope_local_var;
}


void wallet_dto_envelope_free(wallet_dto_envelope_t *wallet_dto_envelope) {
    if(NULL == wallet_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (wallet_dto_envelope->error_message) {
        free(wallet_dto_envelope->error_message);
        wallet_dto_envelope->error_message = NULL;
    }
    if (wallet_dto_envelope->correlation_id) {
        free(wallet_dto_envelope->correlation_id);
        wallet_dto_envelope->correlation_id = NULL;
    }
    if (wallet_dto_envelope->timestamp) {
        free(wallet_dto_envelope->timestamp);
        wallet_dto_envelope->timestamp = NULL;
    }
    if (wallet_dto_envelope->activity_id) {
        free(wallet_dto_envelope->activity_id);
        wallet_dto_envelope->activity_id = NULL;
    }
    if (wallet_dto_envelope->result) {
        wallet_dto_free(wallet_dto_envelope->result);
        wallet_dto_envelope->result = NULL;
    }
    free(wallet_dto_envelope);
}

cJSON *wallet_dto_envelope_convertToJSON(wallet_dto_envelope_t *wallet_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // wallet_dto_envelope->is_success
    if(wallet_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", wallet_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // wallet_dto_envelope->error_message
    if(wallet_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", wallet_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // wallet_dto_envelope->correlation_id
    if(wallet_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", wallet_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // wallet_dto_envelope->timestamp
    if(wallet_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", wallet_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // wallet_dto_envelope->activity_id
    if(wallet_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", wallet_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // wallet_dto_envelope->result
    if(wallet_dto_envelope->result) {
    cJSON *result_local_JSON = wallet_dto_convertToJSON(wallet_dto_envelope->result);
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

wallet_dto_envelope_t *wallet_dto_envelope_parseFromJSON(cJSON *wallet_dto_envelopeJSON){

    wallet_dto_envelope_t *wallet_dto_envelope_local_var = NULL;

    // define the local variable for wallet_dto_envelope->result
    wallet_dto_t *result_local_nonprim = NULL;

    // wallet_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(wallet_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // wallet_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(wallet_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // wallet_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(wallet_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // wallet_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(wallet_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // wallet_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(wallet_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // wallet_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(wallet_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = wallet_dto_parseFromJSON(result); //nonprimitive
    }


    wallet_dto_envelope_local_var = wallet_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return wallet_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        wallet_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
