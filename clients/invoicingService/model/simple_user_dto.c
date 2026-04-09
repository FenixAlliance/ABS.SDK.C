#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "simple_user_dto.h"



simple_user_dto_t *simple_user_dto_create(
    char *id,
    char *timestamp,
    char *full_name,
    char *qualified_name,
    char *public_name,
    char *handler,
    char *last_name,
    char *first_name,
    char *cover_url,
    char *avatar_url,
    char *git_hub_url,
    char *country_id,
    char *timezone_id,
    char *website_url,
    char *twitter_url,
    char *you_tube_url,
    char *linked_in_url,
    char *facebook_url,
    char *instagram_url,
    char *social_profile_id
    ) {
    simple_user_dto_t *simple_user_dto_local_var = malloc(sizeof(simple_user_dto_t));
    if (!simple_user_dto_local_var) {
        return NULL;
    }
    simple_user_dto_local_var->id = id;
    simple_user_dto_local_var->timestamp = timestamp;
    simple_user_dto_local_var->full_name = full_name;
    simple_user_dto_local_var->qualified_name = qualified_name;
    simple_user_dto_local_var->public_name = public_name;
    simple_user_dto_local_var->handler = handler;
    simple_user_dto_local_var->last_name = last_name;
    simple_user_dto_local_var->first_name = first_name;
    simple_user_dto_local_var->cover_url = cover_url;
    simple_user_dto_local_var->avatar_url = avatar_url;
    simple_user_dto_local_var->git_hub_url = git_hub_url;
    simple_user_dto_local_var->country_id = country_id;
    simple_user_dto_local_var->timezone_id = timezone_id;
    simple_user_dto_local_var->website_url = website_url;
    simple_user_dto_local_var->twitter_url = twitter_url;
    simple_user_dto_local_var->you_tube_url = you_tube_url;
    simple_user_dto_local_var->linked_in_url = linked_in_url;
    simple_user_dto_local_var->facebook_url = facebook_url;
    simple_user_dto_local_var->instagram_url = instagram_url;
    simple_user_dto_local_var->social_profile_id = social_profile_id;

    return simple_user_dto_local_var;
}


void simple_user_dto_free(simple_user_dto_t *simple_user_dto) {
    if(NULL == simple_user_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (simple_user_dto->id) {
        free(simple_user_dto->id);
        simple_user_dto->id = NULL;
    }
    if (simple_user_dto->timestamp) {
        free(simple_user_dto->timestamp);
        simple_user_dto->timestamp = NULL;
    }
    if (simple_user_dto->full_name) {
        free(simple_user_dto->full_name);
        simple_user_dto->full_name = NULL;
    }
    if (simple_user_dto->qualified_name) {
        free(simple_user_dto->qualified_name);
        simple_user_dto->qualified_name = NULL;
    }
    if (simple_user_dto->public_name) {
        free(simple_user_dto->public_name);
        simple_user_dto->public_name = NULL;
    }
    if (simple_user_dto->handler) {
        free(simple_user_dto->handler);
        simple_user_dto->handler = NULL;
    }
    if (simple_user_dto->last_name) {
        free(simple_user_dto->last_name);
        simple_user_dto->last_name = NULL;
    }
    if (simple_user_dto->first_name) {
        free(simple_user_dto->first_name);
        simple_user_dto->first_name = NULL;
    }
    if (simple_user_dto->cover_url) {
        free(simple_user_dto->cover_url);
        simple_user_dto->cover_url = NULL;
    }
    if (simple_user_dto->avatar_url) {
        free(simple_user_dto->avatar_url);
        simple_user_dto->avatar_url = NULL;
    }
    if (simple_user_dto->git_hub_url) {
        free(simple_user_dto->git_hub_url);
        simple_user_dto->git_hub_url = NULL;
    }
    if (simple_user_dto->country_id) {
        free(simple_user_dto->country_id);
        simple_user_dto->country_id = NULL;
    }
    if (simple_user_dto->timezone_id) {
        free(simple_user_dto->timezone_id);
        simple_user_dto->timezone_id = NULL;
    }
    if (simple_user_dto->website_url) {
        free(simple_user_dto->website_url);
        simple_user_dto->website_url = NULL;
    }
    if (simple_user_dto->twitter_url) {
        free(simple_user_dto->twitter_url);
        simple_user_dto->twitter_url = NULL;
    }
    if (simple_user_dto->you_tube_url) {
        free(simple_user_dto->you_tube_url);
        simple_user_dto->you_tube_url = NULL;
    }
    if (simple_user_dto->linked_in_url) {
        free(simple_user_dto->linked_in_url);
        simple_user_dto->linked_in_url = NULL;
    }
    if (simple_user_dto->facebook_url) {
        free(simple_user_dto->facebook_url);
        simple_user_dto->facebook_url = NULL;
    }
    if (simple_user_dto->instagram_url) {
        free(simple_user_dto->instagram_url);
        simple_user_dto->instagram_url = NULL;
    }
    if (simple_user_dto->social_profile_id) {
        free(simple_user_dto->social_profile_id);
        simple_user_dto->social_profile_id = NULL;
    }
    free(simple_user_dto);
}

cJSON *simple_user_dto_convertToJSON(simple_user_dto_t *simple_user_dto) {
    cJSON *item = cJSON_CreateObject();

    // simple_user_dto->id
    if(simple_user_dto->id) {
    if(cJSON_AddStringToObject(item, "id", simple_user_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // simple_user_dto->timestamp
    if(simple_user_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", simple_user_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // simple_user_dto->full_name
    if(simple_user_dto->full_name) {
    if(cJSON_AddStringToObject(item, "fullName", simple_user_dto->full_name) == NULL) {
    goto fail; //String
    }
    }


    // simple_user_dto->qualified_name
    if(simple_user_dto->qualified_name) {
    if(cJSON_AddStringToObject(item, "qualifiedName", simple_user_dto->qualified_name) == NULL) {
    goto fail; //String
    }
    }


    // simple_user_dto->public_name
    if(simple_user_dto->public_name) {
    if(cJSON_AddStringToObject(item, "publicName", simple_user_dto->public_name) == NULL) {
    goto fail; //String
    }
    }


    // simple_user_dto->handler
    if(simple_user_dto->handler) {
    if(cJSON_AddStringToObject(item, "handler", simple_user_dto->handler) == NULL) {
    goto fail; //String
    }
    }


    // simple_user_dto->last_name
    if(simple_user_dto->last_name) {
    if(cJSON_AddStringToObject(item, "lastName", simple_user_dto->last_name) == NULL) {
    goto fail; //String
    }
    }


    // simple_user_dto->first_name
    if(simple_user_dto->first_name) {
    if(cJSON_AddStringToObject(item, "firstName", simple_user_dto->first_name) == NULL) {
    goto fail; //String
    }
    }


    // simple_user_dto->cover_url
    if(simple_user_dto->cover_url) {
    if(cJSON_AddStringToObject(item, "coverUrl", simple_user_dto->cover_url) == NULL) {
    goto fail; //String
    }
    }


    // simple_user_dto->avatar_url
    if(simple_user_dto->avatar_url) {
    if(cJSON_AddStringToObject(item, "avatarUrl", simple_user_dto->avatar_url) == NULL) {
    goto fail; //String
    }
    }


    // simple_user_dto->git_hub_url
    if(simple_user_dto->git_hub_url) {
    if(cJSON_AddStringToObject(item, "gitHubUrl", simple_user_dto->git_hub_url) == NULL) {
    goto fail; //String
    }
    }


    // simple_user_dto->country_id
    if(simple_user_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryId", simple_user_dto->country_id) == NULL) {
    goto fail; //String
    }
    }


    // simple_user_dto->timezone_id
    if(simple_user_dto->timezone_id) {
    if(cJSON_AddStringToObject(item, "timezoneId", simple_user_dto->timezone_id) == NULL) {
    goto fail; //String
    }
    }


    // simple_user_dto->website_url
    if(simple_user_dto->website_url) {
    if(cJSON_AddStringToObject(item, "websiteUrl", simple_user_dto->website_url) == NULL) {
    goto fail; //String
    }
    }


    // simple_user_dto->twitter_url
    if(simple_user_dto->twitter_url) {
    if(cJSON_AddStringToObject(item, "twitterUrl", simple_user_dto->twitter_url) == NULL) {
    goto fail; //String
    }
    }


    // simple_user_dto->you_tube_url
    if(simple_user_dto->you_tube_url) {
    if(cJSON_AddStringToObject(item, "youTubeUrl", simple_user_dto->you_tube_url) == NULL) {
    goto fail; //String
    }
    }


    // simple_user_dto->linked_in_url
    if(simple_user_dto->linked_in_url) {
    if(cJSON_AddStringToObject(item, "linkedInUrl", simple_user_dto->linked_in_url) == NULL) {
    goto fail; //String
    }
    }


    // simple_user_dto->facebook_url
    if(simple_user_dto->facebook_url) {
    if(cJSON_AddStringToObject(item, "facebookUrl", simple_user_dto->facebook_url) == NULL) {
    goto fail; //String
    }
    }


    // simple_user_dto->instagram_url
    if(simple_user_dto->instagram_url) {
    if(cJSON_AddStringToObject(item, "instagramUrl", simple_user_dto->instagram_url) == NULL) {
    goto fail; //String
    }
    }


    // simple_user_dto->social_profile_id
    if(simple_user_dto->social_profile_id) {
    if(cJSON_AddStringToObject(item, "socialProfileId", simple_user_dto->social_profile_id) == NULL) {
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

simple_user_dto_t *simple_user_dto_parseFromJSON(cJSON *simple_user_dtoJSON){

    simple_user_dto_t *simple_user_dto_local_var = NULL;

    // simple_user_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(simple_user_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // simple_user_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(simple_user_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // simple_user_dto->full_name
    cJSON *full_name = cJSON_GetObjectItemCaseSensitive(simple_user_dtoJSON, "fullName");
    if (full_name) { 
    if(!cJSON_IsString(full_name) && !cJSON_IsNull(full_name))
    {
    goto end; //String
    }
    }

    // simple_user_dto->qualified_name
    cJSON *qualified_name = cJSON_GetObjectItemCaseSensitive(simple_user_dtoJSON, "qualifiedName");
    if (qualified_name) { 
    if(!cJSON_IsString(qualified_name) && !cJSON_IsNull(qualified_name))
    {
    goto end; //String
    }
    }

    // simple_user_dto->public_name
    cJSON *public_name = cJSON_GetObjectItemCaseSensitive(simple_user_dtoJSON, "publicName");
    if (public_name) { 
    if(!cJSON_IsString(public_name) && !cJSON_IsNull(public_name))
    {
    goto end; //String
    }
    }

    // simple_user_dto->handler
    cJSON *handler = cJSON_GetObjectItemCaseSensitive(simple_user_dtoJSON, "handler");
    if (handler) { 
    if(!cJSON_IsString(handler) && !cJSON_IsNull(handler))
    {
    goto end; //String
    }
    }

    // simple_user_dto->last_name
    cJSON *last_name = cJSON_GetObjectItemCaseSensitive(simple_user_dtoJSON, "lastName");
    if (last_name) { 
    if(!cJSON_IsString(last_name) && !cJSON_IsNull(last_name))
    {
    goto end; //String
    }
    }

    // simple_user_dto->first_name
    cJSON *first_name = cJSON_GetObjectItemCaseSensitive(simple_user_dtoJSON, "firstName");
    if (first_name) { 
    if(!cJSON_IsString(first_name) && !cJSON_IsNull(first_name))
    {
    goto end; //String
    }
    }

    // simple_user_dto->cover_url
    cJSON *cover_url = cJSON_GetObjectItemCaseSensitive(simple_user_dtoJSON, "coverUrl");
    if (cover_url) { 
    if(!cJSON_IsString(cover_url) && !cJSON_IsNull(cover_url))
    {
    goto end; //String
    }
    }

    // simple_user_dto->avatar_url
    cJSON *avatar_url = cJSON_GetObjectItemCaseSensitive(simple_user_dtoJSON, "avatarUrl");
    if (avatar_url) { 
    if(!cJSON_IsString(avatar_url) && !cJSON_IsNull(avatar_url))
    {
    goto end; //String
    }
    }

    // simple_user_dto->git_hub_url
    cJSON *git_hub_url = cJSON_GetObjectItemCaseSensitive(simple_user_dtoJSON, "gitHubUrl");
    if (git_hub_url) { 
    if(!cJSON_IsString(git_hub_url) && !cJSON_IsNull(git_hub_url))
    {
    goto end; //String
    }
    }

    // simple_user_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(simple_user_dtoJSON, "countryId");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }

    // simple_user_dto->timezone_id
    cJSON *timezone_id = cJSON_GetObjectItemCaseSensitive(simple_user_dtoJSON, "timezoneId");
    if (timezone_id) { 
    if(!cJSON_IsString(timezone_id) && !cJSON_IsNull(timezone_id))
    {
    goto end; //String
    }
    }

    // simple_user_dto->website_url
    cJSON *website_url = cJSON_GetObjectItemCaseSensitive(simple_user_dtoJSON, "websiteUrl");
    if (website_url) { 
    if(!cJSON_IsString(website_url) && !cJSON_IsNull(website_url))
    {
    goto end; //String
    }
    }

    // simple_user_dto->twitter_url
    cJSON *twitter_url = cJSON_GetObjectItemCaseSensitive(simple_user_dtoJSON, "twitterUrl");
    if (twitter_url) { 
    if(!cJSON_IsString(twitter_url) && !cJSON_IsNull(twitter_url))
    {
    goto end; //String
    }
    }

    // simple_user_dto->you_tube_url
    cJSON *you_tube_url = cJSON_GetObjectItemCaseSensitive(simple_user_dtoJSON, "youTubeUrl");
    if (you_tube_url) { 
    if(!cJSON_IsString(you_tube_url) && !cJSON_IsNull(you_tube_url))
    {
    goto end; //String
    }
    }

    // simple_user_dto->linked_in_url
    cJSON *linked_in_url = cJSON_GetObjectItemCaseSensitive(simple_user_dtoJSON, "linkedInUrl");
    if (linked_in_url) { 
    if(!cJSON_IsString(linked_in_url) && !cJSON_IsNull(linked_in_url))
    {
    goto end; //String
    }
    }

    // simple_user_dto->facebook_url
    cJSON *facebook_url = cJSON_GetObjectItemCaseSensitive(simple_user_dtoJSON, "facebookUrl");
    if (facebook_url) { 
    if(!cJSON_IsString(facebook_url) && !cJSON_IsNull(facebook_url))
    {
    goto end; //String
    }
    }

    // simple_user_dto->instagram_url
    cJSON *instagram_url = cJSON_GetObjectItemCaseSensitive(simple_user_dtoJSON, "instagramUrl");
    if (instagram_url) { 
    if(!cJSON_IsString(instagram_url) && !cJSON_IsNull(instagram_url))
    {
    goto end; //String
    }
    }

    // simple_user_dto->social_profile_id
    cJSON *social_profile_id = cJSON_GetObjectItemCaseSensitive(simple_user_dtoJSON, "socialProfileId");
    if (social_profile_id) { 
    if(!cJSON_IsString(social_profile_id) && !cJSON_IsNull(social_profile_id))
    {
    goto end; //String
    }
    }


    simple_user_dto_local_var = simple_user_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        full_name && !cJSON_IsNull(full_name) ? strdup(full_name->valuestring) : NULL,
        qualified_name && !cJSON_IsNull(qualified_name) ? strdup(qualified_name->valuestring) : NULL,
        public_name && !cJSON_IsNull(public_name) ? strdup(public_name->valuestring) : NULL,
        handler && !cJSON_IsNull(handler) ? strdup(handler->valuestring) : NULL,
        last_name && !cJSON_IsNull(last_name) ? strdup(last_name->valuestring) : NULL,
        first_name && !cJSON_IsNull(first_name) ? strdup(first_name->valuestring) : NULL,
        cover_url && !cJSON_IsNull(cover_url) ? strdup(cover_url->valuestring) : NULL,
        avatar_url && !cJSON_IsNull(avatar_url) ? strdup(avatar_url->valuestring) : NULL,
        git_hub_url && !cJSON_IsNull(git_hub_url) ? strdup(git_hub_url->valuestring) : NULL,
        country_id && !cJSON_IsNull(country_id) ? strdup(country_id->valuestring) : NULL,
        timezone_id && !cJSON_IsNull(timezone_id) ? strdup(timezone_id->valuestring) : NULL,
        website_url && !cJSON_IsNull(website_url) ? strdup(website_url->valuestring) : NULL,
        twitter_url && !cJSON_IsNull(twitter_url) ? strdup(twitter_url->valuestring) : NULL,
        you_tube_url && !cJSON_IsNull(you_tube_url) ? strdup(you_tube_url->valuestring) : NULL,
        linked_in_url && !cJSON_IsNull(linked_in_url) ? strdup(linked_in_url->valuestring) : NULL,
        facebook_url && !cJSON_IsNull(facebook_url) ? strdup(facebook_url->valuestring) : NULL,
        instagram_url && !cJSON_IsNull(instagram_url) ? strdup(instagram_url->valuestring) : NULL,
        social_profile_id && !cJSON_IsNull(social_profile_id) ? strdup(social_profile_id->valuestring) : NULL
        );

    return simple_user_dto_local_var;
end:
    return NULL;

}
