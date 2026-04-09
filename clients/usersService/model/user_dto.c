#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "user_dto.h"


char* user_dto_gender_ToString(usersservice_user_dto_GENDER_e gender) {
    char* genderArray[] =  { "NULL", "Unknown", "Male", "Female", "PreferNotToSay" };
    return genderArray[gender];
}

usersservice_user_dto_GENDER_e user_dto_gender_FromString(char* gender){
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
char* user_dto_availability_ToString(usersservice_user_dto_AVAILABILITY_e availability) {
    char* availabilityArray[] =  { "NULL", "DND", "Busy", "Away", "Offline", "Available" };
    return availabilityArray[availability];
}

usersservice_user_dto_AVAILABILITY_e user_dto_availability_FromString(char* availability){
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
char* user_dto_site_theme_ToString(usersservice_user_dto_SITETHEME_e site_theme) {
    char* site_themeArray[] =  { "NULL", "System", "Light", "Dark" };
    return site_themeArray[site_theme];
}

usersservice_user_dto_SITETHEME_e user_dto_site_theme_FromString(char* site_theme){
    int stringToReturn = 0;
    char *site_themeArray[] =  { "NULL", "System", "Light", "Dark" };
    size_t sizeofArray = sizeof(site_themeArray) / sizeof(site_themeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(site_theme, site_themeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

user_dto_t *user_dto_create(
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
    char *social_profile_id,
    char *birthday,
    char *id_provider,
    char *language_id,
    usersservice_user_dto_GENDER_e gender,
    char *city_id,
    char *state_id,
    char *email,
    char *about,
    char *job_title,
    char *social_feed_id,
    char *current_tenant_id,
    char *current_enrollment_id,
    char *status,
    char *cart_id,
    char *wallet_id,
    char *user_name,
    char *currency_id,
    char *phone_number,
    char *public_identifier,
    char *identity_provider,
    int phone_number_confirmed,
    int email_confirmed,
    usersservice_user_dto_AVAILABILITY_e availability,
    int lockout_enabled,
    char *lockout_end,
    int enrollments_count,
    usersservice_user_dto_SITETHEME_e site_theme
    ) {
    user_dto_t *user_dto_local_var = malloc(sizeof(user_dto_t));
    if (!user_dto_local_var) {
        return NULL;
    }
    user_dto_local_var->id = id;
    user_dto_local_var->timestamp = timestamp;
    user_dto_local_var->full_name = full_name;
    user_dto_local_var->qualified_name = qualified_name;
    user_dto_local_var->public_name = public_name;
    user_dto_local_var->handler = handler;
    user_dto_local_var->last_name = last_name;
    user_dto_local_var->first_name = first_name;
    user_dto_local_var->cover_url = cover_url;
    user_dto_local_var->avatar_url = avatar_url;
    user_dto_local_var->git_hub_url = git_hub_url;
    user_dto_local_var->country_id = country_id;
    user_dto_local_var->timezone_id = timezone_id;
    user_dto_local_var->website_url = website_url;
    user_dto_local_var->twitter_url = twitter_url;
    user_dto_local_var->you_tube_url = you_tube_url;
    user_dto_local_var->linked_in_url = linked_in_url;
    user_dto_local_var->facebook_url = facebook_url;
    user_dto_local_var->instagram_url = instagram_url;
    user_dto_local_var->social_profile_id = social_profile_id;
    user_dto_local_var->birthday = birthday;
    user_dto_local_var->id_provider = id_provider;
    user_dto_local_var->language_id = language_id;
    user_dto_local_var->gender = gender;
    user_dto_local_var->city_id = city_id;
    user_dto_local_var->state_id = state_id;
    user_dto_local_var->email = email;
    user_dto_local_var->about = about;
    user_dto_local_var->job_title = job_title;
    user_dto_local_var->social_feed_id = social_feed_id;
    user_dto_local_var->current_tenant_id = current_tenant_id;
    user_dto_local_var->current_enrollment_id = current_enrollment_id;
    user_dto_local_var->status = status;
    user_dto_local_var->cart_id = cart_id;
    user_dto_local_var->wallet_id = wallet_id;
    user_dto_local_var->user_name = user_name;
    user_dto_local_var->currency_id = currency_id;
    user_dto_local_var->phone_number = phone_number;
    user_dto_local_var->public_identifier = public_identifier;
    user_dto_local_var->identity_provider = identity_provider;
    user_dto_local_var->phone_number_confirmed = phone_number_confirmed;
    user_dto_local_var->email_confirmed = email_confirmed;
    user_dto_local_var->availability = availability;
    user_dto_local_var->lockout_enabled = lockout_enabled;
    user_dto_local_var->lockout_end = lockout_end;
    user_dto_local_var->enrollments_count = enrollments_count;
    user_dto_local_var->site_theme = site_theme;

    return user_dto_local_var;
}


void user_dto_free(user_dto_t *user_dto) {
    if(NULL == user_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (user_dto->id) {
        free(user_dto->id);
        user_dto->id = NULL;
    }
    if (user_dto->timestamp) {
        free(user_dto->timestamp);
        user_dto->timestamp = NULL;
    }
    if (user_dto->full_name) {
        free(user_dto->full_name);
        user_dto->full_name = NULL;
    }
    if (user_dto->qualified_name) {
        free(user_dto->qualified_name);
        user_dto->qualified_name = NULL;
    }
    if (user_dto->public_name) {
        free(user_dto->public_name);
        user_dto->public_name = NULL;
    }
    if (user_dto->handler) {
        free(user_dto->handler);
        user_dto->handler = NULL;
    }
    if (user_dto->last_name) {
        free(user_dto->last_name);
        user_dto->last_name = NULL;
    }
    if (user_dto->first_name) {
        free(user_dto->first_name);
        user_dto->first_name = NULL;
    }
    if (user_dto->cover_url) {
        free(user_dto->cover_url);
        user_dto->cover_url = NULL;
    }
    if (user_dto->avatar_url) {
        free(user_dto->avatar_url);
        user_dto->avatar_url = NULL;
    }
    if (user_dto->git_hub_url) {
        free(user_dto->git_hub_url);
        user_dto->git_hub_url = NULL;
    }
    if (user_dto->country_id) {
        free(user_dto->country_id);
        user_dto->country_id = NULL;
    }
    if (user_dto->timezone_id) {
        free(user_dto->timezone_id);
        user_dto->timezone_id = NULL;
    }
    if (user_dto->website_url) {
        free(user_dto->website_url);
        user_dto->website_url = NULL;
    }
    if (user_dto->twitter_url) {
        free(user_dto->twitter_url);
        user_dto->twitter_url = NULL;
    }
    if (user_dto->you_tube_url) {
        free(user_dto->you_tube_url);
        user_dto->you_tube_url = NULL;
    }
    if (user_dto->linked_in_url) {
        free(user_dto->linked_in_url);
        user_dto->linked_in_url = NULL;
    }
    if (user_dto->facebook_url) {
        free(user_dto->facebook_url);
        user_dto->facebook_url = NULL;
    }
    if (user_dto->instagram_url) {
        free(user_dto->instagram_url);
        user_dto->instagram_url = NULL;
    }
    if (user_dto->social_profile_id) {
        free(user_dto->social_profile_id);
        user_dto->social_profile_id = NULL;
    }
    if (user_dto->birthday) {
        free(user_dto->birthday);
        user_dto->birthday = NULL;
    }
    if (user_dto->id_provider) {
        free(user_dto->id_provider);
        user_dto->id_provider = NULL;
    }
    if (user_dto->language_id) {
        free(user_dto->language_id);
        user_dto->language_id = NULL;
    }
    if (user_dto->city_id) {
        free(user_dto->city_id);
        user_dto->city_id = NULL;
    }
    if (user_dto->state_id) {
        free(user_dto->state_id);
        user_dto->state_id = NULL;
    }
    if (user_dto->email) {
        free(user_dto->email);
        user_dto->email = NULL;
    }
    if (user_dto->about) {
        free(user_dto->about);
        user_dto->about = NULL;
    }
    if (user_dto->job_title) {
        free(user_dto->job_title);
        user_dto->job_title = NULL;
    }
    if (user_dto->social_feed_id) {
        free(user_dto->social_feed_id);
        user_dto->social_feed_id = NULL;
    }
    if (user_dto->current_tenant_id) {
        free(user_dto->current_tenant_id);
        user_dto->current_tenant_id = NULL;
    }
    if (user_dto->current_enrollment_id) {
        free(user_dto->current_enrollment_id);
        user_dto->current_enrollment_id = NULL;
    }
    if (user_dto->status) {
        free(user_dto->status);
        user_dto->status = NULL;
    }
    if (user_dto->cart_id) {
        free(user_dto->cart_id);
        user_dto->cart_id = NULL;
    }
    if (user_dto->wallet_id) {
        free(user_dto->wallet_id);
        user_dto->wallet_id = NULL;
    }
    if (user_dto->user_name) {
        free(user_dto->user_name);
        user_dto->user_name = NULL;
    }
    if (user_dto->currency_id) {
        free(user_dto->currency_id);
        user_dto->currency_id = NULL;
    }
    if (user_dto->phone_number) {
        free(user_dto->phone_number);
        user_dto->phone_number = NULL;
    }
    if (user_dto->public_identifier) {
        free(user_dto->public_identifier);
        user_dto->public_identifier = NULL;
    }
    if (user_dto->identity_provider) {
        free(user_dto->identity_provider);
        user_dto->identity_provider = NULL;
    }
    if (user_dto->lockout_end) {
        free(user_dto->lockout_end);
        user_dto->lockout_end = NULL;
    }
    free(user_dto);
}

cJSON *user_dto_convertToJSON(user_dto_t *user_dto) {
    cJSON *item = cJSON_CreateObject();

    // user_dto->id
    if(user_dto->id) {
    if(cJSON_AddStringToObject(item, "id", user_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // user_dto->timestamp
    if(user_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", user_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // user_dto->full_name
    if(user_dto->full_name) {
    if(cJSON_AddStringToObject(item, "fullName", user_dto->full_name) == NULL) {
    goto fail; //String
    }
    }


    // user_dto->qualified_name
    if(user_dto->qualified_name) {
    if(cJSON_AddStringToObject(item, "qualifiedName", user_dto->qualified_name) == NULL) {
    goto fail; //String
    }
    }


    // user_dto->public_name
    if(user_dto->public_name) {
    if(cJSON_AddStringToObject(item, "publicName", user_dto->public_name) == NULL) {
    goto fail; //String
    }
    }


    // user_dto->handler
    if(user_dto->handler) {
    if(cJSON_AddStringToObject(item, "handler", user_dto->handler) == NULL) {
    goto fail; //String
    }
    }


    // user_dto->last_name
    if(user_dto->last_name) {
    if(cJSON_AddStringToObject(item, "lastName", user_dto->last_name) == NULL) {
    goto fail; //String
    }
    }


    // user_dto->first_name
    if(user_dto->first_name) {
    if(cJSON_AddStringToObject(item, "firstName", user_dto->first_name) == NULL) {
    goto fail; //String
    }
    }


    // user_dto->cover_url
    if(user_dto->cover_url) {
    if(cJSON_AddStringToObject(item, "coverUrl", user_dto->cover_url) == NULL) {
    goto fail; //String
    }
    }


    // user_dto->avatar_url
    if(user_dto->avatar_url) {
    if(cJSON_AddStringToObject(item, "avatarUrl", user_dto->avatar_url) == NULL) {
    goto fail; //String
    }
    }


    // user_dto->git_hub_url
    if(user_dto->git_hub_url) {
    if(cJSON_AddStringToObject(item, "gitHubUrl", user_dto->git_hub_url) == NULL) {
    goto fail; //String
    }
    }


    // user_dto->country_id
    if(user_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryId", user_dto->country_id) == NULL) {
    goto fail; //String
    }
    }


    // user_dto->timezone_id
    if(user_dto->timezone_id) {
    if(cJSON_AddStringToObject(item, "timezoneId", user_dto->timezone_id) == NULL) {
    goto fail; //String
    }
    }


    // user_dto->website_url
    if(user_dto->website_url) {
    if(cJSON_AddStringToObject(item, "websiteUrl", user_dto->website_url) == NULL) {
    goto fail; //String
    }
    }


    // user_dto->twitter_url
    if(user_dto->twitter_url) {
    if(cJSON_AddStringToObject(item, "twitterUrl", user_dto->twitter_url) == NULL) {
    goto fail; //String
    }
    }


    // user_dto->you_tube_url
    if(user_dto->you_tube_url) {
    if(cJSON_AddStringToObject(item, "youTubeUrl", user_dto->you_tube_url) == NULL) {
    goto fail; //String
    }
    }


    // user_dto->linked_in_url
    if(user_dto->linked_in_url) {
    if(cJSON_AddStringToObject(item, "linkedInUrl", user_dto->linked_in_url) == NULL) {
    goto fail; //String
    }
    }


    // user_dto->facebook_url
    if(user_dto->facebook_url) {
    if(cJSON_AddStringToObject(item, "facebookUrl", user_dto->facebook_url) == NULL) {
    goto fail; //String
    }
    }


    // user_dto->instagram_url
    if(user_dto->instagram_url) {
    if(cJSON_AddStringToObject(item, "instagramUrl", user_dto->instagram_url) == NULL) {
    goto fail; //String
    }
    }


    // user_dto->social_profile_id
    if(user_dto->social_profile_id) {
    if(cJSON_AddStringToObject(item, "socialProfileId", user_dto->social_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // user_dto->birthday
    if(user_dto->birthday) {
    if(cJSON_AddStringToObject(item, "birthday", user_dto->birthday) == NULL) {
    goto fail; //Date-Time
    }
    }


    // user_dto->id_provider
    if(user_dto->id_provider) {
    if(cJSON_AddStringToObject(item, "idProvider", user_dto->id_provider) == NULL) {
    goto fail; //String
    }
    }


    // user_dto->language_id
    if(user_dto->language_id) {
    if(cJSON_AddStringToObject(item, "languageId", user_dto->language_id) == NULL) {
    goto fail; //String
    }
    }


    // user_dto->gender
    if(user_dto->gender != usersservice_user_dto_GENDER_NULL) {
    if(cJSON_AddStringToObject(item, "gender", genderuser_dto_ToString(user_dto->gender)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // user_dto->city_id
    if(user_dto->city_id) {
    if(cJSON_AddStringToObject(item, "cityId", user_dto->city_id) == NULL) {
    goto fail; //String
    }
    }


    // user_dto->state_id
    if(user_dto->state_id) {
    if(cJSON_AddStringToObject(item, "stateId", user_dto->state_id) == NULL) {
    goto fail; //String
    }
    }


    // user_dto->email
    if(user_dto->email) {
    if(cJSON_AddStringToObject(item, "email", user_dto->email) == NULL) {
    goto fail; //String
    }
    }


    // user_dto->about
    if(user_dto->about) {
    if(cJSON_AddStringToObject(item, "about", user_dto->about) == NULL) {
    goto fail; //String
    }
    }


    // user_dto->job_title
    if(user_dto->job_title) {
    if(cJSON_AddStringToObject(item, "jobTitle", user_dto->job_title) == NULL) {
    goto fail; //String
    }
    }


    // user_dto->social_feed_id
    if(user_dto->social_feed_id) {
    if(cJSON_AddStringToObject(item, "socialFeedId", user_dto->social_feed_id) == NULL) {
    goto fail; //String
    }
    }


    // user_dto->current_tenant_id
    if(user_dto->current_tenant_id) {
    if(cJSON_AddStringToObject(item, "currentTenantId", user_dto->current_tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // user_dto->current_enrollment_id
    if(user_dto->current_enrollment_id) {
    if(cJSON_AddStringToObject(item, "currentEnrollmentId", user_dto->current_enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // user_dto->status
    if(user_dto->status) {
    if(cJSON_AddStringToObject(item, "status", user_dto->status) == NULL) {
    goto fail; //String
    }
    }


    // user_dto->cart_id
    if(user_dto->cart_id) {
    if(cJSON_AddStringToObject(item, "cartId", user_dto->cart_id) == NULL) {
    goto fail; //String
    }
    }


    // user_dto->wallet_id
    if(user_dto->wallet_id) {
    if(cJSON_AddStringToObject(item, "walletId", user_dto->wallet_id) == NULL) {
    goto fail; //String
    }
    }


    // user_dto->user_name
    if(user_dto->user_name) {
    if(cJSON_AddStringToObject(item, "userName", user_dto->user_name) == NULL) {
    goto fail; //String
    }
    }


    // user_dto->currency_id
    if(user_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", user_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // user_dto->phone_number
    if(user_dto->phone_number) {
    if(cJSON_AddStringToObject(item, "phoneNumber", user_dto->phone_number) == NULL) {
    goto fail; //String
    }
    }


    // user_dto->public_identifier
    if(user_dto->public_identifier) {
    if(cJSON_AddStringToObject(item, "publicIdentifier", user_dto->public_identifier) == NULL) {
    goto fail; //String
    }
    }


    // user_dto->identity_provider
    if(user_dto->identity_provider) {
    if(cJSON_AddStringToObject(item, "identityProvider", user_dto->identity_provider) == NULL) {
    goto fail; //String
    }
    }


    // user_dto->phone_number_confirmed
    if(user_dto->phone_number_confirmed) {
    if(cJSON_AddBoolToObject(item, "phoneNumberConfirmed", user_dto->phone_number_confirmed) == NULL) {
    goto fail; //Bool
    }
    }


    // user_dto->email_confirmed
    if(user_dto->email_confirmed) {
    if(cJSON_AddBoolToObject(item, "emailConfirmed", user_dto->email_confirmed) == NULL) {
    goto fail; //Bool
    }
    }


    // user_dto->availability
    if(user_dto->availability != usersservice_user_dto_AVAILABILITY_NULL) {
    if(cJSON_AddStringToObject(item, "availability", availabilityuser_dto_ToString(user_dto->availability)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // user_dto->lockout_enabled
    if(user_dto->lockout_enabled) {
    if(cJSON_AddBoolToObject(item, "lockoutEnabled", user_dto->lockout_enabled) == NULL) {
    goto fail; //Bool
    }
    }


    // user_dto->lockout_end
    if(user_dto->lockout_end) {
    if(cJSON_AddStringToObject(item, "lockoutEnd", user_dto->lockout_end) == NULL) {
    goto fail; //Date-Time
    }
    }


    // user_dto->enrollments_count
    if(user_dto->enrollments_count) {
    if(cJSON_AddNumberToObject(item, "enrollmentsCount", user_dto->enrollments_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // user_dto->site_theme
    if(user_dto->site_theme != usersservice_user_dto_SITETHEME_NULL) {
    if(cJSON_AddStringToObject(item, "siteTheme", site_themeuser_dto_ToString(user_dto->site_theme)) == NULL)
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

user_dto_t *user_dto_parseFromJSON(cJSON *user_dtoJSON){

    user_dto_t *user_dto_local_var = NULL;

    // user_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(user_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // user_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(user_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // user_dto->full_name
    cJSON *full_name = cJSON_GetObjectItemCaseSensitive(user_dtoJSON, "fullName");
    if (full_name) { 
    if(!cJSON_IsString(full_name) && !cJSON_IsNull(full_name))
    {
    goto end; //String
    }
    }

    // user_dto->qualified_name
    cJSON *qualified_name = cJSON_GetObjectItemCaseSensitive(user_dtoJSON, "qualifiedName");
    if (qualified_name) { 
    if(!cJSON_IsString(qualified_name) && !cJSON_IsNull(qualified_name))
    {
    goto end; //String
    }
    }

    // user_dto->public_name
    cJSON *public_name = cJSON_GetObjectItemCaseSensitive(user_dtoJSON, "publicName");
    if (public_name) { 
    if(!cJSON_IsString(public_name) && !cJSON_IsNull(public_name))
    {
    goto end; //String
    }
    }

    // user_dto->handler
    cJSON *handler = cJSON_GetObjectItemCaseSensitive(user_dtoJSON, "handler");
    if (handler) { 
    if(!cJSON_IsString(handler) && !cJSON_IsNull(handler))
    {
    goto end; //String
    }
    }

    // user_dto->last_name
    cJSON *last_name = cJSON_GetObjectItemCaseSensitive(user_dtoJSON, "lastName");
    if (last_name) { 
    if(!cJSON_IsString(last_name) && !cJSON_IsNull(last_name))
    {
    goto end; //String
    }
    }

    // user_dto->first_name
    cJSON *first_name = cJSON_GetObjectItemCaseSensitive(user_dtoJSON, "firstName");
    if (first_name) { 
    if(!cJSON_IsString(first_name) && !cJSON_IsNull(first_name))
    {
    goto end; //String
    }
    }

    // user_dto->cover_url
    cJSON *cover_url = cJSON_GetObjectItemCaseSensitive(user_dtoJSON, "coverUrl");
    if (cover_url) { 
    if(!cJSON_IsString(cover_url) && !cJSON_IsNull(cover_url))
    {
    goto end; //String
    }
    }

    // user_dto->avatar_url
    cJSON *avatar_url = cJSON_GetObjectItemCaseSensitive(user_dtoJSON, "avatarUrl");
    if (avatar_url) { 
    if(!cJSON_IsString(avatar_url) && !cJSON_IsNull(avatar_url))
    {
    goto end; //String
    }
    }

    // user_dto->git_hub_url
    cJSON *git_hub_url = cJSON_GetObjectItemCaseSensitive(user_dtoJSON, "gitHubUrl");
    if (git_hub_url) { 
    if(!cJSON_IsString(git_hub_url) && !cJSON_IsNull(git_hub_url))
    {
    goto end; //String
    }
    }

    // user_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(user_dtoJSON, "countryId");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }

    // user_dto->timezone_id
    cJSON *timezone_id = cJSON_GetObjectItemCaseSensitive(user_dtoJSON, "timezoneId");
    if (timezone_id) { 
    if(!cJSON_IsString(timezone_id) && !cJSON_IsNull(timezone_id))
    {
    goto end; //String
    }
    }

    // user_dto->website_url
    cJSON *website_url = cJSON_GetObjectItemCaseSensitive(user_dtoJSON, "websiteUrl");
    if (website_url) { 
    if(!cJSON_IsString(website_url) && !cJSON_IsNull(website_url))
    {
    goto end; //String
    }
    }

    // user_dto->twitter_url
    cJSON *twitter_url = cJSON_GetObjectItemCaseSensitive(user_dtoJSON, "twitterUrl");
    if (twitter_url) { 
    if(!cJSON_IsString(twitter_url) && !cJSON_IsNull(twitter_url))
    {
    goto end; //String
    }
    }

    // user_dto->you_tube_url
    cJSON *you_tube_url = cJSON_GetObjectItemCaseSensitive(user_dtoJSON, "youTubeUrl");
    if (you_tube_url) { 
    if(!cJSON_IsString(you_tube_url) && !cJSON_IsNull(you_tube_url))
    {
    goto end; //String
    }
    }

    // user_dto->linked_in_url
    cJSON *linked_in_url = cJSON_GetObjectItemCaseSensitive(user_dtoJSON, "linkedInUrl");
    if (linked_in_url) { 
    if(!cJSON_IsString(linked_in_url) && !cJSON_IsNull(linked_in_url))
    {
    goto end; //String
    }
    }

    // user_dto->facebook_url
    cJSON *facebook_url = cJSON_GetObjectItemCaseSensitive(user_dtoJSON, "facebookUrl");
    if (facebook_url) { 
    if(!cJSON_IsString(facebook_url) && !cJSON_IsNull(facebook_url))
    {
    goto end; //String
    }
    }

    // user_dto->instagram_url
    cJSON *instagram_url = cJSON_GetObjectItemCaseSensitive(user_dtoJSON, "instagramUrl");
    if (instagram_url) { 
    if(!cJSON_IsString(instagram_url) && !cJSON_IsNull(instagram_url))
    {
    goto end; //String
    }
    }

    // user_dto->social_profile_id
    cJSON *social_profile_id = cJSON_GetObjectItemCaseSensitive(user_dtoJSON, "socialProfileId");
    if (social_profile_id) { 
    if(!cJSON_IsString(social_profile_id) && !cJSON_IsNull(social_profile_id))
    {
    goto end; //String
    }
    }

    // user_dto->birthday
    cJSON *birthday = cJSON_GetObjectItemCaseSensitive(user_dtoJSON, "birthday");
    if (birthday) { 
    if(!cJSON_IsString(birthday) && !cJSON_IsNull(birthday))
    {
    goto end; //DateTime
    }
    }

    // user_dto->id_provider
    cJSON *id_provider = cJSON_GetObjectItemCaseSensitive(user_dtoJSON, "idProvider");
    if (id_provider) { 
    if(!cJSON_IsString(id_provider) && !cJSON_IsNull(id_provider))
    {
    goto end; //String
    }
    }

    // user_dto->language_id
    cJSON *language_id = cJSON_GetObjectItemCaseSensitive(user_dtoJSON, "languageId");
    if (language_id) { 
    if(!cJSON_IsString(language_id) && !cJSON_IsNull(language_id))
    {
    goto end; //String
    }
    }

    // user_dto->gender
    cJSON *gender = cJSON_GetObjectItemCaseSensitive(user_dtoJSON, "gender");
    usersservice_user_dto_GENDER_e genderVariable;
    if (gender) { 
    if(!cJSON_IsString(gender))
    {
    goto end; //Enum
    }
    genderVariable = user_dto_gender_FromString(gender->valuestring);
    }

    // user_dto->city_id
    cJSON *city_id = cJSON_GetObjectItemCaseSensitive(user_dtoJSON, "cityId");
    if (city_id) { 
    if(!cJSON_IsString(city_id) && !cJSON_IsNull(city_id))
    {
    goto end; //String
    }
    }

    // user_dto->state_id
    cJSON *state_id = cJSON_GetObjectItemCaseSensitive(user_dtoJSON, "stateId");
    if (state_id) { 
    if(!cJSON_IsString(state_id) && !cJSON_IsNull(state_id))
    {
    goto end; //String
    }
    }

    // user_dto->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(user_dtoJSON, "email");
    if (email) { 
    if(!cJSON_IsString(email) && !cJSON_IsNull(email))
    {
    goto end; //String
    }
    }

    // user_dto->about
    cJSON *about = cJSON_GetObjectItemCaseSensitive(user_dtoJSON, "about");
    if (about) { 
    if(!cJSON_IsString(about) && !cJSON_IsNull(about))
    {
    goto end; //String
    }
    }

    // user_dto->job_title
    cJSON *job_title = cJSON_GetObjectItemCaseSensitive(user_dtoJSON, "jobTitle");
    if (job_title) { 
    if(!cJSON_IsString(job_title) && !cJSON_IsNull(job_title))
    {
    goto end; //String
    }
    }

    // user_dto->social_feed_id
    cJSON *social_feed_id = cJSON_GetObjectItemCaseSensitive(user_dtoJSON, "socialFeedId");
    if (social_feed_id) { 
    if(!cJSON_IsString(social_feed_id) && !cJSON_IsNull(social_feed_id))
    {
    goto end; //String
    }
    }

    // user_dto->current_tenant_id
    cJSON *current_tenant_id = cJSON_GetObjectItemCaseSensitive(user_dtoJSON, "currentTenantId");
    if (current_tenant_id) { 
    if(!cJSON_IsString(current_tenant_id) && !cJSON_IsNull(current_tenant_id))
    {
    goto end; //String
    }
    }

    // user_dto->current_enrollment_id
    cJSON *current_enrollment_id = cJSON_GetObjectItemCaseSensitive(user_dtoJSON, "currentEnrollmentId");
    if (current_enrollment_id) { 
    if(!cJSON_IsString(current_enrollment_id) && !cJSON_IsNull(current_enrollment_id))
    {
    goto end; //String
    }
    }

    // user_dto->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(user_dtoJSON, "status");
    if (status) { 
    if(!cJSON_IsString(status) && !cJSON_IsNull(status))
    {
    goto end; //String
    }
    }

    // user_dto->cart_id
    cJSON *cart_id = cJSON_GetObjectItemCaseSensitive(user_dtoJSON, "cartId");
    if (cart_id) { 
    if(!cJSON_IsString(cart_id) && !cJSON_IsNull(cart_id))
    {
    goto end; //String
    }
    }

    // user_dto->wallet_id
    cJSON *wallet_id = cJSON_GetObjectItemCaseSensitive(user_dtoJSON, "walletId");
    if (wallet_id) { 
    if(!cJSON_IsString(wallet_id) && !cJSON_IsNull(wallet_id))
    {
    goto end; //String
    }
    }

    // user_dto->user_name
    cJSON *user_name = cJSON_GetObjectItemCaseSensitive(user_dtoJSON, "userName");
    if (user_name) { 
    if(!cJSON_IsString(user_name) && !cJSON_IsNull(user_name))
    {
    goto end; //String
    }
    }

    // user_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(user_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // user_dto->phone_number
    cJSON *phone_number = cJSON_GetObjectItemCaseSensitive(user_dtoJSON, "phoneNumber");
    if (phone_number) { 
    if(!cJSON_IsString(phone_number) && !cJSON_IsNull(phone_number))
    {
    goto end; //String
    }
    }

    // user_dto->public_identifier
    cJSON *public_identifier = cJSON_GetObjectItemCaseSensitive(user_dtoJSON, "publicIdentifier");
    if (public_identifier) { 
    if(!cJSON_IsString(public_identifier) && !cJSON_IsNull(public_identifier))
    {
    goto end; //String
    }
    }

    // user_dto->identity_provider
    cJSON *identity_provider = cJSON_GetObjectItemCaseSensitive(user_dtoJSON, "identityProvider");
    if (identity_provider) { 
    if(!cJSON_IsString(identity_provider) && !cJSON_IsNull(identity_provider))
    {
    goto end; //String
    }
    }

    // user_dto->phone_number_confirmed
    cJSON *phone_number_confirmed = cJSON_GetObjectItemCaseSensitive(user_dtoJSON, "phoneNumberConfirmed");
    if (phone_number_confirmed) { 
    if(!cJSON_IsBool(phone_number_confirmed))
    {
    goto end; //Bool
    }
    }

    // user_dto->email_confirmed
    cJSON *email_confirmed = cJSON_GetObjectItemCaseSensitive(user_dtoJSON, "emailConfirmed");
    if (email_confirmed) { 
    if(!cJSON_IsBool(email_confirmed))
    {
    goto end; //Bool
    }
    }

    // user_dto->availability
    cJSON *availability = cJSON_GetObjectItemCaseSensitive(user_dtoJSON, "availability");
    usersservice_user_dto_AVAILABILITY_e availabilityVariable;
    if (availability) { 
    if(!cJSON_IsString(availability))
    {
    goto end; //Enum
    }
    availabilityVariable = user_dto_availability_FromString(availability->valuestring);
    }

    // user_dto->lockout_enabled
    cJSON *lockout_enabled = cJSON_GetObjectItemCaseSensitive(user_dtoJSON, "lockoutEnabled");
    if (lockout_enabled) { 
    if(!cJSON_IsBool(lockout_enabled))
    {
    goto end; //Bool
    }
    }

    // user_dto->lockout_end
    cJSON *lockout_end = cJSON_GetObjectItemCaseSensitive(user_dtoJSON, "lockoutEnd");
    if (lockout_end) { 
    if(!cJSON_IsString(lockout_end) && !cJSON_IsNull(lockout_end))
    {
    goto end; //DateTime
    }
    }

    // user_dto->enrollments_count
    cJSON *enrollments_count = cJSON_GetObjectItemCaseSensitive(user_dtoJSON, "enrollmentsCount");
    if (enrollments_count) { 
    if(!cJSON_IsNumber(enrollments_count))
    {
    goto end; //Numeric
    }
    }

    // user_dto->site_theme
    cJSON *site_theme = cJSON_GetObjectItemCaseSensitive(user_dtoJSON, "siteTheme");
    usersservice_user_dto_SITETHEME_e site_themeVariable;
    if (site_theme) { 
    if(!cJSON_IsString(site_theme))
    {
    goto end; //Enum
    }
    site_themeVariable = user_dto_site_theme_FromString(site_theme->valuestring);
    }


    user_dto_local_var = user_dto_create (
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
        social_profile_id && !cJSON_IsNull(social_profile_id) ? strdup(social_profile_id->valuestring) : NULL,
        birthday && !cJSON_IsNull(birthday) ? strdup(birthday->valuestring) : NULL,
        id_provider && !cJSON_IsNull(id_provider) ? strdup(id_provider->valuestring) : NULL,
        language_id && !cJSON_IsNull(language_id) ? strdup(language_id->valuestring) : NULL,
        gender ? genderVariable : usersservice_user_dto_GENDER_NULL,
        city_id && !cJSON_IsNull(city_id) ? strdup(city_id->valuestring) : NULL,
        state_id && !cJSON_IsNull(state_id) ? strdup(state_id->valuestring) : NULL,
        email && !cJSON_IsNull(email) ? strdup(email->valuestring) : NULL,
        about && !cJSON_IsNull(about) ? strdup(about->valuestring) : NULL,
        job_title && !cJSON_IsNull(job_title) ? strdup(job_title->valuestring) : NULL,
        social_feed_id && !cJSON_IsNull(social_feed_id) ? strdup(social_feed_id->valuestring) : NULL,
        current_tenant_id && !cJSON_IsNull(current_tenant_id) ? strdup(current_tenant_id->valuestring) : NULL,
        current_enrollment_id && !cJSON_IsNull(current_enrollment_id) ? strdup(current_enrollment_id->valuestring) : NULL,
        status && !cJSON_IsNull(status) ? strdup(status->valuestring) : NULL,
        cart_id && !cJSON_IsNull(cart_id) ? strdup(cart_id->valuestring) : NULL,
        wallet_id && !cJSON_IsNull(wallet_id) ? strdup(wallet_id->valuestring) : NULL,
        user_name && !cJSON_IsNull(user_name) ? strdup(user_name->valuestring) : NULL,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        phone_number && !cJSON_IsNull(phone_number) ? strdup(phone_number->valuestring) : NULL,
        public_identifier && !cJSON_IsNull(public_identifier) ? strdup(public_identifier->valuestring) : NULL,
        identity_provider && !cJSON_IsNull(identity_provider) ? strdup(identity_provider->valuestring) : NULL,
        phone_number_confirmed ? phone_number_confirmed->valueint : 0,
        email_confirmed ? email_confirmed->valueint : 0,
        availability ? availabilityVariable : usersservice_user_dto_AVAILABILITY_NULL,
        lockout_enabled ? lockout_enabled->valueint : 0,
        lockout_end && !cJSON_IsNull(lockout_end) ? strdup(lockout_end->valuestring) : NULL,
        enrollments_count ? enrollments_count->valuedouble : 0,
        site_theme ? site_themeVariable : usersservice_user_dto_SITETHEME_NULL
        );

    return user_dto_local_var;
end:
    return NULL;

}
