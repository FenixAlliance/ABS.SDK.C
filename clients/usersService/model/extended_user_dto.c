#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "extended_user_dto.h"


char* extended_user_dto_gender_ToString(usersservice_extended_user_dto_GENDER_e gender) {
    char* genderArray[] =  { "NULL", "Unknown", "Male", "Female", "PreferNotToSay" };
    return genderArray[gender];
}

usersservice_extended_user_dto_GENDER_e extended_user_dto_gender_FromString(char* gender){
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
char* extended_user_dto_availability_ToString(usersservice_extended_user_dto_AVAILABILITY_e availability) {
    char* availabilityArray[] =  { "NULL", "DND", "Busy", "Away", "Offline", "Available" };
    return availabilityArray[availability];
}

usersservice_extended_user_dto_AVAILABILITY_e extended_user_dto_availability_FromString(char* availability){
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
char* extended_user_dto_site_theme_ToString(usersservice_extended_user_dto_SITETHEME_e site_theme) {
    char* site_themeArray[] =  { "NULL", "System", "Light", "Dark" };
    return site_themeArray[site_theme];
}

usersservice_extended_user_dto_SITETHEME_e extended_user_dto_site_theme_FromString(char* site_theme){
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

extended_user_dto_t *extended_user_dto_create(
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
    usersservice_extended_user_dto_GENDER_e gender,
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
    usersservice_extended_user_dto_AVAILABILITY_e availability,
    int lockout_enabled,
    char *lockout_end,
    int enrollments_count,
    usersservice_extended_user_dto_SITETHEME_e site_theme,
    cart_dto_t *cart,
    wallet_dto_t *wallet,
    social_profile_dto_t *social_profile,
    user_settings_dto_t *settings
    ) {
    extended_user_dto_t *extended_user_dto_local_var = malloc(sizeof(extended_user_dto_t));
    if (!extended_user_dto_local_var) {
        return NULL;
    }
    extended_user_dto_local_var->id = id;
    extended_user_dto_local_var->timestamp = timestamp;
    extended_user_dto_local_var->full_name = full_name;
    extended_user_dto_local_var->qualified_name = qualified_name;
    extended_user_dto_local_var->public_name = public_name;
    extended_user_dto_local_var->handler = handler;
    extended_user_dto_local_var->last_name = last_name;
    extended_user_dto_local_var->first_name = first_name;
    extended_user_dto_local_var->cover_url = cover_url;
    extended_user_dto_local_var->avatar_url = avatar_url;
    extended_user_dto_local_var->git_hub_url = git_hub_url;
    extended_user_dto_local_var->country_id = country_id;
    extended_user_dto_local_var->timezone_id = timezone_id;
    extended_user_dto_local_var->website_url = website_url;
    extended_user_dto_local_var->twitter_url = twitter_url;
    extended_user_dto_local_var->you_tube_url = you_tube_url;
    extended_user_dto_local_var->linked_in_url = linked_in_url;
    extended_user_dto_local_var->facebook_url = facebook_url;
    extended_user_dto_local_var->instagram_url = instagram_url;
    extended_user_dto_local_var->social_profile_id = social_profile_id;
    extended_user_dto_local_var->birthday = birthday;
    extended_user_dto_local_var->id_provider = id_provider;
    extended_user_dto_local_var->language_id = language_id;
    extended_user_dto_local_var->gender = gender;
    extended_user_dto_local_var->city_id = city_id;
    extended_user_dto_local_var->state_id = state_id;
    extended_user_dto_local_var->email = email;
    extended_user_dto_local_var->about = about;
    extended_user_dto_local_var->job_title = job_title;
    extended_user_dto_local_var->social_feed_id = social_feed_id;
    extended_user_dto_local_var->current_tenant_id = current_tenant_id;
    extended_user_dto_local_var->current_enrollment_id = current_enrollment_id;
    extended_user_dto_local_var->status = status;
    extended_user_dto_local_var->cart_id = cart_id;
    extended_user_dto_local_var->wallet_id = wallet_id;
    extended_user_dto_local_var->user_name = user_name;
    extended_user_dto_local_var->currency_id = currency_id;
    extended_user_dto_local_var->phone_number = phone_number;
    extended_user_dto_local_var->public_identifier = public_identifier;
    extended_user_dto_local_var->identity_provider = identity_provider;
    extended_user_dto_local_var->phone_number_confirmed = phone_number_confirmed;
    extended_user_dto_local_var->email_confirmed = email_confirmed;
    extended_user_dto_local_var->availability = availability;
    extended_user_dto_local_var->lockout_enabled = lockout_enabled;
    extended_user_dto_local_var->lockout_end = lockout_end;
    extended_user_dto_local_var->enrollments_count = enrollments_count;
    extended_user_dto_local_var->site_theme = site_theme;
    extended_user_dto_local_var->cart = cart;
    extended_user_dto_local_var->wallet = wallet;
    extended_user_dto_local_var->social_profile = social_profile;
    extended_user_dto_local_var->settings = settings;

    return extended_user_dto_local_var;
}


void extended_user_dto_free(extended_user_dto_t *extended_user_dto) {
    if(NULL == extended_user_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (extended_user_dto->id) {
        free(extended_user_dto->id);
        extended_user_dto->id = NULL;
    }
    if (extended_user_dto->timestamp) {
        free(extended_user_dto->timestamp);
        extended_user_dto->timestamp = NULL;
    }
    if (extended_user_dto->full_name) {
        free(extended_user_dto->full_name);
        extended_user_dto->full_name = NULL;
    }
    if (extended_user_dto->qualified_name) {
        free(extended_user_dto->qualified_name);
        extended_user_dto->qualified_name = NULL;
    }
    if (extended_user_dto->public_name) {
        free(extended_user_dto->public_name);
        extended_user_dto->public_name = NULL;
    }
    if (extended_user_dto->handler) {
        free(extended_user_dto->handler);
        extended_user_dto->handler = NULL;
    }
    if (extended_user_dto->last_name) {
        free(extended_user_dto->last_name);
        extended_user_dto->last_name = NULL;
    }
    if (extended_user_dto->first_name) {
        free(extended_user_dto->first_name);
        extended_user_dto->first_name = NULL;
    }
    if (extended_user_dto->cover_url) {
        free(extended_user_dto->cover_url);
        extended_user_dto->cover_url = NULL;
    }
    if (extended_user_dto->avatar_url) {
        free(extended_user_dto->avatar_url);
        extended_user_dto->avatar_url = NULL;
    }
    if (extended_user_dto->git_hub_url) {
        free(extended_user_dto->git_hub_url);
        extended_user_dto->git_hub_url = NULL;
    }
    if (extended_user_dto->country_id) {
        free(extended_user_dto->country_id);
        extended_user_dto->country_id = NULL;
    }
    if (extended_user_dto->timezone_id) {
        free(extended_user_dto->timezone_id);
        extended_user_dto->timezone_id = NULL;
    }
    if (extended_user_dto->website_url) {
        free(extended_user_dto->website_url);
        extended_user_dto->website_url = NULL;
    }
    if (extended_user_dto->twitter_url) {
        free(extended_user_dto->twitter_url);
        extended_user_dto->twitter_url = NULL;
    }
    if (extended_user_dto->you_tube_url) {
        free(extended_user_dto->you_tube_url);
        extended_user_dto->you_tube_url = NULL;
    }
    if (extended_user_dto->linked_in_url) {
        free(extended_user_dto->linked_in_url);
        extended_user_dto->linked_in_url = NULL;
    }
    if (extended_user_dto->facebook_url) {
        free(extended_user_dto->facebook_url);
        extended_user_dto->facebook_url = NULL;
    }
    if (extended_user_dto->instagram_url) {
        free(extended_user_dto->instagram_url);
        extended_user_dto->instagram_url = NULL;
    }
    if (extended_user_dto->social_profile_id) {
        free(extended_user_dto->social_profile_id);
        extended_user_dto->social_profile_id = NULL;
    }
    if (extended_user_dto->birthday) {
        free(extended_user_dto->birthday);
        extended_user_dto->birthday = NULL;
    }
    if (extended_user_dto->id_provider) {
        free(extended_user_dto->id_provider);
        extended_user_dto->id_provider = NULL;
    }
    if (extended_user_dto->language_id) {
        free(extended_user_dto->language_id);
        extended_user_dto->language_id = NULL;
    }
    if (extended_user_dto->city_id) {
        free(extended_user_dto->city_id);
        extended_user_dto->city_id = NULL;
    }
    if (extended_user_dto->state_id) {
        free(extended_user_dto->state_id);
        extended_user_dto->state_id = NULL;
    }
    if (extended_user_dto->email) {
        free(extended_user_dto->email);
        extended_user_dto->email = NULL;
    }
    if (extended_user_dto->about) {
        free(extended_user_dto->about);
        extended_user_dto->about = NULL;
    }
    if (extended_user_dto->job_title) {
        free(extended_user_dto->job_title);
        extended_user_dto->job_title = NULL;
    }
    if (extended_user_dto->social_feed_id) {
        free(extended_user_dto->social_feed_id);
        extended_user_dto->social_feed_id = NULL;
    }
    if (extended_user_dto->current_tenant_id) {
        free(extended_user_dto->current_tenant_id);
        extended_user_dto->current_tenant_id = NULL;
    }
    if (extended_user_dto->current_enrollment_id) {
        free(extended_user_dto->current_enrollment_id);
        extended_user_dto->current_enrollment_id = NULL;
    }
    if (extended_user_dto->status) {
        free(extended_user_dto->status);
        extended_user_dto->status = NULL;
    }
    if (extended_user_dto->cart_id) {
        free(extended_user_dto->cart_id);
        extended_user_dto->cart_id = NULL;
    }
    if (extended_user_dto->wallet_id) {
        free(extended_user_dto->wallet_id);
        extended_user_dto->wallet_id = NULL;
    }
    if (extended_user_dto->user_name) {
        free(extended_user_dto->user_name);
        extended_user_dto->user_name = NULL;
    }
    if (extended_user_dto->currency_id) {
        free(extended_user_dto->currency_id);
        extended_user_dto->currency_id = NULL;
    }
    if (extended_user_dto->phone_number) {
        free(extended_user_dto->phone_number);
        extended_user_dto->phone_number = NULL;
    }
    if (extended_user_dto->public_identifier) {
        free(extended_user_dto->public_identifier);
        extended_user_dto->public_identifier = NULL;
    }
    if (extended_user_dto->identity_provider) {
        free(extended_user_dto->identity_provider);
        extended_user_dto->identity_provider = NULL;
    }
    if (extended_user_dto->lockout_end) {
        free(extended_user_dto->lockout_end);
        extended_user_dto->lockout_end = NULL;
    }
    if (extended_user_dto->cart) {
        cart_dto_free(extended_user_dto->cart);
        extended_user_dto->cart = NULL;
    }
    if (extended_user_dto->wallet) {
        wallet_dto_free(extended_user_dto->wallet);
        extended_user_dto->wallet = NULL;
    }
    if (extended_user_dto->social_profile) {
        social_profile_dto_free(extended_user_dto->social_profile);
        extended_user_dto->social_profile = NULL;
    }
    if (extended_user_dto->settings) {
        user_settings_dto_free(extended_user_dto->settings);
        extended_user_dto->settings = NULL;
    }
    free(extended_user_dto);
}

cJSON *extended_user_dto_convertToJSON(extended_user_dto_t *extended_user_dto) {
    cJSON *item = cJSON_CreateObject();

    // extended_user_dto->id
    if(extended_user_dto->id) {
    if(cJSON_AddStringToObject(item, "id", extended_user_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // extended_user_dto->timestamp
    if(extended_user_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", extended_user_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // extended_user_dto->full_name
    if(extended_user_dto->full_name) {
    if(cJSON_AddStringToObject(item, "fullName", extended_user_dto->full_name) == NULL) {
    goto fail; //String
    }
    }


    // extended_user_dto->qualified_name
    if(extended_user_dto->qualified_name) {
    if(cJSON_AddStringToObject(item, "qualifiedName", extended_user_dto->qualified_name) == NULL) {
    goto fail; //String
    }
    }


    // extended_user_dto->public_name
    if(extended_user_dto->public_name) {
    if(cJSON_AddStringToObject(item, "publicName", extended_user_dto->public_name) == NULL) {
    goto fail; //String
    }
    }


    // extended_user_dto->handler
    if(extended_user_dto->handler) {
    if(cJSON_AddStringToObject(item, "handler", extended_user_dto->handler) == NULL) {
    goto fail; //String
    }
    }


    // extended_user_dto->last_name
    if(extended_user_dto->last_name) {
    if(cJSON_AddStringToObject(item, "lastName", extended_user_dto->last_name) == NULL) {
    goto fail; //String
    }
    }


    // extended_user_dto->first_name
    if(extended_user_dto->first_name) {
    if(cJSON_AddStringToObject(item, "firstName", extended_user_dto->first_name) == NULL) {
    goto fail; //String
    }
    }


    // extended_user_dto->cover_url
    if(extended_user_dto->cover_url) {
    if(cJSON_AddStringToObject(item, "coverUrl", extended_user_dto->cover_url) == NULL) {
    goto fail; //String
    }
    }


    // extended_user_dto->avatar_url
    if(extended_user_dto->avatar_url) {
    if(cJSON_AddStringToObject(item, "avatarUrl", extended_user_dto->avatar_url) == NULL) {
    goto fail; //String
    }
    }


    // extended_user_dto->git_hub_url
    if(extended_user_dto->git_hub_url) {
    if(cJSON_AddStringToObject(item, "gitHubUrl", extended_user_dto->git_hub_url) == NULL) {
    goto fail; //String
    }
    }


    // extended_user_dto->country_id
    if(extended_user_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryId", extended_user_dto->country_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_user_dto->timezone_id
    if(extended_user_dto->timezone_id) {
    if(cJSON_AddStringToObject(item, "timezoneId", extended_user_dto->timezone_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_user_dto->website_url
    if(extended_user_dto->website_url) {
    if(cJSON_AddStringToObject(item, "websiteUrl", extended_user_dto->website_url) == NULL) {
    goto fail; //String
    }
    }


    // extended_user_dto->twitter_url
    if(extended_user_dto->twitter_url) {
    if(cJSON_AddStringToObject(item, "twitterUrl", extended_user_dto->twitter_url) == NULL) {
    goto fail; //String
    }
    }


    // extended_user_dto->you_tube_url
    if(extended_user_dto->you_tube_url) {
    if(cJSON_AddStringToObject(item, "youTubeUrl", extended_user_dto->you_tube_url) == NULL) {
    goto fail; //String
    }
    }


    // extended_user_dto->linked_in_url
    if(extended_user_dto->linked_in_url) {
    if(cJSON_AddStringToObject(item, "linkedInUrl", extended_user_dto->linked_in_url) == NULL) {
    goto fail; //String
    }
    }


    // extended_user_dto->facebook_url
    if(extended_user_dto->facebook_url) {
    if(cJSON_AddStringToObject(item, "facebookUrl", extended_user_dto->facebook_url) == NULL) {
    goto fail; //String
    }
    }


    // extended_user_dto->instagram_url
    if(extended_user_dto->instagram_url) {
    if(cJSON_AddStringToObject(item, "instagramUrl", extended_user_dto->instagram_url) == NULL) {
    goto fail; //String
    }
    }


    // extended_user_dto->social_profile_id
    if(extended_user_dto->social_profile_id) {
    if(cJSON_AddStringToObject(item, "socialProfileId", extended_user_dto->social_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_user_dto->birthday
    if(extended_user_dto->birthday) {
    if(cJSON_AddStringToObject(item, "birthday", extended_user_dto->birthday) == NULL) {
    goto fail; //Date-Time
    }
    }


    // extended_user_dto->id_provider
    if(extended_user_dto->id_provider) {
    if(cJSON_AddStringToObject(item, "idProvider", extended_user_dto->id_provider) == NULL) {
    goto fail; //String
    }
    }


    // extended_user_dto->language_id
    if(extended_user_dto->language_id) {
    if(cJSON_AddStringToObject(item, "languageId", extended_user_dto->language_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_user_dto->gender
    if(extended_user_dto->gender != usersservice_extended_user_dto_GENDER_NULL) {
    if(cJSON_AddStringToObject(item, "gender", genderextended_user_dto_ToString(extended_user_dto->gender)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // extended_user_dto->city_id
    if(extended_user_dto->city_id) {
    if(cJSON_AddStringToObject(item, "cityId", extended_user_dto->city_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_user_dto->state_id
    if(extended_user_dto->state_id) {
    if(cJSON_AddStringToObject(item, "stateId", extended_user_dto->state_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_user_dto->email
    if(extended_user_dto->email) {
    if(cJSON_AddStringToObject(item, "email", extended_user_dto->email) == NULL) {
    goto fail; //String
    }
    }


    // extended_user_dto->about
    if(extended_user_dto->about) {
    if(cJSON_AddStringToObject(item, "about", extended_user_dto->about) == NULL) {
    goto fail; //String
    }
    }


    // extended_user_dto->job_title
    if(extended_user_dto->job_title) {
    if(cJSON_AddStringToObject(item, "jobTitle", extended_user_dto->job_title) == NULL) {
    goto fail; //String
    }
    }


    // extended_user_dto->social_feed_id
    if(extended_user_dto->social_feed_id) {
    if(cJSON_AddStringToObject(item, "socialFeedId", extended_user_dto->social_feed_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_user_dto->current_tenant_id
    if(extended_user_dto->current_tenant_id) {
    if(cJSON_AddStringToObject(item, "currentTenantId", extended_user_dto->current_tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_user_dto->current_enrollment_id
    if(extended_user_dto->current_enrollment_id) {
    if(cJSON_AddStringToObject(item, "currentEnrollmentId", extended_user_dto->current_enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_user_dto->status
    if(extended_user_dto->status) {
    if(cJSON_AddStringToObject(item, "status", extended_user_dto->status) == NULL) {
    goto fail; //String
    }
    }


    // extended_user_dto->cart_id
    if(extended_user_dto->cart_id) {
    if(cJSON_AddStringToObject(item, "cartId", extended_user_dto->cart_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_user_dto->wallet_id
    if(extended_user_dto->wallet_id) {
    if(cJSON_AddStringToObject(item, "walletId", extended_user_dto->wallet_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_user_dto->user_name
    if(extended_user_dto->user_name) {
    if(cJSON_AddStringToObject(item, "userName", extended_user_dto->user_name) == NULL) {
    goto fail; //String
    }
    }


    // extended_user_dto->currency_id
    if(extended_user_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", extended_user_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_user_dto->phone_number
    if(extended_user_dto->phone_number) {
    if(cJSON_AddStringToObject(item, "phoneNumber", extended_user_dto->phone_number) == NULL) {
    goto fail; //String
    }
    }


    // extended_user_dto->public_identifier
    if(extended_user_dto->public_identifier) {
    if(cJSON_AddStringToObject(item, "publicIdentifier", extended_user_dto->public_identifier) == NULL) {
    goto fail; //String
    }
    }


    // extended_user_dto->identity_provider
    if(extended_user_dto->identity_provider) {
    if(cJSON_AddStringToObject(item, "identityProvider", extended_user_dto->identity_provider) == NULL) {
    goto fail; //String
    }
    }


    // extended_user_dto->phone_number_confirmed
    if(extended_user_dto->phone_number_confirmed) {
    if(cJSON_AddBoolToObject(item, "phoneNumberConfirmed", extended_user_dto->phone_number_confirmed) == NULL) {
    goto fail; //Bool
    }
    }


    // extended_user_dto->email_confirmed
    if(extended_user_dto->email_confirmed) {
    if(cJSON_AddBoolToObject(item, "emailConfirmed", extended_user_dto->email_confirmed) == NULL) {
    goto fail; //Bool
    }
    }


    // extended_user_dto->availability
    if(extended_user_dto->availability != usersservice_extended_user_dto_AVAILABILITY_NULL) {
    if(cJSON_AddStringToObject(item, "availability", availabilityextended_user_dto_ToString(extended_user_dto->availability)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // extended_user_dto->lockout_enabled
    if(extended_user_dto->lockout_enabled) {
    if(cJSON_AddBoolToObject(item, "lockoutEnabled", extended_user_dto->lockout_enabled) == NULL) {
    goto fail; //Bool
    }
    }


    // extended_user_dto->lockout_end
    if(extended_user_dto->lockout_end) {
    if(cJSON_AddStringToObject(item, "lockoutEnd", extended_user_dto->lockout_end) == NULL) {
    goto fail; //Date-Time
    }
    }


    // extended_user_dto->enrollments_count
    if(extended_user_dto->enrollments_count) {
    if(cJSON_AddNumberToObject(item, "enrollmentsCount", extended_user_dto->enrollments_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_user_dto->site_theme
    if(extended_user_dto->site_theme != usersservice_extended_user_dto_SITETHEME_NULL) {
    if(cJSON_AddStringToObject(item, "siteTheme", site_themeextended_user_dto_ToString(extended_user_dto->site_theme)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // extended_user_dto->cart
    if(extended_user_dto->cart) {
    cJSON *cart_local_JSON = cart_dto_convertToJSON(extended_user_dto->cart);
    if(cart_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "cart", cart_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // extended_user_dto->wallet
    if(extended_user_dto->wallet) {
    cJSON *wallet_local_JSON = wallet_dto_convertToJSON(extended_user_dto->wallet);
    if(wallet_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "wallet", wallet_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // extended_user_dto->social_profile
    if(extended_user_dto->social_profile) {
    cJSON *social_profile_local_JSON = social_profile_dto_convertToJSON(extended_user_dto->social_profile);
    if(social_profile_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "socialProfile", social_profile_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // extended_user_dto->settings
    if(extended_user_dto->settings) {
    cJSON *settings_local_JSON = user_settings_dto_convertToJSON(extended_user_dto->settings);
    if(settings_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "settings", settings_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

extended_user_dto_t *extended_user_dto_parseFromJSON(cJSON *extended_user_dtoJSON){

    extended_user_dto_t *extended_user_dto_local_var = NULL;

    // define the local variable for extended_user_dto->cart
    cart_dto_t *cart_local_nonprim = NULL;

    // define the local variable for extended_user_dto->wallet
    wallet_dto_t *wallet_local_nonprim = NULL;

    // define the local variable for extended_user_dto->social_profile
    social_profile_dto_t *social_profile_local_nonprim = NULL;

    // define the local variable for extended_user_dto->settings
    user_settings_dto_t *settings_local_nonprim = NULL;

    // extended_user_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // extended_user_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // extended_user_dto->full_name
    cJSON *full_name = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "fullName");
    if (full_name) { 
    if(!cJSON_IsString(full_name) && !cJSON_IsNull(full_name))
    {
    goto end; //String
    }
    }

    // extended_user_dto->qualified_name
    cJSON *qualified_name = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "qualifiedName");
    if (qualified_name) { 
    if(!cJSON_IsString(qualified_name) && !cJSON_IsNull(qualified_name))
    {
    goto end; //String
    }
    }

    // extended_user_dto->public_name
    cJSON *public_name = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "publicName");
    if (public_name) { 
    if(!cJSON_IsString(public_name) && !cJSON_IsNull(public_name))
    {
    goto end; //String
    }
    }

    // extended_user_dto->handler
    cJSON *handler = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "handler");
    if (handler) { 
    if(!cJSON_IsString(handler) && !cJSON_IsNull(handler))
    {
    goto end; //String
    }
    }

    // extended_user_dto->last_name
    cJSON *last_name = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "lastName");
    if (last_name) { 
    if(!cJSON_IsString(last_name) && !cJSON_IsNull(last_name))
    {
    goto end; //String
    }
    }

    // extended_user_dto->first_name
    cJSON *first_name = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "firstName");
    if (first_name) { 
    if(!cJSON_IsString(first_name) && !cJSON_IsNull(first_name))
    {
    goto end; //String
    }
    }

    // extended_user_dto->cover_url
    cJSON *cover_url = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "coverUrl");
    if (cover_url) { 
    if(!cJSON_IsString(cover_url) && !cJSON_IsNull(cover_url))
    {
    goto end; //String
    }
    }

    // extended_user_dto->avatar_url
    cJSON *avatar_url = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "avatarUrl");
    if (avatar_url) { 
    if(!cJSON_IsString(avatar_url) && !cJSON_IsNull(avatar_url))
    {
    goto end; //String
    }
    }

    // extended_user_dto->git_hub_url
    cJSON *git_hub_url = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "gitHubUrl");
    if (git_hub_url) { 
    if(!cJSON_IsString(git_hub_url) && !cJSON_IsNull(git_hub_url))
    {
    goto end; //String
    }
    }

    // extended_user_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "countryId");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }

    // extended_user_dto->timezone_id
    cJSON *timezone_id = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "timezoneId");
    if (timezone_id) { 
    if(!cJSON_IsString(timezone_id) && !cJSON_IsNull(timezone_id))
    {
    goto end; //String
    }
    }

    // extended_user_dto->website_url
    cJSON *website_url = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "websiteUrl");
    if (website_url) { 
    if(!cJSON_IsString(website_url) && !cJSON_IsNull(website_url))
    {
    goto end; //String
    }
    }

    // extended_user_dto->twitter_url
    cJSON *twitter_url = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "twitterUrl");
    if (twitter_url) { 
    if(!cJSON_IsString(twitter_url) && !cJSON_IsNull(twitter_url))
    {
    goto end; //String
    }
    }

    // extended_user_dto->you_tube_url
    cJSON *you_tube_url = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "youTubeUrl");
    if (you_tube_url) { 
    if(!cJSON_IsString(you_tube_url) && !cJSON_IsNull(you_tube_url))
    {
    goto end; //String
    }
    }

    // extended_user_dto->linked_in_url
    cJSON *linked_in_url = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "linkedInUrl");
    if (linked_in_url) { 
    if(!cJSON_IsString(linked_in_url) && !cJSON_IsNull(linked_in_url))
    {
    goto end; //String
    }
    }

    // extended_user_dto->facebook_url
    cJSON *facebook_url = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "facebookUrl");
    if (facebook_url) { 
    if(!cJSON_IsString(facebook_url) && !cJSON_IsNull(facebook_url))
    {
    goto end; //String
    }
    }

    // extended_user_dto->instagram_url
    cJSON *instagram_url = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "instagramUrl");
    if (instagram_url) { 
    if(!cJSON_IsString(instagram_url) && !cJSON_IsNull(instagram_url))
    {
    goto end; //String
    }
    }

    // extended_user_dto->social_profile_id
    cJSON *social_profile_id = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "socialProfileId");
    if (social_profile_id) { 
    if(!cJSON_IsString(social_profile_id) && !cJSON_IsNull(social_profile_id))
    {
    goto end; //String
    }
    }

    // extended_user_dto->birthday
    cJSON *birthday = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "birthday");
    if (birthday) { 
    if(!cJSON_IsString(birthday) && !cJSON_IsNull(birthday))
    {
    goto end; //DateTime
    }
    }

    // extended_user_dto->id_provider
    cJSON *id_provider = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "idProvider");
    if (id_provider) { 
    if(!cJSON_IsString(id_provider) && !cJSON_IsNull(id_provider))
    {
    goto end; //String
    }
    }

    // extended_user_dto->language_id
    cJSON *language_id = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "languageId");
    if (language_id) { 
    if(!cJSON_IsString(language_id) && !cJSON_IsNull(language_id))
    {
    goto end; //String
    }
    }

    // extended_user_dto->gender
    cJSON *gender = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "gender");
    usersservice_extended_user_dto_GENDER_e genderVariable;
    if (gender) { 
    if(!cJSON_IsString(gender))
    {
    goto end; //Enum
    }
    genderVariable = extended_user_dto_gender_FromString(gender->valuestring);
    }

    // extended_user_dto->city_id
    cJSON *city_id = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "cityId");
    if (city_id) { 
    if(!cJSON_IsString(city_id) && !cJSON_IsNull(city_id))
    {
    goto end; //String
    }
    }

    // extended_user_dto->state_id
    cJSON *state_id = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "stateId");
    if (state_id) { 
    if(!cJSON_IsString(state_id) && !cJSON_IsNull(state_id))
    {
    goto end; //String
    }
    }

    // extended_user_dto->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "email");
    if (email) { 
    if(!cJSON_IsString(email) && !cJSON_IsNull(email))
    {
    goto end; //String
    }
    }

    // extended_user_dto->about
    cJSON *about = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "about");
    if (about) { 
    if(!cJSON_IsString(about) && !cJSON_IsNull(about))
    {
    goto end; //String
    }
    }

    // extended_user_dto->job_title
    cJSON *job_title = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "jobTitle");
    if (job_title) { 
    if(!cJSON_IsString(job_title) && !cJSON_IsNull(job_title))
    {
    goto end; //String
    }
    }

    // extended_user_dto->social_feed_id
    cJSON *social_feed_id = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "socialFeedId");
    if (social_feed_id) { 
    if(!cJSON_IsString(social_feed_id) && !cJSON_IsNull(social_feed_id))
    {
    goto end; //String
    }
    }

    // extended_user_dto->current_tenant_id
    cJSON *current_tenant_id = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "currentTenantId");
    if (current_tenant_id) { 
    if(!cJSON_IsString(current_tenant_id) && !cJSON_IsNull(current_tenant_id))
    {
    goto end; //String
    }
    }

    // extended_user_dto->current_enrollment_id
    cJSON *current_enrollment_id = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "currentEnrollmentId");
    if (current_enrollment_id) { 
    if(!cJSON_IsString(current_enrollment_id) && !cJSON_IsNull(current_enrollment_id))
    {
    goto end; //String
    }
    }

    // extended_user_dto->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "status");
    if (status) { 
    if(!cJSON_IsString(status) && !cJSON_IsNull(status))
    {
    goto end; //String
    }
    }

    // extended_user_dto->cart_id
    cJSON *cart_id = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "cartId");
    if (cart_id) { 
    if(!cJSON_IsString(cart_id) && !cJSON_IsNull(cart_id))
    {
    goto end; //String
    }
    }

    // extended_user_dto->wallet_id
    cJSON *wallet_id = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "walletId");
    if (wallet_id) { 
    if(!cJSON_IsString(wallet_id) && !cJSON_IsNull(wallet_id))
    {
    goto end; //String
    }
    }

    // extended_user_dto->user_name
    cJSON *user_name = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "userName");
    if (user_name) { 
    if(!cJSON_IsString(user_name) && !cJSON_IsNull(user_name))
    {
    goto end; //String
    }
    }

    // extended_user_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // extended_user_dto->phone_number
    cJSON *phone_number = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "phoneNumber");
    if (phone_number) { 
    if(!cJSON_IsString(phone_number) && !cJSON_IsNull(phone_number))
    {
    goto end; //String
    }
    }

    // extended_user_dto->public_identifier
    cJSON *public_identifier = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "publicIdentifier");
    if (public_identifier) { 
    if(!cJSON_IsString(public_identifier) && !cJSON_IsNull(public_identifier))
    {
    goto end; //String
    }
    }

    // extended_user_dto->identity_provider
    cJSON *identity_provider = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "identityProvider");
    if (identity_provider) { 
    if(!cJSON_IsString(identity_provider) && !cJSON_IsNull(identity_provider))
    {
    goto end; //String
    }
    }

    // extended_user_dto->phone_number_confirmed
    cJSON *phone_number_confirmed = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "phoneNumberConfirmed");
    if (phone_number_confirmed) { 
    if(!cJSON_IsBool(phone_number_confirmed))
    {
    goto end; //Bool
    }
    }

    // extended_user_dto->email_confirmed
    cJSON *email_confirmed = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "emailConfirmed");
    if (email_confirmed) { 
    if(!cJSON_IsBool(email_confirmed))
    {
    goto end; //Bool
    }
    }

    // extended_user_dto->availability
    cJSON *availability = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "availability");
    usersservice_extended_user_dto_AVAILABILITY_e availabilityVariable;
    if (availability) { 
    if(!cJSON_IsString(availability))
    {
    goto end; //Enum
    }
    availabilityVariable = extended_user_dto_availability_FromString(availability->valuestring);
    }

    // extended_user_dto->lockout_enabled
    cJSON *lockout_enabled = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "lockoutEnabled");
    if (lockout_enabled) { 
    if(!cJSON_IsBool(lockout_enabled))
    {
    goto end; //Bool
    }
    }

    // extended_user_dto->lockout_end
    cJSON *lockout_end = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "lockoutEnd");
    if (lockout_end) { 
    if(!cJSON_IsString(lockout_end) && !cJSON_IsNull(lockout_end))
    {
    goto end; //DateTime
    }
    }

    // extended_user_dto->enrollments_count
    cJSON *enrollments_count = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "enrollmentsCount");
    if (enrollments_count) { 
    if(!cJSON_IsNumber(enrollments_count))
    {
    goto end; //Numeric
    }
    }

    // extended_user_dto->site_theme
    cJSON *site_theme = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "siteTheme");
    usersservice_extended_user_dto_SITETHEME_e site_themeVariable;
    if (site_theme) { 
    if(!cJSON_IsString(site_theme))
    {
    goto end; //Enum
    }
    site_themeVariable = extended_user_dto_site_theme_FromString(site_theme->valuestring);
    }

    // extended_user_dto->cart
    cJSON *cart = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "cart");
    if (cart) { 
    cart_local_nonprim = cart_dto_parseFromJSON(cart); //nonprimitive
    }

    // extended_user_dto->wallet
    cJSON *wallet = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "wallet");
    if (wallet) { 
    wallet_local_nonprim = wallet_dto_parseFromJSON(wallet); //nonprimitive
    }

    // extended_user_dto->social_profile
    cJSON *social_profile = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "socialProfile");
    if (social_profile) { 
    social_profile_local_nonprim = social_profile_dto_parseFromJSON(social_profile); //nonprimitive
    }

    // extended_user_dto->settings
    cJSON *settings = cJSON_GetObjectItemCaseSensitive(extended_user_dtoJSON, "settings");
    if (settings) { 
    settings_local_nonprim = user_settings_dto_parseFromJSON(settings); //nonprimitive
    }


    extended_user_dto_local_var = extended_user_dto_create (
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
        gender ? genderVariable : usersservice_extended_user_dto_GENDER_NULL,
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
        availability ? availabilityVariable : usersservice_extended_user_dto_AVAILABILITY_NULL,
        lockout_enabled ? lockout_enabled->valueint : 0,
        lockout_end && !cJSON_IsNull(lockout_end) ? strdup(lockout_end->valuestring) : NULL,
        enrollments_count ? enrollments_count->valuedouble : 0,
        site_theme ? site_themeVariable : usersservice_extended_user_dto_SITETHEME_NULL,
        cart ? cart_local_nonprim : NULL,
        wallet ? wallet_local_nonprim : NULL,
        social_profile ? social_profile_local_nonprim : NULL,
        settings ? settings_local_nonprim : NULL
        );

    return extended_user_dto_local_var;
end:
    if (cart_local_nonprim) {
        cart_dto_free(cart_local_nonprim);
        cart_local_nonprim = NULL;
    }
    if (wallet_local_nonprim) {
        wallet_dto_free(wallet_local_nonprim);
        wallet_local_nonprim = NULL;
    }
    if (social_profile_local_nonprim) {
        social_profile_dto_free(social_profile_local_nonprim);
        social_profile_local_nonprim = NULL;
    }
    if (settings_local_nonprim) {
        user_settings_dto_free(settings_local_nonprim);
        settings_local_nonprim = NULL;
    }
    return NULL;

}
