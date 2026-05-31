#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "road_waybill_dto_envelope.h"



road_waybill_dto_envelope_t *road_waybill_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    road_waybill_dto_t *result
    ) {
    road_waybill_dto_envelope_t *road_waybill_dto_envelope_local_var = malloc(sizeof(road_waybill_dto_envelope_t));
    if (!road_waybill_dto_envelope_local_var) {
        return NULL;
    }
    road_waybill_dto_envelope_local_var->is_success = is_success;
    road_waybill_dto_envelope_local_var->error_message = error_message;
    road_waybill_dto_envelope_local_var->correlation_id = correlation_id;
    road_waybill_dto_envelope_local_var->timestamp = timestamp;
    road_waybill_dto_envelope_local_var->activity_id = activity_id;
    road_waybill_dto_envelope_local_var->result = result;

    return road_waybill_dto_envelope_local_var;
}


void road_waybill_dto_envelope_free(road_waybill_dto_envelope_t *road_waybill_dto_envelope) {
    if(NULL == road_waybill_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (road_waybill_dto_envelope->error_message) {
        free(road_waybill_dto_envelope->error_message);
        road_waybill_dto_envelope->error_message = NULL;
    }
    if (road_waybill_dto_envelope->correlation_id) {
        free(road_waybill_dto_envelope->correlation_id);
        road_waybill_dto_envelope->correlation_id = NULL;
    }
    if (road_waybill_dto_envelope->timestamp) {
        free(road_waybill_dto_envelope->timestamp);
        road_waybill_dto_envelope->timestamp = NULL;
    }
    if (road_waybill_dto_envelope->activity_id) {
        free(road_waybill_dto_envelope->activity_id);
        road_waybill_dto_envelope->activity_id = NULL;
    }
    if (road_waybill_dto_envelope->result) {
        road_waybill_dto_free(road_waybill_dto_envelope->result);
        road_waybill_dto_envelope->result = NULL;
    }
    free(road_waybill_dto_envelope);
}

cJSON *road_waybill_dto_envelope_convertToJSON(road_waybill_dto_envelope_t *road_waybill_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // road_waybill_dto_envelope->is_success
    if(road_waybill_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", road_waybill_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // road_waybill_dto_envelope->error_message
    if(road_waybill_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", road_waybill_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // road_waybill_dto_envelope->correlation_id
    if(road_waybill_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", road_waybill_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // road_waybill_dto_envelope->timestamp
    if(road_waybill_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", road_waybill_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // road_waybill_dto_envelope->activity_id
    if(road_waybill_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", road_waybill_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // road_waybill_dto_envelope->result
    if(road_waybill_dto_envelope->result) {
    cJSON *result_local_JSON = road_waybill_dto_convertToJSON(road_waybill_dto_envelope->result);
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

road_waybill_dto_envelope_t *road_waybill_dto_envelope_parseFromJSON(cJSON *road_waybill_dto_envelopeJSON){

    road_waybill_dto_envelope_t *road_waybill_dto_envelope_local_var = NULL;

    // define the local variable for road_waybill_dto_envelope->result
    road_waybill_dto_t *result_local_nonprim = NULL;

    // road_waybill_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(road_waybill_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // road_waybill_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(road_waybill_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // road_waybill_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(road_waybill_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // road_waybill_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(road_waybill_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // road_waybill_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(road_waybill_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // road_waybill_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(road_waybill_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = road_waybill_dto_parseFromJSON(result); //nonprimitive
    }


    road_waybill_dto_envelope_local_var = road_waybill_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return road_waybill_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        road_waybill_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
