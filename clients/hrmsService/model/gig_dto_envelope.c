#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "gig_dto_envelope.h"



gig_dto_envelope_t *gig_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    gig_dto_t *result
    ) {
    gig_dto_envelope_t *gig_dto_envelope_local_var = malloc(sizeof(gig_dto_envelope_t));
    if (!gig_dto_envelope_local_var) {
        return NULL;
    }
    gig_dto_envelope_local_var->is_success = is_success;
    gig_dto_envelope_local_var->error_message = error_message;
    gig_dto_envelope_local_var->correlation_id = correlation_id;
    gig_dto_envelope_local_var->timestamp = timestamp;
    gig_dto_envelope_local_var->activity_id = activity_id;
    gig_dto_envelope_local_var->result = result;

    return gig_dto_envelope_local_var;
}


void gig_dto_envelope_free(gig_dto_envelope_t *gig_dto_envelope) {
    if(NULL == gig_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (gig_dto_envelope->error_message) {
        free(gig_dto_envelope->error_message);
        gig_dto_envelope->error_message = NULL;
    }
    if (gig_dto_envelope->correlation_id) {
        free(gig_dto_envelope->correlation_id);
        gig_dto_envelope->correlation_id = NULL;
    }
    if (gig_dto_envelope->timestamp) {
        free(gig_dto_envelope->timestamp);
        gig_dto_envelope->timestamp = NULL;
    }
    if (gig_dto_envelope->activity_id) {
        free(gig_dto_envelope->activity_id);
        gig_dto_envelope->activity_id = NULL;
    }
    if (gig_dto_envelope->result) {
        gig_dto_free(gig_dto_envelope->result);
        gig_dto_envelope->result = NULL;
    }
    free(gig_dto_envelope);
}

cJSON *gig_dto_envelope_convertToJSON(gig_dto_envelope_t *gig_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // gig_dto_envelope->is_success
    if(gig_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", gig_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // gig_dto_envelope->error_message
    if(gig_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", gig_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // gig_dto_envelope->correlation_id
    if(gig_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", gig_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // gig_dto_envelope->timestamp
    if(gig_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", gig_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // gig_dto_envelope->activity_id
    if(gig_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", gig_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // gig_dto_envelope->result
    if(gig_dto_envelope->result) {
    cJSON *result_local_JSON = gig_dto_convertToJSON(gig_dto_envelope->result);
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

gig_dto_envelope_t *gig_dto_envelope_parseFromJSON(cJSON *gig_dto_envelopeJSON){

    gig_dto_envelope_t *gig_dto_envelope_local_var = NULL;

    // define the local variable for gig_dto_envelope->result
    gig_dto_t *result_local_nonprim = NULL;

    // gig_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(gig_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // gig_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(gig_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // gig_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(gig_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // gig_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(gig_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // gig_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(gig_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // gig_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(gig_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = gig_dto_parseFromJSON(result); //nonprimitive
    }


    gig_dto_envelope_local_var = gig_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return gig_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        gig_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
