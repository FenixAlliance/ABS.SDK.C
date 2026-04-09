#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tenant_update_dto.h"



tenant_update_dto_t *tenant_update_dto_create(
    char *name,
    char *legal_name,
    char *email,
    char *phone,
    char *web_url,
    char *about,
    char *slogan,
    char *handler,
    char *currency_id,
    char *duns,
    char *tax_id,
    char *avatar_url,
    char *twitter_username,
    char *facebook_url,
    char *twitter_url,
    char *git_hub_url,
    char *linked_in_url,
    char *instagram_url,
    char *you_tube_url,
    char *whats_app_number,
    char *support_phone_number,
    char *country_id,
    char *timezone_id,
    char *language_id,
    char *state_id,
    char *city_id
    ) {
    tenant_update_dto_t *tenant_update_dto_local_var = malloc(sizeof(tenant_update_dto_t));
    if (!tenant_update_dto_local_var) {
        return NULL;
    }
    tenant_update_dto_local_var->name = name;
    tenant_update_dto_local_var->legal_name = legal_name;
    tenant_update_dto_local_var->email = email;
    tenant_update_dto_local_var->phone = phone;
    tenant_update_dto_local_var->web_url = web_url;
    tenant_update_dto_local_var->about = about;
    tenant_update_dto_local_var->slogan = slogan;
    tenant_update_dto_local_var->handler = handler;
    tenant_update_dto_local_var->currency_id = currency_id;
    tenant_update_dto_local_var->duns = duns;
    tenant_update_dto_local_var->tax_id = tax_id;
    tenant_update_dto_local_var->avatar_url = avatar_url;
    tenant_update_dto_local_var->twitter_username = twitter_username;
    tenant_update_dto_local_var->facebook_url = facebook_url;
    tenant_update_dto_local_var->twitter_url = twitter_url;
    tenant_update_dto_local_var->git_hub_url = git_hub_url;
    tenant_update_dto_local_var->linked_in_url = linked_in_url;
    tenant_update_dto_local_var->instagram_url = instagram_url;
    tenant_update_dto_local_var->you_tube_url = you_tube_url;
    tenant_update_dto_local_var->whats_app_number = whats_app_number;
    tenant_update_dto_local_var->support_phone_number = support_phone_number;
    tenant_update_dto_local_var->country_id = country_id;
    tenant_update_dto_local_var->timezone_id = timezone_id;
    tenant_update_dto_local_var->language_id = language_id;
    tenant_update_dto_local_var->state_id = state_id;
    tenant_update_dto_local_var->city_id = city_id;

    return tenant_update_dto_local_var;
}


void tenant_update_dto_free(tenant_update_dto_t *tenant_update_dto) {
    if(NULL == tenant_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (tenant_update_dto->name) {
        free(tenant_update_dto->name);
        tenant_update_dto->name = NULL;
    }
    if (tenant_update_dto->legal_name) {
        free(tenant_update_dto->legal_name);
        tenant_update_dto->legal_name = NULL;
    }
    if (tenant_update_dto->email) {
        free(tenant_update_dto->email);
        tenant_update_dto->email = NULL;
    }
    if (tenant_update_dto->phone) {
        free(tenant_update_dto->phone);
        tenant_update_dto->phone = NULL;
    }
    if (tenant_update_dto->web_url) {
        free(tenant_update_dto->web_url);
        tenant_update_dto->web_url = NULL;
    }
    if (tenant_update_dto->about) {
        free(tenant_update_dto->about);
        tenant_update_dto->about = NULL;
    }
    if (tenant_update_dto->slogan) {
        free(tenant_update_dto->slogan);
        tenant_update_dto->slogan = NULL;
    }
    if (tenant_update_dto->handler) {
        free(tenant_update_dto->handler);
        tenant_update_dto->handler = NULL;
    }
    if (tenant_update_dto->currency_id) {
        free(tenant_update_dto->currency_id);
        tenant_update_dto->currency_id = NULL;
    }
    if (tenant_update_dto->duns) {
        free(tenant_update_dto->duns);
        tenant_update_dto->duns = NULL;
    }
    if (tenant_update_dto->tax_id) {
        free(tenant_update_dto->tax_id);
        tenant_update_dto->tax_id = NULL;
    }
    if (tenant_update_dto->avatar_url) {
        free(tenant_update_dto->avatar_url);
        tenant_update_dto->avatar_url = NULL;
    }
    if (tenant_update_dto->twitter_username) {
        free(tenant_update_dto->twitter_username);
        tenant_update_dto->twitter_username = NULL;
    }
    if (tenant_update_dto->facebook_url) {
        free(tenant_update_dto->facebook_url);
        tenant_update_dto->facebook_url = NULL;
    }
    if (tenant_update_dto->twitter_url) {
        free(tenant_update_dto->twitter_url);
        tenant_update_dto->twitter_url = NULL;
    }
    if (tenant_update_dto->git_hub_url) {
        free(tenant_update_dto->git_hub_url);
        tenant_update_dto->git_hub_url = NULL;
    }
    if (tenant_update_dto->linked_in_url) {
        free(tenant_update_dto->linked_in_url);
        tenant_update_dto->linked_in_url = NULL;
    }
    if (tenant_update_dto->instagram_url) {
        free(tenant_update_dto->instagram_url);
        tenant_update_dto->instagram_url = NULL;
    }
    if (tenant_update_dto->you_tube_url) {
        free(tenant_update_dto->you_tube_url);
        tenant_update_dto->you_tube_url = NULL;
    }
    if (tenant_update_dto->whats_app_number) {
        free(tenant_update_dto->whats_app_number);
        tenant_update_dto->whats_app_number = NULL;
    }
    if (tenant_update_dto->support_phone_number) {
        free(tenant_update_dto->support_phone_number);
        tenant_update_dto->support_phone_number = NULL;
    }
    if (tenant_update_dto->country_id) {
        free(tenant_update_dto->country_id);
        tenant_update_dto->country_id = NULL;
    }
    if (tenant_update_dto->timezone_id) {
        free(tenant_update_dto->timezone_id);
        tenant_update_dto->timezone_id = NULL;
    }
    if (tenant_update_dto->language_id) {
        free(tenant_update_dto->language_id);
        tenant_update_dto->language_id = NULL;
    }
    if (tenant_update_dto->state_id) {
        free(tenant_update_dto->state_id);
        tenant_update_dto->state_id = NULL;
    }
    if (tenant_update_dto->city_id) {
        free(tenant_update_dto->city_id);
        tenant_update_dto->city_id = NULL;
    }
    free(tenant_update_dto);
}

cJSON *tenant_update_dto_convertToJSON(tenant_update_dto_t *tenant_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // tenant_update_dto->name
    if (!tenant_update_dto->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", tenant_update_dto->name) == NULL) {
    goto fail; //String
    }


    // tenant_update_dto->legal_name
    if(tenant_update_dto->legal_name) {
    if(cJSON_AddStringToObject(item, "legalName", tenant_update_dto->legal_name) == NULL) {
    goto fail; //String
    }
    }


    // tenant_update_dto->email
    if (!tenant_update_dto->email) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "email", tenant_update_dto->email) == NULL) {
    goto fail; //String
    }


    // tenant_update_dto->phone
    if(tenant_update_dto->phone) {
    if(cJSON_AddStringToObject(item, "phone", tenant_update_dto->phone) == NULL) {
    goto fail; //String
    }
    }


    // tenant_update_dto->web_url
    if(tenant_update_dto->web_url) {
    if(cJSON_AddStringToObject(item, "webUrl", tenant_update_dto->web_url) == NULL) {
    goto fail; //String
    }
    }


    // tenant_update_dto->about
    if(tenant_update_dto->about) {
    if(cJSON_AddStringToObject(item, "about", tenant_update_dto->about) == NULL) {
    goto fail; //String
    }
    }


    // tenant_update_dto->slogan
    if(tenant_update_dto->slogan) {
    if(cJSON_AddStringToObject(item, "slogan", tenant_update_dto->slogan) == NULL) {
    goto fail; //String
    }
    }


    // tenant_update_dto->handler
    if(tenant_update_dto->handler) {
    if(cJSON_AddStringToObject(item, "handler", tenant_update_dto->handler) == NULL) {
    goto fail; //String
    }
    }


    // tenant_update_dto->currency_id
    if (!tenant_update_dto->currency_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "currencyId", tenant_update_dto->currency_id) == NULL) {
    goto fail; //String
    }


    // tenant_update_dto->duns
    if(tenant_update_dto->duns) {
    if(cJSON_AddStringToObject(item, "duns", tenant_update_dto->duns) == NULL) {
    goto fail; //String
    }
    }


    // tenant_update_dto->tax_id
    if(tenant_update_dto->tax_id) {
    if(cJSON_AddStringToObject(item, "taxId", tenant_update_dto->tax_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_update_dto->avatar_url
    if(tenant_update_dto->avatar_url) {
    if(cJSON_AddStringToObject(item, "avatarUrl", tenant_update_dto->avatar_url) == NULL) {
    goto fail; //String
    }
    }


    // tenant_update_dto->twitter_username
    if(tenant_update_dto->twitter_username) {
    if(cJSON_AddStringToObject(item, "twitterUsername", tenant_update_dto->twitter_username) == NULL) {
    goto fail; //String
    }
    }


    // tenant_update_dto->facebook_url
    if(tenant_update_dto->facebook_url) {
    if(cJSON_AddStringToObject(item, "facebookUrl", tenant_update_dto->facebook_url) == NULL) {
    goto fail; //String
    }
    }


    // tenant_update_dto->twitter_url
    if(tenant_update_dto->twitter_url) {
    if(cJSON_AddStringToObject(item, "twitterUrl", tenant_update_dto->twitter_url) == NULL) {
    goto fail; //String
    }
    }


    // tenant_update_dto->git_hub_url
    if(tenant_update_dto->git_hub_url) {
    if(cJSON_AddStringToObject(item, "gitHubUrl", tenant_update_dto->git_hub_url) == NULL) {
    goto fail; //String
    }
    }


    // tenant_update_dto->linked_in_url
    if(tenant_update_dto->linked_in_url) {
    if(cJSON_AddStringToObject(item, "linkedInUrl", tenant_update_dto->linked_in_url) == NULL) {
    goto fail; //String
    }
    }


    // tenant_update_dto->instagram_url
    if(tenant_update_dto->instagram_url) {
    if(cJSON_AddStringToObject(item, "instagramUrl", tenant_update_dto->instagram_url) == NULL) {
    goto fail; //String
    }
    }


    // tenant_update_dto->you_tube_url
    if(tenant_update_dto->you_tube_url) {
    if(cJSON_AddStringToObject(item, "youTubeUrl", tenant_update_dto->you_tube_url) == NULL) {
    goto fail; //String
    }
    }


    // tenant_update_dto->whats_app_number
    if(tenant_update_dto->whats_app_number) {
    if(cJSON_AddStringToObject(item, "whatsAppNumber", tenant_update_dto->whats_app_number) == NULL) {
    goto fail; //String
    }
    }


    // tenant_update_dto->support_phone_number
    if(tenant_update_dto->support_phone_number) {
    if(cJSON_AddStringToObject(item, "supportPhoneNumber", tenant_update_dto->support_phone_number) == NULL) {
    goto fail; //String
    }
    }


    // tenant_update_dto->country_id
    if (!tenant_update_dto->country_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "countryId", tenant_update_dto->country_id) == NULL) {
    goto fail; //String
    }


    // tenant_update_dto->timezone_id
    if(tenant_update_dto->timezone_id) {
    if(cJSON_AddStringToObject(item, "timezoneId", tenant_update_dto->timezone_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_update_dto->language_id
    if(tenant_update_dto->language_id) {
    if(cJSON_AddStringToObject(item, "languageId", tenant_update_dto->language_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_update_dto->state_id
    if(tenant_update_dto->state_id) {
    if(cJSON_AddStringToObject(item, "stateId", tenant_update_dto->state_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_update_dto->city_id
    if(tenant_update_dto->city_id) {
    if(cJSON_AddStringToObject(item, "cityId", tenant_update_dto->city_id) == NULL) {
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

tenant_update_dto_t *tenant_update_dto_parseFromJSON(cJSON *tenant_update_dtoJSON){

    tenant_update_dto_t *tenant_update_dto_local_var = NULL;

    // tenant_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(tenant_update_dtoJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // tenant_update_dto->legal_name
    cJSON *legal_name = cJSON_GetObjectItemCaseSensitive(tenant_update_dtoJSON, "legalName");
    if (legal_name) { 
    if(!cJSON_IsString(legal_name) && !cJSON_IsNull(legal_name))
    {
    goto end; //String
    }
    }

    // tenant_update_dto->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(tenant_update_dtoJSON, "email");
    if (!email) {
        goto end;
    }

    
    if(!cJSON_IsString(email))
    {
    goto end; //String
    }

    // tenant_update_dto->phone
    cJSON *phone = cJSON_GetObjectItemCaseSensitive(tenant_update_dtoJSON, "phone");
    if (phone) { 
    if(!cJSON_IsString(phone) && !cJSON_IsNull(phone))
    {
    goto end; //String
    }
    }

    // tenant_update_dto->web_url
    cJSON *web_url = cJSON_GetObjectItemCaseSensitive(tenant_update_dtoJSON, "webUrl");
    if (web_url) { 
    if(!cJSON_IsString(web_url) && !cJSON_IsNull(web_url))
    {
    goto end; //String
    }
    }

    // tenant_update_dto->about
    cJSON *about = cJSON_GetObjectItemCaseSensitive(tenant_update_dtoJSON, "about");
    if (about) { 
    if(!cJSON_IsString(about) && !cJSON_IsNull(about))
    {
    goto end; //String
    }
    }

    // tenant_update_dto->slogan
    cJSON *slogan = cJSON_GetObjectItemCaseSensitive(tenant_update_dtoJSON, "slogan");
    if (slogan) { 
    if(!cJSON_IsString(slogan) && !cJSON_IsNull(slogan))
    {
    goto end; //String
    }
    }

    // tenant_update_dto->handler
    cJSON *handler = cJSON_GetObjectItemCaseSensitive(tenant_update_dtoJSON, "handler");
    if (handler) { 
    if(!cJSON_IsString(handler) && !cJSON_IsNull(handler))
    {
    goto end; //String
    }
    }

    // tenant_update_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(tenant_update_dtoJSON, "currencyId");
    if (!currency_id) {
        goto end;
    }

    
    if(!cJSON_IsString(currency_id))
    {
    goto end; //String
    }

    // tenant_update_dto->duns
    cJSON *duns = cJSON_GetObjectItemCaseSensitive(tenant_update_dtoJSON, "duns");
    if (duns) { 
    if(!cJSON_IsString(duns) && !cJSON_IsNull(duns))
    {
    goto end; //String
    }
    }

    // tenant_update_dto->tax_id
    cJSON *tax_id = cJSON_GetObjectItemCaseSensitive(tenant_update_dtoJSON, "taxId");
    if (tax_id) { 
    if(!cJSON_IsString(tax_id) && !cJSON_IsNull(tax_id))
    {
    goto end; //String
    }
    }

    // tenant_update_dto->avatar_url
    cJSON *avatar_url = cJSON_GetObjectItemCaseSensitive(tenant_update_dtoJSON, "avatarUrl");
    if (avatar_url) { 
    if(!cJSON_IsString(avatar_url) && !cJSON_IsNull(avatar_url))
    {
    goto end; //String
    }
    }

    // tenant_update_dto->twitter_username
    cJSON *twitter_username = cJSON_GetObjectItemCaseSensitive(tenant_update_dtoJSON, "twitterUsername");
    if (twitter_username) { 
    if(!cJSON_IsString(twitter_username) && !cJSON_IsNull(twitter_username))
    {
    goto end; //String
    }
    }

    // tenant_update_dto->facebook_url
    cJSON *facebook_url = cJSON_GetObjectItemCaseSensitive(tenant_update_dtoJSON, "facebookUrl");
    if (facebook_url) { 
    if(!cJSON_IsString(facebook_url) && !cJSON_IsNull(facebook_url))
    {
    goto end; //String
    }
    }

    // tenant_update_dto->twitter_url
    cJSON *twitter_url = cJSON_GetObjectItemCaseSensitive(tenant_update_dtoJSON, "twitterUrl");
    if (twitter_url) { 
    if(!cJSON_IsString(twitter_url) && !cJSON_IsNull(twitter_url))
    {
    goto end; //String
    }
    }

    // tenant_update_dto->git_hub_url
    cJSON *git_hub_url = cJSON_GetObjectItemCaseSensitive(tenant_update_dtoJSON, "gitHubUrl");
    if (git_hub_url) { 
    if(!cJSON_IsString(git_hub_url) && !cJSON_IsNull(git_hub_url))
    {
    goto end; //String
    }
    }

    // tenant_update_dto->linked_in_url
    cJSON *linked_in_url = cJSON_GetObjectItemCaseSensitive(tenant_update_dtoJSON, "linkedInUrl");
    if (linked_in_url) { 
    if(!cJSON_IsString(linked_in_url) && !cJSON_IsNull(linked_in_url))
    {
    goto end; //String
    }
    }

    // tenant_update_dto->instagram_url
    cJSON *instagram_url = cJSON_GetObjectItemCaseSensitive(tenant_update_dtoJSON, "instagramUrl");
    if (instagram_url) { 
    if(!cJSON_IsString(instagram_url) && !cJSON_IsNull(instagram_url))
    {
    goto end; //String
    }
    }

    // tenant_update_dto->you_tube_url
    cJSON *you_tube_url = cJSON_GetObjectItemCaseSensitive(tenant_update_dtoJSON, "youTubeUrl");
    if (you_tube_url) { 
    if(!cJSON_IsString(you_tube_url) && !cJSON_IsNull(you_tube_url))
    {
    goto end; //String
    }
    }

    // tenant_update_dto->whats_app_number
    cJSON *whats_app_number = cJSON_GetObjectItemCaseSensitive(tenant_update_dtoJSON, "whatsAppNumber");
    if (whats_app_number) { 
    if(!cJSON_IsString(whats_app_number) && !cJSON_IsNull(whats_app_number))
    {
    goto end; //String
    }
    }

    // tenant_update_dto->support_phone_number
    cJSON *support_phone_number = cJSON_GetObjectItemCaseSensitive(tenant_update_dtoJSON, "supportPhoneNumber");
    if (support_phone_number) { 
    if(!cJSON_IsString(support_phone_number) && !cJSON_IsNull(support_phone_number))
    {
    goto end; //String
    }
    }

    // tenant_update_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(tenant_update_dtoJSON, "countryId");
    if (!country_id) {
        goto end;
    }

    
    if(!cJSON_IsString(country_id))
    {
    goto end; //String
    }

    // tenant_update_dto->timezone_id
    cJSON *timezone_id = cJSON_GetObjectItemCaseSensitive(tenant_update_dtoJSON, "timezoneId");
    if (timezone_id) { 
    if(!cJSON_IsString(timezone_id) && !cJSON_IsNull(timezone_id))
    {
    goto end; //String
    }
    }

    // tenant_update_dto->language_id
    cJSON *language_id = cJSON_GetObjectItemCaseSensitive(tenant_update_dtoJSON, "languageId");
    if (language_id) { 
    if(!cJSON_IsString(language_id) && !cJSON_IsNull(language_id))
    {
    goto end; //String
    }
    }

    // tenant_update_dto->state_id
    cJSON *state_id = cJSON_GetObjectItemCaseSensitive(tenant_update_dtoJSON, "stateId");
    if (state_id) { 
    if(!cJSON_IsString(state_id) && !cJSON_IsNull(state_id))
    {
    goto end; //String
    }
    }

    // tenant_update_dto->city_id
    cJSON *city_id = cJSON_GetObjectItemCaseSensitive(tenant_update_dtoJSON, "cityId");
    if (city_id) { 
    if(!cJSON_IsString(city_id) && !cJSON_IsNull(city_id))
    {
    goto end; //String
    }
    }


    tenant_update_dto_local_var = tenant_update_dto_create (
        strdup(name->valuestring),
        legal_name && !cJSON_IsNull(legal_name) ? strdup(legal_name->valuestring) : NULL,
        strdup(email->valuestring),
        phone && !cJSON_IsNull(phone) ? strdup(phone->valuestring) : NULL,
        web_url && !cJSON_IsNull(web_url) ? strdup(web_url->valuestring) : NULL,
        about && !cJSON_IsNull(about) ? strdup(about->valuestring) : NULL,
        slogan && !cJSON_IsNull(slogan) ? strdup(slogan->valuestring) : NULL,
        handler && !cJSON_IsNull(handler) ? strdup(handler->valuestring) : NULL,
        strdup(currency_id->valuestring),
        duns && !cJSON_IsNull(duns) ? strdup(duns->valuestring) : NULL,
        tax_id && !cJSON_IsNull(tax_id) ? strdup(tax_id->valuestring) : NULL,
        avatar_url && !cJSON_IsNull(avatar_url) ? strdup(avatar_url->valuestring) : NULL,
        twitter_username && !cJSON_IsNull(twitter_username) ? strdup(twitter_username->valuestring) : NULL,
        facebook_url && !cJSON_IsNull(facebook_url) ? strdup(facebook_url->valuestring) : NULL,
        twitter_url && !cJSON_IsNull(twitter_url) ? strdup(twitter_url->valuestring) : NULL,
        git_hub_url && !cJSON_IsNull(git_hub_url) ? strdup(git_hub_url->valuestring) : NULL,
        linked_in_url && !cJSON_IsNull(linked_in_url) ? strdup(linked_in_url->valuestring) : NULL,
        instagram_url && !cJSON_IsNull(instagram_url) ? strdup(instagram_url->valuestring) : NULL,
        you_tube_url && !cJSON_IsNull(you_tube_url) ? strdup(you_tube_url->valuestring) : NULL,
        whats_app_number && !cJSON_IsNull(whats_app_number) ? strdup(whats_app_number->valuestring) : NULL,
        support_phone_number && !cJSON_IsNull(support_phone_number) ? strdup(support_phone_number->valuestring) : NULL,
        strdup(country_id->valuestring),
        timezone_id && !cJSON_IsNull(timezone_id) ? strdup(timezone_id->valuestring) : NULL,
        language_id && !cJSON_IsNull(language_id) ? strdup(language_id->valuestring) : NULL,
        state_id && !cJSON_IsNull(state_id) ? strdup(state_id->valuestring) : NULL,
        city_id && !cJSON_IsNull(city_id) ? strdup(city_id->valuestring) : NULL
        );

    return tenant_update_dto_local_var;
end:
    return NULL;

}
