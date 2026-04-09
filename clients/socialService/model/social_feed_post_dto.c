#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "social_feed_post_dto.h"



social_feed_post_dto_t *social_feed_post_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *message,
    char *social_profile_id,
    char *social_profile_name,
    char *social_profile_avatar_url,
    int comments_count,
    int reactions_count,
    char *social_feed_id
    ) {
    social_feed_post_dto_t *social_feed_post_dto_local_var = malloc(sizeof(social_feed_post_dto_t));
    if (!social_feed_post_dto_local_var) {
        return NULL;
    }
    social_feed_post_dto_local_var->id = id;
    social_feed_post_dto_local_var->timestamp = timestamp;
    social_feed_post_dto_local_var->title = title;
    social_feed_post_dto_local_var->message = message;
    social_feed_post_dto_local_var->social_profile_id = social_profile_id;
    social_feed_post_dto_local_var->social_profile_name = social_profile_name;
    social_feed_post_dto_local_var->social_profile_avatar_url = social_profile_avatar_url;
    social_feed_post_dto_local_var->comments_count = comments_count;
    social_feed_post_dto_local_var->reactions_count = reactions_count;
    social_feed_post_dto_local_var->social_feed_id = social_feed_id;

    return social_feed_post_dto_local_var;
}


void social_feed_post_dto_free(social_feed_post_dto_t *social_feed_post_dto) {
    if(NULL == social_feed_post_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (social_feed_post_dto->id) {
        free(social_feed_post_dto->id);
        social_feed_post_dto->id = NULL;
    }
    if (social_feed_post_dto->timestamp) {
        free(social_feed_post_dto->timestamp);
        social_feed_post_dto->timestamp = NULL;
    }
    if (social_feed_post_dto->title) {
        free(social_feed_post_dto->title);
        social_feed_post_dto->title = NULL;
    }
    if (social_feed_post_dto->message) {
        free(social_feed_post_dto->message);
        social_feed_post_dto->message = NULL;
    }
    if (social_feed_post_dto->social_profile_id) {
        free(social_feed_post_dto->social_profile_id);
        social_feed_post_dto->social_profile_id = NULL;
    }
    if (social_feed_post_dto->social_profile_name) {
        free(social_feed_post_dto->social_profile_name);
        social_feed_post_dto->social_profile_name = NULL;
    }
    if (social_feed_post_dto->social_profile_avatar_url) {
        free(social_feed_post_dto->social_profile_avatar_url);
        social_feed_post_dto->social_profile_avatar_url = NULL;
    }
    if (social_feed_post_dto->social_feed_id) {
        free(social_feed_post_dto->social_feed_id);
        social_feed_post_dto->social_feed_id = NULL;
    }
    free(social_feed_post_dto);
}

cJSON *social_feed_post_dto_convertToJSON(social_feed_post_dto_t *social_feed_post_dto) {
    cJSON *item = cJSON_CreateObject();

    // social_feed_post_dto->id
    if(social_feed_post_dto->id) {
    if(cJSON_AddStringToObject(item, "id", social_feed_post_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // social_feed_post_dto->timestamp
    if(social_feed_post_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", social_feed_post_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // social_feed_post_dto->title
    if(social_feed_post_dto->title) {
    if(cJSON_AddStringToObject(item, "title", social_feed_post_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // social_feed_post_dto->message
    if(social_feed_post_dto->message) {
    if(cJSON_AddStringToObject(item, "message", social_feed_post_dto->message) == NULL) {
    goto fail; //String
    }
    }


    // social_feed_post_dto->social_profile_id
    if(social_feed_post_dto->social_profile_id) {
    if(cJSON_AddStringToObject(item, "socialProfileId", social_feed_post_dto->social_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // social_feed_post_dto->social_profile_name
    if(social_feed_post_dto->social_profile_name) {
    if(cJSON_AddStringToObject(item, "socialProfileName", social_feed_post_dto->social_profile_name) == NULL) {
    goto fail; //String
    }
    }


    // social_feed_post_dto->social_profile_avatar_url
    if(social_feed_post_dto->social_profile_avatar_url) {
    if(cJSON_AddStringToObject(item, "socialProfileAvatarUrl", social_feed_post_dto->social_profile_avatar_url) == NULL) {
    goto fail; //String
    }
    }


    // social_feed_post_dto->comments_count
    if(social_feed_post_dto->comments_count) {
    if(cJSON_AddNumberToObject(item, "commentsCount", social_feed_post_dto->comments_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // social_feed_post_dto->reactions_count
    if(social_feed_post_dto->reactions_count) {
    if(cJSON_AddNumberToObject(item, "reactionsCount", social_feed_post_dto->reactions_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // social_feed_post_dto->social_feed_id
    if(social_feed_post_dto->social_feed_id) {
    if(cJSON_AddStringToObject(item, "socialFeedId", social_feed_post_dto->social_feed_id) == NULL) {
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

social_feed_post_dto_t *social_feed_post_dto_parseFromJSON(cJSON *social_feed_post_dtoJSON){

    social_feed_post_dto_t *social_feed_post_dto_local_var = NULL;

    // social_feed_post_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(social_feed_post_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // social_feed_post_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(social_feed_post_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // social_feed_post_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(social_feed_post_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // social_feed_post_dto->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(social_feed_post_dtoJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message) && !cJSON_IsNull(message))
    {
    goto end; //String
    }
    }

    // social_feed_post_dto->social_profile_id
    cJSON *social_profile_id = cJSON_GetObjectItemCaseSensitive(social_feed_post_dtoJSON, "socialProfileId");
    if (social_profile_id) { 
    if(!cJSON_IsString(social_profile_id) && !cJSON_IsNull(social_profile_id))
    {
    goto end; //String
    }
    }

    // social_feed_post_dto->social_profile_name
    cJSON *social_profile_name = cJSON_GetObjectItemCaseSensitive(social_feed_post_dtoJSON, "socialProfileName");
    if (social_profile_name) { 
    if(!cJSON_IsString(social_profile_name) && !cJSON_IsNull(social_profile_name))
    {
    goto end; //String
    }
    }

    // social_feed_post_dto->social_profile_avatar_url
    cJSON *social_profile_avatar_url = cJSON_GetObjectItemCaseSensitive(social_feed_post_dtoJSON, "socialProfileAvatarUrl");
    if (social_profile_avatar_url) { 
    if(!cJSON_IsString(social_profile_avatar_url) && !cJSON_IsNull(social_profile_avatar_url))
    {
    goto end; //String
    }
    }

    // social_feed_post_dto->comments_count
    cJSON *comments_count = cJSON_GetObjectItemCaseSensitive(social_feed_post_dtoJSON, "commentsCount");
    if (comments_count) { 
    if(!cJSON_IsNumber(comments_count))
    {
    goto end; //Numeric
    }
    }

    // social_feed_post_dto->reactions_count
    cJSON *reactions_count = cJSON_GetObjectItemCaseSensitive(social_feed_post_dtoJSON, "reactionsCount");
    if (reactions_count) { 
    if(!cJSON_IsNumber(reactions_count))
    {
    goto end; //Numeric
    }
    }

    // social_feed_post_dto->social_feed_id
    cJSON *social_feed_id = cJSON_GetObjectItemCaseSensitive(social_feed_post_dtoJSON, "socialFeedId");
    if (social_feed_id) { 
    if(!cJSON_IsString(social_feed_id) && !cJSON_IsNull(social_feed_id))
    {
    goto end; //String
    }
    }


    social_feed_post_dto_local_var = social_feed_post_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        message && !cJSON_IsNull(message) ? strdup(message->valuestring) : NULL,
        social_profile_id && !cJSON_IsNull(social_profile_id) ? strdup(social_profile_id->valuestring) : NULL,
        social_profile_name && !cJSON_IsNull(social_profile_name) ? strdup(social_profile_name->valuestring) : NULL,
        social_profile_avatar_url && !cJSON_IsNull(social_profile_avatar_url) ? strdup(social_profile_avatar_url->valuestring) : NULL,
        comments_count ? comments_count->valuedouble : 0,
        reactions_count ? reactions_count->valuedouble : 0,
        social_feed_id && !cJSON_IsNull(social_feed_id) ? strdup(social_feed_id->valuestring) : NULL
        );

    return social_feed_post_dto_local_var;
end:
    return NULL;

}
