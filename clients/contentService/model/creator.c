#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "creator.h"



creator_t *creator_create(
    char *name,
    char *organization,
    char *twitter_handler,
    char *git_hub_username,
    char *facebook_username
    ) {
    creator_t *creator_local_var = malloc(sizeof(creator_t));
    if (!creator_local_var) {
        return NULL;
    }
    creator_local_var->name = name;
    creator_local_var->organization = organization;
    creator_local_var->twitter_handler = twitter_handler;
    creator_local_var->git_hub_username = git_hub_username;
    creator_local_var->facebook_username = facebook_username;

    return creator_local_var;
}


void creator_free(creator_t *creator) {
    if(NULL == creator){
        return ;
    }
    listEntry_t *listEntry;
    if (creator->name) {
        free(creator->name);
        creator->name = NULL;
    }
    if (creator->organization) {
        free(creator->organization);
        creator->organization = NULL;
    }
    if (creator->twitter_handler) {
        free(creator->twitter_handler);
        creator->twitter_handler = NULL;
    }
    if (creator->git_hub_username) {
        free(creator->git_hub_username);
        creator->git_hub_username = NULL;
    }
    if (creator->facebook_username) {
        free(creator->facebook_username);
        creator->facebook_username = NULL;
    }
    free(creator);
}

cJSON *creator_convertToJSON(creator_t *creator) {
    cJSON *item = cJSON_CreateObject();

    // creator->name
    if(creator->name) {
    if(cJSON_AddStringToObject(item, "name", creator->name) == NULL) {
    goto fail; //String
    }
    }


    // creator->organization
    if(creator->organization) {
    if(cJSON_AddStringToObject(item, "organization", creator->organization) == NULL) {
    goto fail; //String
    }
    }


    // creator->twitter_handler
    if(creator->twitter_handler) {
    if(cJSON_AddStringToObject(item, "twitterHandler", creator->twitter_handler) == NULL) {
    goto fail; //String
    }
    }


    // creator->git_hub_username
    if(creator->git_hub_username) {
    if(cJSON_AddStringToObject(item, "gitHubUsername", creator->git_hub_username) == NULL) {
    goto fail; //String
    }
    }


    // creator->facebook_username
    if(creator->facebook_username) {
    if(cJSON_AddStringToObject(item, "facebookUsername", creator->facebook_username) == NULL) {
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

creator_t *creator_parseFromJSON(cJSON *creatorJSON){

    creator_t *creator_local_var = NULL;

    // creator->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(creatorJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // creator->organization
    cJSON *organization = cJSON_GetObjectItemCaseSensitive(creatorJSON, "organization");
    if (organization) { 
    if(!cJSON_IsString(organization) && !cJSON_IsNull(organization))
    {
    goto end; //String
    }
    }

    // creator->twitter_handler
    cJSON *twitter_handler = cJSON_GetObjectItemCaseSensitive(creatorJSON, "twitterHandler");
    if (twitter_handler) { 
    if(!cJSON_IsString(twitter_handler) && !cJSON_IsNull(twitter_handler))
    {
    goto end; //String
    }
    }

    // creator->git_hub_username
    cJSON *git_hub_username = cJSON_GetObjectItemCaseSensitive(creatorJSON, "gitHubUsername");
    if (git_hub_username) { 
    if(!cJSON_IsString(git_hub_username) && !cJSON_IsNull(git_hub_username))
    {
    goto end; //String
    }
    }

    // creator->facebook_username
    cJSON *facebook_username = cJSON_GetObjectItemCaseSensitive(creatorJSON, "facebookUsername");
    if (facebook_username) { 
    if(!cJSON_IsString(facebook_username) && !cJSON_IsNull(facebook_username))
    {
    goto end; //String
    }
    }


    creator_local_var = creator_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        organization && !cJSON_IsNull(organization) ? strdup(organization->valuestring) : NULL,
        twitter_handler && !cJSON_IsNull(twitter_handler) ? strdup(twitter_handler->valuestring) : NULL,
        git_hub_username && !cJSON_IsNull(git_hub_username) ? strdup(git_hub_username->valuestring) : NULL,
        facebook_username && !cJSON_IsNull(facebook_username) ? strdup(facebook_username->valuestring) : NULL
        );

    return creator_local_var;
end:
    return NULL;

}
