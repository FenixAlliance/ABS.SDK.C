#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "deal_unit_flow_stage_dto_envelope.h"



deal_unit_flow_stage_dto_envelope_t *deal_unit_flow_stage_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    deal_unit_flow_stage_dto_t *result
    ) {
    deal_unit_flow_stage_dto_envelope_t *deal_unit_flow_stage_dto_envelope_local_var = malloc(sizeof(deal_unit_flow_stage_dto_envelope_t));
    if (!deal_unit_flow_stage_dto_envelope_local_var) {
        return NULL;
    }
    deal_unit_flow_stage_dto_envelope_local_var->is_success = is_success;
    deal_unit_flow_stage_dto_envelope_local_var->error_message = error_message;
    deal_unit_flow_stage_dto_envelope_local_var->correlation_id = correlation_id;
    deal_unit_flow_stage_dto_envelope_local_var->timestamp = timestamp;
    deal_unit_flow_stage_dto_envelope_local_var->activity_id = activity_id;
    deal_unit_flow_stage_dto_envelope_local_var->result = result;

    return deal_unit_flow_stage_dto_envelope_local_var;
}


void deal_unit_flow_stage_dto_envelope_free(deal_unit_flow_stage_dto_envelope_t *deal_unit_flow_stage_dto_envelope) {
    if(NULL == deal_unit_flow_stage_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (deal_unit_flow_stage_dto_envelope->error_message) {
        free(deal_unit_flow_stage_dto_envelope->error_message);
        deal_unit_flow_stage_dto_envelope->error_message = NULL;
    }
    if (deal_unit_flow_stage_dto_envelope->correlation_id) {
        free(deal_unit_flow_stage_dto_envelope->correlation_id);
        deal_unit_flow_stage_dto_envelope->correlation_id = NULL;
    }
    if (deal_unit_flow_stage_dto_envelope->timestamp) {
        free(deal_unit_flow_stage_dto_envelope->timestamp);
        deal_unit_flow_stage_dto_envelope->timestamp = NULL;
    }
    if (deal_unit_flow_stage_dto_envelope->activity_id) {
        free(deal_unit_flow_stage_dto_envelope->activity_id);
        deal_unit_flow_stage_dto_envelope->activity_id = NULL;
    }
    if (deal_unit_flow_stage_dto_envelope->result) {
        deal_unit_flow_stage_dto_free(deal_unit_flow_stage_dto_envelope->result);
        deal_unit_flow_stage_dto_envelope->result = NULL;
    }
    free(deal_unit_flow_stage_dto_envelope);
}

cJSON *deal_unit_flow_stage_dto_envelope_convertToJSON(deal_unit_flow_stage_dto_envelope_t *deal_unit_flow_stage_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // deal_unit_flow_stage_dto_envelope->is_success
    if(deal_unit_flow_stage_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", deal_unit_flow_stage_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // deal_unit_flow_stage_dto_envelope->error_message
    if(deal_unit_flow_stage_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", deal_unit_flow_stage_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_flow_stage_dto_envelope->correlation_id
    if(deal_unit_flow_stage_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", deal_unit_flow_stage_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_flow_stage_dto_envelope->timestamp
    if(deal_unit_flow_stage_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", deal_unit_flow_stage_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // deal_unit_flow_stage_dto_envelope->activity_id
    if(deal_unit_flow_stage_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", deal_unit_flow_stage_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_flow_stage_dto_envelope->result
    if(deal_unit_flow_stage_dto_envelope->result) {
    cJSON *result_local_JSON = deal_unit_flow_stage_dto_convertToJSON(deal_unit_flow_stage_dto_envelope->result);
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

deal_unit_flow_stage_dto_envelope_t *deal_unit_flow_stage_dto_envelope_parseFromJSON(cJSON *deal_unit_flow_stage_dto_envelopeJSON){

    deal_unit_flow_stage_dto_envelope_t *deal_unit_flow_stage_dto_envelope_local_var = NULL;

    // define the local variable for deal_unit_flow_stage_dto_envelope->result
    deal_unit_flow_stage_dto_t *result_local_nonprim = NULL;

    // deal_unit_flow_stage_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(deal_unit_flow_stage_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // deal_unit_flow_stage_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(deal_unit_flow_stage_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // deal_unit_flow_stage_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(deal_unit_flow_stage_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // deal_unit_flow_stage_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(deal_unit_flow_stage_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // deal_unit_flow_stage_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(deal_unit_flow_stage_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // deal_unit_flow_stage_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(deal_unit_flow_stage_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = deal_unit_flow_stage_dto_parseFromJSON(result); //nonprimitive
    }


    deal_unit_flow_stage_dto_envelope_local_var = deal_unit_flow_stage_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return deal_unit_flow_stage_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        deal_unit_flow_stage_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
