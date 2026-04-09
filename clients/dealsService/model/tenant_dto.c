#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tenant_dto.h"



tenant_dto_t *tenant_dto_create(
    char *id,
    char *timestamp,
    char *qualified_name,
    char *tax_id,
    char *about,
    char *wallet_id,
    char *social_feed_id,
    char *business_industry_id,
    char *business_segment_id,
    char *social_profile_id,
    char *language_id,
    char *name,
    char *duns,
    char *slogan,
    char *legal_name,
    char *cover_url,
    char *avatar_url,
    char *cart_id,
    char *currency_id,
    char *timezone_id,
    char *country_id,
    char *state_id,
    char *city_id,
    char *email,
    char *phone,
    char *web_url,
    char *facebook_url,
    char *twitter_url,
    char *git_hub_url,
    char *linked_in_url,
    char *instagram_url,
    char *you_tube_url,
    char *whats_app_number,
    char *support_phone_number,
    int verified,
    char *business_name,
    char *business_legal_name,
    char *twitter_username
    ) {
    tenant_dto_t *tenant_dto_local_var = malloc(sizeof(tenant_dto_t));
    if (!tenant_dto_local_var) {
        return NULL;
    }
    tenant_dto_local_var->id = id;
    tenant_dto_local_var->timestamp = timestamp;
    tenant_dto_local_var->qualified_name = qualified_name;
    tenant_dto_local_var->tax_id = tax_id;
    tenant_dto_local_var->about = about;
    tenant_dto_local_var->wallet_id = wallet_id;
    tenant_dto_local_var->social_feed_id = social_feed_id;
    tenant_dto_local_var->business_industry_id = business_industry_id;
    tenant_dto_local_var->business_segment_id = business_segment_id;
    tenant_dto_local_var->social_profile_id = social_profile_id;
    tenant_dto_local_var->language_id = language_id;
    tenant_dto_local_var->name = name;
    tenant_dto_local_var->duns = duns;
    tenant_dto_local_var->slogan = slogan;
    tenant_dto_local_var->legal_name = legal_name;
    tenant_dto_local_var->cover_url = cover_url;
    tenant_dto_local_var->avatar_url = avatar_url;
    tenant_dto_local_var->cart_id = cart_id;
    tenant_dto_local_var->currency_id = currency_id;
    tenant_dto_local_var->timezone_id = timezone_id;
    tenant_dto_local_var->country_id = country_id;
    tenant_dto_local_var->state_id = state_id;
    tenant_dto_local_var->city_id = city_id;
    tenant_dto_local_var->email = email;
    tenant_dto_local_var->phone = phone;
    tenant_dto_local_var->web_url = web_url;
    tenant_dto_local_var->facebook_url = facebook_url;
    tenant_dto_local_var->twitter_url = twitter_url;
    tenant_dto_local_var->git_hub_url = git_hub_url;
    tenant_dto_local_var->linked_in_url = linked_in_url;
    tenant_dto_local_var->instagram_url = instagram_url;
    tenant_dto_local_var->you_tube_url = you_tube_url;
    tenant_dto_local_var->whats_app_number = whats_app_number;
    tenant_dto_local_var->support_phone_number = support_phone_number;
    tenant_dto_local_var->verified = verified;
    tenant_dto_local_var->business_name = business_name;
    tenant_dto_local_var->business_legal_name = business_legal_name;
    tenant_dto_local_var->twitter_username = twitter_username;

    return tenant_dto_local_var;
}


void tenant_dto_free(tenant_dto_t *tenant_dto) {
    if(NULL == tenant_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (tenant_dto->id) {
        free(tenant_dto->id);
        tenant_dto->id = NULL;
    }
    if (tenant_dto->timestamp) {
        free(tenant_dto->timestamp);
        tenant_dto->timestamp = NULL;
    }
    if (tenant_dto->qualified_name) {
        free(tenant_dto->qualified_name);
        tenant_dto->qualified_name = NULL;
    }
    if (tenant_dto->tax_id) {
        free(tenant_dto->tax_id);
        tenant_dto->tax_id = NULL;
    }
    if (tenant_dto->about) {
        free(tenant_dto->about);
        tenant_dto->about = NULL;
    }
    if (tenant_dto->wallet_id) {
        free(tenant_dto->wallet_id);
        tenant_dto->wallet_id = NULL;
    }
    if (tenant_dto->social_feed_id) {
        free(tenant_dto->social_feed_id);
        tenant_dto->social_feed_id = NULL;
    }
    if (tenant_dto->business_industry_id) {
        free(tenant_dto->business_industry_id);
        tenant_dto->business_industry_id = NULL;
    }
    if (tenant_dto->business_segment_id) {
        free(tenant_dto->business_segment_id);
        tenant_dto->business_segment_id = NULL;
    }
    if (tenant_dto->social_profile_id) {
        free(tenant_dto->social_profile_id);
        tenant_dto->social_profile_id = NULL;
    }
    if (tenant_dto->language_id) {
        free(tenant_dto->language_id);
        tenant_dto->language_id = NULL;
    }
    if (tenant_dto->name) {
        free(tenant_dto->name);
        tenant_dto->name = NULL;
    }
    if (tenant_dto->duns) {
        free(tenant_dto->duns);
        tenant_dto->duns = NULL;
    }
    if (tenant_dto->slogan) {
        free(tenant_dto->slogan);
        tenant_dto->slogan = NULL;
    }
    if (tenant_dto->legal_name) {
        free(tenant_dto->legal_name);
        tenant_dto->legal_name = NULL;
    }
    if (tenant_dto->cover_url) {
        free(tenant_dto->cover_url);
        tenant_dto->cover_url = NULL;
    }
    if (tenant_dto->avatar_url) {
        free(tenant_dto->avatar_url);
        tenant_dto->avatar_url = NULL;
    }
    if (tenant_dto->cart_id) {
        free(tenant_dto->cart_id);
        tenant_dto->cart_id = NULL;
    }
    if (tenant_dto->currency_id) {
        free(tenant_dto->currency_id);
        tenant_dto->currency_id = NULL;
    }
    if (tenant_dto->timezone_id) {
        free(tenant_dto->timezone_id);
        tenant_dto->timezone_id = NULL;
    }
    if (tenant_dto->country_id) {
        free(tenant_dto->country_id);
        tenant_dto->country_id = NULL;
    }
    if (tenant_dto->state_id) {
        free(tenant_dto->state_id);
        tenant_dto->state_id = NULL;
    }
    if (tenant_dto->city_id) {
        free(tenant_dto->city_id);
        tenant_dto->city_id = NULL;
    }
    if (tenant_dto->email) {
        free(tenant_dto->email);
        tenant_dto->email = NULL;
    }
    if (tenant_dto->phone) {
        free(tenant_dto->phone);
        tenant_dto->phone = NULL;
    }
    if (tenant_dto->web_url) {
        free(tenant_dto->web_url);
        tenant_dto->web_url = NULL;
    }
    if (tenant_dto->facebook_url) {
        free(tenant_dto->facebook_url);
        tenant_dto->facebook_url = NULL;
    }
    if (tenant_dto->twitter_url) {
        free(tenant_dto->twitter_url);
        tenant_dto->twitter_url = NULL;
    }
    if (tenant_dto->git_hub_url) {
        free(tenant_dto->git_hub_url);
        tenant_dto->git_hub_url = NULL;
    }
    if (tenant_dto->linked_in_url) {
        free(tenant_dto->linked_in_url);
        tenant_dto->linked_in_url = NULL;
    }
    if (tenant_dto->instagram_url) {
        free(tenant_dto->instagram_url);
        tenant_dto->instagram_url = NULL;
    }
    if (tenant_dto->you_tube_url) {
        free(tenant_dto->you_tube_url);
        tenant_dto->you_tube_url = NULL;
    }
    if (tenant_dto->whats_app_number) {
        free(tenant_dto->whats_app_number);
        tenant_dto->whats_app_number = NULL;
    }
    if (tenant_dto->support_phone_number) {
        free(tenant_dto->support_phone_number);
        tenant_dto->support_phone_number = NULL;
    }
    if (tenant_dto->business_name) {
        free(tenant_dto->business_name);
        tenant_dto->business_name = NULL;
    }
    if (tenant_dto->business_legal_name) {
        free(tenant_dto->business_legal_name);
        tenant_dto->business_legal_name = NULL;
    }
    if (tenant_dto->twitter_username) {
        free(tenant_dto->twitter_username);
        tenant_dto->twitter_username = NULL;
    }
    free(tenant_dto);
}

cJSON *tenant_dto_convertToJSON(tenant_dto_t *tenant_dto) {
    cJSON *item = cJSON_CreateObject();

    // tenant_dto->id
    if(tenant_dto->id) {
    if(cJSON_AddStringToObject(item, "id", tenant_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_dto->timestamp
    if(tenant_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", tenant_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // tenant_dto->qualified_name
    if(tenant_dto->qualified_name) {
    if(cJSON_AddStringToObject(item, "qualifiedName", tenant_dto->qualified_name) == NULL) {
    goto fail; //String
    }
    }


    // tenant_dto->tax_id
    if(tenant_dto->tax_id) {
    if(cJSON_AddStringToObject(item, "taxId", tenant_dto->tax_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_dto->about
    if(tenant_dto->about) {
    if(cJSON_AddStringToObject(item, "about", tenant_dto->about) == NULL) {
    goto fail; //String
    }
    }


    // tenant_dto->wallet_id
    if(tenant_dto->wallet_id) {
    if(cJSON_AddStringToObject(item, "walletId", tenant_dto->wallet_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_dto->social_feed_id
    if(tenant_dto->social_feed_id) {
    if(cJSON_AddStringToObject(item, "socialFeedId", tenant_dto->social_feed_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_dto->business_industry_id
    if(tenant_dto->business_industry_id) {
    if(cJSON_AddStringToObject(item, "businessIndustryId", tenant_dto->business_industry_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_dto->business_segment_id
    if(tenant_dto->business_segment_id) {
    if(cJSON_AddStringToObject(item, "businessSegmentId", tenant_dto->business_segment_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_dto->social_profile_id
    if(tenant_dto->social_profile_id) {
    if(cJSON_AddStringToObject(item, "socialProfileId", tenant_dto->social_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_dto->language_id
    if(tenant_dto->language_id) {
    if(cJSON_AddStringToObject(item, "languageId", tenant_dto->language_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_dto->name
    if(tenant_dto->name) {
    if(cJSON_AddStringToObject(item, "name", tenant_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // tenant_dto->duns
    if(tenant_dto->duns) {
    if(cJSON_AddStringToObject(item, "duns", tenant_dto->duns) == NULL) {
    goto fail; //String
    }
    }


    // tenant_dto->slogan
    if(tenant_dto->slogan) {
    if(cJSON_AddStringToObject(item, "slogan", tenant_dto->slogan) == NULL) {
    goto fail; //String
    }
    }


    // tenant_dto->legal_name
    if(tenant_dto->legal_name) {
    if(cJSON_AddStringToObject(item, "legalName", tenant_dto->legal_name) == NULL) {
    goto fail; //String
    }
    }


    // tenant_dto->cover_url
    if(tenant_dto->cover_url) {
    if(cJSON_AddStringToObject(item, "coverUrl", tenant_dto->cover_url) == NULL) {
    goto fail; //String
    }
    }


    // tenant_dto->avatar_url
    if(tenant_dto->avatar_url) {
    if(cJSON_AddStringToObject(item, "avatarUrl", tenant_dto->avatar_url) == NULL) {
    goto fail; //String
    }
    }


    // tenant_dto->cart_id
    if(tenant_dto->cart_id) {
    if(cJSON_AddStringToObject(item, "cartId", tenant_dto->cart_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_dto->currency_id
    if(tenant_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", tenant_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_dto->timezone_id
    if(tenant_dto->timezone_id) {
    if(cJSON_AddStringToObject(item, "timezoneId", tenant_dto->timezone_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_dto->country_id
    if(tenant_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryId", tenant_dto->country_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_dto->state_id
    if(tenant_dto->state_id) {
    if(cJSON_AddStringToObject(item, "stateId", tenant_dto->state_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_dto->city_id
    if(tenant_dto->city_id) {
    if(cJSON_AddStringToObject(item, "cityId", tenant_dto->city_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_dto->email
    if(tenant_dto->email) {
    if(cJSON_AddStringToObject(item, "email", tenant_dto->email) == NULL) {
    goto fail; //String
    }
    }


    // tenant_dto->phone
    if(tenant_dto->phone) {
    if(cJSON_AddStringToObject(item, "phone", tenant_dto->phone) == NULL) {
    goto fail; //String
    }
    }


    // tenant_dto->web_url
    if(tenant_dto->web_url) {
    if(cJSON_AddStringToObject(item, "webUrl", tenant_dto->web_url) == NULL) {
    goto fail; //String
    }
    }


    // tenant_dto->facebook_url
    if(tenant_dto->facebook_url) {
    if(cJSON_AddStringToObject(item, "facebookUrl", tenant_dto->facebook_url) == NULL) {
    goto fail; //String
    }
    }


    // tenant_dto->twitter_url
    if(tenant_dto->twitter_url) {
    if(cJSON_AddStringToObject(item, "twitterUrl", tenant_dto->twitter_url) == NULL) {
    goto fail; //String
    }
    }


    // tenant_dto->git_hub_url
    if(tenant_dto->git_hub_url) {
    if(cJSON_AddStringToObject(item, "gitHubUrl", tenant_dto->git_hub_url) == NULL) {
    goto fail; //String
    }
    }


    // tenant_dto->linked_in_url
    if(tenant_dto->linked_in_url) {
    if(cJSON_AddStringToObject(item, "linkedInUrl", tenant_dto->linked_in_url) == NULL) {
    goto fail; //String
    }
    }


    // tenant_dto->instagram_url
    if(tenant_dto->instagram_url) {
    if(cJSON_AddStringToObject(item, "instagramUrl", tenant_dto->instagram_url) == NULL) {
    goto fail; //String
    }
    }


    // tenant_dto->you_tube_url
    if(tenant_dto->you_tube_url) {
    if(cJSON_AddStringToObject(item, "youTubeUrl", tenant_dto->you_tube_url) == NULL) {
    goto fail; //String
    }
    }


    // tenant_dto->whats_app_number
    if(tenant_dto->whats_app_number) {
    if(cJSON_AddStringToObject(item, "whatsAppNumber", tenant_dto->whats_app_number) == NULL) {
    goto fail; //String
    }
    }


    // tenant_dto->support_phone_number
    if(tenant_dto->support_phone_number) {
    if(cJSON_AddStringToObject(item, "supportPhoneNumber", tenant_dto->support_phone_number) == NULL) {
    goto fail; //String
    }
    }


    // tenant_dto->verified
    if(tenant_dto->verified) {
    if(cJSON_AddBoolToObject(item, "verified", tenant_dto->verified) == NULL) {
    goto fail; //Bool
    }
    }


    // tenant_dto->business_name
    if(tenant_dto->business_name) {
    if(cJSON_AddStringToObject(item, "businessName", tenant_dto->business_name) == NULL) {
    goto fail; //String
    }
    }


    // tenant_dto->business_legal_name
    if(tenant_dto->business_legal_name) {
    if(cJSON_AddStringToObject(item, "businessLegalName", tenant_dto->business_legal_name) == NULL) {
    goto fail; //String
    }
    }


    // tenant_dto->twitter_username
    if(tenant_dto->twitter_username) {
    if(cJSON_AddStringToObject(item, "twitterUsername", tenant_dto->twitter_username) == NULL) {
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

tenant_dto_t *tenant_dto_parseFromJSON(cJSON *tenant_dtoJSON){

    tenant_dto_t *tenant_dto_local_var = NULL;

    // tenant_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(tenant_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // tenant_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(tenant_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // tenant_dto->qualified_name
    cJSON *qualified_name = cJSON_GetObjectItemCaseSensitive(tenant_dtoJSON, "qualifiedName");
    if (qualified_name) { 
    if(!cJSON_IsString(qualified_name) && !cJSON_IsNull(qualified_name))
    {
    goto end; //String
    }
    }

    // tenant_dto->tax_id
    cJSON *tax_id = cJSON_GetObjectItemCaseSensitive(tenant_dtoJSON, "taxId");
    if (tax_id) { 
    if(!cJSON_IsString(tax_id) && !cJSON_IsNull(tax_id))
    {
    goto end; //String
    }
    }

    // tenant_dto->about
    cJSON *about = cJSON_GetObjectItemCaseSensitive(tenant_dtoJSON, "about");
    if (about) { 
    if(!cJSON_IsString(about) && !cJSON_IsNull(about))
    {
    goto end; //String
    }
    }

    // tenant_dto->wallet_id
    cJSON *wallet_id = cJSON_GetObjectItemCaseSensitive(tenant_dtoJSON, "walletId");
    if (wallet_id) { 
    if(!cJSON_IsString(wallet_id) && !cJSON_IsNull(wallet_id))
    {
    goto end; //String
    }
    }

    // tenant_dto->social_feed_id
    cJSON *social_feed_id = cJSON_GetObjectItemCaseSensitive(tenant_dtoJSON, "socialFeedId");
    if (social_feed_id) { 
    if(!cJSON_IsString(social_feed_id) && !cJSON_IsNull(social_feed_id))
    {
    goto end; //String
    }
    }

    // tenant_dto->business_industry_id
    cJSON *business_industry_id = cJSON_GetObjectItemCaseSensitive(tenant_dtoJSON, "businessIndustryId");
    if (business_industry_id) { 
    if(!cJSON_IsString(business_industry_id) && !cJSON_IsNull(business_industry_id))
    {
    goto end; //String
    }
    }

    // tenant_dto->business_segment_id
    cJSON *business_segment_id = cJSON_GetObjectItemCaseSensitive(tenant_dtoJSON, "businessSegmentId");
    if (business_segment_id) { 
    if(!cJSON_IsString(business_segment_id) && !cJSON_IsNull(business_segment_id))
    {
    goto end; //String
    }
    }

    // tenant_dto->social_profile_id
    cJSON *social_profile_id = cJSON_GetObjectItemCaseSensitive(tenant_dtoJSON, "socialProfileId");
    if (social_profile_id) { 
    if(!cJSON_IsString(social_profile_id) && !cJSON_IsNull(social_profile_id))
    {
    goto end; //String
    }
    }

    // tenant_dto->language_id
    cJSON *language_id = cJSON_GetObjectItemCaseSensitive(tenant_dtoJSON, "languageId");
    if (language_id) { 
    if(!cJSON_IsString(language_id) && !cJSON_IsNull(language_id))
    {
    goto end; //String
    }
    }

    // tenant_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(tenant_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // tenant_dto->duns
    cJSON *duns = cJSON_GetObjectItemCaseSensitive(tenant_dtoJSON, "duns");
    if (duns) { 
    if(!cJSON_IsString(duns) && !cJSON_IsNull(duns))
    {
    goto end; //String
    }
    }

    // tenant_dto->slogan
    cJSON *slogan = cJSON_GetObjectItemCaseSensitive(tenant_dtoJSON, "slogan");
    if (slogan) { 
    if(!cJSON_IsString(slogan) && !cJSON_IsNull(slogan))
    {
    goto end; //String
    }
    }

    // tenant_dto->legal_name
    cJSON *legal_name = cJSON_GetObjectItemCaseSensitive(tenant_dtoJSON, "legalName");
    if (legal_name) { 
    if(!cJSON_IsString(legal_name) && !cJSON_IsNull(legal_name))
    {
    goto end; //String
    }
    }

    // tenant_dto->cover_url
    cJSON *cover_url = cJSON_GetObjectItemCaseSensitive(tenant_dtoJSON, "coverUrl");
    if (cover_url) { 
    if(!cJSON_IsString(cover_url) && !cJSON_IsNull(cover_url))
    {
    goto end; //String
    }
    }

    // tenant_dto->avatar_url
    cJSON *avatar_url = cJSON_GetObjectItemCaseSensitive(tenant_dtoJSON, "avatarUrl");
    if (avatar_url) { 
    if(!cJSON_IsString(avatar_url) && !cJSON_IsNull(avatar_url))
    {
    goto end; //String
    }
    }

    // tenant_dto->cart_id
    cJSON *cart_id = cJSON_GetObjectItemCaseSensitive(tenant_dtoJSON, "cartId");
    if (cart_id) { 
    if(!cJSON_IsString(cart_id) && !cJSON_IsNull(cart_id))
    {
    goto end; //String
    }
    }

    // tenant_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(tenant_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // tenant_dto->timezone_id
    cJSON *timezone_id = cJSON_GetObjectItemCaseSensitive(tenant_dtoJSON, "timezoneId");
    if (timezone_id) { 
    if(!cJSON_IsString(timezone_id) && !cJSON_IsNull(timezone_id))
    {
    goto end; //String
    }
    }

    // tenant_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(tenant_dtoJSON, "countryId");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }

    // tenant_dto->state_id
    cJSON *state_id = cJSON_GetObjectItemCaseSensitive(tenant_dtoJSON, "stateId");
    if (state_id) { 
    if(!cJSON_IsString(state_id) && !cJSON_IsNull(state_id))
    {
    goto end; //String
    }
    }

    // tenant_dto->city_id
    cJSON *city_id = cJSON_GetObjectItemCaseSensitive(tenant_dtoJSON, "cityId");
    if (city_id) { 
    if(!cJSON_IsString(city_id) && !cJSON_IsNull(city_id))
    {
    goto end; //String
    }
    }

    // tenant_dto->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(tenant_dtoJSON, "email");
    if (email) { 
    if(!cJSON_IsString(email) && !cJSON_IsNull(email))
    {
    goto end; //String
    }
    }

    // tenant_dto->phone
    cJSON *phone = cJSON_GetObjectItemCaseSensitive(tenant_dtoJSON, "phone");
    if (phone) { 
    if(!cJSON_IsString(phone) && !cJSON_IsNull(phone))
    {
    goto end; //String
    }
    }

    // tenant_dto->web_url
    cJSON *web_url = cJSON_GetObjectItemCaseSensitive(tenant_dtoJSON, "webUrl");
    if (web_url) { 
    if(!cJSON_IsString(web_url) && !cJSON_IsNull(web_url))
    {
    goto end; //String
    }
    }

    // tenant_dto->facebook_url
    cJSON *facebook_url = cJSON_GetObjectItemCaseSensitive(tenant_dtoJSON, "facebookUrl");
    if (facebook_url) { 
    if(!cJSON_IsString(facebook_url) && !cJSON_IsNull(facebook_url))
    {
    goto end; //String
    }
    }

    // tenant_dto->twitter_url
    cJSON *twitter_url = cJSON_GetObjectItemCaseSensitive(tenant_dtoJSON, "twitterUrl");
    if (twitter_url) { 
    if(!cJSON_IsString(twitter_url) && !cJSON_IsNull(twitter_url))
    {
    goto end; //String
    }
    }

    // tenant_dto->git_hub_url
    cJSON *git_hub_url = cJSON_GetObjectItemCaseSensitive(tenant_dtoJSON, "gitHubUrl");
    if (git_hub_url) { 
    if(!cJSON_IsString(git_hub_url) && !cJSON_IsNull(git_hub_url))
    {
    goto end; //String
    }
    }

    // tenant_dto->linked_in_url
    cJSON *linked_in_url = cJSON_GetObjectItemCaseSensitive(tenant_dtoJSON, "linkedInUrl");
    if (linked_in_url) { 
    if(!cJSON_IsString(linked_in_url) && !cJSON_IsNull(linked_in_url))
    {
    goto end; //String
    }
    }

    // tenant_dto->instagram_url
    cJSON *instagram_url = cJSON_GetObjectItemCaseSensitive(tenant_dtoJSON, "instagramUrl");
    if (instagram_url) { 
    if(!cJSON_IsString(instagram_url) && !cJSON_IsNull(instagram_url))
    {
    goto end; //String
    }
    }

    // tenant_dto->you_tube_url
    cJSON *you_tube_url = cJSON_GetObjectItemCaseSensitive(tenant_dtoJSON, "youTubeUrl");
    if (you_tube_url) { 
    if(!cJSON_IsString(you_tube_url) && !cJSON_IsNull(you_tube_url))
    {
    goto end; //String
    }
    }

    // tenant_dto->whats_app_number
    cJSON *whats_app_number = cJSON_GetObjectItemCaseSensitive(tenant_dtoJSON, "whatsAppNumber");
    if (whats_app_number) { 
    if(!cJSON_IsString(whats_app_number) && !cJSON_IsNull(whats_app_number))
    {
    goto end; //String
    }
    }

    // tenant_dto->support_phone_number
    cJSON *support_phone_number = cJSON_GetObjectItemCaseSensitive(tenant_dtoJSON, "supportPhoneNumber");
    if (support_phone_number) { 
    if(!cJSON_IsString(support_phone_number) && !cJSON_IsNull(support_phone_number))
    {
    goto end; //String
    }
    }

    // tenant_dto->verified
    cJSON *verified = cJSON_GetObjectItemCaseSensitive(tenant_dtoJSON, "verified");
    if (verified) { 
    if(!cJSON_IsBool(verified))
    {
    goto end; //Bool
    }
    }

    // tenant_dto->business_name
    cJSON *business_name = cJSON_GetObjectItemCaseSensitive(tenant_dtoJSON, "businessName");
    if (business_name) { 
    if(!cJSON_IsString(business_name) && !cJSON_IsNull(business_name))
    {
    goto end; //String
    }
    }

    // tenant_dto->business_legal_name
    cJSON *business_legal_name = cJSON_GetObjectItemCaseSensitive(tenant_dtoJSON, "businessLegalName");
    if (business_legal_name) { 
    if(!cJSON_IsString(business_legal_name) && !cJSON_IsNull(business_legal_name))
    {
    goto end; //String
    }
    }

    // tenant_dto->twitter_username
    cJSON *twitter_username = cJSON_GetObjectItemCaseSensitive(tenant_dtoJSON, "twitterUsername");
    if (twitter_username) { 
    if(!cJSON_IsString(twitter_username) && !cJSON_IsNull(twitter_username))
    {
    goto end; //String
    }
    }


    tenant_dto_local_var = tenant_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        qualified_name && !cJSON_IsNull(qualified_name) ? strdup(qualified_name->valuestring) : NULL,
        tax_id && !cJSON_IsNull(tax_id) ? strdup(tax_id->valuestring) : NULL,
        about && !cJSON_IsNull(about) ? strdup(about->valuestring) : NULL,
        wallet_id && !cJSON_IsNull(wallet_id) ? strdup(wallet_id->valuestring) : NULL,
        social_feed_id && !cJSON_IsNull(social_feed_id) ? strdup(social_feed_id->valuestring) : NULL,
        business_industry_id && !cJSON_IsNull(business_industry_id) ? strdup(business_industry_id->valuestring) : NULL,
        business_segment_id && !cJSON_IsNull(business_segment_id) ? strdup(business_segment_id->valuestring) : NULL,
        social_profile_id && !cJSON_IsNull(social_profile_id) ? strdup(social_profile_id->valuestring) : NULL,
        language_id && !cJSON_IsNull(language_id) ? strdup(language_id->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        duns && !cJSON_IsNull(duns) ? strdup(duns->valuestring) : NULL,
        slogan && !cJSON_IsNull(slogan) ? strdup(slogan->valuestring) : NULL,
        legal_name && !cJSON_IsNull(legal_name) ? strdup(legal_name->valuestring) : NULL,
        cover_url && !cJSON_IsNull(cover_url) ? strdup(cover_url->valuestring) : NULL,
        avatar_url && !cJSON_IsNull(avatar_url) ? strdup(avatar_url->valuestring) : NULL,
        cart_id && !cJSON_IsNull(cart_id) ? strdup(cart_id->valuestring) : NULL,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        timezone_id && !cJSON_IsNull(timezone_id) ? strdup(timezone_id->valuestring) : NULL,
        country_id && !cJSON_IsNull(country_id) ? strdup(country_id->valuestring) : NULL,
        state_id && !cJSON_IsNull(state_id) ? strdup(state_id->valuestring) : NULL,
        city_id && !cJSON_IsNull(city_id) ? strdup(city_id->valuestring) : NULL,
        email && !cJSON_IsNull(email) ? strdup(email->valuestring) : NULL,
        phone && !cJSON_IsNull(phone) ? strdup(phone->valuestring) : NULL,
        web_url && !cJSON_IsNull(web_url) ? strdup(web_url->valuestring) : NULL,
        facebook_url && !cJSON_IsNull(facebook_url) ? strdup(facebook_url->valuestring) : NULL,
        twitter_url && !cJSON_IsNull(twitter_url) ? strdup(twitter_url->valuestring) : NULL,
        git_hub_url && !cJSON_IsNull(git_hub_url) ? strdup(git_hub_url->valuestring) : NULL,
        linked_in_url && !cJSON_IsNull(linked_in_url) ? strdup(linked_in_url->valuestring) : NULL,
        instagram_url && !cJSON_IsNull(instagram_url) ? strdup(instagram_url->valuestring) : NULL,
        you_tube_url && !cJSON_IsNull(you_tube_url) ? strdup(you_tube_url->valuestring) : NULL,
        whats_app_number && !cJSON_IsNull(whats_app_number) ? strdup(whats_app_number->valuestring) : NULL,
        support_phone_number && !cJSON_IsNull(support_phone_number) ? strdup(support_phone_number->valuestring) : NULL,
        verified ? verified->valueint : 0,
        business_name && !cJSON_IsNull(business_name) ? strdup(business_name->valuestring) : NULL,
        business_legal_name && !cJSON_IsNull(business_legal_name) ? strdup(business_legal_name->valuestring) : NULL,
        twitter_username && !cJSON_IsNull(twitter_username) ? strdup(twitter_username->valuestring) : NULL
        );

    return tenant_dto_local_var;
end:
    return NULL;

}
