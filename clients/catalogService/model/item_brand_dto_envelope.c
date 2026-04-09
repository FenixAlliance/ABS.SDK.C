#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "item_brand_dto_envelope.h"



item_brand_dto_envelope_t *item_brand_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    item_brand_dto_t *result
    ) {
    item_brand_dto_envelope_t *item_brand_dto_envelope_local_var = malloc(sizeof(item_brand_dto_envelope_t));
    if (!item_brand_dto_envelope_local_var) {
        return NULL;
    }
    item_brand_dto_envelope_local_var->is_success = is_success;
    item_brand_dto_envelope_local_var->error_message = error_message;
    item_brand_dto_envelope_local_var->correlation_id = correlation_id;
    item_brand_dto_envelope_local_var->timestamp = timestamp;
    item_brand_dto_envelope_local_var->activity_id = activity_id;
    item_brand_dto_envelope_local_var->result = result;

    return item_brand_dto_envelope_local_var;
}


void item_brand_dto_envelope_free(item_brand_dto_envelope_t *item_brand_dto_envelope) {
    if(NULL == item_brand_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (item_brand_dto_envelope->error_message) {
        free(item_brand_dto_envelope->error_message);
        item_brand_dto_envelope->error_message = NULL;
    }
    if (item_brand_dto_envelope->correlation_id) {
        free(item_brand_dto_envelope->correlation_id);
        item_brand_dto_envelope->correlation_id = NULL;
    }
    if (item_brand_dto_envelope->timestamp) {
        free(item_brand_dto_envelope->timestamp);
        item_brand_dto_envelope->timestamp = NULL;
    }
    if (item_brand_dto_envelope->activity_id) {
        free(item_brand_dto_envelope->activity_id);
        item_brand_dto_envelope->activity_id = NULL;
    }
    if (item_brand_dto_envelope->result) {
        item_brand_dto_free(item_brand_dto_envelope->result);
        item_brand_dto_envelope->result = NULL;
    }
    free(item_brand_dto_envelope);
}

cJSON *item_brand_dto_envelope_convertToJSON(item_brand_dto_envelope_t *item_brand_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // item_brand_dto_envelope->is_success
    if(item_brand_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", item_brand_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // item_brand_dto_envelope->error_message
    if(item_brand_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", item_brand_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // item_brand_dto_envelope->correlation_id
    if(item_brand_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", item_brand_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // item_brand_dto_envelope->timestamp
    if(item_brand_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", item_brand_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // item_brand_dto_envelope->activity_id
    if(item_brand_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", item_brand_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // item_brand_dto_envelope->result
    if(item_brand_dto_envelope->result) {
    cJSON *result_local_JSON = item_brand_dto_convertToJSON(item_brand_dto_envelope->result);
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

item_brand_dto_envelope_t *item_brand_dto_envelope_parseFromJSON(cJSON *item_brand_dto_envelopeJSON){

    item_brand_dto_envelope_t *item_brand_dto_envelope_local_var = NULL;

    // define the local variable for item_brand_dto_envelope->result
    item_brand_dto_t *result_local_nonprim = NULL;

    // item_brand_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(item_brand_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // item_brand_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(item_brand_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // item_brand_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(item_brand_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // item_brand_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(item_brand_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // item_brand_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(item_brand_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // item_brand_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(item_brand_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = item_brand_dto_parseFromJSON(result); //nonprimitive
    }


    item_brand_dto_envelope_local_var = item_brand_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return item_brand_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        item_brand_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
