#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "user_update_dto.h"


char* user_update_dto_gender_ToString(systemservice_user_update_dto_GENDER_e gender) {
    char* genderArray[] =  { "NULL", "Unknown", "Male", "Female", "PreferNotToSay" };
    return genderArray[gender];
}

systemservice_user_update_dto_GENDER_e user_update_dto_gender_FromString(char* gender){
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
char* user_update_dto_availability_ToString(systemservice_user_update_dto_AVAILABILITY_e availability) {
    char* availabilityArray[] =  { "NULL", "DND", "Busy", "Away", "Offline", "Available" };
    return availabilityArray[availability];
}

systemservice_user_update_dto_AVAILABILITY_e user_update_dto_availability_FromString(char* availability){
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

user_update_dto_t *user_update_dto_create(
    char *qualified_name,
    char *birthday,
    char *first_name,
    char *last_name,
    char *public_name,
    char *id_provider,
    systemservice_user_update_dto_GENDER_e gender,
    char *email,
    char *about,
    char *status,
    char *job_title,
    char *timezone_id,
    char *language_id,
    char *currency_id,
    char *country_id,
    char *state_id,
    char *city_id,
    char *git_hub_url,
    char *website_url,
    char *twitter_url,
    char *facebook_url,
    char *you_tube_url,
    char *linked_in_url,
    char *instagram_url,
    char *web_url,
    systemservice_user_update_dto_AVAILABILITY_e availability
    ) {
    user_update_dto_t *user_update_dto_local_var = malloc(sizeof(user_update_dto_t));
    if (!user_update_dto_local_var) {
        return NULL;
    }
    user_update_dto_local_var->qualified_name = qualified_name;
    user_update_dto_local_var->birthday = birthday;
    user_update_dto_local_var->first_name = first_name;
    user_update_dto_local_var->last_name = last_name;
    user_update_dto_local_var->public_name = public_name;
    user_update_dto_local_var->id_provider = id_provider;
    user_update_dto_local_var->gender = gender;
    user_update_dto_local_var->email = email;
    user_update_dto_local_var->about = about;
    user_update_dto_local_var->status = status;
    user_update_dto_local_var->job_title = job_title;
    user_update_dto_local_var->timezone_id = timezone_id;
    user_update_dto_local_var->language_id = language_id;
    user_update_dto_local_var->currency_id = currency_id;
    user_update_dto_local_var->country_id = country_id;
    user_update_dto_local_var->state_id = state_id;
    user_update_dto_local_var->city_id = city_id;
    user_update_dto_local_var->git_hub_url = git_hub_url;
    user_update_dto_local_var->website_url = website_url;
    user_update_dto_local_var->twitter_url = twitter_url;
    user_update_dto_local_var->facebook_url = facebook_url;
    user_update_dto_local_var->you_tube_url = you_tube_url;
    user_update_dto_local_var->linked_in_url = linked_in_url;
    user_update_dto_local_var->instagram_url = instagram_url;
    user_update_dto_local_var->web_url = web_url;
    user_update_dto_local_var->availability = availability;

    return user_update_dto_local_var;
}


void user_update_dto_free(user_update_dto_t *user_update_dto) {
    if(NULL == user_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (user_update_dto->qualified_name) {
        free(user_update_dto->qualified_name);
        user_update_dto->qualified_name = NULL;
    }
    if (user_update_dto->birthday) {
        free(user_update_dto->birthday);
        user_update_dto->birthday = NULL;
    }
    if (user_update_dto->first_name) {
        free(user_update_dto->first_name);
        user_update_dto->first_name = NULL;
    }
    if (user_update_dto->last_name) {
        free(user_update_dto->last_name);
        user_update_dto->last_name = NULL;
    }
    if (user_update_dto->public_name) {
        free(user_update_dto->public_name);
        user_update_dto->public_name = NULL;
    }
    if (user_update_dto->id_provider) {
        free(user_update_dto->id_provider);
        user_update_dto->id_provider = NULL;
    }
    if (user_update_dto->email) {
        free(user_update_dto->email);
        user_update_dto->email = NULL;
    }
    if (user_update_dto->about) {
        free(user_update_dto->about);
        user_update_dto->about = NULL;
    }
    if (user_update_dto->status) {
        free(user_update_dto->status);
        user_update_dto->status = NULL;
    }
    if (user_update_dto->job_title) {
        free(user_update_dto->job_title);
        user_update_dto->job_title = NULL;
    }
    if (user_update_dto->timezone_id) {
        free(user_update_dto->timezone_id);
        user_update_dto->timezone_id = NULL;
    }
    if (user_update_dto->language_id) {
        free(user_update_dto->language_id);
        user_update_dto->language_id = NULL;
    }
    if (user_update_dto->currency_id) {
        free(user_update_dto->currency_id);
        user_update_dto->currency_id = NULL;
    }
    if (user_update_dto->country_id) {
        free(user_update_dto->country_id);
        user_update_dto->country_id = NULL;
    }
    if (user_update_dto->state_id) {
        free(user_update_dto->state_id);
        user_update_dto->state_id = NULL;
    }
    if (user_update_dto->city_id) {
        free(user_update_dto->city_id);
        user_update_dto->city_id = NULL;
    }
    if (user_update_dto->git_hub_url) {
        free(user_update_dto->git_hub_url);
        user_update_dto->git_hub_url = NULL;
    }
    if (user_update_dto->website_url) {
        free(user_update_dto->website_url);
        user_update_dto->website_url = NULL;
    }
    if (user_update_dto->twitter_url) {
        free(user_update_dto->twitter_url);
        user_update_dto->twitter_url = NULL;
    }
    if (user_update_dto->facebook_url) {
        free(user_update_dto->facebook_url);
        user_update_dto->facebook_url = NULL;
    }
    if (user_update_dto->you_tube_url) {
        free(user_update_dto->you_tube_url);
        user_update_dto->you_tube_url = NULL;
    }
    if (user_update_dto->linked_in_url) {
        free(user_update_dto->linked_in_url);
        user_update_dto->linked_in_url = NULL;
    }
    if (user_update_dto->instagram_url) {
        free(user_update_dto->instagram_url);
        user_update_dto->instagram_url = NULL;
    }
    if (user_update_dto->web_url) {
        free(user_update_dto->web_url);
        user_update_dto->web_url = NULL;
    }
    free(user_update_dto);
}

cJSON *user_update_dto_convertToJSON(user_update_dto_t *user_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // user_update_dto->qualified_name
    if(user_update_dto->qualified_name) {
    if(cJSON_AddStringToObject(item, "qualifiedName", user_update_dto->qualified_name) == NULL) {
    goto fail; //String
    }
    }


    // user_update_dto->birthday
    if(user_update_dto->birthday) {
    if(cJSON_AddStringToObject(item, "birthday", user_update_dto->birthday) == NULL) {
    goto fail; //Date-Time
    }
    }


    // user_update_dto->first_name
    if(user_update_dto->first_name) {
    if(cJSON_AddStringToObject(item, "firstName", user_update_dto->first_name) == NULL) {
    goto fail; //String
    }
    }


    // user_update_dto->last_name
    if(user_update_dto->last_name) {
    if(cJSON_AddStringToObject(item, "lastName", user_update_dto->last_name) == NULL) {
    goto fail; //String
    }
    }


    // user_update_dto->public_name
    if(user_update_dto->public_name) {
    if(cJSON_AddStringToObject(item, "publicName", user_update_dto->public_name) == NULL) {
    goto fail; //String
    }
    }


    // user_update_dto->id_provider
    if(user_update_dto->id_provider) {
    if(cJSON_AddStringToObject(item, "idProvider", user_update_dto->id_provider) == NULL) {
    goto fail; //String
    }
    }


    // user_update_dto->gender
    if(user_update_dto->gender != systemservice_user_update_dto_GENDER_NULL) {
    if(cJSON_AddStringToObject(item, "gender", genderuser_update_dto_ToString(user_update_dto->gender)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // user_update_dto->email
    if(user_update_dto->email) {
    if(cJSON_AddStringToObject(item, "email", user_update_dto->email) == NULL) {
    goto fail; //String
    }
    }


    // user_update_dto->about
    if(user_update_dto->about) {
    if(cJSON_AddStringToObject(item, "about", user_update_dto->about) == NULL) {
    goto fail; //String
    }
    }


    // user_update_dto->status
    if(user_update_dto->status) {
    if(cJSON_AddStringToObject(item, "status", user_update_dto->status) == NULL) {
    goto fail; //String
    }
    }


    // user_update_dto->job_title
    if(user_update_dto->job_title) {
    if(cJSON_AddStringToObject(item, "jobTitle", user_update_dto->job_title) == NULL) {
    goto fail; //String
    }
    }


    // user_update_dto->timezone_id
    if(user_update_dto->timezone_id) {
    if(cJSON_AddStringToObject(item, "timezoneId", user_update_dto->timezone_id) == NULL) {
    goto fail; //String
    }
    }


    // user_update_dto->language_id
    if(user_update_dto->language_id) {
    if(cJSON_AddStringToObject(item, "languageId", user_update_dto->language_id) == NULL) {
    goto fail; //String
    }
    }


    // user_update_dto->currency_id
    if(user_update_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", user_update_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // user_update_dto->country_id
    if(user_update_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryId", user_update_dto->country_id) == NULL) {
    goto fail; //String
    }
    }


    // user_update_dto->state_id
    if(user_update_dto->state_id) {
    if(cJSON_AddStringToObject(item, "stateId", user_update_dto->state_id) == NULL) {
    goto fail; //String
    }
    }


    // user_update_dto->city_id
    if(user_update_dto->city_id) {
    if(cJSON_AddStringToObject(item, "cityId", user_update_dto->city_id) == NULL) {
    goto fail; //String
    }
    }


    // user_update_dto->git_hub_url
    if(user_update_dto->git_hub_url) {
    if(cJSON_AddStringToObject(item, "gitHubUrl", user_update_dto->git_hub_url) == NULL) {
    goto fail; //String
    }
    }


    // user_update_dto->website_url
    if(user_update_dto->website_url) {
    if(cJSON_AddStringToObject(item, "websiteUrl", user_update_dto->website_url) == NULL) {
    goto fail; //String
    }
    }


    // user_update_dto->twitter_url
    if(user_update_dto->twitter_url) {
    if(cJSON_AddStringToObject(item, "twitterUrl", user_update_dto->twitter_url) == NULL) {
    goto fail; //String
    }
    }


    // user_update_dto->facebook_url
    if(user_update_dto->facebook_url) {
    if(cJSON_AddStringToObject(item, "facebookUrl", user_update_dto->facebook_url) == NULL) {
    goto fail; //String
    }
    }


    // user_update_dto->you_tube_url
    if(user_update_dto->you_tube_url) {
    if(cJSON_AddStringToObject(item, "youTubeUrl", user_update_dto->you_tube_url) == NULL) {
    goto fail; //String
    }
    }


    // user_update_dto->linked_in_url
    if(user_update_dto->linked_in_url) {
    if(cJSON_AddStringToObject(item, "linkedInUrl", user_update_dto->linked_in_url) == NULL) {
    goto fail; //String
    }
    }


    // user_update_dto->instagram_url
    if(user_update_dto->instagram_url) {
    if(cJSON_AddStringToObject(item, "instagramUrl", user_update_dto->instagram_url) == NULL) {
    goto fail; //String
    }
    }


    // user_update_dto->web_url
    if(user_update_dto->web_url) {
    if(cJSON_AddStringToObject(item, "webUrl", user_update_dto->web_url) == NULL) {
    goto fail; //String
    }
    }


    // user_update_dto->availability
    if(user_update_dto->availability != systemservice_user_update_dto_AVAILABILITY_NULL) {
    if(cJSON_AddStringToObject(item, "availability", availabilityuser_update_dto_ToString(user_update_dto->availability)) == NULL)
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

user_update_dto_t *user_update_dto_parseFromJSON(cJSON *user_update_dtoJSON){

    user_update_dto_t *user_update_dto_local_var = NULL;

    // user_update_dto->qualified_name
    cJSON *qualified_name = cJSON_GetObjectItemCaseSensitive(user_update_dtoJSON, "qualifiedName");
    if (qualified_name) { 
    if(!cJSON_IsString(qualified_name) && !cJSON_IsNull(qualified_name))
    {
    goto end; //String
    }
    }

    // user_update_dto->birthday
    cJSON *birthday = cJSON_GetObjectItemCaseSensitive(user_update_dtoJSON, "birthday");
    if (birthday) { 
    if(!cJSON_IsString(birthday) && !cJSON_IsNull(birthday))
    {
    goto end; //DateTime
    }
    }

    // user_update_dto->first_name
    cJSON *first_name = cJSON_GetObjectItemCaseSensitive(user_update_dtoJSON, "firstName");
    if (first_name) { 
    if(!cJSON_IsString(first_name) && !cJSON_IsNull(first_name))
    {
    goto end; //String
    }
    }

    // user_update_dto->last_name
    cJSON *last_name = cJSON_GetObjectItemCaseSensitive(user_update_dtoJSON, "lastName");
    if (last_name) { 
    if(!cJSON_IsString(last_name) && !cJSON_IsNull(last_name))
    {
    goto end; //String
    }
    }

    // user_update_dto->public_name
    cJSON *public_name = cJSON_GetObjectItemCaseSensitive(user_update_dtoJSON, "publicName");
    if (public_name) { 
    if(!cJSON_IsString(public_name) && !cJSON_IsNull(public_name))
    {
    goto end; //String
    }
    }

    // user_update_dto->id_provider
    cJSON *id_provider = cJSON_GetObjectItemCaseSensitive(user_update_dtoJSON, "idProvider");
    if (id_provider) { 
    if(!cJSON_IsString(id_provider) && !cJSON_IsNull(id_provider))
    {
    goto end; //String
    }
    }

    // user_update_dto->gender
    cJSON *gender = cJSON_GetObjectItemCaseSensitive(user_update_dtoJSON, "gender");
    systemservice_user_update_dto_GENDER_e genderVariable;
    if (gender) { 
    if(!cJSON_IsString(gender))
    {
    goto end; //Enum
    }
    genderVariable = user_update_dto_gender_FromString(gender->valuestring);
    }

    // user_update_dto->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(user_update_dtoJSON, "email");
    if (email) { 
    if(!cJSON_IsString(email) && !cJSON_IsNull(email))
    {
    goto end; //String
    }
    }

    // user_update_dto->about
    cJSON *about = cJSON_GetObjectItemCaseSensitive(user_update_dtoJSON, "about");
    if (about) { 
    if(!cJSON_IsString(about) && !cJSON_IsNull(about))
    {
    goto end; //String
    }
    }

    // user_update_dto->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(user_update_dtoJSON, "status");
    if (status) { 
    if(!cJSON_IsString(status) && !cJSON_IsNull(status))
    {
    goto end; //String
    }
    }

    // user_update_dto->job_title
    cJSON *job_title = cJSON_GetObjectItemCaseSensitive(user_update_dtoJSON, "jobTitle");
    if (job_title) { 
    if(!cJSON_IsString(job_title) && !cJSON_IsNull(job_title))
    {
    goto end; //String
    }
    }

    // user_update_dto->timezone_id
    cJSON *timezone_id = cJSON_GetObjectItemCaseSensitive(user_update_dtoJSON, "timezoneId");
    if (timezone_id) { 
    if(!cJSON_IsString(timezone_id) && !cJSON_IsNull(timezone_id))
    {
    goto end; //String
    }
    }

    // user_update_dto->language_id
    cJSON *language_id = cJSON_GetObjectItemCaseSensitive(user_update_dtoJSON, "languageId");
    if (language_id) { 
    if(!cJSON_IsString(language_id) && !cJSON_IsNull(language_id))
    {
    goto end; //String
    }
    }

    // user_update_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(user_update_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // user_update_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(user_update_dtoJSON, "countryId");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }

    // user_update_dto->state_id
    cJSON *state_id = cJSON_GetObjectItemCaseSensitive(user_update_dtoJSON, "stateId");
    if (state_id) { 
    if(!cJSON_IsString(state_id) && !cJSON_IsNull(state_id))
    {
    goto end; //String
    }
    }

    // user_update_dto->city_id
    cJSON *city_id = cJSON_GetObjectItemCaseSensitive(user_update_dtoJSON, "cityId");
    if (city_id) { 
    if(!cJSON_IsString(city_id) && !cJSON_IsNull(city_id))
    {
    goto end; //String
    }
    }

    // user_update_dto->git_hub_url
    cJSON *git_hub_url = cJSON_GetObjectItemCaseSensitive(user_update_dtoJSON, "gitHubUrl");
    if (git_hub_url) { 
    if(!cJSON_IsString(git_hub_url) && !cJSON_IsNull(git_hub_url))
    {
    goto end; //String
    }
    }

    // user_update_dto->website_url
    cJSON *website_url = cJSON_GetObjectItemCaseSensitive(user_update_dtoJSON, "websiteUrl");
    if (website_url) { 
    if(!cJSON_IsString(website_url) && !cJSON_IsNull(website_url))
    {
    goto end; //String
    }
    }

    // user_update_dto->twitter_url
    cJSON *twitter_url = cJSON_GetObjectItemCaseSensitive(user_update_dtoJSON, "twitterUrl");
    if (twitter_url) { 
    if(!cJSON_IsString(twitter_url) && !cJSON_IsNull(twitter_url))
    {
    goto end; //String
    }
    }

    // user_update_dto->facebook_url
    cJSON *facebook_url = cJSON_GetObjectItemCaseSensitive(user_update_dtoJSON, "facebookUrl");
    if (facebook_url) { 
    if(!cJSON_IsString(facebook_url) && !cJSON_IsNull(facebook_url))
    {
    goto end; //String
    }
    }

    // user_update_dto->you_tube_url
    cJSON *you_tube_url = cJSON_GetObjectItemCaseSensitive(user_update_dtoJSON, "youTubeUrl");
    if (you_tube_url) { 
    if(!cJSON_IsString(you_tube_url) && !cJSON_IsNull(you_tube_url))
    {
    goto end; //String
    }
    }

    // user_update_dto->linked_in_url
    cJSON *linked_in_url = cJSON_GetObjectItemCaseSensitive(user_update_dtoJSON, "linkedInUrl");
    if (linked_in_url) { 
    if(!cJSON_IsString(linked_in_url) && !cJSON_IsNull(linked_in_url))
    {
    goto end; //String
    }
    }

    // user_update_dto->instagram_url
    cJSON *instagram_url = cJSON_GetObjectItemCaseSensitive(user_update_dtoJSON, "instagramUrl");
    if (instagram_url) { 
    if(!cJSON_IsString(instagram_url) && !cJSON_IsNull(instagram_url))
    {
    goto end; //String
    }
    }

    // user_update_dto->web_url
    cJSON *web_url = cJSON_GetObjectItemCaseSensitive(user_update_dtoJSON, "webUrl");
    if (web_url) { 
    if(!cJSON_IsString(web_url) && !cJSON_IsNull(web_url))
    {
    goto end; //String
    }
    }

    // user_update_dto->availability
    cJSON *availability = cJSON_GetObjectItemCaseSensitive(user_update_dtoJSON, "availability");
    systemservice_user_update_dto_AVAILABILITY_e availabilityVariable;
    if (availability) { 
    if(!cJSON_IsString(availability))
    {
    goto end; //Enum
    }
    availabilityVariable = user_update_dto_availability_FromString(availability->valuestring);
    }


    user_update_dto_local_var = user_update_dto_create (
        qualified_name && !cJSON_IsNull(qualified_name) ? strdup(qualified_name->valuestring) : NULL,
        birthday && !cJSON_IsNull(birthday) ? strdup(birthday->valuestring) : NULL,
        first_name && !cJSON_IsNull(first_name) ? strdup(first_name->valuestring) : NULL,
        last_name && !cJSON_IsNull(last_name) ? strdup(last_name->valuestring) : NULL,
        public_name && !cJSON_IsNull(public_name) ? strdup(public_name->valuestring) : NULL,
        id_provider && !cJSON_IsNull(id_provider) ? strdup(id_provider->valuestring) : NULL,
        gender ? genderVariable : systemservice_user_update_dto_GENDER_NULL,
        email && !cJSON_IsNull(email) ? strdup(email->valuestring) : NULL,
        about && !cJSON_IsNull(about) ? strdup(about->valuestring) : NULL,
        status && !cJSON_IsNull(status) ? strdup(status->valuestring) : NULL,
        job_title && !cJSON_IsNull(job_title) ? strdup(job_title->valuestring) : NULL,
        timezone_id && !cJSON_IsNull(timezone_id) ? strdup(timezone_id->valuestring) : NULL,
        language_id && !cJSON_IsNull(language_id) ? strdup(language_id->valuestring) : NULL,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        country_id && !cJSON_IsNull(country_id) ? strdup(country_id->valuestring) : NULL,
        state_id && !cJSON_IsNull(state_id) ? strdup(state_id->valuestring) : NULL,
        city_id && !cJSON_IsNull(city_id) ? strdup(city_id->valuestring) : NULL,
        git_hub_url && !cJSON_IsNull(git_hub_url) ? strdup(git_hub_url->valuestring) : NULL,
        website_url && !cJSON_IsNull(website_url) ? strdup(website_url->valuestring) : NULL,
        twitter_url && !cJSON_IsNull(twitter_url) ? strdup(twitter_url->valuestring) : NULL,
        facebook_url && !cJSON_IsNull(facebook_url) ? strdup(facebook_url->valuestring) : NULL,
        you_tube_url && !cJSON_IsNull(you_tube_url) ? strdup(you_tube_url->valuestring) : NULL,
        linked_in_url && !cJSON_IsNull(linked_in_url) ? strdup(linked_in_url->valuestring) : NULL,
        instagram_url && !cJSON_IsNull(instagram_url) ? strdup(instagram_url->valuestring) : NULL,
        web_url && !cJSON_IsNull(web_url) ? strdup(web_url->valuestring) : NULL,
        availability ? availabilityVariable : systemservice_user_update_dto_AVAILABILITY_NULL
        );

    return user_update_dto_local_var;
end:
    return NULL;

}
