#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "social_post_dto.h"



social_post_dto_t *social_post_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *message,
    char *social_profile_id,
    char *social_profile_name,
    char *social_profile_avatar_url,
    int comments_count,
    int reactions_count
    ) {
    social_post_dto_t *social_post_dto_local_var = malloc(sizeof(social_post_dto_t));
    if (!social_post_dto_local_var) {
        return NULL;
    }
    social_post_dto_local_var->id = id;
    social_post_dto_local_var->timestamp = timestamp;
    social_post_dto_local_var->title = title;
    social_post_dto_local_var->message = message;
    social_post_dto_local_var->social_profile_id = social_profile_id;
    social_post_dto_local_var->social_profile_name = social_profile_name;
    social_post_dto_local_var->social_profile_avatar_url = social_profile_avatar_url;
    social_post_dto_local_var->comments_count = comments_count;
    social_post_dto_local_var->reactions_count = reactions_count;

    return social_post_dto_local_var;
}


void social_post_dto_free(social_post_dto_t *social_post_dto) {
    if(NULL == social_post_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (social_post_dto->id) {
        free(social_post_dto->id);
        social_post_dto->id = NULL;
    }
    if (social_post_dto->timestamp) {
        free(social_post_dto->timestamp);
        social_post_dto->timestamp = NULL;
    }
    if (social_post_dto->title) {
        free(social_post_dto->title);
        social_post_dto->title = NULL;
    }
    if (social_post_dto->message) {
        free(social_post_dto->message);
        social_post_dto->message = NULL;
    }
    if (social_post_dto->social_profile_id) {
        free(social_post_dto->social_profile_id);
        social_post_dto->social_profile_id = NULL;
    }
    if (social_post_dto->social_profile_name) {
        free(social_post_dto->social_profile_name);
        social_post_dto->social_profile_name = NULL;
    }
    if (social_post_dto->social_profile_avatar_url) {
        free(social_post_dto->social_profile_avatar_url);
        social_post_dto->social_profile_avatar_url = NULL;
    }
    free(social_post_dto);
}

cJSON *social_post_dto_convertToJSON(social_post_dto_t *social_post_dto) {
    cJSON *item = cJSON_CreateObject();

    // social_post_dto->id
    if(social_post_dto->id) {
    if(cJSON_AddStringToObject(item, "id", social_post_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // social_post_dto->timestamp
    if(social_post_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", social_post_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // social_post_dto->title
    if(social_post_dto->title) {
    if(cJSON_AddStringToObject(item, "title", social_post_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // social_post_dto->message
    if(social_post_dto->message) {
    if(cJSON_AddStringToObject(item, "message", social_post_dto->message) == NULL) {
    goto fail; //String
    }
    }


    // social_post_dto->social_profile_id
    if(social_post_dto->social_profile_id) {
    if(cJSON_AddStringToObject(item, "socialProfileId", social_post_dto->social_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // social_post_dto->social_profile_name
    if(social_post_dto->social_profile_name) {
    if(cJSON_AddStringToObject(item, "socialProfileName", social_post_dto->social_profile_name) == NULL) {
    goto fail; //String
    }
    }


    // social_post_dto->social_profile_avatar_url
    if(social_post_dto->social_profile_avatar_url) {
    if(cJSON_AddStringToObject(item, "socialProfileAvatarUrl", social_post_dto->social_profile_avatar_url) == NULL) {
    goto fail; //String
    }
    }


    // social_post_dto->comments_count
    if(social_post_dto->comments_count) {
    if(cJSON_AddNumberToObject(item, "commentsCount", social_post_dto->comments_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // social_post_dto->reactions_count
    if(social_post_dto->reactions_count) {
    if(cJSON_AddNumberToObject(item, "reactionsCount", social_post_dto->reactions_count) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

social_post_dto_t *social_post_dto_parseFromJSON(cJSON *social_post_dtoJSON){

    social_post_dto_t *social_post_dto_local_var = NULL;

    // social_post_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(social_post_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // social_post_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(social_post_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // social_post_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(social_post_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // social_post_dto->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(social_post_dtoJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message) && !cJSON_IsNull(message))
    {
    goto end; //String
    }
    }

    // social_post_dto->social_profile_id
    cJSON *social_profile_id = cJSON_GetObjectItemCaseSensitive(social_post_dtoJSON, "socialProfileId");
    if (social_profile_id) { 
    if(!cJSON_IsString(social_profile_id) && !cJSON_IsNull(social_profile_id))
    {
    goto end; //String
    }
    }

    // social_post_dto->social_profile_name
    cJSON *social_profile_name = cJSON_GetObjectItemCaseSensitive(social_post_dtoJSON, "socialProfileName");
    if (social_profile_name) { 
    if(!cJSON_IsString(social_profile_name) && !cJSON_IsNull(social_profile_name))
    {
    goto end; //String
    }
    }

    // social_post_dto->social_profile_avatar_url
    cJSON *social_profile_avatar_url = cJSON_GetObjectItemCaseSensitive(social_post_dtoJSON, "socialProfileAvatarUrl");
    if (social_profile_avatar_url) { 
    if(!cJSON_IsString(social_profile_avatar_url) && !cJSON_IsNull(social_profile_avatar_url))
    {
    goto end; //String
    }
    }

    // social_post_dto->comments_count
    cJSON *comments_count = cJSON_GetObjectItemCaseSensitive(social_post_dtoJSON, "commentsCount");
    if (comments_count) { 
    if(!cJSON_IsNumber(comments_count))
    {
    goto end; //Numeric
    }
    }

    // social_post_dto->reactions_count
    cJSON *reactions_count = cJSON_GetObjectItemCaseSensitive(social_post_dtoJSON, "reactionsCount");
    if (reactions_count) { 
    if(!cJSON_IsNumber(reactions_count))
    {
    goto end; //Numeric
    }
    }


    social_post_dto_local_var = social_post_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        message && !cJSON_IsNull(message) ? strdup(message->valuestring) : NULL,
        social_profile_id && !cJSON_IsNull(social_profile_id) ? strdup(social_profile_id->valuestring) : NULL,
        social_profile_name && !cJSON_IsNull(social_profile_name) ? strdup(social_profile_name->valuestring) : NULL,
        social_profile_avatar_url && !cJSON_IsNull(social_profile_avatar_url) ? strdup(social_profile_avatar_url->valuestring) : NULL,
        comments_count ? comments_count->valuedouble : 0,
        reactions_count ? reactions_count->valuedouble : 0
        );

    return social_post_dto_local_var;
end:
    return NULL;

}
