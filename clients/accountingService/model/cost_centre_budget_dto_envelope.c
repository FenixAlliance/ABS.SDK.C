#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cost_centre_budget_dto_envelope.h"



cost_centre_budget_dto_envelope_t *cost_centre_budget_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    cost_centre_budget_dto_t *result
    ) {
    cost_centre_budget_dto_envelope_t *cost_centre_budget_dto_envelope_local_var = malloc(sizeof(cost_centre_budget_dto_envelope_t));
    if (!cost_centre_budget_dto_envelope_local_var) {
        return NULL;
    }
    cost_centre_budget_dto_envelope_local_var->is_success = is_success;
    cost_centre_budget_dto_envelope_local_var->error_message = error_message;
    cost_centre_budget_dto_envelope_local_var->correlation_id = correlation_id;
    cost_centre_budget_dto_envelope_local_var->timestamp = timestamp;
    cost_centre_budget_dto_envelope_local_var->activity_id = activity_id;
    cost_centre_budget_dto_envelope_local_var->result = result;

    return cost_centre_budget_dto_envelope_local_var;
}


void cost_centre_budget_dto_envelope_free(cost_centre_budget_dto_envelope_t *cost_centre_budget_dto_envelope) {
    if(NULL == cost_centre_budget_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (cost_centre_budget_dto_envelope->error_message) {
        free(cost_centre_budget_dto_envelope->error_message);
        cost_centre_budget_dto_envelope->error_message = NULL;
    }
    if (cost_centre_budget_dto_envelope->correlation_id) {
        free(cost_centre_budget_dto_envelope->correlation_id);
        cost_centre_budget_dto_envelope->correlation_id = NULL;
    }
    if (cost_centre_budget_dto_envelope->timestamp) {
        free(cost_centre_budget_dto_envelope->timestamp);
        cost_centre_budget_dto_envelope->timestamp = NULL;
    }
    if (cost_centre_budget_dto_envelope->activity_id) {
        free(cost_centre_budget_dto_envelope->activity_id);
        cost_centre_budget_dto_envelope->activity_id = NULL;
    }
    if (cost_centre_budget_dto_envelope->result) {
        cost_centre_budget_dto_free(cost_centre_budget_dto_envelope->result);
        cost_centre_budget_dto_envelope->result = NULL;
    }
    free(cost_centre_budget_dto_envelope);
}

cJSON *cost_centre_budget_dto_envelope_convertToJSON(cost_centre_budget_dto_envelope_t *cost_centre_budget_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // cost_centre_budget_dto_envelope->is_success
    if(cost_centre_budget_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", cost_centre_budget_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // cost_centre_budget_dto_envelope->error_message
    if(cost_centre_budget_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", cost_centre_budget_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // cost_centre_budget_dto_envelope->correlation_id
    if(cost_centre_budget_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", cost_centre_budget_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // cost_centre_budget_dto_envelope->timestamp
    if(cost_centre_budget_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", cost_centre_budget_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // cost_centre_budget_dto_envelope->activity_id
    if(cost_centre_budget_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", cost_centre_budget_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // cost_centre_budget_dto_envelope->result
    if(cost_centre_budget_dto_envelope->result) {
    cJSON *result_local_JSON = cost_centre_budget_dto_convertToJSON(cost_centre_budget_dto_envelope->result);
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

cost_centre_budget_dto_envelope_t *cost_centre_budget_dto_envelope_parseFromJSON(cJSON *cost_centre_budget_dto_envelopeJSON){

    cost_centre_budget_dto_envelope_t *cost_centre_budget_dto_envelope_local_var = NULL;

    // define the local variable for cost_centre_budget_dto_envelope->result
    cost_centre_budget_dto_t *result_local_nonprim = NULL;

    // cost_centre_budget_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(cost_centre_budget_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // cost_centre_budget_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(cost_centre_budget_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // cost_centre_budget_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(cost_centre_budget_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // cost_centre_budget_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(cost_centre_budget_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // cost_centre_budget_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(cost_centre_budget_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // cost_centre_budget_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(cost_centre_budget_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = cost_centre_budget_dto_parseFromJSON(result); //nonprimitive
    }


    cost_centre_budget_dto_envelope_local_var = cost_centre_budget_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return cost_centre_budget_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        cost_centre_budget_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
