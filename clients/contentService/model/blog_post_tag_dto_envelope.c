#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "blog_post_tag_dto_envelope.h"



blog_post_tag_dto_envelope_t *blog_post_tag_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    blog_post_tag_dto_t *result
    ) {
    blog_post_tag_dto_envelope_t *blog_post_tag_dto_envelope_local_var = malloc(sizeof(blog_post_tag_dto_envelope_t));
    if (!blog_post_tag_dto_envelope_local_var) {
        return NULL;
    }
    blog_post_tag_dto_envelope_local_var->is_success = is_success;
    blog_post_tag_dto_envelope_local_var->error_message = error_message;
    blog_post_tag_dto_envelope_local_var->correlation_id = correlation_id;
    blog_post_tag_dto_envelope_local_var->timestamp = timestamp;
    blog_post_tag_dto_envelope_local_var->activity_id = activity_id;
    blog_post_tag_dto_envelope_local_var->result = result;

    return blog_post_tag_dto_envelope_local_var;
}


void blog_post_tag_dto_envelope_free(blog_post_tag_dto_envelope_t *blog_post_tag_dto_envelope) {
    if(NULL == blog_post_tag_dto_envelope){
        return ;
    }
    listEntry_t *listEntry;
    if (blog_post_tag_dto_envelope->error_message) {
        free(blog_post_tag_dto_envelope->error_message);
        blog_post_tag_dto_envelope->error_message = NULL;
    }
    if (blog_post_tag_dto_envelope->correlation_id) {
        free(blog_post_tag_dto_envelope->correlation_id);
        blog_post_tag_dto_envelope->correlation_id = NULL;
    }
    if (blog_post_tag_dto_envelope->timestamp) {
        free(blog_post_tag_dto_envelope->timestamp);
        blog_post_tag_dto_envelope->timestamp = NULL;
    }
    if (blog_post_tag_dto_envelope->activity_id) {
        free(blog_post_tag_dto_envelope->activity_id);
        blog_post_tag_dto_envelope->activity_id = NULL;
    }
    if (blog_post_tag_dto_envelope->result) {
        blog_post_tag_dto_free(blog_post_tag_dto_envelope->result);
        blog_post_tag_dto_envelope->result = NULL;
    }
    free(blog_post_tag_dto_envelope);
}

cJSON *blog_post_tag_dto_envelope_convertToJSON(blog_post_tag_dto_envelope_t *blog_post_tag_dto_envelope) {
    cJSON *item = cJSON_CreateObject();

    // blog_post_tag_dto_envelope->is_success
    if(blog_post_tag_dto_envelope->is_success) {
    if(cJSON_AddBoolToObject(item, "isSuccess", blog_post_tag_dto_envelope->is_success) == NULL) {
    goto fail; //Bool
    }
    }


    // blog_post_tag_dto_envelope->error_message
    if(blog_post_tag_dto_envelope->error_message) {
    if(cJSON_AddStringToObject(item, "errorMessage", blog_post_tag_dto_envelope->error_message) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_tag_dto_envelope->correlation_id
    if(blog_post_tag_dto_envelope->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", blog_post_tag_dto_envelope->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_tag_dto_envelope->timestamp
    if(blog_post_tag_dto_envelope->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", blog_post_tag_dto_envelope->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // blog_post_tag_dto_envelope->activity_id
    if(blog_post_tag_dto_envelope->activity_id) {
    if(cJSON_AddStringToObject(item, "activityId", blog_post_tag_dto_envelope->activity_id) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_tag_dto_envelope->result
    if(blog_post_tag_dto_envelope->result) {
    cJSON *result_local_JSON = blog_post_tag_dto_convertToJSON(blog_post_tag_dto_envelope->result);
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

blog_post_tag_dto_envelope_t *blog_post_tag_dto_envelope_parseFromJSON(cJSON *blog_post_tag_dto_envelopeJSON){

    blog_post_tag_dto_envelope_t *blog_post_tag_dto_envelope_local_var = NULL;

    // define the local variable for blog_post_tag_dto_envelope->result
    blog_post_tag_dto_t *result_local_nonprim = NULL;

    // blog_post_tag_dto_envelope->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(blog_post_tag_dto_envelopeJSON, "isSuccess");
    if (is_success) { 
    if(!cJSON_IsBool(is_success))
    {
    goto end; //Bool
    }
    }

    // blog_post_tag_dto_envelope->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(blog_post_tag_dto_envelopeJSON, "errorMessage");
    if (error_message) { 
    if(!cJSON_IsString(error_message) && !cJSON_IsNull(error_message))
    {
    goto end; //String
    }
    }

    // blog_post_tag_dto_envelope->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(blog_post_tag_dto_envelopeJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // blog_post_tag_dto_envelope->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(blog_post_tag_dto_envelopeJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // blog_post_tag_dto_envelope->activity_id
    cJSON *activity_id = cJSON_GetObjectItemCaseSensitive(blog_post_tag_dto_envelopeJSON, "activityId");
    if (activity_id) { 
    if(!cJSON_IsString(activity_id) && !cJSON_IsNull(activity_id))
    {
    goto end; //String
    }
    }

    // blog_post_tag_dto_envelope->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(blog_post_tag_dto_envelopeJSON, "result");
    if (result) { 
    result_local_nonprim = blog_post_tag_dto_parseFromJSON(result); //nonprimitive
    }


    blog_post_tag_dto_envelope_local_var = blog_post_tag_dto_envelope_create (
        is_success ? is_success->valueint : 0,
        error_message && !cJSON_IsNull(error_message) ? strdup(error_message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        activity_id && !cJSON_IsNull(activity_id) ? strdup(activity_id->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return blog_post_tag_dto_envelope_local_var;
end:
    if (result_local_nonprim) {
        blog_post_tag_dto_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
