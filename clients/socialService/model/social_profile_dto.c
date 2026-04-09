#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "social_profile_dto.h"


char* social_profile_dto_type_ToString(socialservice_social_profile_dto_TYPE_e type) {
    char* typeArray[] =  { "NULL", "User", "Tenant", "Contact" };
    return typeArray[type];
}

socialservice_social_profile_dto_TYPE_e social_profile_dto_type_FromString(char* type){
    int stringToReturn = 0;
    char *typeArray[] =  { "NULL", "User", "Tenant", "Contact" };
    size_t sizeofArray = sizeof(typeArray) / sizeof(typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(type, typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

social_profile_dto_t *social_profile_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *about,
    char *cover,
    char *avatar,
    char *country_id,
    char *country_name,
    char *identity_id,
    int follows_count,
    int messages_count,
    int followers_count,
    int notifications_count,
    int unread_notifications_count,
    int unread_messages_count,
    socialservice_social_profile_dto_TYPE_e type,
    char *social_feed_id,
    char *twitter_url,
    char *facebook_url,
    char *linked_in_url,
    char *youtube_url,
    char *github_url,
    char *pinterest_url,
    char *dribble_url,
    char *domain,
    char *notes
    ) {
    social_profile_dto_t *social_profile_dto_local_var = malloc(sizeof(social_profile_dto_t));
    if (!social_profile_dto_local_var) {
        return NULL;
    }
    social_profile_dto_local_var->id = id;
    social_profile_dto_local_var->timestamp = timestamp;
    social_profile_dto_local_var->name = name;
    social_profile_dto_local_var->about = about;
    social_profile_dto_local_var->cover = cover;
    social_profile_dto_local_var->avatar = avatar;
    social_profile_dto_local_var->country_id = country_id;
    social_profile_dto_local_var->country_name = country_name;
    social_profile_dto_local_var->identity_id = identity_id;
    social_profile_dto_local_var->follows_count = follows_count;
    social_profile_dto_local_var->messages_count = messages_count;
    social_profile_dto_local_var->followers_count = followers_count;
    social_profile_dto_local_var->notifications_count = notifications_count;
    social_profile_dto_local_var->unread_notifications_count = unread_notifications_count;
    social_profile_dto_local_var->unread_messages_count = unread_messages_count;
    social_profile_dto_local_var->type = type;
    social_profile_dto_local_var->social_feed_id = social_feed_id;
    social_profile_dto_local_var->twitter_url = twitter_url;
    social_profile_dto_local_var->facebook_url = facebook_url;
    social_profile_dto_local_var->linked_in_url = linked_in_url;
    social_profile_dto_local_var->youtube_url = youtube_url;
    social_profile_dto_local_var->github_url = github_url;
    social_profile_dto_local_var->pinterest_url = pinterest_url;
    social_profile_dto_local_var->dribble_url = dribble_url;
    social_profile_dto_local_var->domain = domain;
    social_profile_dto_local_var->notes = notes;

    return social_profile_dto_local_var;
}


void social_profile_dto_free(social_profile_dto_t *social_profile_dto) {
    if(NULL == social_profile_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (social_profile_dto->id) {
        free(social_profile_dto->id);
        social_profile_dto->id = NULL;
    }
    if (social_profile_dto->timestamp) {
        free(social_profile_dto->timestamp);
        social_profile_dto->timestamp = NULL;
    }
    if (social_profile_dto->name) {
        free(social_profile_dto->name);
        social_profile_dto->name = NULL;
    }
    if (social_profile_dto->about) {
        free(social_profile_dto->about);
        social_profile_dto->about = NULL;
    }
    if (social_profile_dto->cover) {
        free(social_profile_dto->cover);
        social_profile_dto->cover = NULL;
    }
    if (social_profile_dto->avatar) {
        free(social_profile_dto->avatar);
        social_profile_dto->avatar = NULL;
    }
    if (social_profile_dto->country_id) {
        free(social_profile_dto->country_id);
        social_profile_dto->country_id = NULL;
    }
    if (social_profile_dto->country_name) {
        free(social_profile_dto->country_name);
        social_profile_dto->country_name = NULL;
    }
    if (social_profile_dto->identity_id) {
        free(social_profile_dto->identity_id);
        social_profile_dto->identity_id = NULL;
    }
    if (social_profile_dto->social_feed_id) {
        free(social_profile_dto->social_feed_id);
        social_profile_dto->social_feed_id = NULL;
    }
    if (social_profile_dto->twitter_url) {
        free(social_profile_dto->twitter_url);
        social_profile_dto->twitter_url = NULL;
    }
    if (social_profile_dto->facebook_url) {
        free(social_profile_dto->facebook_url);
        social_profile_dto->facebook_url = NULL;
    }
    if (social_profile_dto->linked_in_url) {
        free(social_profile_dto->linked_in_url);
        social_profile_dto->linked_in_url = NULL;
    }
    if (social_profile_dto->youtube_url) {
        free(social_profile_dto->youtube_url);
        social_profile_dto->youtube_url = NULL;
    }
    if (social_profile_dto->github_url) {
        free(social_profile_dto->github_url);
        social_profile_dto->github_url = NULL;
    }
    if (social_profile_dto->pinterest_url) {
        free(social_profile_dto->pinterest_url);
        social_profile_dto->pinterest_url = NULL;
    }
    if (social_profile_dto->dribble_url) {
        free(social_profile_dto->dribble_url);
        social_profile_dto->dribble_url = NULL;
    }
    if (social_profile_dto->domain) {
        free(social_profile_dto->domain);
        social_profile_dto->domain = NULL;
    }
    if (social_profile_dto->notes) {
        free(social_profile_dto->notes);
        social_profile_dto->notes = NULL;
    }
    free(social_profile_dto);
}

cJSON *social_profile_dto_convertToJSON(social_profile_dto_t *social_profile_dto) {
    cJSON *item = cJSON_CreateObject();

    // social_profile_dto->id
    if(social_profile_dto->id) {
    if(cJSON_AddStringToObject(item, "id", social_profile_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // social_profile_dto->timestamp
    if(social_profile_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", social_profile_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // social_profile_dto->name
    if(social_profile_dto->name) {
    if(cJSON_AddStringToObject(item, "name", social_profile_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // social_profile_dto->about
    if(social_profile_dto->about) {
    if(cJSON_AddStringToObject(item, "about", social_profile_dto->about) == NULL) {
    goto fail; //String
    }
    }


    // social_profile_dto->cover
    if(social_profile_dto->cover) {
    if(cJSON_AddStringToObject(item, "cover", social_profile_dto->cover) == NULL) {
    goto fail; //String
    }
    }


    // social_profile_dto->avatar
    if(social_profile_dto->avatar) {
    if(cJSON_AddStringToObject(item, "avatar", social_profile_dto->avatar) == NULL) {
    goto fail; //String
    }
    }


    // social_profile_dto->country_id
    if(social_profile_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryId", social_profile_dto->country_id) == NULL) {
    goto fail; //String
    }
    }


    // social_profile_dto->country_name
    if(social_profile_dto->country_name) {
    if(cJSON_AddStringToObject(item, "countryName", social_profile_dto->country_name) == NULL) {
    goto fail; //String
    }
    }


    // social_profile_dto->identity_id
    if(social_profile_dto->identity_id) {
    if(cJSON_AddStringToObject(item, "identityId", social_profile_dto->identity_id) == NULL) {
    goto fail; //String
    }
    }


    // social_profile_dto->follows_count
    if(social_profile_dto->follows_count) {
    if(cJSON_AddNumberToObject(item, "followsCount", social_profile_dto->follows_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // social_profile_dto->messages_count
    if(social_profile_dto->messages_count) {
    if(cJSON_AddNumberToObject(item, "messagesCount", social_profile_dto->messages_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // social_profile_dto->followers_count
    if(social_profile_dto->followers_count) {
    if(cJSON_AddNumberToObject(item, "followersCount", social_profile_dto->followers_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // social_profile_dto->notifications_count
    if(social_profile_dto->notifications_count) {
    if(cJSON_AddNumberToObject(item, "notificationsCount", social_profile_dto->notifications_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // social_profile_dto->unread_notifications_count
    if(social_profile_dto->unread_notifications_count) {
    if(cJSON_AddNumberToObject(item, "unreadNotificationsCount", social_profile_dto->unread_notifications_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // social_profile_dto->unread_messages_count
    if(social_profile_dto->unread_messages_count) {
    if(cJSON_AddNumberToObject(item, "unreadMessagesCount", social_profile_dto->unread_messages_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // social_profile_dto->type
    if(social_profile_dto->type != socialservice_social_profile_dto_TYPE_NULL) {
    if(cJSON_AddStringToObject(item, "type", typesocial_profile_dto_ToString(social_profile_dto->type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // social_profile_dto->social_feed_id
    if(social_profile_dto->social_feed_id) {
    if(cJSON_AddStringToObject(item, "socialFeedId", social_profile_dto->social_feed_id) == NULL) {
    goto fail; //String
    }
    }


    // social_profile_dto->twitter_url
    if(social_profile_dto->twitter_url) {
    if(cJSON_AddStringToObject(item, "twitterUrl", social_profile_dto->twitter_url) == NULL) {
    goto fail; //String
    }
    }


    // social_profile_dto->facebook_url
    if(social_profile_dto->facebook_url) {
    if(cJSON_AddStringToObject(item, "facebookURL", social_profile_dto->facebook_url) == NULL) {
    goto fail; //String
    }
    }


    // social_profile_dto->linked_in_url
    if(social_profile_dto->linked_in_url) {
    if(cJSON_AddStringToObject(item, "linkedInURL", social_profile_dto->linked_in_url) == NULL) {
    goto fail; //String
    }
    }


    // social_profile_dto->youtube_url
    if(social_profile_dto->youtube_url) {
    if(cJSON_AddStringToObject(item, "youtubeURL", social_profile_dto->youtube_url) == NULL) {
    goto fail; //String
    }
    }


    // social_profile_dto->github_url
    if(social_profile_dto->github_url) {
    if(cJSON_AddStringToObject(item, "githubURL", social_profile_dto->github_url) == NULL) {
    goto fail; //String
    }
    }


    // social_profile_dto->pinterest_url
    if(social_profile_dto->pinterest_url) {
    if(cJSON_AddStringToObject(item, "pinterestURL", social_profile_dto->pinterest_url) == NULL) {
    goto fail; //String
    }
    }


    // social_profile_dto->dribble_url
    if(social_profile_dto->dribble_url) {
    if(cJSON_AddStringToObject(item, "dribbleURL", social_profile_dto->dribble_url) == NULL) {
    goto fail; //String
    }
    }


    // social_profile_dto->domain
    if(social_profile_dto->domain) {
    if(cJSON_AddStringToObject(item, "domain", social_profile_dto->domain) == NULL) {
    goto fail; //String
    }
    }


    // social_profile_dto->notes
    if(social_profile_dto->notes) {
    if(cJSON_AddStringToObject(item, "notes", social_profile_dto->notes) == NULL) {
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

social_profile_dto_t *social_profile_dto_parseFromJSON(cJSON *social_profile_dtoJSON){

    social_profile_dto_t *social_profile_dto_local_var = NULL;

    // social_profile_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(social_profile_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // social_profile_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(social_profile_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // social_profile_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(social_profile_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // social_profile_dto->about
    cJSON *about = cJSON_GetObjectItemCaseSensitive(social_profile_dtoJSON, "about");
    if (about) { 
    if(!cJSON_IsString(about) && !cJSON_IsNull(about))
    {
    goto end; //String
    }
    }

    // social_profile_dto->cover
    cJSON *cover = cJSON_GetObjectItemCaseSensitive(social_profile_dtoJSON, "cover");
    if (cover) { 
    if(!cJSON_IsString(cover) && !cJSON_IsNull(cover))
    {
    goto end; //String
    }
    }

    // social_profile_dto->avatar
    cJSON *avatar = cJSON_GetObjectItemCaseSensitive(social_profile_dtoJSON, "avatar");
    if (avatar) { 
    if(!cJSON_IsString(avatar) && !cJSON_IsNull(avatar))
    {
    goto end; //String
    }
    }

    // social_profile_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(social_profile_dtoJSON, "countryId");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }

    // social_profile_dto->country_name
    cJSON *country_name = cJSON_GetObjectItemCaseSensitive(social_profile_dtoJSON, "countryName");
    if (country_name) { 
    if(!cJSON_IsString(country_name) && !cJSON_IsNull(country_name))
    {
    goto end; //String
    }
    }

    // social_profile_dto->identity_id
    cJSON *identity_id = cJSON_GetObjectItemCaseSensitive(social_profile_dtoJSON, "identityId");
    if (identity_id) { 
    if(!cJSON_IsString(identity_id) && !cJSON_IsNull(identity_id))
    {
    goto end; //String
    }
    }

    // social_profile_dto->follows_count
    cJSON *follows_count = cJSON_GetObjectItemCaseSensitive(social_profile_dtoJSON, "followsCount");
    if (follows_count) { 
    if(!cJSON_IsNumber(follows_count))
    {
    goto end; //Numeric
    }
    }

    // social_profile_dto->messages_count
    cJSON *messages_count = cJSON_GetObjectItemCaseSensitive(social_profile_dtoJSON, "messagesCount");
    if (messages_count) { 
    if(!cJSON_IsNumber(messages_count))
    {
    goto end; //Numeric
    }
    }

    // social_profile_dto->followers_count
    cJSON *followers_count = cJSON_GetObjectItemCaseSensitive(social_profile_dtoJSON, "followersCount");
    if (followers_count) { 
    if(!cJSON_IsNumber(followers_count))
    {
    goto end; //Numeric
    }
    }

    // social_profile_dto->notifications_count
    cJSON *notifications_count = cJSON_GetObjectItemCaseSensitive(social_profile_dtoJSON, "notificationsCount");
    if (notifications_count) { 
    if(!cJSON_IsNumber(notifications_count))
    {
    goto end; //Numeric
    }
    }

    // social_profile_dto->unread_notifications_count
    cJSON *unread_notifications_count = cJSON_GetObjectItemCaseSensitive(social_profile_dtoJSON, "unreadNotificationsCount");
    if (unread_notifications_count) { 
    if(!cJSON_IsNumber(unread_notifications_count))
    {
    goto end; //Numeric
    }
    }

    // social_profile_dto->unread_messages_count
    cJSON *unread_messages_count = cJSON_GetObjectItemCaseSensitive(social_profile_dtoJSON, "unreadMessagesCount");
    if (unread_messages_count) { 
    if(!cJSON_IsNumber(unread_messages_count))
    {
    goto end; //Numeric
    }
    }

    // social_profile_dto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(social_profile_dtoJSON, "type");
    socialservice_social_profile_dto_TYPE_e typeVariable;
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //Enum
    }
    typeVariable = social_profile_dto_type_FromString(type->valuestring);
    }

    // social_profile_dto->social_feed_id
    cJSON *social_feed_id = cJSON_GetObjectItemCaseSensitive(social_profile_dtoJSON, "socialFeedId");
    if (social_feed_id) { 
    if(!cJSON_IsString(social_feed_id) && !cJSON_IsNull(social_feed_id))
    {
    goto end; //String
    }
    }

    // social_profile_dto->twitter_url
    cJSON *twitter_url = cJSON_GetObjectItemCaseSensitive(social_profile_dtoJSON, "twitterUrl");
    if (twitter_url) { 
    if(!cJSON_IsString(twitter_url) && !cJSON_IsNull(twitter_url))
    {
    goto end; //String
    }
    }

    // social_profile_dto->facebook_url
    cJSON *facebook_url = cJSON_GetObjectItemCaseSensitive(social_profile_dtoJSON, "facebookURL");
    if (facebook_url) { 
    if(!cJSON_IsString(facebook_url) && !cJSON_IsNull(facebook_url))
    {
    goto end; //String
    }
    }

    // social_profile_dto->linked_in_url
    cJSON *linked_in_url = cJSON_GetObjectItemCaseSensitive(social_profile_dtoJSON, "linkedInURL");
    if (linked_in_url) { 
    if(!cJSON_IsString(linked_in_url) && !cJSON_IsNull(linked_in_url))
    {
    goto end; //String
    }
    }

    // social_profile_dto->youtube_url
    cJSON *youtube_url = cJSON_GetObjectItemCaseSensitive(social_profile_dtoJSON, "youtubeURL");
    if (youtube_url) { 
    if(!cJSON_IsString(youtube_url) && !cJSON_IsNull(youtube_url))
    {
    goto end; //String
    }
    }

    // social_profile_dto->github_url
    cJSON *github_url = cJSON_GetObjectItemCaseSensitive(social_profile_dtoJSON, "githubURL");
    if (github_url) { 
    if(!cJSON_IsString(github_url) && !cJSON_IsNull(github_url))
    {
    goto end; //String
    }
    }

    // social_profile_dto->pinterest_url
    cJSON *pinterest_url = cJSON_GetObjectItemCaseSensitive(social_profile_dtoJSON, "pinterestURL");
    if (pinterest_url) { 
    if(!cJSON_IsString(pinterest_url) && !cJSON_IsNull(pinterest_url))
    {
    goto end; //String
    }
    }

    // social_profile_dto->dribble_url
    cJSON *dribble_url = cJSON_GetObjectItemCaseSensitive(social_profile_dtoJSON, "dribbleURL");
    if (dribble_url) { 
    if(!cJSON_IsString(dribble_url) && !cJSON_IsNull(dribble_url))
    {
    goto end; //String
    }
    }

    // social_profile_dto->domain
    cJSON *domain = cJSON_GetObjectItemCaseSensitive(social_profile_dtoJSON, "domain");
    if (domain) { 
    if(!cJSON_IsString(domain) && !cJSON_IsNull(domain))
    {
    goto end; //String
    }
    }

    // social_profile_dto->notes
    cJSON *notes = cJSON_GetObjectItemCaseSensitive(social_profile_dtoJSON, "notes");
    if (notes) { 
    if(!cJSON_IsString(notes) && !cJSON_IsNull(notes))
    {
    goto end; //String
    }
    }


    social_profile_dto_local_var = social_profile_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        about && !cJSON_IsNull(about) ? strdup(about->valuestring) : NULL,
        cover && !cJSON_IsNull(cover) ? strdup(cover->valuestring) : NULL,
        avatar && !cJSON_IsNull(avatar) ? strdup(avatar->valuestring) : NULL,
        country_id && !cJSON_IsNull(country_id) ? strdup(country_id->valuestring) : NULL,
        country_name && !cJSON_IsNull(country_name) ? strdup(country_name->valuestring) : NULL,
        identity_id && !cJSON_IsNull(identity_id) ? strdup(identity_id->valuestring) : NULL,
        follows_count ? follows_count->valuedouble : 0,
        messages_count ? messages_count->valuedouble : 0,
        followers_count ? followers_count->valuedouble : 0,
        notifications_count ? notifications_count->valuedouble : 0,
        unread_notifications_count ? unread_notifications_count->valuedouble : 0,
        unread_messages_count ? unread_messages_count->valuedouble : 0,
        type ? typeVariable : socialservice_social_profile_dto_TYPE_NULL,
        social_feed_id && !cJSON_IsNull(social_feed_id) ? strdup(social_feed_id->valuestring) : NULL,
        twitter_url && !cJSON_IsNull(twitter_url) ? strdup(twitter_url->valuestring) : NULL,
        facebook_url && !cJSON_IsNull(facebook_url) ? strdup(facebook_url->valuestring) : NULL,
        linked_in_url && !cJSON_IsNull(linked_in_url) ? strdup(linked_in_url->valuestring) : NULL,
        youtube_url && !cJSON_IsNull(youtube_url) ? strdup(youtube_url->valuestring) : NULL,
        github_url && !cJSON_IsNull(github_url) ? strdup(github_url->valuestring) : NULL,
        pinterest_url && !cJSON_IsNull(pinterest_url) ? strdup(pinterest_url->valuestring) : NULL,
        dribble_url && !cJSON_IsNull(dribble_url) ? strdup(dribble_url->valuestring) : NULL,
        domain && !cJSON_IsNull(domain) ? strdup(domain->valuestring) : NULL,
        notes && !cJSON_IsNull(notes) ? strdup(notes->valuestring) : NULL
        );

    return social_profile_dto_local_var;
end:
    return NULL;

}
