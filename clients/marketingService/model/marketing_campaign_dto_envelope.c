#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "marketing_campaign_dto_envelope.h"



marketing_campaign_dto_envelope_t *marketing_campaign_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    marketing_campaign_dto_t *result
    ) {
    marketing_campaign_dto_envelope_t *marketing_campaign_dto_envelope_local_var = malloc(sizeof(marketing_campaign_dto_envelope_t));
    if (!marketing_campaign_dto_envelope_local_var) {
        return NULL;
    }
    marketing_campaign_dto_envelope_local_var->is_success = is_success;
    marketing_campaign_dto_envelope_local_var->error_message = error_message;
    marketing_campaign_dto_envelope_local_var->correlation_id = correlation_id;
    marketing_campaign_dto_envelope_local_var->timestamp = timestamp;
    marketing_campaign_dto_envelope_local_var->activity_id = activity_id;
    marketing_campaign_dto_envelope_local_var->result = result;

    return marketing_campaign_dto_envelope_local_var;
}


void marketing_campaign_dto_envelope_free(marketing_campaign_dto_envelope_t *marketing_campaign_dto_envelope) {
    if(NULL == marketing_campaign_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (marketing_campaign_dto_envelope->error_message) {
        free(marketing_campaign_dto_envelope->error_message);
        marketing_campaign_dto_envelope->error_message = NULL;
    }
    if (marketing_campaign_dto_envelope->correlation_id) {
        free(marketing_campaign_dto_envelope->correlation_id);
        marketing_campaign_dto_envelope->correlation_id = NULL;
    }
    if (marketing_campaign_dto_envelope->timestamp) {
        free(marketing_campaign_dto_envelope->timestamp);
        marketing_campaign_dto_envelope->timestamp = NULL;
    }
    if (marketing_campaign_dto_envelope->activity_id) {
        free(marketing_campaign_dto_envelope->activity_id);
        marketing_campaign_dto_envelope->activity_id = NULL;
    }
    if (marketing_campaign_dto_envelope->result) {
        marketing_campaign_dto_free(marketing_campaign_dto_envelope->result);
        marketing_campaign_dto_envelope->result = NULL;
    }
    free(marketing_campaign_dto_envelope);
}

cJSON *marketing_campaign_dto_envelope_convertToJSON(marketing_campaign_dto_envelope_t *marketing_campaign_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // marketing_campaign_dto_envelope->is_success
    if(marketing_campaign_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", marketing_campaign_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // marketing_campaign_dto_envelope->error_message
    if(marketing_campaign_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", marketing_campaign_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // marketing_campaign_dto_envelope->correlation_id
    if(marketing_campaign_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", marketing_campaign_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // marketing_campaign_dto_envelope->timestamp
    if(marketing_campaign_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", marketing_campaign_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // marketing_campaign_dto_envelope->activity_id
    if(marketing_campaign_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", marketing_campaign_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // marketing_campaign_dto_envelope->result
    if(marketing_campaign_dto_envelope->result) {
    cJSON *result_local_JSON = marketing_campaign_dto_convertToJSON(marketing_campaign_dto_envelope->result);
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

marketing_campaign_dto_envelope_t *marketing_campaign_dto_envelope_parseFromJSON(cJSON *marketing_campaign_dto_envelopeJSON){

    marketing_campaign_dto_envelope_t *marketing_campaign_dto_envelope_local_var = NULL;

    // define the local variable for marketing_campaign_dto_envelope->result
    marketing_campaign_dto_t *result_local_nonprim = NULL;

    // marketing_campaign_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(marketing_campaign_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // marketing_campaign_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(marketing_campaign_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // marketing_campaign_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(marketing_campaign_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // marketing_campaign_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(marketing_campaign_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // marketing_campaign_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(marketing_campaign_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // marketing_campaign_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(marketing_campaign_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = marketing_campaign_dto_parseFromJSON(result); //nonprimitive
    }


    marketing_campaign_dto_envelope_local_var = marketing_campaign_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return marketing_campaign_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        marketing_campaign_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
