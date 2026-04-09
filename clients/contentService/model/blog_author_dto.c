#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "blog_author_dto.h"


char* blog_author_dto_gender_ToString(contentservice_blog_author_dto_GENDER_e gender) {
    char* genderArray[] =  { "NULL", "Unknown", "Male", "Female", "PreferNotToSay" };
    return genderArray[gender];
}

contentservice_blog_author_dto_GENDER_e blog_author_dto_gender_FromString(char* gender){
    int stringToReturn = 0;
    char *genderArray[] =  { "NULL", "Unknown", "Male", "Female", "PreferNotToSay" };
    size_t sizeofArray = sizeof(genderArray) / sizeof(genderArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(gender, genderArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* blog_author_dto_availability_ToString(contentservice_blog_author_dto_AVAILABILITY_e availability) {
    char* availabilityArray[] =  { "NULL", "DND", "Busy", "Away", "Offline", "Available" };
    return availabilityArray[availability];
}

contentservice_blog_author_dto_AVAILABILITY_e blog_author_dto_availability_FromString(char* availability){
    int stringToReturn = 0;
    char *availabilityArray[] =  { "NULL", "DND", "Busy", "Away", "Offline", "Available" };
    size_t sizeofArray = sizeof(availabilityArray) / sizeof(availabilityArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(availability, availabilityArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

blog_author_dto_t *blog_author_dto_create(
    char *id,
    char *timestamp,
    char *qualified_name,
    char *birthday,
    char *first_name,
    char *last_name,
    char *public_name,
    char *language_id,
    char *timezone_id,
    char *country_id,
    char *city_id,
    char *state_id,
    char *about,
    char *job_title,
    char *cover_url,
    char *avatar_url,
    char *git_hub_url,
    char *website_url,
    char *twitter_url,
    char *facebook_url,
    char *you_tube_url,
    char *linked_in_url,
    char *instagram_url,
    char *social_feed_id,
    char *social_profile_id,
    contentservice_blog_author_dto_GENDER_e gender,
    char *wallet_id,
    char *status,
    char *user_name,
    char *public_identifier,
    int phone_number_confirmed,
    contentservice_blog_author_dto_AVAILABILITY_e availability
    ) {
    blog_author_dto_t *blog_author_dto_local_var = malloc(sizeof(blog_author_dto_t));
    if (!blog_author_dto_local_var) {
        return NULL;
    }
    blog_author_dto_local_var->id = id;
    blog_author_dto_local_var->timestamp = timestamp;
    blog_author_dto_local_var->qualified_name = qualified_name;
    blog_author_dto_local_var->birthday = birthday;
    blog_author_dto_local_var->first_name = first_name;
    blog_author_dto_local_var->last_name = last_name;
    blog_author_dto_local_var->public_name = public_name;
    blog_author_dto_local_var->language_id = language_id;
    blog_author_dto_local_var->timezone_id = timezone_id;
    blog_author_dto_local_var->country_id = country_id;
    blog_author_dto_local_var->city_id = city_id;
    blog_author_dto_local_var->state_id = state_id;
    blog_author_dto_local_var->about = about;
    blog_author_dto_local_var->job_title = job_title;
    blog_author_dto_local_var->cover_url = cover_url;
    blog_author_dto_local_var->avatar_url = avatar_url;
    blog_author_dto_local_var->git_hub_url = git_hub_url;
    blog_author_dto_local_var->website_url = website_url;
    blog_author_dto_local_var->twitter_url = twitter_url;
    blog_author_dto_local_var->facebook_url = facebook_url;
    blog_author_dto_local_var->you_tube_url = you_tube_url;
    blog_author_dto_local_var->linked_in_url = linked_in_url;
    blog_author_dto_local_var->instagram_url = instagram_url;
    blog_author_dto_local_var->social_feed_id = social_feed_id;
    blog_author_dto_local_var->social_profile_id = social_profile_id;
    blog_author_dto_local_var->gender = gender;
    blog_author_dto_local_var->wallet_id = wallet_id;
    blog_author_dto_local_var->status = status;
    blog_author_dto_local_var->user_name = user_name;
    blog_author_dto_local_var->public_identifier = public_identifier;
    blog_author_dto_local_var->phone_number_confirmed = phone_number_confirmed;
    blog_author_dto_local_var->availability = availability;

    return blog_author_dto_local_var;
}


void blog_author_dto_free(blog_author_dto_t *blog_author_dto) {
    if(NULL == blog_author_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (blog_author_dto->id) {
        free(blog_author_dto->id);
        blog_author_dto->id = NULL;
    }
    if (blog_author_dto->timestamp) {
        free(blog_author_dto->timestamp);
        blog_author_dto->timestamp = NULL;
    }
    if (blog_author_dto->qualified_name) {
        free(blog_author_dto->qualified_name);
        blog_author_dto->qualified_name = NULL;
    }
    if (blog_author_dto->birthday) {
        free(blog_author_dto->birthday);
        blog_author_dto->birthday = NULL;
    }
    if (blog_author_dto->first_name) {
        free(blog_author_dto->first_name);
        blog_author_dto->first_name = NULL;
    }
    if (blog_author_dto->last_name) {
        free(blog_author_dto->last_name);
        blog_author_dto->last_name = NULL;
    }
    if (blog_author_dto->public_name) {
        free(blog_author_dto->public_name);
        blog_author_dto->public_name = NULL;
    }
    if (blog_author_dto->language_id) {
        free(blog_author_dto->language_id);
        blog_author_dto->language_id = NULL;
    }
    if (blog_author_dto->timezone_id) {
        free(blog_author_dto->timezone_id);
        blog_author_dto->timezone_id = NULL;
    }
    if (blog_author_dto->country_id) {
        free(blog_author_dto->country_id);
        blog_author_dto->country_id = NULL;
    }
    if (blog_author_dto->city_id) {
        free(blog_author_dto->city_id);
        blog_author_dto->city_id = NULL;
    }
    if (blog_author_dto->state_id) {
        free(blog_author_dto->state_id);
        blog_author_dto->state_id = NULL;
    }
    if (blog_author_dto->about) {
        free(blog_author_dto->about);
        blog_author_dto->about = NULL;
    }
    if (blog_author_dto->job_title) {
        free(blog_author_dto->job_title);
        blog_author_dto->job_title = NULL;
    }
    if (blog_author_dto->cover_url) {
        free(blog_author_dto->cover_url);
        blog_author_dto->cover_url = NULL;
    }
    if (blog_author_dto->avatar_url) {
        free(blog_author_dto->avatar_url);
        blog_author_dto->avatar_url = NULL;
    }
    if (blog_author_dto->git_hub_url) {
        free(blog_author_dto->git_hub_url);
        blog_author_dto->git_hub_url = NULL;
    }
    if (blog_author_dto->website_url) {
        free(blog_author_dto->website_url);
        blog_author_dto->website_url = NULL;
    }
    if (blog_author_dto->twitter_url) {
        free(blog_author_dto->twitter_url);
        blog_author_dto->twitter_url = NULL;
    }
    if (blog_author_dto->facebook_url) {
        free(blog_author_dto->facebook_url);
        blog_author_dto->facebook_url = NULL;
    }
    if (blog_author_dto->you_tube_url) {
        free(blog_author_dto->you_tube_url);
        blog_author_dto->you_tube_url = NULL;
    }
    if (blog_author_dto->linked_in_url) {
        free(blog_author_dto->linked_in_url);
        blog_author_dto->linked_in_url = NULL;
    }
    if (blog_author_dto->instagram_url) {
        free(blog_author_dto->instagram_url);
        blog_author_dto->instagram_url = NULL;
    }
    if (blog_author_dto->social_feed_id) {
        free(blog_author_dto->social_feed_id);
        blog_author_dto->social_feed_id = NULL;
    }
    if (blog_author_dto->social_profile_id) {
        free(blog_author_dto->social_profile_id);
        blog_author_dto->social_profile_id = NULL;
    }
    if (blog_author_dto->wallet_id) {
        free(blog_author_dto->wallet_id);
        blog_author_dto->wallet_id = NULL;
    }
    if (blog_author_dto->status) {
        free(blog_author_dto->status);
        blog_author_dto->status = NULL;
    }
    if (blog_author_dto->user_name) {
        free(blog_author_dto->user_name);
        blog_author_dto->user_name = NULL;
    }
    if (blog_author_dto->public_identifier) {
        free(blog_author_dto->public_identifier);
        blog_author_dto->public_identifier = NULL;
    }
    free(blog_author_dto);
}

cJSON *blog_author_dto_convertToJSON(blog_author_dto_t *blog_author_dto) {
    cJSON *item = cJSON_CreateObject();

    // blog_author_dto->id
    if(blog_author_dto->id) {
    if(cJSON_AddStringToObject(item, "id", blog_author_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // blog_author_dto->timestamp
    if(blog_author_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", blog_author_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // blog_author_dto->qualified_name
    if(blog_author_dto->qualified_name) {
    if(cJSON_AddStringToObject(item, "qualifiedName", blog_author_dto->qualified_name) == NULL) {
    goto fail; //String
    }
    }


    // blog_author_dto->birthday
    if(blog_author_dto->birthday) {
    if(cJSON_AddStringToObject(item, "birthday", blog_author_dto->birthday) == NULL) {
    goto fail; //Date-Time
    }
    }


    // blog_author_dto->first_name
    if(blog_author_dto->first_name) {
    if(cJSON_AddStringToObject(item, "firstName", blog_author_dto->first_name) == NULL) {
    goto fail; //String
    }
    }


    // blog_author_dto->last_name
    if(blog_author_dto->last_name) {
    if(cJSON_AddStringToObject(item, "lastName", blog_author_dto->last_name) == NULL) {
    goto fail; //String
    }
    }


    // blog_author_dto->public_name
    if(blog_author_dto->public_name) {
    if(cJSON_AddStringToObject(item, "publicName", blog_author_dto->public_name) == NULL) {
    goto fail; //String
    }
    }


    // blog_author_dto->language_id
    if(blog_author_dto->language_id) {
    if(cJSON_AddStringToObject(item, "languageId", blog_author_dto->language_id) == NULL) {
    goto fail; //String
    }
    }


    // blog_author_dto->timezone_id
    if(blog_author_dto->timezone_id) {
    if(cJSON_AddStringToObject(item, "timezoneId", blog_author_dto->timezone_id) == NULL) {
    goto fail; //String
    }
    }


    // blog_author_dto->country_id
    if(blog_author_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryId", blog_author_dto->country_id) == NULL) {
    goto fail; //String
    }
    }


    // blog_author_dto->city_id
    if(blog_author_dto->city_id) {
    if(cJSON_AddStringToObject(item, "cityId", blog_author_dto->city_id) == NULL) {
    goto fail; //String
    }
    }


    // blog_author_dto->state_id
    if(blog_author_dto->state_id) {
    if(cJSON_AddStringToObject(item, "stateId", blog_author_dto->state_id) == NULL) {
    goto fail; //String
    }
    }


    // blog_author_dto->about
    if(blog_author_dto->about) {
    if(cJSON_AddStringToObject(item, "about", blog_author_dto->about) == NULL) {
    goto fail; //String
    }
    }


    // blog_author_dto->job_title
    if(blog_author_dto->job_title) {
    if(cJSON_AddStringToObject(item, "jobTitle", blog_author_dto->job_title) == NULL) {
    goto fail; //String
    }
    }


    // blog_author_dto->cover_url
    if(blog_author_dto->cover_url) {
    if(cJSON_AddStringToObject(item, "coverUrl", blog_author_dto->cover_url) == NULL) {
    goto fail; //String
    }
    }


    // blog_author_dto->avatar_url
    if(blog_author_dto->avatar_url) {
    if(cJSON_AddStringToObject(item, "avatarUrl", blog_author_dto->avatar_url) == NULL) {
    goto fail; //String
    }
    }


    // blog_author_dto->git_hub_url
    if(blog_author_dto->git_hub_url) {
    if(cJSON_AddStringToObject(item, "gitHubUrl", blog_author_dto->git_hub_url) == NULL) {
    goto fail; //String
    }
    }


    // blog_author_dto->website_url
    if(blog_author_dto->website_url) {
    if(cJSON_AddStringToObject(item, "websiteUrl", blog_author_dto->website_url) == NULL) {
    goto fail; //String
    }
    }


    // blog_author_dto->twitter_url
    if(blog_author_dto->twitter_url) {
    if(cJSON_AddStringToObject(item, "twitterUrl", blog_author_dto->twitter_url) == NULL) {
    goto fail; //String
    }
    }


    // blog_author_dto->facebook_url
    if(blog_author_dto->facebook_url) {
    if(cJSON_AddStringToObject(item, "facebookUrl", blog_author_dto->facebook_url) == NULL) {
    goto fail; //String
    }
    }


    // blog_author_dto->you_tube_url
    if(blog_author_dto->you_tube_url) {
    if(cJSON_AddStringToObject(item, "youTubeUrl", blog_author_dto->you_tube_url) == NULL) {
    goto fail; //String
    }
    }


    // blog_author_dto->linked_in_url
    if(blog_author_dto->linked_in_url) {
    if(cJSON_AddStringToObject(item, "linkedInUrl", blog_author_dto->linked_in_url) == NULL) {
    goto fail; //String
    }
    }


    // blog_author_dto->instagram_url
    if(blog_author_dto->instagram_url) {
    if(cJSON_AddStringToObject(item, "instagramUrl", blog_author_dto->instagram_url) == NULL) {
    goto fail; //String
    }
    }


    // blog_author_dto->social_feed_id
    if(blog_author_dto->social_feed_id) {
    if(cJSON_AddStringToObject(item, "socialFeedId", blog_author_dto->social_feed_id) == NULL) {
    goto fail; //String
    }
    }


    // blog_author_dto->social_profile_id
    if(blog_author_dto->social_profile_id) {
    if(cJSON_AddStringToObject(item, "socialProfileId", blog_author_dto->social_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // blog_author_dto->gender
    if(blog_author_dto->gender != contentservice_blog_author_dto_GENDER_NULL) {
    if(cJSON_AddStringToObject(item, "gender", genderblog_author_dto_ToString(blog_author_dto->gender)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // blog_author_dto->wallet_id
    if(blog_author_dto->wallet_id) {
    if(cJSON_AddStringToObject(item, "walletId", blog_author_dto->wallet_id) == NULL) {
    goto fail; //String
    }
    }


    // blog_author_dto->status
    if(blog_author_dto->status) {
    if(cJSON_AddStringToObject(item, "status", blog_author_dto->status) == NULL) {
    goto fail; //String
    }
    }


    // blog_author_dto->user_name
    if(blog_author_dto->user_name) {
    if(cJSON_AddStringToObject(item, "userName", blog_author_dto->user_name) == NULL) {
    goto fail; //String
    }
    }


    // blog_author_dto->public_identifier
    if(blog_author_dto->public_identifier) {
    if(cJSON_AddStringToObject(item, "publicIdentifier", blog_author_dto->public_identifier) == NULL) {
    goto fail; //String
    }
    }


    // blog_author_dto->phone_number_confirmed
    if(blog_author_dto->phone_number_confirmed) {
    if(cJSON_AddBoolToObject(item, "phoneNumberConfirmed", blog_author_dto->phone_number_confirmed) == NULL) {
    goto fail; //Bool
    }
    }


    // blog_author_dto->availability
    if(blog_author_dto->availability != contentservice_blog_author_dto_AVAILABILITY_NULL) {
    if(cJSON_AddStringToObject(item, "availability", availabilityblog_author_dto_ToString(blog_author_dto->availability)) == NULL)
    {
    goto fail; //Enum
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

blog_author_dto_t *blog_author_dto_parseFromJSON(cJSON *blog_author_dtoJSON){

    blog_author_dto_t *blog_author_dto_local_var = NULL;

    // blog_author_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(blog_author_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // blog_author_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(blog_author_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // blog_author_dto->qualified_name
    cJSON *qualified_name = cJSON_GetObjectItemCaseSensitive(blog_author_dtoJSON, "qualifiedName");
    if (qualified_name) { 
    if(!cJSON_IsString(qualified_name) && !cJSON_IsNull(qualified_name))
    {
    goto end; //String
    }
    }

    // blog_author_dto->birthday
    cJSON *birthday = cJSON_GetObjectItemCaseSensitive(blog_author_dtoJSON, "birthday");
    if (birthday) { 
    if(!cJSON_IsString(birthday) && !cJSON_IsNull(birthday))
    {
    goto end; //DateTime
    }
    }

    // blog_author_dto->first_name
    cJSON *first_name = cJSON_GetObjectItemCaseSensitive(blog_author_dtoJSON, "firstName");
    if (first_name) { 
    if(!cJSON_IsString(first_name) && !cJSON_IsNull(first_name))
    {
    goto end; //String
    }
    }

    // blog_author_dto->last_name
    cJSON *last_name = cJSON_GetObjectItemCaseSensitive(blog_author_dtoJSON, "lastName");
    if (last_name) { 
    if(!cJSON_IsString(last_name) && !cJSON_IsNull(last_name))
    {
    goto end; //String
    }
    }

    // blog_author_dto->public_name
    cJSON *public_name = cJSON_GetObjectItemCaseSensitive(blog_author_dtoJSON, "publicName");
    if (public_name) { 
    if(!cJSON_IsString(public_name) && !cJSON_IsNull(public_name))
    {
    goto end; //String
    }
    }

    // blog_author_dto->language_id
    cJSON *language_id = cJSON_GetObjectItemCaseSensitive(blog_author_dtoJSON, "languageId");
    if (language_id) { 
    if(!cJSON_IsString(language_id) && !cJSON_IsNull(language_id))
    {
    goto end; //String
    }
    }

    // blog_author_dto->timezone_id
    cJSON *timezone_id = cJSON_GetObjectItemCaseSensitive(blog_author_dtoJSON, "timezoneId");
    if (timezone_id) { 
    if(!cJSON_IsString(timezone_id) && !cJSON_IsNull(timezone_id))
    {
    goto end; //String
    }
    }

    // blog_author_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(blog_author_dtoJSON, "countryId");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }

    // blog_author_dto->city_id
    cJSON *city_id = cJSON_GetObjectItemCaseSensitive(blog_author_dtoJSON, "cityId");
    if (city_id) { 
    if(!cJSON_IsString(city_id) && !cJSON_IsNull(city_id))
    {
    goto end; //String
    }
    }

    // blog_author_dto->state_id
    cJSON *state_id = cJSON_GetObjectItemCaseSensitive(blog_author_dtoJSON, "stateId");
    if (state_id) { 
    if(!cJSON_IsString(state_id) && !cJSON_IsNull(state_id))
    {
    goto end; //String
    }
    }

    // blog_author_dto->about
    cJSON *about = cJSON_GetObjectItemCaseSensitive(blog_author_dtoJSON, "about");
    if (about) { 
    if(!cJSON_IsString(about) && !cJSON_IsNull(about))
    {
    goto end; //String
    }
    }

    // blog_author_dto->job_title
    cJSON *job_title = cJSON_GetObjectItemCaseSensitive(blog_author_dtoJSON, "jobTitle");
    if (job_title) { 
    if(!cJSON_IsString(job_title) && !cJSON_IsNull(job_title))
    {
    goto end; //String
    }
    }

    // blog_author_dto->cover_url
    cJSON *cover_url = cJSON_GetObjectItemCaseSensitive(blog_author_dtoJSON, "coverUrl");
    if (cover_url) { 
    if(!cJSON_IsString(cover_url) && !cJSON_IsNull(cover_url))
    {
    goto end; //String
    }
    }

    // blog_author_dto->avatar_url
    cJSON *avatar_url = cJSON_GetObjectItemCaseSensitive(blog_author_dtoJSON, "avatarUrl");
    if (avatar_url) { 
    if(!cJSON_IsString(avatar_url) && !cJSON_IsNull(avatar_url))
    {
    goto end; //String
    }
    }

    // blog_author_dto->git_hub_url
    cJSON *git_hub_url = cJSON_GetObjectItemCaseSensitive(blog_author_dtoJSON, "gitHubUrl");
    if (git_hub_url) { 
    if(!cJSON_IsString(git_hub_url) && !cJSON_IsNull(git_hub_url))
    {
    goto end; //String
    }
    }

    // blog_author_dto->website_url
    cJSON *website_url = cJSON_GetObjectItemCaseSensitive(blog_author_dtoJSON, "websiteUrl");
    if (website_url) { 
    if(!cJSON_IsString(website_url) && !cJSON_IsNull(website_url))
    {
    goto end; //String
    }
    }

    // blog_author_dto->twitter_url
    cJSON *twitter_url = cJSON_GetObjectItemCaseSensitive(blog_author_dtoJSON, "twitterUrl");
    if (twitter_url) { 
    if(!cJSON_IsString(twitter_url) && !cJSON_IsNull(twitter_url))
    {
    goto end; //String
    }
    }

    // blog_author_dto->facebook_url
    cJSON *facebook_url = cJSON_GetObjectItemCaseSensitive(blog_author_dtoJSON, "facebookUrl");
    if (facebook_url) { 
    if(!cJSON_IsString(facebook_url) && !cJSON_IsNull(facebook_url))
    {
    goto end; //String
    }
    }

    // blog_author_dto->you_tube_url
    cJSON *you_tube_url = cJSON_GetObjectItemCaseSensitive(blog_author_dtoJSON, "youTubeUrl");
    if (you_tube_url) { 
    if(!cJSON_IsString(you_tube_url) && !cJSON_IsNull(you_tube_url))
    {
    goto end; //String
    }
    }

    // blog_author_dto->linked_in_url
    cJSON *linked_in_url = cJSON_GetObjectItemCaseSensitive(blog_author_dtoJSON, "linkedInUrl");
    if (linked_in_url) { 
    if(!cJSON_IsString(linked_in_url) && !cJSON_IsNull(linked_in_url))
    {
    goto end; //String
    }
    }

    // blog_author_dto->instagram_url
    cJSON *instagram_url = cJSON_GetObjectItemCaseSensitive(blog_author_dtoJSON, "instagramUrl");
    if (instagram_url) { 
    if(!cJSON_IsString(instagram_url) && !cJSON_IsNull(instagram_url))
    {
    goto end; //String
    }
    }

    // blog_author_dto->social_feed_id
    cJSON *social_feed_id = cJSON_GetObjectItemCaseSensitive(blog_author_dtoJSON, "socialFeedId");
    if (social_feed_id) { 
    if(!cJSON_IsString(social_feed_id) && !cJSON_IsNull(social_feed_id))
    {
    goto end; //String
    }
    }

    // blog_author_dto->social_profile_id
    cJSON *social_profile_id = cJSON_GetObjectItemCaseSensitive(blog_author_dtoJSON, "socialProfileId");
    if (social_profile_id) { 
    if(!cJSON_IsString(social_profile_id) && !cJSON_IsNull(social_profile_id))
    {
    goto end; //String
    }
    }

    // blog_author_dto->gender
    cJSON *gender = cJSON_GetObjectItemCaseSensitive(blog_author_dtoJSON, "gender");
    contentservice_blog_author_dto_GENDER_e genderVariable;
    if (gender) { 
    if(!cJSON_IsString(gender))
    {
    goto end; //Enum
    }
    genderVariable = blog_author_dto_gender_FromString(gender->valuestring);
    }

    // blog_author_dto->wallet_id
    cJSON *wallet_id = cJSON_GetObjectItemCaseSensitive(blog_author_dtoJSON, "walletId");
    if (wallet_id) { 
    if(!cJSON_IsString(wallet_id) && !cJSON_IsNull(wallet_id))
    {
    goto end; //String
    }
    }

    // blog_author_dto->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(blog_author_dtoJSON, "status");
    if (status) { 
    if(!cJSON_IsString(status) && !cJSON_IsNull(status))
    {
    goto end; //String
    }
    }

    // blog_author_dto->user_name
    cJSON *user_name = cJSON_GetObjectItemCaseSensitive(blog_author_dtoJSON, "userName");
    if (user_name) { 
    if(!cJSON_IsString(user_name) && !cJSON_IsNull(user_name))
    {
    goto end; //String
    }
    }

    // blog_author_dto->public_identifier
    cJSON *public_identifier = cJSON_GetObjectItemCaseSensitive(blog_author_dtoJSON, "publicIdentifier");
    if (public_identifier) { 
    if(!cJSON_IsString(public_identifier) && !cJSON_IsNull(public_identifier))
    {
    goto end; //String
    }
    }

    // blog_author_dto->phone_number_confirmed
    cJSON *phone_number_confirmed = cJSON_GetObjectItemCaseSensitive(blog_author_dtoJSON, "phoneNumberConfirmed");
    if (phone_number_confirmed) { 
    if(!cJSON_IsBool(phone_number_confirmed))
    {
    goto end; //Bool
    }
    }

    // blog_author_dto->availability
    cJSON *availability = cJSON_GetObjectItemCaseSensitive(blog_author_dtoJSON, "availability");
    contentservice_blog_author_dto_AVAILABILITY_e availabilityVariable;
    if (availability) { 
    if(!cJSON_IsString(availability))
    {
    goto end; //Enum
    }
    availabilityVariable = blog_author_dto_availability_FromString(availability->valuestring);
    }


    blog_author_dto_local_var = blog_author_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        qualified_name && !cJSON_IsNull(qualified_name) ? strdup(qualified_name->valuestring) : NULL,
        birthday && !cJSON_IsNull(birthday) ? strdup(birthday->valuestring) : NULL,
        first_name && !cJSON_IsNull(first_name) ? strdup(first_name->valuestring) : NULL,
        last_name && !cJSON_IsNull(last_name) ? strdup(last_name->valuestring) : NULL,
        public_name && !cJSON_IsNull(public_name) ? strdup(public_name->valuestring) : NULL,
        language_id && !cJSON_IsNull(language_id) ? strdup(language_id->valuestring) : NULL,
        timezone_id && !cJSON_IsNull(timezone_id) ? strdup(timezone_id->valuestring) : NULL,
        country_id && !cJSON_IsNull(country_id) ? strdup(country_id->valuestring) : NULL,
        city_id && !cJSON_IsNull(city_id) ? strdup(city_id->valuestring) : NULL,
        state_id && !cJSON_IsNull(state_id) ? strdup(state_id->valuestring) : NULL,
        about && !cJSON_IsNull(about) ? strdup(about->valuestring) : NULL,
        job_title && !cJSON_IsNull(job_title) ? strdup(job_title->valuestring) : NULL,
        cover_url && !cJSON_IsNull(cover_url) ? strdup(cover_url->valuestring) : NULL,
        avatar_url && !cJSON_IsNull(avatar_url) ? strdup(avatar_url->valuestring) : NULL,
        git_hub_url && !cJSON_IsNull(git_hub_url) ? strdup(git_hub_url->valuestring) : NULL,
        website_url && !cJSON_IsNull(website_url) ? strdup(website_url->valuestring) : NULL,
        twitter_url && !cJSON_IsNull(twitter_url) ? strdup(twitter_url->valuestring) : NULL,
        facebook_url && !cJSON_IsNull(facebook_url) ? strdup(facebook_url->valuestring) : NULL,
        you_tube_url && !cJSON_IsNull(you_tube_url) ? strdup(you_tube_url->valuestring) : NULL,
        linked_in_url && !cJSON_IsNull(linked_in_url) ? strdup(linked_in_url->valuestring) : NULL,
        instagram_url && !cJSON_IsNull(instagram_url) ? strdup(instagram_url->valuestring) : NULL,
        social_feed_id && !cJSON_IsNull(social_feed_id) ? strdup(social_feed_id->valuestring) : NULL,
        social_profile_id && !cJSON_IsNull(social_profile_id) ? strdup(social_profile_id->valuestring) : NULL,
        gender ? genderVariable : contentservice_blog_author_dto_GENDER_NULL,
        wallet_id && !cJSON_IsNull(wallet_id) ? strdup(wallet_id->valuestring) : NULL,
        status && !cJSON_IsNull(status) ? strdup(status->valuestring) : NULL,
        user_name && !cJSON_IsNull(user_name) ? strdup(user_name->valuestring) : NULL,
        public_identifier && !cJSON_IsNull(public_identifier) ? strdup(public_identifier->valuestring) : NULL,
        phone_number_confirmed ? phone_number_confirmed->valueint : 0,
        availability ? availabilityVariable : contentservice_blog_author_dto_AVAILABILITY_NULL
        );

    return blog_author_dto_local_var;
end:
    return NULL;

}
