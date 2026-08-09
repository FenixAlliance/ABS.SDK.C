#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "social_post_comment_create_dto.h"


char* social_post_comment_create_dto_body_format_ToString(socialservice_social_post_comment_create_dto_BODYFORMAT_e body_format) {
    char* body_formatArray[] =  { "NULL", "PlainText", "Html" };
    return body_formatArray[body_format];
}

socialservice_social_post_comment_create_dto_BODYFORMAT_e social_post_comment_create_dto_body_format_FromString(char* body_format){
    int stringToReturn = 0;
    char *body_formatArray[] =  { "NULL", "PlainText", "Html" };
    size_t sizeofArray = sizeof(body_formatArray) / sizeof(body_formatArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(body_format, body_formatArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

social_post_comment_create_dto_t *social_post_comment_create_dto_create(
    char *id,
    char *timestamp,
    char *message,
    char *body_html,
    socialservice_social_post_comment_create_dto_BODYFORMAT_e body_format,
    char *parent_comment_id,
    char *social_profile_id,
    char *social_feed_post_id,
    char *social_post_id
    ) {
    social_post_comment_create_dto_t *social_post_comment_create_dto_local_var = malloc(sizeof(social_post_comment_create_dto_t));
    if (!social_post_comment_create_dto_local_var) {
        return NULL;
    }
    social_post_comment_create_dto_local_var->id = id;
    social_post_comment_create_dto_local_var->timestamp = timestamp;
    social_post_comment_create_dto_local_var->message = message;
    social_post_comment_create_dto_local_var->body_html = body_html;
    social_post_comment_create_dto_local_var->body_format = body_format;
    social_post_comment_create_dto_local_var->parent_comment_id = parent_comment_id;
    social_post_comment_create_dto_local_var->social_profile_id = social_profile_id;
    social_post_comment_create_dto_local_var->social_feed_post_id = social_feed_post_id;
    social_post_comment_create_dto_local_var->social_post_id = social_post_id;

    return social_post_comment_create_dto_local_var;
}


void social_post_comment_create_dto_free(social_post_comment_create_dto_t *social_post_comment_create_dto) {
    if(NULL == social_post_comment_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (social_post_comment_create_dto->id) {
        free(social_post_comment_create_dto->id);
        social_post_comment_create_dto->id = NULL;
    }
    if (social_post_comment_create_dto->timestamp) {
        free(social_post_comment_create_dto->timestamp);
        social_post_comment_create_dto->timestamp = NULL;
    }
    if (social_post_comment_create_dto->message) {
        free(social_post_comment_create_dto->message);
        social_post_comment_create_dto->message = NULL;
    }
    if (social_post_comment_create_dto->body_html) {
        free(social_post_comment_create_dto->body_html);
        social_post_comment_create_dto->body_html = NULL;
    }
    if (social_post_comment_create_dto->parent_comment_id) {
        free(social_post_comment_create_dto->parent_comment_id);
        social_post_comment_create_dto->parent_comment_id = NULL;
    }
    if (social_post_comment_create_dto->social_profile_id) {
        free(social_post_comment_create_dto->social_profile_id);
        social_post_comment_create_dto->social_profile_id = NULL;
    }
    if (social_post_comment_create_dto->social_feed_post_id) {
        free(social_post_comment_create_dto->social_feed_post_id);
        social_post_comment_create_dto->social_feed_post_id = NULL;
    }
    if (social_post_comment_create_dto->social_post_id) {
        free(social_post_comment_create_dto->social_post_id);
        social_post_comment_create_dto->social_post_id = NULL;
    }
    free(social_post_comment_create_dto);
}

cJSON *social_post_comment_create_dto_convertToJSON(social_post_comment_create_dto_t *social_post_comment_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // social_post_comment_create_dto->id
    if(social_post_comment_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", social_post_comment_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // social_post_comment_create_dto->timestamp
    if(social_post_comment_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", social_post_comment_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // social_post_comment_create_dto->message
    if(social_post_comment_create_dto->message) {
    if(cJSON_AddStringToObject(item, "message", social_post_comment_create_dto->message) == NULL) {
    goto fail; //String
    }
    }


    // social_post_comment_create_dto->body_html
    if(social_post_comment_create_dto->body_html) {
    if(cJSON_AddStringToObject(item, "bodyHtml", social_post_comment_create_dto->body_html) == NULL) {
    goto fail; //String
    }
    }


    // social_post_comment_create_dto->body_format
    if(social_post_comment_create_dto->body_format != socialservice_social_post_comment_create_dto_BODYFORMAT_NULL) {
    if(cJSON_AddStringToObject(item, "bodyFormat", body_formatsocial_post_comment_create_dto_ToString(social_post_comment_create_dto->body_format)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // social_post_comment_create_dto->parent_comment_id
    if(social_post_comment_create_dto->parent_comment_id) {
    if(cJSON_AddStringToObject(item, "parentCommentId", social_post_comment_create_dto->parent_comment_id) == NULL) {
    goto fail; //String
    }
    }


    // social_post_comment_create_dto->social_profile_id
    if(social_post_comment_create_dto->social_profile_id) {
    if(cJSON_AddStringToObject(item, "socialProfileId", social_post_comment_create_dto->social_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // social_post_comment_create_dto->social_feed_post_id
    if(social_post_comment_create_dto->social_feed_post_id) {
    if(cJSON_AddStringToObject(item, "socialFeedPostId", social_post_comment_create_dto->social_feed_post_id) == NULL) {
    goto fail; //String
    }
    }


    // social_post_comment_create_dto->social_post_id
    if(social_post_comment_create_dto->social_post_id) {
    if(cJSON_AddStringToObject(item, "socialPostId", social_post_comment_create_dto->social_post_id) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

social_post_comment_create_dto_t *social_post_comment_create_dto_parseFromJSON(cJSON *social_post_comment_create_dtoJSON){

    social_post_comment_create_dto_t *social_post_comment_create_dto_local_var = NULL;

    // social_post_comment_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(social_post_comment_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // social_post_comment_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(social_post_comment_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // social_post_comment_create_dto->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(social_post_comment_create_dtoJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message) && !cJSON_IsNull(message))
    {
    goto end; //String
    }
    }

    // social_post_comment_create_dto->body_html
    cJSON *body_html = cJSON_GetObjectItemCaseSensitive(social_post_comment_create_dtoJSON, "bodyHtml");
    if (body_html) { 
    if(!cJSON_IsString(body_html) && !cJSON_IsNull(body_html))
    {
    goto end; //String
    }
    }

    // social_post_comment_create_dto->body_format
    cJSON *body_format = cJSON_GetObjectItemCaseSensitive(social_post_comment_create_dtoJSON, "bodyFormat");
    socialservice_social_post_comment_create_dto_BODYFORMAT_e body_formatVariable;
    if (body_format) { 
    if(!cJSON_IsString(body_format))
    {
    goto end; //Enum
    }
    body_formatVariable = social_post_comment_create_dto_body_format_FromString(body_format->valuestring);
    }

    // social_post_comment_create_dto->parent_comment_id
    cJSON *parent_comment_id = cJSON_GetObjectItemCaseSensitive(social_post_comment_create_dtoJSON, "parentCommentId");
    if (parent_comment_id) { 
    if(!cJSON_IsString(parent_comment_id) && !cJSON_IsNull(parent_comment_id))
    {
    goto end; //String
    }
    }

    // social_post_comment_create_dto->social_profile_id
    cJSON *social_profile_id = cJSON_GetObjectItemCaseSensitive(social_post_comment_create_dtoJSON, "socialProfileId");
    if (social_profile_id) { 
    if(!cJSON_IsString(social_profile_id) && !cJSON_IsNull(social_profile_id))
    {
    goto end; //String
    }
    }

    // social_post_comment_create_dto->social_feed_post_id
    cJSON *social_feed_post_id = cJSON_GetObjectItemCaseSensitive(social_post_comment_create_dtoJSON, "socialFeedPostId");
    if (social_feed_post_id) { 
    if(!cJSON_IsString(social_feed_post_id) && !cJSON_IsNull(social_feed_post_id))
    {
    goto end; //String
    }
    }

    // social_post_comment_create_dto->social_post_id
    cJSON *social_post_id = cJSON_GetObjectItemCaseSensitive(social_post_comment_create_dtoJSON, "socialPostId");
    if (social_post_id) { 
    if(!cJSON_IsString(social_post_id) && !cJSON_IsNull(social_post_id))
    {
    goto end; //String
    }
    }


    social_post_comment_create_dto_local_var = social_post_comment_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        message && !cJSON_IsNull(message) ? strdup(message->valuestring) : NULL,
        body_html && !cJSON_IsNull(body_html) ? strdup(body_html->valuestring) : NULL,
        body_format ? body_formatVariable : socialservice_social_post_comment_create_dto_BODYFORMAT_NULL,
        parent_comment_id && !cJSON_IsNull(parent_comment_id) ? strdup(parent_comment_id->valuestring) : NULL,
        social_profile_id && !cJSON_IsNull(social_profile_id) ? strdup(social_profile_id->valuestring) : NULL,
        social_feed_post_id && !cJSON_IsNull(social_feed_post_id) ? strdup(social_feed_post_id->valuestring) : NULL,
        social_post_id && !cJSON_IsNull(social_post_id) ? strdup(social_post_id->valuestring) : NULL
        );

    return social_post_comment_create_dto_local_var;
end:
    return NULL;

}
