#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "simple_contact_dto.h"


char* simple_contact_dto_type_ToString(invoicingservice_simple_contact_dto_TYPE_e type) {
    char* typeArray[] =  { "NULL", "Individual", "Organization" };
    return typeArray[type];
}

invoicingservice_simple_contact_dto_TYPE_e simple_contact_dto_type_FromString(char* type){
    int stringToReturn = 0;
    char *typeArray[] =  { "NULL", "Individual", "Organization" };
    size_t sizeofArray = sizeof(typeArray) / sizeof(typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(type, typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

simple_contact_dto_t *simple_contact_dto_create(
    char *id,
    char *timestamp,
    char *qualified_name,
    char *tenant_id,
    invoicingservice_simple_contact_dto_TYPE_e type,
    char *email,
    char *phone,
    char *public_name,
    char *first_name,
    char *last_name,
    char *job_title,
    char *cover_url,
    char *avatar_url,
    char *country_id,
    char *timezone_id,
    char *language_id,
    char *social_profile_id,
    char *web_url,
    char *git_hub_url,
    char *twitch_url,
    char *reddit_url,
    char *tik_tok_url,
    char *website_url,
    char *twitter_url,
    char *facebook_url,
    char *you_tube_url,
    char *linked_in_url,
    char *instagram_url,
    char *github_username
    ) {
    simple_contact_dto_t *simple_contact_dto_local_var = malloc(sizeof(simple_contact_dto_t));
    if (!simple_contact_dto_local_var) {
        return NULL;
    }
    simple_contact_dto_local_var->id = id;
    simple_contact_dto_local_var->timestamp = timestamp;
    simple_contact_dto_local_var->qualified_name = qualified_name;
    simple_contact_dto_local_var->tenant_id = tenant_id;
    simple_contact_dto_local_var->type = type;
    simple_contact_dto_local_var->email = email;
    simple_contact_dto_local_var->phone = phone;
    simple_contact_dto_local_var->public_name = public_name;
    simple_contact_dto_local_var->first_name = first_name;
    simple_contact_dto_local_var->last_name = last_name;
    simple_contact_dto_local_var->job_title = job_title;
    simple_contact_dto_local_var->cover_url = cover_url;
    simple_contact_dto_local_var->avatar_url = avatar_url;
    simple_contact_dto_local_var->country_id = country_id;
    simple_contact_dto_local_var->timezone_id = timezone_id;
    simple_contact_dto_local_var->language_id = language_id;
    simple_contact_dto_local_var->social_profile_id = social_profile_id;
    simple_contact_dto_local_var->web_url = web_url;
    simple_contact_dto_local_var->git_hub_url = git_hub_url;
    simple_contact_dto_local_var->twitch_url = twitch_url;
    simple_contact_dto_local_var->reddit_url = reddit_url;
    simple_contact_dto_local_var->tik_tok_url = tik_tok_url;
    simple_contact_dto_local_var->website_url = website_url;
    simple_contact_dto_local_var->twitter_url = twitter_url;
    simple_contact_dto_local_var->facebook_url = facebook_url;
    simple_contact_dto_local_var->you_tube_url = you_tube_url;
    simple_contact_dto_local_var->linked_in_url = linked_in_url;
    simple_contact_dto_local_var->instagram_url = instagram_url;
    simple_contact_dto_local_var->github_username = github_username;

    return simple_contact_dto_local_var;
}


void simple_contact_dto_free(simple_contact_dto_t *simple_contact_dto) {
    if(NULL == simple_contact_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (simple_contact_dto->id) {
        free(simple_contact_dto->id);
        simple_contact_dto->id = NULL;
    }
    if (simple_contact_dto->timestamp) {
        free(simple_contact_dto->timestamp);
        simple_contact_dto->timestamp = NULL;
    }
    if (simple_contact_dto->qualified_name) {
        free(simple_contact_dto->qualified_name);
        simple_contact_dto->qualified_name = NULL;
    }
    if (simple_contact_dto->tenant_id) {
        free(simple_contact_dto->tenant_id);
        simple_contact_dto->tenant_id = NULL;
    }
    if (simple_contact_dto->email) {
        free(simple_contact_dto->email);
        simple_contact_dto->email = NULL;
    }
    if (simple_contact_dto->phone) {
        free(simple_contact_dto->phone);
        simple_contact_dto->phone = NULL;
    }
    if (simple_contact_dto->public_name) {
        free(simple_contact_dto->public_name);
        simple_contact_dto->public_name = NULL;
    }
    if (simple_contact_dto->first_name) {
        free(simple_contact_dto->first_name);
        simple_contact_dto->first_name = NULL;
    }
    if (simple_contact_dto->last_name) {
        free(simple_contact_dto->last_name);
        simple_contact_dto->last_name = NULL;
    }
    if (simple_contact_dto->job_title) {
        free(simple_contact_dto->job_title);
        simple_contact_dto->job_title = NULL;
    }
    if (simple_contact_dto->cover_url) {
        free(simple_contact_dto->cover_url);
        simple_contact_dto->cover_url = NULL;
    }
    if (simple_contact_dto->avatar_url) {
        free(simple_contact_dto->avatar_url);
        simple_contact_dto->avatar_url = NULL;
    }
    if (simple_contact_dto->country_id) {
        free(simple_contact_dto->country_id);
        simple_contact_dto->country_id = NULL;
    }
    if (simple_contact_dto->timezone_id) {
        free(simple_contact_dto->timezone_id);
        simple_contact_dto->timezone_id = NULL;
    }
    if (simple_contact_dto->language_id) {
        free(simple_contact_dto->language_id);
        simple_contact_dto->language_id = NULL;
    }
    if (simple_contact_dto->social_profile_id) {
        free(simple_contact_dto->social_profile_id);
        simple_contact_dto->social_profile_id = NULL;
    }
    if (simple_contact_dto->web_url) {
        free(simple_contact_dto->web_url);
        simple_contact_dto->web_url = NULL;
    }
    if (simple_contact_dto->git_hub_url) {
        free(simple_contact_dto->git_hub_url);
        simple_contact_dto->git_hub_url = NULL;
    }
    if (simple_contact_dto->twitch_url) {
        free(simple_contact_dto->twitch_url);
        simple_contact_dto->twitch_url = NULL;
    }
    if (simple_contact_dto->reddit_url) {
        free(simple_contact_dto->reddit_url);
        simple_contact_dto->reddit_url = NULL;
    }
    if (simple_contact_dto->tik_tok_url) {
        free(simple_contact_dto->tik_tok_url);
        simple_contact_dto->tik_tok_url = NULL;
    }
    if (simple_contact_dto->website_url) {
        free(simple_contact_dto->website_url);
        simple_contact_dto->website_url = NULL;
    }
    if (simple_contact_dto->twitter_url) {
        free(simple_contact_dto->twitter_url);
        simple_contact_dto->twitter_url = NULL;
    }
    if (simple_contact_dto->facebook_url) {
        free(simple_contact_dto->facebook_url);
        simple_contact_dto->facebook_url = NULL;
    }
    if (simple_contact_dto->you_tube_url) {
        free(simple_contact_dto->you_tube_url);
        simple_contact_dto->you_tube_url = NULL;
    }
    if (simple_contact_dto->linked_in_url) {
        free(simple_contact_dto->linked_in_url);
        simple_contact_dto->linked_in_url = NULL;
    }
    if (simple_contact_dto->instagram_url) {
        free(simple_contact_dto->instagram_url);
        simple_contact_dto->instagram_url = NULL;
    }
    if (simple_contact_dto->github_username) {
        free(simple_contact_dto->github_username);
        simple_contact_dto->github_username = NULL;
    }
    free(simple_contact_dto);
}

cJSON *simple_contact_dto_convertToJSON(simple_contact_dto_t *simple_contact_dto) {
    cJSON *item = cJSON_CreateObject();

    // simple_contact_dto->id
    if(simple_contact_dto->id) {
    if(cJSON_AddStringToObject(item, "id", simple_contact_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // simple_contact_dto->timestamp
    if(simple_contact_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", simple_contact_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // simple_contact_dto->qualified_name
    if(simple_contact_dto->qualified_name) {
    if(cJSON_AddStringToObject(item, "qualifiedName", simple_contact_dto->qualified_name) == NULL) {
    goto fail; //String
    }
    }


    // simple_contact_dto->tenant_id
    if(simple_contact_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", simple_contact_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // simple_contact_dto->type
    if(simple_contact_dto->type != invoicingservice_simple_contact_dto_TYPE_NULL) {
    if(cJSON_AddStringToObject(item, "type", typesimple_contact_dto_ToString(simple_contact_dto->type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // simple_contact_dto->email
    if(simple_contact_dto->email) {
    if(cJSON_AddStringToObject(item, "email", simple_contact_dto->email) == NULL) {
    goto fail; //String
    }
    }


    // simple_contact_dto->phone
    if(simple_contact_dto->phone) {
    if(cJSON_AddStringToObject(item, "phone", simple_contact_dto->phone) == NULL) {
    goto fail; //String
    }
    }


    // simple_contact_dto->public_name
    if(simple_contact_dto->public_name) {
    if(cJSON_AddStringToObject(item, "publicName", simple_contact_dto->public_name) == NULL) {
    goto fail; //String
    }
    }


    // simple_contact_dto->first_name
    if(simple_contact_dto->first_name) {
    if(cJSON_AddStringToObject(item, "firstName", simple_contact_dto->first_name) == NULL) {
    goto fail; //String
    }
    }


    // simple_contact_dto->last_name
    if(simple_contact_dto->last_name) {
    if(cJSON_AddStringToObject(item, "lastName", simple_contact_dto->last_name) == NULL) {
    goto fail; //String
    }
    }


    // simple_contact_dto->job_title
    if(simple_contact_dto->job_title) {
    if(cJSON_AddStringToObject(item, "jobTitle", simple_contact_dto->job_title) == NULL) {
    goto fail; //String
    }
    }


    // simple_contact_dto->cover_url
    if(simple_contact_dto->cover_url) {
    if(cJSON_AddStringToObject(item, "coverUrl", simple_contact_dto->cover_url) == NULL) {
    goto fail; //String
    }
    }


    // simple_contact_dto->avatar_url
    if(simple_contact_dto->avatar_url) {
    if(cJSON_AddStringToObject(item, "avatarUrl", simple_contact_dto->avatar_url) == NULL) {
    goto fail; //String
    }
    }


    // simple_contact_dto->country_id
    if(simple_contact_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryId", simple_contact_dto->country_id) == NULL) {
    goto fail; //String
    }
    }


    // simple_contact_dto->timezone_id
    if(simple_contact_dto->timezone_id) {
    if(cJSON_AddStringToObject(item, "timezoneId", simple_contact_dto->timezone_id) == NULL) {
    goto fail; //String
    }
    }


    // simple_contact_dto->language_id
    if(simple_contact_dto->language_id) {
    if(cJSON_AddStringToObject(item, "languageId", simple_contact_dto->language_id) == NULL) {
    goto fail; //String
    }
    }


    // simple_contact_dto->social_profile_id
    if(simple_contact_dto->social_profile_id) {
    if(cJSON_AddStringToObject(item, "socialProfileId", simple_contact_dto->social_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // simple_contact_dto->web_url
    if(simple_contact_dto->web_url) {
    if(cJSON_AddStringToObject(item, "webUrl", simple_contact_dto->web_url) == NULL) {
    goto fail; //String
    }
    }


    // simple_contact_dto->git_hub_url
    if(simple_contact_dto->git_hub_url) {
    if(cJSON_AddStringToObject(item, "gitHubUrl", simple_contact_dto->git_hub_url) == NULL) {
    goto fail; //String
    }
    }


    // simple_contact_dto->twitch_url
    if(simple_contact_dto->twitch_url) {
    if(cJSON_AddStringToObject(item, "twitchUrl", simple_contact_dto->twitch_url) == NULL) {
    goto fail; //String
    }
    }


    // simple_contact_dto->reddit_url
    if(simple_contact_dto->reddit_url) {
    if(cJSON_AddStringToObject(item, "redditUrl", simple_contact_dto->reddit_url) == NULL) {
    goto fail; //String
    }
    }


    // simple_contact_dto->tik_tok_url
    if(simple_contact_dto->tik_tok_url) {
    if(cJSON_AddStringToObject(item, "tikTokUrl", simple_contact_dto->tik_tok_url) == NULL) {
    goto fail; //String
    }
    }


    // simple_contact_dto->website_url
    if(simple_contact_dto->website_url) {
    if(cJSON_AddStringToObject(item, "websiteUrl", simple_contact_dto->website_url) == NULL) {
    goto fail; //String
    }
    }


    // simple_contact_dto->twitter_url
    if(simple_contact_dto->twitter_url) {
    if(cJSON_AddStringToObject(item, "twitterUrl", simple_contact_dto->twitter_url) == NULL) {
    goto fail; //String
    }
    }


    // simple_contact_dto->facebook_url
    if(simple_contact_dto->facebook_url) {
    if(cJSON_AddStringToObject(item, "facebookUrl", simple_contact_dto->facebook_url) == NULL) {
    goto fail; //String
    }
    }


    // simple_contact_dto->you_tube_url
    if(simple_contact_dto->you_tube_url) {
    if(cJSON_AddStringToObject(item, "youTubeUrl", simple_contact_dto->you_tube_url) == NULL) {
    goto fail; //String
    }
    }


    // simple_contact_dto->linked_in_url
    if(simple_contact_dto->linked_in_url) {
    if(cJSON_AddStringToObject(item, "linkedInUrl", simple_contact_dto->linked_in_url) == NULL) {
    goto fail; //String
    }
    }


    // simple_contact_dto->instagram_url
    if(simple_contact_dto->instagram_url) {
    if(cJSON_AddStringToObject(item, "instagramUrl", simple_contact_dto->instagram_url) == NULL) {
    goto fail; //String
    }
    }


    // simple_contact_dto->github_username
    if(simple_contact_dto->github_username) {
    if(cJSON_AddStringToObject(item, "githubUsername", simple_contact_dto->github_username) == NULL) {
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

simple_contact_dto_t *simple_contact_dto_parseFromJSON(cJSON *simple_contact_dtoJSON){

    simple_contact_dto_t *simple_contact_dto_local_var = NULL;

    // simple_contact_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(simple_contact_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // simple_contact_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(simple_contact_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // simple_contact_dto->qualified_name
    cJSON *qualified_name = cJSON_GetObjectItemCaseSensitive(simple_contact_dtoJSON, "qualifiedName");
    if (qualified_name) { 
    if(!cJSON_IsString(qualified_name) && !cJSON_IsNull(qualified_name))
    {
    goto end; //String
    }
    }

    // simple_contact_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(simple_contact_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // simple_contact_dto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(simple_contact_dtoJSON, "type");
    invoicingservice_simple_contact_dto_TYPE_e typeVariable;
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //Enum
    }
    typeVariable = simple_contact_dto_type_FromString(type->valuestring);
    }

    // simple_contact_dto->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(simple_contact_dtoJSON, "email");
    if (email) { 
    if(!cJSON_IsString(email) && !cJSON_IsNull(email))
    {
    goto end; //String
    }
    }

    // simple_contact_dto->phone
    cJSON *phone = cJSON_GetObjectItemCaseSensitive(simple_contact_dtoJSON, "phone");
    if (phone) { 
    if(!cJSON_IsString(phone) && !cJSON_IsNull(phone))
    {
    goto end; //String
    }
    }

    // simple_contact_dto->public_name
    cJSON *public_name = cJSON_GetObjectItemCaseSensitive(simple_contact_dtoJSON, "publicName");
    if (public_name) { 
    if(!cJSON_IsString(public_name) && !cJSON_IsNull(public_name))
    {
    goto end; //String
    }
    }

    // simple_contact_dto->first_name
    cJSON *first_name = cJSON_GetObjectItemCaseSensitive(simple_contact_dtoJSON, "firstName");
    if (first_name) { 
    if(!cJSON_IsString(first_name) && !cJSON_IsNull(first_name))
    {
    goto end; //String
    }
    }

    // simple_contact_dto->last_name
    cJSON *last_name = cJSON_GetObjectItemCaseSensitive(simple_contact_dtoJSON, "lastName");
    if (last_name) { 
    if(!cJSON_IsString(last_name) && !cJSON_IsNull(last_name))
    {
    goto end; //String
    }
    }

    // simple_contact_dto->job_title
    cJSON *job_title = cJSON_GetObjectItemCaseSensitive(simple_contact_dtoJSON, "jobTitle");
    if (job_title) { 
    if(!cJSON_IsString(job_title) && !cJSON_IsNull(job_title))
    {
    goto end; //String
    }
    }

    // simple_contact_dto->cover_url
    cJSON *cover_url = cJSON_GetObjectItemCaseSensitive(simple_contact_dtoJSON, "coverUrl");
    if (cover_url) { 
    if(!cJSON_IsString(cover_url) && !cJSON_IsNull(cover_url))
    {
    goto end; //String
    }
    }

    // simple_contact_dto->avatar_url
    cJSON *avatar_url = cJSON_GetObjectItemCaseSensitive(simple_contact_dtoJSON, "avatarUrl");
    if (avatar_url) { 
    if(!cJSON_IsString(avatar_url) && !cJSON_IsNull(avatar_url))
    {
    goto end; //String
    }
    }

    // simple_contact_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(simple_contact_dtoJSON, "countryId");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }

    // simple_contact_dto->timezone_id
    cJSON *timezone_id = cJSON_GetObjectItemCaseSensitive(simple_contact_dtoJSON, "timezoneId");
    if (timezone_id) { 
    if(!cJSON_IsString(timezone_id) && !cJSON_IsNull(timezone_id))
    {
    goto end; //String
    }
    }

    // simple_contact_dto->language_id
    cJSON *language_id = cJSON_GetObjectItemCaseSensitive(simple_contact_dtoJSON, "languageId");
    if (language_id) { 
    if(!cJSON_IsString(language_id) && !cJSON_IsNull(language_id))
    {
    goto end; //String
    }
    }

    // simple_contact_dto->social_profile_id
    cJSON *social_profile_id = cJSON_GetObjectItemCaseSensitive(simple_contact_dtoJSON, "socialProfileId");
    if (social_profile_id) { 
    if(!cJSON_IsString(social_profile_id) && !cJSON_IsNull(social_profile_id))
    {
    goto end; //String
    }
    }

    // simple_contact_dto->web_url
    cJSON *web_url = cJSON_GetObjectItemCaseSensitive(simple_contact_dtoJSON, "webUrl");
    if (web_url) { 
    if(!cJSON_IsString(web_url) && !cJSON_IsNull(web_url))
    {
    goto end; //String
    }
    }

    // simple_contact_dto->git_hub_url
    cJSON *git_hub_url = cJSON_GetObjectItemCaseSensitive(simple_contact_dtoJSON, "gitHubUrl");
    if (git_hub_url) { 
    if(!cJSON_IsString(git_hub_url) && !cJSON_IsNull(git_hub_url))
    {
    goto end; //String
    }
    }

    // simple_contact_dto->twitch_url
    cJSON *twitch_url = cJSON_GetObjectItemCaseSensitive(simple_contact_dtoJSON, "twitchUrl");
    if (twitch_url) { 
    if(!cJSON_IsString(twitch_url) && !cJSON_IsNull(twitch_url))
    {
    goto end; //String
    }
    }

    // simple_contact_dto->reddit_url
    cJSON *reddit_url = cJSON_GetObjectItemCaseSensitive(simple_contact_dtoJSON, "redditUrl");
    if (reddit_url) { 
    if(!cJSON_IsString(reddit_url) && !cJSON_IsNull(reddit_url))
    {
    goto end; //String
    }
    }

    // simple_contact_dto->tik_tok_url
    cJSON *tik_tok_url = cJSON_GetObjectItemCaseSensitive(simple_contact_dtoJSON, "tikTokUrl");
    if (tik_tok_url) { 
    if(!cJSON_IsString(tik_tok_url) && !cJSON_IsNull(tik_tok_url))
    {
    goto end; //String
    }
    }

    // simple_contact_dto->website_url
    cJSON *website_url = cJSON_GetObjectItemCaseSensitive(simple_contact_dtoJSON, "websiteUrl");
    if (website_url) { 
    if(!cJSON_IsString(website_url) && !cJSON_IsNull(website_url))
    {
    goto end; //String
    }
    }

    // simple_contact_dto->twitter_url
    cJSON *twitter_url = cJSON_GetObjectItemCaseSensitive(simple_contact_dtoJSON, "twitterUrl");
    if (twitter_url) { 
    if(!cJSON_IsString(twitter_url) && !cJSON_IsNull(twitter_url))
    {
    goto end; //String
    }
    }

    // simple_contact_dto->facebook_url
    cJSON *facebook_url = cJSON_GetObjectItemCaseSensitive(simple_contact_dtoJSON, "facebookUrl");
    if (facebook_url) { 
    if(!cJSON_IsString(facebook_url) && !cJSON_IsNull(facebook_url))
    {
    goto end; //String
    }
    }

    // simple_contact_dto->you_tube_url
    cJSON *you_tube_url = cJSON_GetObjectItemCaseSensitive(simple_contact_dtoJSON, "youTubeUrl");
    if (you_tube_url) { 
    if(!cJSON_IsString(you_tube_url) && !cJSON_IsNull(you_tube_url))
    {
    goto end; //String
    }
    }

    // simple_contact_dto->linked_in_url
    cJSON *linked_in_url = cJSON_GetObjectItemCaseSensitive(simple_contact_dtoJSON, "linkedInUrl");
    if (linked_in_url) { 
    if(!cJSON_IsString(linked_in_url) && !cJSON_IsNull(linked_in_url))
    {
    goto end; //String
    }
    }

    // simple_contact_dto->instagram_url
    cJSON *instagram_url = cJSON_GetObjectItemCaseSensitive(simple_contact_dtoJSON, "instagramUrl");
    if (instagram_url) { 
    if(!cJSON_IsString(instagram_url) && !cJSON_IsNull(instagram_url))
    {
    goto end; //String
    }
    }

    // simple_contact_dto->github_username
    cJSON *github_username = cJSON_GetObjectItemCaseSensitive(simple_contact_dtoJSON, "githubUsername");
    if (github_username) { 
    if(!cJSON_IsString(github_username) && !cJSON_IsNull(github_username))
    {
    goto end; //String
    }
    }


    simple_contact_dto_local_var = simple_contact_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        qualified_name && !cJSON_IsNull(qualified_name) ? strdup(qualified_name->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        type ? typeVariable : invoicingservice_simple_contact_dto_TYPE_NULL,
        email && !cJSON_IsNull(email) ? strdup(email->valuestring) : NULL,
        phone && !cJSON_IsNull(phone) ? strdup(phone->valuestring) : NULL,
        public_name && !cJSON_IsNull(public_name) ? strdup(public_name->valuestring) : NULL,
        first_name && !cJSON_IsNull(first_name) ? strdup(first_name->valuestring) : NULL,
        last_name && !cJSON_IsNull(last_name) ? strdup(last_name->valuestring) : NULL,
        job_title && !cJSON_IsNull(job_title) ? strdup(job_title->valuestring) : NULL,
        cover_url && !cJSON_IsNull(cover_url) ? strdup(cover_url->valuestring) : NULL,
        avatar_url && !cJSON_IsNull(avatar_url) ? strdup(avatar_url->valuestring) : NULL,
        country_id && !cJSON_IsNull(country_id) ? strdup(country_id->valuestring) : NULL,
        timezone_id && !cJSON_IsNull(timezone_id) ? strdup(timezone_id->valuestring) : NULL,
        language_id && !cJSON_IsNull(language_id) ? strdup(language_id->valuestring) : NULL,
        social_profile_id && !cJSON_IsNull(social_profile_id) ? strdup(social_profile_id->valuestring) : NULL,
        web_url && !cJSON_IsNull(web_url) ? strdup(web_url->valuestring) : NULL,
        git_hub_url && !cJSON_IsNull(git_hub_url) ? strdup(git_hub_url->valuestring) : NULL,
        twitch_url && !cJSON_IsNull(twitch_url) ? strdup(twitch_url->valuestring) : NULL,
        reddit_url && !cJSON_IsNull(reddit_url) ? strdup(reddit_url->valuestring) : NULL,
        tik_tok_url && !cJSON_IsNull(tik_tok_url) ? strdup(tik_tok_url->valuestring) : NULL,
        website_url && !cJSON_IsNull(website_url) ? strdup(website_url->valuestring) : NULL,
        twitter_url && !cJSON_IsNull(twitter_url) ? strdup(twitter_url->valuestring) : NULL,
        facebook_url && !cJSON_IsNull(facebook_url) ? strdup(facebook_url->valuestring) : NULL,
        you_tube_url && !cJSON_IsNull(you_tube_url) ? strdup(you_tube_url->valuestring) : NULL,
        linked_in_url && !cJSON_IsNull(linked_in_url) ? strdup(linked_in_url->valuestring) : NULL,
        instagram_url && !cJSON_IsNull(instagram_url) ? strdup(instagram_url->valuestring) : NULL,
        github_username && !cJSON_IsNull(github_username) ? strdup(github_username->valuestring) : NULL
        );

    return simple_contact_dto_local_var;
end:
    return NULL;

}
