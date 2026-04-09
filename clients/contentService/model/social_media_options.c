#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "social_media_options.h"



social_media_options_t *social_media_options_create(
    char *facebook_page_url,
    char *twitter_username,
    char *instagram_url,
    char *linked_in_url,
    char *my_space_url,
    char *pinterest_url,
    char *you_tube_url,
    char *github_url,
    char *reddit_url,
    char *whats_app_number,
    char *wikipedia_url
    ) {
    social_media_options_t *social_media_options_local_var = malloc(sizeof(social_media_options_t));
    if (!social_media_options_local_var) {
        return NULL;
    }
    social_media_options_local_var->facebook_page_url = facebook_page_url;
    social_media_options_local_var->twitter_username = twitter_username;
    social_media_options_local_var->instagram_url = instagram_url;
    social_media_options_local_var->linked_in_url = linked_in_url;
    social_media_options_local_var->my_space_url = my_space_url;
    social_media_options_local_var->pinterest_url = pinterest_url;
    social_media_options_local_var->you_tube_url = you_tube_url;
    social_media_options_local_var->github_url = github_url;
    social_media_options_local_var->reddit_url = reddit_url;
    social_media_options_local_var->whats_app_number = whats_app_number;
    social_media_options_local_var->wikipedia_url = wikipedia_url;

    return social_media_options_local_var;
}


void social_media_options_free(social_media_options_t *social_media_options) {
    if(NULL == social_media_options){
        return ;
    }
    listEntry_t *listEntry;
    if (social_media_options->facebook_page_url) {
        free(social_media_options->facebook_page_url);
        social_media_options->facebook_page_url = NULL;
    }
    if (social_media_options->twitter_username) {
        free(social_media_options->twitter_username);
        social_media_options->twitter_username = NULL;
    }
    if (social_media_options->instagram_url) {
        free(social_media_options->instagram_url);
        social_media_options->instagram_url = NULL;
    }
    if (social_media_options->linked_in_url) {
        free(social_media_options->linked_in_url);
        social_media_options->linked_in_url = NULL;
    }
    if (social_media_options->my_space_url) {
        free(social_media_options->my_space_url);
        social_media_options->my_space_url = NULL;
    }
    if (social_media_options->pinterest_url) {
        free(social_media_options->pinterest_url);
        social_media_options->pinterest_url = NULL;
    }
    if (social_media_options->you_tube_url) {
        free(social_media_options->you_tube_url);
        social_media_options->you_tube_url = NULL;
    }
    if (social_media_options->github_url) {
        free(social_media_options->github_url);
        social_media_options->github_url = NULL;
    }
    if (social_media_options->reddit_url) {
        free(social_media_options->reddit_url);
        social_media_options->reddit_url = NULL;
    }
    if (social_media_options->whats_app_number) {
        free(social_media_options->whats_app_number);
        social_media_options->whats_app_number = NULL;
    }
    if (social_media_options->wikipedia_url) {
        free(social_media_options->wikipedia_url);
        social_media_options->wikipedia_url = NULL;
    }
    free(social_media_options);
}

cJSON *social_media_options_convertToJSON(social_media_options_t *social_media_options) {
    cJSON *item = cJSON_CreateObject();

    // social_media_options->facebook_page_url
    if(social_media_options->facebook_page_url) {
    if(cJSON_AddStringToObject(item, "facebookPageUrl", social_media_options->facebook_page_url) == NULL) {
    goto fail; //String
    }
    }


    // social_media_options->twitter_username
    if(social_media_options->twitter_username) {
    if(cJSON_AddStringToObject(item, "twitterUsername", social_media_options->twitter_username) == NULL) {
    goto fail; //String
    }
    }


    // social_media_options->instagram_url
    if(social_media_options->instagram_url) {
    if(cJSON_AddStringToObject(item, "instagramUrl", social_media_options->instagram_url) == NULL) {
    goto fail; //String
    }
    }


    // social_media_options->linked_in_url
    if(social_media_options->linked_in_url) {
    if(cJSON_AddStringToObject(item, "linkedInURL", social_media_options->linked_in_url) == NULL) {
    goto fail; //String
    }
    }


    // social_media_options->my_space_url
    if(social_media_options->my_space_url) {
    if(cJSON_AddStringToObject(item, "mySpaceURL", social_media_options->my_space_url) == NULL) {
    goto fail; //String
    }
    }


    // social_media_options->pinterest_url
    if(social_media_options->pinterest_url) {
    if(cJSON_AddStringToObject(item, "pinterestURL", social_media_options->pinterest_url) == NULL) {
    goto fail; //String
    }
    }


    // social_media_options->you_tube_url
    if(social_media_options->you_tube_url) {
    if(cJSON_AddStringToObject(item, "youTubeURL", social_media_options->you_tube_url) == NULL) {
    goto fail; //String
    }
    }


    // social_media_options->github_url
    if(social_media_options->github_url) {
    if(cJSON_AddStringToObject(item, "githubURL", social_media_options->github_url) == NULL) {
    goto fail; //String
    }
    }


    // social_media_options->reddit_url
    if(social_media_options->reddit_url) {
    if(cJSON_AddStringToObject(item, "redditURL", social_media_options->reddit_url) == NULL) {
    goto fail; //String
    }
    }


    // social_media_options->whats_app_number
    if(social_media_options->whats_app_number) {
    if(cJSON_AddStringToObject(item, "whatsAppNumber", social_media_options->whats_app_number) == NULL) {
    goto fail; //String
    }
    }


    // social_media_options->wikipedia_url
    if(social_media_options->wikipedia_url) {
    if(cJSON_AddStringToObject(item, "wikipediaUrl", social_media_options->wikipedia_url) == NULL) {
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

social_media_options_t *social_media_options_parseFromJSON(cJSON *social_media_optionsJSON){

    social_media_options_t *social_media_options_local_var = NULL;

    // social_media_options->facebook_page_url
    cJSON *facebook_page_url = cJSON_GetObjectItemCaseSensitive(social_media_optionsJSON, "facebookPageUrl");
    if (facebook_page_url) { 
    if(!cJSON_IsString(facebook_page_url) && !cJSON_IsNull(facebook_page_url))
    {
    goto end; //String
    }
    }

    // social_media_options->twitter_username
    cJSON *twitter_username = cJSON_GetObjectItemCaseSensitive(social_media_optionsJSON, "twitterUsername");
    if (twitter_username) { 
    if(!cJSON_IsString(twitter_username) && !cJSON_IsNull(twitter_username))
    {
    goto end; //String
    }
    }

    // social_media_options->instagram_url
    cJSON *instagram_url = cJSON_GetObjectItemCaseSensitive(social_media_optionsJSON, "instagramUrl");
    if (instagram_url) { 
    if(!cJSON_IsString(instagram_url) && !cJSON_IsNull(instagram_url))
    {
    goto end; //String
    }
    }

    // social_media_options->linked_in_url
    cJSON *linked_in_url = cJSON_GetObjectItemCaseSensitive(social_media_optionsJSON, "linkedInURL");
    if (linked_in_url) { 
    if(!cJSON_IsString(linked_in_url) && !cJSON_IsNull(linked_in_url))
    {
    goto end; //String
    }
    }

    // social_media_options->my_space_url
    cJSON *my_space_url = cJSON_GetObjectItemCaseSensitive(social_media_optionsJSON, "mySpaceURL");
    if (my_space_url) { 
    if(!cJSON_IsString(my_space_url) && !cJSON_IsNull(my_space_url))
    {
    goto end; //String
    }
    }

    // social_media_options->pinterest_url
    cJSON *pinterest_url = cJSON_GetObjectItemCaseSensitive(social_media_optionsJSON, "pinterestURL");
    if (pinterest_url) { 
    if(!cJSON_IsString(pinterest_url) && !cJSON_IsNull(pinterest_url))
    {
    goto end; //String
    }
    }

    // social_media_options->you_tube_url
    cJSON *you_tube_url = cJSON_GetObjectItemCaseSensitive(social_media_optionsJSON, "youTubeURL");
    if (you_tube_url) { 
    if(!cJSON_IsString(you_tube_url) && !cJSON_IsNull(you_tube_url))
    {
    goto end; //String
    }
    }

    // social_media_options->github_url
    cJSON *github_url = cJSON_GetObjectItemCaseSensitive(social_media_optionsJSON, "githubURL");
    if (github_url) { 
    if(!cJSON_IsString(github_url) && !cJSON_IsNull(github_url))
    {
    goto end; //String
    }
    }

    // social_media_options->reddit_url
    cJSON *reddit_url = cJSON_GetObjectItemCaseSensitive(social_media_optionsJSON, "redditURL");
    if (reddit_url) { 
    if(!cJSON_IsString(reddit_url) && !cJSON_IsNull(reddit_url))
    {
    goto end; //String
    }
    }

    // social_media_options->whats_app_number
    cJSON *whats_app_number = cJSON_GetObjectItemCaseSensitive(social_media_optionsJSON, "whatsAppNumber");
    if (whats_app_number) { 
    if(!cJSON_IsString(whats_app_number) && !cJSON_IsNull(whats_app_number))
    {
    goto end; //String
    }
    }

    // social_media_options->wikipedia_url
    cJSON *wikipedia_url = cJSON_GetObjectItemCaseSensitive(social_media_optionsJSON, "wikipediaUrl");
    if (wikipedia_url) { 
    if(!cJSON_IsString(wikipedia_url) && !cJSON_IsNull(wikipedia_url))
    {
    goto end; //String
    }
    }


    social_media_options_local_var = social_media_options_create (
        facebook_page_url && !cJSON_IsNull(facebook_page_url) ? strdup(facebook_page_url->valuestring) : NULL,
        twitter_username && !cJSON_IsNull(twitter_username) ? strdup(twitter_username->valuestring) : NULL,
        instagram_url && !cJSON_IsNull(instagram_url) ? strdup(instagram_url->valuestring) : NULL,
        linked_in_url && !cJSON_IsNull(linked_in_url) ? strdup(linked_in_url->valuestring) : NULL,
        my_space_url && !cJSON_IsNull(my_space_url) ? strdup(my_space_url->valuestring) : NULL,
        pinterest_url && !cJSON_IsNull(pinterest_url) ? strdup(pinterest_url->valuestring) : NULL,
        you_tube_url && !cJSON_IsNull(you_tube_url) ? strdup(you_tube_url->valuestring) : NULL,
        github_url && !cJSON_IsNull(github_url) ? strdup(github_url->valuestring) : NULL,
        reddit_url && !cJSON_IsNull(reddit_url) ? strdup(reddit_url->valuestring) : NULL,
        whats_app_number && !cJSON_IsNull(whats_app_number) ? strdup(whats_app_number->valuestring) : NULL,
        wikipedia_url && !cJSON_IsNull(wikipedia_url) ? strdup(wikipedia_url->valuestring) : NULL
        );

    return social_media_options_local_var;
end:
    return NULL;

}
