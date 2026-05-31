#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "point_of_sale_dto_envelope.h"



point_of_sale_dto_envelope_t *point_of_sale_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    point_of_sale_dto_t *result
    ) {
    point_of_sale_dto_envelope_t *point_of_sale_dto_envelope_local_var = malloc(sizeof(point_of_sale_dto_envelope_t));
    if (!point_of_sale_dto_envelope_local_var) {
        return NULL;
    }
    point_of_sale_dto_envelope_local_var->is_success = is_success;
    point_of_sale_dto_envelope_local_var->error_message = error_message;
    point_of_sale_dto_envelope_local_var->correlation_id = correlation_id;
    point_of_sale_dto_envelope_local_var->timestamp = timestamp;
    point_of_sale_dto_envelope_local_var->activity_id = activity_id;
    point_of_sale_dto_envelope_local_var->result = result;

    return point_of_sale_dto_envelope_local_var;
}


void point_of_sale_dto_envelope_free(point_of_sale_dto_envelope_t *point_of_sale_dto_envelope) {
    if(NULL == point_of_sale_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (point_of_sale_dto_envelope->error_message) {
        free(point_of_sale_dto_envelope->error_message);
        point_of_sale_dto_envelope->error_message = NULL;
    }
    if (point_of_sale_dto_envelope->correlation_id) {
        free(point_of_sale_dto_envelope->correlation_id);
        point_of_sale_dto_envelope->correlation_id = NULL;
    }
    if (point_of_sale_dto_envelope->timestamp) {
        free(point_of_sale_dto_envelope->timestamp);
        point_of_sale_dto_envelope->timestamp = NULL;
    }
    if (point_of_sale_dto_envelope->activity_id) {
        free(point_of_sale_dto_envelope->activity_id);
        point_of_sale_dto_envelope->activity_id = NULL;
    }
    if (point_of_sale_dto_envelope->result) {
        point_of_sale_dto_free(point_of_sale_dto_envelope->result);
        point_of_sale_dto_envelope->result = NULL;
    }
    free(point_of_sale_dto_envelope);
}

cJSON *point_of_sale_dto_envelope_convertToJSON(point_of_sale_dto_envelope_t *point_of_sale_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // point_of_sale_dto_envelope->is_success
    if(point_of_sale_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", point_of_sale_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // point_of_sale_dto_envelope->error_message
    if(point_of_sale_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", point_of_sale_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // point_of_sale_dto_envelope->correlation_id
    if(point_of_sale_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", point_of_sale_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // point_of_sale_dto_envelope->timestamp
    if(point_of_sale_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", point_of_sale_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // point_of_sale_dto_envelope->activity_id
    if(point_of_sale_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", point_of_sale_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // point_of_sale_dto_envelope->result
    if(point_of_sale_dto_envelope->result) {
    cJSON *result_local_JSON = point_of_sale_dto_convertToJSON(point_of_sale_dto_envelope->result);
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

point_of_sale_dto_envelope_t *point_of_sale_dto_envelope_parseFromJSON(cJSON *point_of_sale_dto_envelopeJSON){

    point_of_sale_dto_envelope_t *point_of_sale_dto_envelope_local_var = NULL;

    // define the local variable for point_of_sale_dto_envelope->result
    point_of_sale_dto_t *result_local_nonprim = NULL;

    // point_of_sale_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(point_of_sale_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // point_of_sale_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(point_of_sale_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // point_of_sale_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(point_of_sale_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // point_of_sale_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(point_of_sale_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // point_of_sale_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(point_of_sale_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // point_of_sale_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(point_of_sale_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = point_of_sale_dto_parseFromJSON(result); //nonprimitive
    }


    point_of_sale_dto_envelope_local_var = point_of_sale_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return point_of_sale_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        point_of_sale_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
