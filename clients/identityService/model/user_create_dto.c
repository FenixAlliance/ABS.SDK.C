#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "user_create_dto.h"


char* user_create_dto_gender_ToString(identityservice_user_create_dto_GENDER_e gender) {
    char* genderArray[] =  { "NULL", "Unknown", "Male", "Female", "PreferNotToSay" };
    return genderArray[gender];
}

identityservice_user_create_dto_GENDER_e user_create_dto_gender_FromString(char* gender){
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

user_create_dto_t *user_create_dto_create(
    char *id,
    char *timestamp,
    char *qualified_name,
    char *birthday,
    char *first_name,
    char *last_name,
    char *public_name,
    char *id_provider,
    identityservice_user_create_dto_GENDER_e gender,
    char *email,
    char *about,
    char *status,
    char *job_title,
    char *git_hub_url,
    char *website_url,
    char *twitter_url,
    char *facebook_url,
    char *you_tube_url,
    char *linked_in_url,
    char *instagram_url,
    char *timezone_id,
    char *language_id,
    char *currency_id,
    char *country_id,
    char *state_id,
    char *city_id,
    char *password
    ) {
    user_create_dto_t *user_create_dto_local_var = malloc(sizeof(user_create_dto_t));
    if (!user_create_dto_local_var) {
        return NULL;
    }
    user_create_dto_local_var->id = id;
    user_create_dto_local_var->timestamp = timestamp;
    user_create_dto_local_var->qualified_name = qualified_name;
    user_create_dto_local_var->birthday = birthday;
    user_create_dto_local_var->first_name = first_name;
    user_create_dto_local_var->last_name = last_name;
    user_create_dto_local_var->public_name = public_name;
    user_create_dto_local_var->id_provider = id_provider;
    user_create_dto_local_var->gender = gender;
    user_create_dto_local_var->email = email;
    user_create_dto_local_var->about = about;
    user_create_dto_local_var->status = status;
    user_create_dto_local_var->job_title = job_title;
    user_create_dto_local_var->git_hub_url = git_hub_url;
    user_create_dto_local_var->website_url = website_url;
    user_create_dto_local_var->twitter_url = twitter_url;
    user_create_dto_local_var->facebook_url = facebook_url;
    user_create_dto_local_var->you_tube_url = you_tube_url;
    user_create_dto_local_var->linked_in_url = linked_in_url;
    user_create_dto_local_var->instagram_url = instagram_url;
    user_create_dto_local_var->timezone_id = timezone_id;
    user_create_dto_local_var->language_id = language_id;
    user_create_dto_local_var->currency_id = currency_id;
    user_create_dto_local_var->country_id = country_id;
    user_create_dto_local_var->state_id = state_id;
    user_create_dto_local_var->city_id = city_id;
    user_create_dto_local_var->password = password;

    return user_create_dto_local_var;
}


void user_create_dto_free(user_create_dto_t *user_create_dto) {
    if(NULL == user_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (user_create_dto->id) {
        free(user_create_dto->id);
        user_create_dto->id = NULL;
    }
    if (user_create_dto->timestamp) {
        free(user_create_dto->timestamp);
        user_create_dto->timestamp = NULL;
    }
    if (user_create_dto->qualified_name) {
        free(user_create_dto->qualified_name);
        user_create_dto->qualified_name = NULL;
    }
    if (user_create_dto->birthday) {
        free(user_create_dto->birthday);
        user_create_dto->birthday = NULL;
    }
    if (user_create_dto->first_name) {
        free(user_create_dto->first_name);
        user_create_dto->first_name = NULL;
    }
    if (user_create_dto->last_name) {
        free(user_create_dto->last_name);
        user_create_dto->last_name = NULL;
    }
    if (user_create_dto->public_name) {
        free(user_create_dto->public_name);
        user_create_dto->public_name = NULL;
    }
    if (user_create_dto->id_provider) {
        free(user_create_dto->id_provider);
        user_create_dto->id_provider = NULL;
    }
    if (user_create_dto->email) {
        free(user_create_dto->email);
        user_create_dto->email = NULL;
    }
    if (user_create_dto->about) {
        free(user_create_dto->about);
        user_create_dto->about = NULL;
    }
    if (user_create_dto->status) {
        free(user_create_dto->status);
        user_create_dto->status = NULL;
    }
    if (user_create_dto->job_title) {
        free(user_create_dto->job_title);
        user_create_dto->job_title = NULL;
    }
    if (user_create_dto->git_hub_url) {
        free(user_create_dto->git_hub_url);
        user_create_dto->git_hub_url = NULL;
    }
    if (user_create_dto->website_url) {
        free(user_create_dto->website_url);
        user_create_dto->website_url = NULL;
    }
    if (user_create_dto->twitter_url) {
        free(user_create_dto->twitter_url);
        user_create_dto->twitter_url = NULL;
    }
    if (user_create_dto->facebook_url) {
        free(user_create_dto->facebook_url);
        user_create_dto->facebook_url = NULL;
    }
    if (user_create_dto->you_tube_url) {
        free(user_create_dto->you_tube_url);
        user_create_dto->you_tube_url = NULL;
    }
    if (user_create_dto->linked_in_url) {
        free(user_create_dto->linked_in_url);
        user_create_dto->linked_in_url = NULL;
    }
    if (user_create_dto->instagram_url) {
        free(user_create_dto->instagram_url);
        user_create_dto->instagram_url = NULL;
    }
    if (user_create_dto->timezone_id) {
        free(user_create_dto->timezone_id);
        user_create_dto->timezone_id = NULL;
    }
    if (user_create_dto->language_id) {
        free(user_create_dto->language_id);
        user_create_dto->language_id = NULL;
    }
    if (user_create_dto->currency_id) {
        free(user_create_dto->currency_id);
        user_create_dto->currency_id = NULL;
    }
    if (user_create_dto->country_id) {
        free(user_create_dto->country_id);
        user_create_dto->country_id = NULL;
    }
    if (user_create_dto->state_id) {
        free(user_create_dto->state_id);
        user_create_dto->state_id = NULL;
    }
    if (user_create_dto->city_id) {
        free(user_create_dto->city_id);
        user_create_dto->city_id = NULL;
    }
    if (user_create_dto->password) {
        free(user_create_dto->password);
        user_create_dto->password = NULL;
    }
    free(user_create_dto);
}

cJSON *user_create_dto_convertToJSON(user_create_dto_t *user_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // user_create_dto->id
    if(user_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", user_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // user_create_dto->timestamp
    if(user_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", user_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // user_create_dto->qualified_name
    if(user_create_dto->qualified_name) {
    if(cJSON_AddStringToObject(item, "qualifiedName", user_create_dto->qualified_name) == NULL) {
    goto fail; //String
    }
    }


    // user_create_dto->birthday
    if(user_create_dto->birthday) {
    if(cJSON_AddStringToObject(item, "birthday", user_create_dto->birthday) == NULL) {
    goto fail; //Date-Time
    }
    }


    // user_create_dto->first_name
    if(user_create_dto->first_name) {
    if(cJSON_AddStringToObject(item, "firstName", user_create_dto->first_name) == NULL) {
    goto fail; //String
    }
    }


    // user_create_dto->last_name
    if(user_create_dto->last_name) {
    if(cJSON_AddStringToObject(item, "lastName", user_create_dto->last_name) == NULL) {
    goto fail; //String
    }
    }


    // user_create_dto->public_name
    if(user_create_dto->public_name) {
    if(cJSON_AddStringToObject(item, "publicName", user_create_dto->public_name) == NULL) {
    goto fail; //String
    }
    }


    // user_create_dto->id_provider
    if(user_create_dto->id_provider) {
    if(cJSON_AddStringToObject(item, "idProvider", user_create_dto->id_provider) == NULL) {
    goto fail; //String
    }
    }


    // user_create_dto->gender
    if(user_create_dto->gender != identityservice_user_create_dto_GENDER_NULL) {
    if(cJSON_AddStringToObject(item, "gender", genderuser_create_dto_ToString(user_create_dto->gender)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // user_create_dto->email
    if(user_create_dto->email) {
    if(cJSON_AddStringToObject(item, "email", user_create_dto->email) == NULL) {
    goto fail; //String
    }
    }


    // user_create_dto->about
    if(user_create_dto->about) {
    if(cJSON_AddStringToObject(item, "about", user_create_dto->about) == NULL) {
    goto fail; //String
    }
    }


    // user_create_dto->status
    if(user_create_dto->status) {
    if(cJSON_AddStringToObject(item, "status", user_create_dto->status) == NULL) {
    goto fail; //String
    }
    }


    // user_create_dto->job_title
    if(user_create_dto->job_title) {
    if(cJSON_AddStringToObject(item, "jobTitle", user_create_dto->job_title) == NULL) {
    goto fail; //String
    }
    }


    // user_create_dto->git_hub_url
    if(user_create_dto->git_hub_url) {
    if(cJSON_AddStringToObject(item, "gitHubUrl", user_create_dto->git_hub_url) == NULL) {
    goto fail; //String
    }
    }


    // user_create_dto->website_url
    if(user_create_dto->website_url) {
    if(cJSON_AddStringToObject(item, "websiteUrl", user_create_dto->website_url) == NULL) {
    goto fail; //String
    }
    }


    // user_create_dto->twitter_url
    if(user_create_dto->twitter_url) {
    if(cJSON_AddStringToObject(item, "twitterUrl", user_create_dto->twitter_url) == NULL) {
    goto fail; //String
    }
    }


    // user_create_dto->facebook_url
    if(user_create_dto->facebook_url) {
    if(cJSON_AddStringToObject(item, "facebookUrl", user_create_dto->facebook_url) == NULL) {
    goto fail; //String
    }
    }


    // user_create_dto->you_tube_url
    if(user_create_dto->you_tube_url) {
    if(cJSON_AddStringToObject(item, "youTubeUrl", user_create_dto->you_tube_url) == NULL) {
    goto fail; //String
    }
    }


    // user_create_dto->linked_in_url
    if(user_create_dto->linked_in_url) {
    if(cJSON_AddStringToObject(item, "linkedInUrl", user_create_dto->linked_in_url) == NULL) {
    goto fail; //String
    }
    }


    // user_create_dto->instagram_url
    if(user_create_dto->instagram_url) {
    if(cJSON_AddStringToObject(item, "instagramUrl", user_create_dto->instagram_url) == NULL) {
    goto fail; //String
    }
    }


    // user_create_dto->timezone_id
    if(user_create_dto->timezone_id) {
    if(cJSON_AddStringToObject(item, "timezoneId", user_create_dto->timezone_id) == NULL) {
    goto fail; //String
    }
    }


    // user_create_dto->language_id
    if(user_create_dto->language_id) {
    if(cJSON_AddStringToObject(item, "languageId", user_create_dto->language_id) == NULL) {
    goto fail; //String
    }
    }


    // user_create_dto->currency_id
    if(user_create_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", user_create_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // user_create_dto->country_id
    if(user_create_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryId", user_create_dto->country_id) == NULL) {
    goto fail; //String
    }
    }


    // user_create_dto->state_id
    if(user_create_dto->state_id) {
    if(cJSON_AddStringToObject(item, "stateId", user_create_dto->state_id) == NULL) {
    goto fail; //String
    }
    }


    // user_create_dto->city_id
    if(user_create_dto->city_id) {
    if(cJSON_AddStringToObject(item, "cityId", user_create_dto->city_id) == NULL) {
    goto fail; //String
    }
    }


    // user_create_dto->password
    if(user_create_dto->password) {
    if(cJSON_AddStringToObject(item, "password", user_create_dto->password) == NULL) {
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

user_create_dto_t *user_create_dto_parseFromJSON(cJSON *user_create_dtoJSON){

    user_create_dto_t *user_create_dto_local_var = NULL;

    // user_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(user_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // user_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(user_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // user_create_dto->qualified_name
    cJSON *qualified_name = cJSON_GetObjectItemCaseSensitive(user_create_dtoJSON, "qualifiedName");
    if (qualified_name) { 
    if(!cJSON_IsString(qualified_name) && !cJSON_IsNull(qualified_name))
    {
    goto end; //String
    }
    }

    // user_create_dto->birthday
    cJSON *birthday = cJSON_GetObjectItemCaseSensitive(user_create_dtoJSON, "birthday");
    if (birthday) { 
    if(!cJSON_IsString(birthday) && !cJSON_IsNull(birthday))
    {
    goto end; //DateTime
    }
    }

    // user_create_dto->first_name
    cJSON *first_name = cJSON_GetObjectItemCaseSensitive(user_create_dtoJSON, "firstName");
    if (first_name) { 
    if(!cJSON_IsString(first_name) && !cJSON_IsNull(first_name))
    {
    goto end; //String
    }
    }

    // user_create_dto->last_name
    cJSON *last_name = cJSON_GetObjectItemCaseSensitive(user_create_dtoJSON, "lastName");
    if (last_name) { 
    if(!cJSON_IsString(last_name) && !cJSON_IsNull(last_name))
    {
    goto end; //String
    }
    }

    // user_create_dto->public_name
    cJSON *public_name = cJSON_GetObjectItemCaseSensitive(user_create_dtoJSON, "publicName");
    if (public_name) { 
    if(!cJSON_IsString(public_name) && !cJSON_IsNull(public_name))
    {
    goto end; //String
    }
    }

    // user_create_dto->id_provider
    cJSON *id_provider = cJSON_GetObjectItemCaseSensitive(user_create_dtoJSON, "idProvider");
    if (id_provider) { 
    if(!cJSON_IsString(id_provider) && !cJSON_IsNull(id_provider))
    {
    goto end; //String
    }
    }

    // user_create_dto->gender
    cJSON *gender = cJSON_GetObjectItemCaseSensitive(user_create_dtoJSON, "gender");
    identityservice_user_create_dto_GENDER_e genderVariable;
    if (gender) { 
    if(!cJSON_IsString(gender))
    {
    goto end; //Enum
    }
    genderVariable = user_create_dto_gender_FromString(gender->valuestring);
    }

    // user_create_dto->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(user_create_dtoJSON, "email");
    if (email) { 
    if(!cJSON_IsString(email) && !cJSON_IsNull(email))
    {
    goto end; //String
    }
    }

    // user_create_dto->about
    cJSON *about = cJSON_GetObjectItemCaseSensitive(user_create_dtoJSON, "about");
    if (about) { 
    if(!cJSON_IsString(about) && !cJSON_IsNull(about))
    {
    goto end; //String
    }
    }

    // user_create_dto->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(user_create_dtoJSON, "status");
    if (status) { 
    if(!cJSON_IsString(status) && !cJSON_IsNull(status))
    {
    goto end; //String
    }
    }

    // user_create_dto->job_title
    cJSON *job_title = cJSON_GetObjectItemCaseSensitive(user_create_dtoJSON, "jobTitle");
    if (job_title) { 
    if(!cJSON_IsString(job_title) && !cJSON_IsNull(job_title))
    {
    goto end; //String
    }
    }

    // user_create_dto->git_hub_url
    cJSON *git_hub_url = cJSON_GetObjectItemCaseSensitive(user_create_dtoJSON, "gitHubUrl");
    if (git_hub_url) { 
    if(!cJSON_IsString(git_hub_url) && !cJSON_IsNull(git_hub_url))
    {
    goto end; //String
    }
    }

    // user_create_dto->website_url
    cJSON *website_url = cJSON_GetObjectItemCaseSensitive(user_create_dtoJSON, "websiteUrl");
    if (website_url) { 
    if(!cJSON_IsString(website_url) && !cJSON_IsNull(website_url))
    {
    goto end; //String
    }
    }

    // user_create_dto->twitter_url
    cJSON *twitter_url = cJSON_GetObjectItemCaseSensitive(user_create_dtoJSON, "twitterUrl");
    if (twitter_url) { 
    if(!cJSON_IsString(twitter_url) && !cJSON_IsNull(twitter_url))
    {
    goto end; //String
    }
    }

    // user_create_dto->facebook_url
    cJSON *facebook_url = cJSON_GetObjectItemCaseSensitive(user_create_dtoJSON, "facebookUrl");
    if (facebook_url) { 
    if(!cJSON_IsString(facebook_url) && !cJSON_IsNull(facebook_url))
    {
    goto end; //String
    }
    }

    // user_create_dto->you_tube_url
    cJSON *you_tube_url = cJSON_GetObjectItemCaseSensitive(user_create_dtoJSON, "youTubeUrl");
    if (you_tube_url) { 
    if(!cJSON_IsString(you_tube_url) && !cJSON_IsNull(you_tube_url))
    {
    goto end; //String
    }
    }

    // user_create_dto->linked_in_url
    cJSON *linked_in_url = cJSON_GetObjectItemCaseSensitive(user_create_dtoJSON, "linkedInUrl");
    if (linked_in_url) { 
    if(!cJSON_IsString(linked_in_url) && !cJSON_IsNull(linked_in_url))
    {
    goto end; //String
    }
    }

    // user_create_dto->instagram_url
    cJSON *instagram_url = cJSON_GetObjectItemCaseSensitive(user_create_dtoJSON, "instagramUrl");
    if (instagram_url) { 
    if(!cJSON_IsString(instagram_url) && !cJSON_IsNull(instagram_url))
    {
    goto end; //String
    }
    }

    // user_create_dto->timezone_id
    cJSON *timezone_id = cJSON_GetObjectItemCaseSensitive(user_create_dtoJSON, "timezoneId");
    if (timezone_id) { 
    if(!cJSON_IsString(timezone_id) && !cJSON_IsNull(timezone_id))
    {
    goto end; //String
    }
    }

    // user_create_dto->language_id
    cJSON *language_id = cJSON_GetObjectItemCaseSensitive(user_create_dtoJSON, "languageId");
    if (language_id) { 
    if(!cJSON_IsString(language_id) && !cJSON_IsNull(language_id))
    {
    goto end; //String
    }
    }

    // user_create_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(user_create_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // user_create_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(user_create_dtoJSON, "countryId");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }

    // user_create_dto->state_id
    cJSON *state_id = cJSON_GetObjectItemCaseSensitive(user_create_dtoJSON, "stateId");
    if (state_id) { 
    if(!cJSON_IsString(state_id) && !cJSON_IsNull(state_id))
    {
    goto end; //String
    }
    }

    // user_create_dto->city_id
    cJSON *city_id = cJSON_GetObjectItemCaseSensitive(user_create_dtoJSON, "cityId");
    if (city_id) { 
    if(!cJSON_IsString(city_id) && !cJSON_IsNull(city_id))
    {
    goto end; //String
    }
    }

    // user_create_dto->password
    cJSON *password = cJSON_GetObjectItemCaseSensitive(user_create_dtoJSON, "password");
    if (password) { 
    if(!cJSON_IsString(password) && !cJSON_IsNull(password))
    {
    goto end; //String
    }
    }


    user_create_dto_local_var = user_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        qualified_name && !cJSON_IsNull(qualified_name) ? strdup(qualified_name->valuestring) : NULL,
        birthday && !cJSON_IsNull(birthday) ? strdup(birthday->valuestring) : NULL,
        first_name && !cJSON_IsNull(first_name) ? strdup(first_name->valuestring) : NULL,
        last_name && !cJSON_IsNull(last_name) ? strdup(last_name->valuestring) : NULL,
        public_name && !cJSON_IsNull(public_name) ? strdup(public_name->valuestring) : NULL,
        id_provider && !cJSON_IsNull(id_provider) ? strdup(id_provider->valuestring) : NULL,
        gender ? genderVariable : identityservice_user_create_dto_GENDER_NULL,
        email && !cJSON_IsNull(email) ? strdup(email->valuestring) : NULL,
        about && !cJSON_IsNull(about) ? strdup(about->valuestring) : NULL,
        status && !cJSON_IsNull(status) ? strdup(status->valuestring) : NULL,
        job_title && !cJSON_IsNull(job_title) ? strdup(job_title->valuestring) : NULL,
        git_hub_url && !cJSON_IsNull(git_hub_url) ? strdup(git_hub_url->valuestring) : NULL,
        website_url && !cJSON_IsNull(website_url) ? strdup(website_url->valuestring) : NULL,
        twitter_url && !cJSON_IsNull(twitter_url) ? strdup(twitter_url->valuestring) : NULL,
        facebook_url && !cJSON_IsNull(facebook_url) ? strdup(facebook_url->valuestring) : NULL,
        you_tube_url && !cJSON_IsNull(you_tube_url) ? strdup(you_tube_url->valuestring) : NULL,
        linked_in_url && !cJSON_IsNull(linked_in_url) ? strdup(linked_in_url->valuestring) : NULL,
        instagram_url && !cJSON_IsNull(instagram_url) ? strdup(instagram_url->valuestring) : NULL,
        timezone_id && !cJSON_IsNull(timezone_id) ? strdup(timezone_id->valuestring) : NULL,
        language_id && !cJSON_IsNull(language_id) ? strdup(language_id->valuestring) : NULL,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        country_id && !cJSON_IsNull(country_id) ? strdup(country_id->valuestring) : NULL,
        state_id && !cJSON_IsNull(state_id) ? strdup(state_id->valuestring) : NULL,
        city_id && !cJSON_IsNull(city_id) ? strdup(city_id->valuestring) : NULL,
        password && !cJSON_IsNull(password) ? strdup(password->valuestring) : NULL
        );

    return user_create_dto_local_var;
end:
    return NULL;

}
