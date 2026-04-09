#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "social_feed_post_dto_envelope.h"



social_feed_post_dto_envelope_t *social_feed_post_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    social_feed_post_dto_t *result
    ) {
    social_feed_post_dto_envelope_t *social_feed_post_dto_envelope_local_var = malloc(sizeof(social_feed_post_dto_envelope_t));
    if (!social_feed_post_dto_envelope_local_var) {
        return NULL;
    }
    social_feed_post_dto_envelope_local_var->is_success = is_success;
    social_feed_post_dto_envelope_local_var->error_message = error_message;
    social_feed_post_dto_envelope_local_var->correlation_id = correlation_id;
    social_feed_post_dto_envelope_local_var->timestamp = timestamp;
    social_feed_post_dto_envelope_local_var->activity_id = activity_id;
    social_feed_post_dto_envelope_local_var->result = result;

    return social_feed_post_dto_envelope_local_var;
}


void social_feed_post_dto_envelope_free(social_feed_post_dto_envelope_t *social_feed_post_dto_envelope) {
    if(NULL == social_feed_post_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (social_feed_post_dto_envelope->error_message) {
        free(social_feed_post_dto_envelope->error_message);
        social_feed_post_dto_envelope->error_message = NULL;
    }
    if (social_feed_post_dto_envelope->correlation_id) {
        free(social_feed_post_dto_envelope->correlation_id);
        social_feed_post_dto_envelope->correlation_id = NULL;
    }
    if (social_feed_post_dto_envelope->timestamp) {
        free(social_feed_post_dto_envelope->timestamp);
        social_feed_post_dto_envelope->timestamp = NULL;
    }
    if (social_feed_post_dto_envelope->activity_id) {
        free(social_feed_post_dto_envelope->activity_id);
        social_feed_post_dto_envelope->activity_id = NULL;
    }
    if (social_feed_post_dto_envelope->result) {
        social_feed_post_dto_free(social_feed_post_dto_envelope->result);
        social_feed_post_dto_envelope->result = NULL;
    }
    free(social_feed_post_dto_envelope);
}

cJSON *social_feed_post_dto_envelope_convertToJSON(social_feed_post_dto_envelope_t *social_feed_post_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // social_feed_post_dto_envelope->is_success
    if(social_feed_post_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", social_feed_post_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // social_feed_post_dto_envelope->error_message
    if(social_feed_post_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", social_feed_post_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // social_feed_post_dto_envelope->correlation_id
    if(social_feed_post_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", social_feed_post_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // social_feed_post_dto_envelope->timestamp
    if(social_feed_post_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", social_feed_post_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // social_feed_post_dto_envelope->activity_id
    if(social_feed_post_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", social_feed_post_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // social_feed_post_dto_envelope->result
    if(social_feed_post_dto_envelope->result) {
    cJSON *result_local_JSON = social_feed_post_dto_convertToJSON(social_feed_post_dto_envelope->result);
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

social_feed_post_dto_envelope_t *social_feed_post_dto_envelope_parseFromJSON(cJSON *social_feed_post_dto_envelopeJSON){

    social_feed_post_dto_envelope_t *social_feed_post_dto_envelope_local_var = NULL;

    // define the local variable for social_feed_post_dto_envelope->result
    social_feed_post_dto_t *result_local_nonprim = NULL;

    // social_feed_post_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(social_feed_post_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // social_feed_post_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(social_feed_post_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // social_feed_post_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(social_feed_post_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // social_feed_post_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(social_feed_post_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // social_feed_post_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(social_feed_post_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // social_feed_post_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(social_feed_post_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = social_feed_post_dto_parseFromJSON(result); //nonprimitive
    }


    social_feed_post_dto_envelope_local_var = social_feed_post_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return social_feed_post_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        social_feed_post_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
