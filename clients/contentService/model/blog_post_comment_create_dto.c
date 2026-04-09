#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "blog_post_comment_create_dto.h"



blog_post_comment_create_dto_t *blog_post_comment_create_dto_create(
    char *id,
    char *timestamp,
    char *message,
    char *owner_social_profile_id,
    char *social_post_id,
    char *parent_comment_id
    ) {
    blog_post_comment_create_dto_t *blog_post_comment_create_dto_local_var = malloc(sizeof(blog_post_comment_create_dto_t));
    if (!blog_post_comment_create_dto_local_var) {
        return NULL;
    }
    blog_post_comment_create_dto_local_var->id = id;
    blog_post_comment_create_dto_local_var->timestamp = timestamp;
    blog_post_comment_create_dto_local_var->message = message;
    blog_post_comment_create_dto_local_var->owner_social_profile_id = owner_social_profile_id;
    blog_post_comment_create_dto_local_var->social_post_id = social_post_id;
    blog_post_comment_create_dto_local_var->parent_comment_id = parent_comment_id;

    return blog_post_comment_create_dto_local_var;
}


void blog_post_comment_create_dto_free(blog_post_comment_create_dto_t *blog_post_comment_create_dto) {
    if(NULL == blog_post_comment_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (blog_post_comment_create_dto->id) {
        free(blog_post_comment_create_dto->id);
        blog_post_comment_create_dto->id = NULL;
    }
    if (blog_post_comment_create_dto->timestamp) {
        free(blog_post_comment_create_dto->timestamp);
        blog_post_comment_create_dto->timestamp = NULL;
    }
    if (blog_post_comment_create_dto->message) {
        free(blog_post_comment_create_dto->message);
        blog_post_comment_create_dto->message = NULL;
    }
    if (blog_post_comment_create_dto->owner_social_profile_id) {
        free(blog_post_comment_create_dto->owner_social_profile_id);
        blog_post_comment_create_dto->owner_social_profile_id = NULL;
    }
    if (blog_post_comment_create_dto->social_post_id) {
        free(blog_post_comment_create_dto->social_post_id);
        blog_post_comment_create_dto->social_post_id = NULL;
    }
    if (blog_post_comment_create_dto->parent_comment_id) {
        free(blog_post_comment_create_dto->parent_comment_id);
        blog_post_comment_create_dto->parent_comment_id = NULL;
    }
    free(blog_post_comment_create_dto);
}

cJSON *blog_post_comment_create_dto_convertToJSON(blog_post_comment_create_dto_t *blog_post_comment_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // blog_post_comment_create_dto->id
    if(blog_post_comment_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", blog_post_comment_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_comment_create_dto->timestamp
    if(blog_post_comment_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", blog_post_comment_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // blog_post_comment_create_dto->message
    if (!blog_post_comment_create_dto->message) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "message", blog_post_comment_create_dto->message) == NULL) {
    goto fail; //String
    }


    // blog_post_comment_create_dto->owner_social_profile_id
    if(blog_post_comment_create_dto->owner_social_profile_id) {
    if(cJSON_AddStringToObject(item, "ownerSocialProfileID", blog_post_comment_create_dto->owner_social_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_comment_create_dto->social_post_id
    if(blog_post_comment_create_dto->social_post_id) {
    if(cJSON_AddStringToObject(item, "socialPostID", blog_post_comment_create_dto->social_post_id) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_comment_create_dto->parent_comment_id
    if(blog_post_comment_create_dto->parent_comment_id) {
    if(cJSON_AddStringToObject(item, "parentCommentID", blog_post_comment_create_dto->parent_comment_id) == NULL) {
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

blog_post_comment_create_dto_t *blog_post_comment_create_dto_parseFromJSON(cJSON *blog_post_comment_create_dtoJSON){

    blog_post_comment_create_dto_t *blog_post_comment_create_dto_local_var = NULL;

    // blog_post_comment_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(blog_post_comment_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // blog_post_comment_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(blog_post_comment_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // blog_post_comment_create_dto->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(blog_post_comment_create_dtoJSON, "message");
    if (!message) {
        goto end;
    }

    
    if(!cJSON_IsString(message))
    {
    goto end; //String
    }

    // blog_post_comment_create_dto->owner_social_profile_id
    cJSON *owner_social_profile_id = cJSON_GetObjectItemCaseSensitive(blog_post_comment_create_dtoJSON, "ownerSocialProfileID");
    if (owner_social_profile_id) { 
    if(!cJSON_IsString(owner_social_profile_id) && !cJSON_IsNull(owner_social_profile_id))
    {
    goto end; //String
    }
    }

    // blog_post_comment_create_dto->social_post_id
    cJSON *social_post_id = cJSON_GetObjectItemCaseSensitive(blog_post_comment_create_dtoJSON, "socialPostID");
    if (social_post_id) { 
    if(!cJSON_IsString(social_post_id) && !cJSON_IsNull(social_post_id))
    {
    goto end; //String
    }
    }

    // blog_post_comment_create_dto->parent_comment_id
    cJSON *parent_comment_id = cJSON_GetObjectItemCaseSensitive(blog_post_comment_create_dtoJSON, "parentCommentID");
    if (parent_comment_id) { 
    if(!cJSON_IsString(parent_comment_id) && !cJSON_IsNull(parent_comment_id))
    {
    goto end; //String
    }
    }


    blog_post_comment_create_dto_local_var = blog_post_comment_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(message->valuestring),
        owner_social_profile_id && !cJSON_IsNull(owner_social_profile_id) ? strdup(owner_social_profile_id->valuestring) : NULL,
        social_post_id && !cJSON_IsNull(social_post_id) ? strdup(social_post_id->valuestring) : NULL,
        parent_comment_id && !cJSON_IsNull(parent_comment_id) ? strdup(parent_comment_id->valuestring) : NULL
        );

    return blog_post_comment_create_dto_local_var;
end:
    return NULL;

}
