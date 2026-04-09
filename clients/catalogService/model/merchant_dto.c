#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "merchant_dto.h"



merchant_dto_t *merchant_dto_create(
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
    char *twitter_username,
    int products_count,
    double merchant_rating
    ) {
    merchant_dto_t *merchant_dto_local_var = malloc(sizeof(merchant_dto_t));
    if (!merchant_dto_local_var) {
        return NULL;
    }
    merchant_dto_local_var->id = id;
    merchant_dto_local_var->timestamp = timestamp;
    merchant_dto_local_var->qualified_name = qualified_name;
    merchant_dto_local_var->tax_id = tax_id;
    merchant_dto_local_var->about = about;
    merchant_dto_local_var->wallet_id = wallet_id;
    merchant_dto_local_var->social_feed_id = social_feed_id;
    merchant_dto_local_var->business_industry_id = business_industry_id;
    merchant_dto_local_var->business_segment_id = business_segment_id;
    merchant_dto_local_var->social_profile_id = social_profile_id;
    merchant_dto_local_var->language_id = language_id;
    merchant_dto_local_var->name = name;
    merchant_dto_local_var->duns = duns;
    merchant_dto_local_var->slogan = slogan;
    merchant_dto_local_var->legal_name = legal_name;
    merchant_dto_local_var->cover_url = cover_url;
    merchant_dto_local_var->avatar_url = avatar_url;
    merchant_dto_local_var->cart_id = cart_id;
    merchant_dto_local_var->currency_id = currency_id;
    merchant_dto_local_var->timezone_id = timezone_id;
    merchant_dto_local_var->country_id = country_id;
    merchant_dto_local_var->state_id = state_id;
    merchant_dto_local_var->city_id = city_id;
    merchant_dto_local_var->email = email;
    merchant_dto_local_var->phone = phone;
    merchant_dto_local_var->web_url = web_url;
    merchant_dto_local_var->facebook_url = facebook_url;
    merchant_dto_local_var->twitter_url = twitter_url;
    merchant_dto_local_var->git_hub_url = git_hub_url;
    merchant_dto_local_var->linked_in_url = linked_in_url;
    merchant_dto_local_var->instagram_url = instagram_url;
    merchant_dto_local_var->you_tube_url = you_tube_url;
    merchant_dto_local_var->whats_app_number = whats_app_number;
    merchant_dto_local_var->support_phone_number = support_phone_number;
    merchant_dto_local_var->verified = verified;
    merchant_dto_local_var->business_name = business_name;
    merchant_dto_local_var->business_legal_name = business_legal_name;
    merchant_dto_local_var->twitter_username = twitter_username;
    merchant_dto_local_var->products_count = products_count;
    merchant_dto_local_var->merchant_rating = merchant_rating;

    return merchant_dto_local_var;
}


void merchant_dto_free(merchant_dto_t *merchant_dto) {
    if(NULL == merchant_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (merchant_dto->id) {
        free(merchant_dto->id);
        merchant_dto->id = NULL;
    }
    if (merchant_dto->timestamp) {
        free(merchant_dto->timestamp);
        merchant_dto->timestamp = NULL;
    }
    if (merchant_dto->qualified_name) {
        free(merchant_dto->qualified_name);
        merchant_dto->qualified_name = NULL;
    }
    if (merchant_dto->tax_id) {
        free(merchant_dto->tax_id);
        merchant_dto->tax_id = NULL;
    }
    if (merchant_dto->about) {
        free(merchant_dto->about);
        merchant_dto->about = NULL;
    }
    if (merchant_dto->wallet_id) {
        free(merchant_dto->wallet_id);
        merchant_dto->wallet_id = NULL;
    }
    if (merchant_dto->social_feed_id) {
        free(merchant_dto->social_feed_id);
        merchant_dto->social_feed_id = NULL;
    }
    if (merchant_dto->business_industry_id) {
        free(merchant_dto->business_industry_id);
        merchant_dto->business_industry_id = NULL;
    }
    if (merchant_dto->business_segment_id) {
        free(merchant_dto->business_segment_id);
        merchant_dto->business_segment_id = NULL;
    }
    if (merchant_dto->social_profile_id) {
        free(merchant_dto->social_profile_id);
        merchant_dto->social_profile_id = NULL;
    }
    if (merchant_dto->language_id) {
        free(merchant_dto->language_id);
        merchant_dto->language_id = NULL;
    }
    if (merchant_dto->name) {
        free(merchant_dto->name);
        merchant_dto->name = NULL;
    }
    if (merchant_dto->duns) {
        free(merchant_dto->duns);
        merchant_dto->duns = NULL;
    }
    if (merchant_dto->slogan) {
        free(merchant_dto->slogan);
        merchant_dto->slogan = NULL;
    }
    if (merchant_dto->legal_name) {
        free(merchant_dto->legal_name);
        merchant_dto->legal_name = NULL;
    }
    if (merchant_dto->cover_url) {
        free(merchant_dto->cover_url);
        merchant_dto->cover_url = NULL;
    }
    if (merchant_dto->avatar_url) {
        free(merchant_dto->avatar_url);
        merchant_dto->avatar_url = NULL;
    }
    if (merchant_dto->cart_id) {
        free(merchant_dto->cart_id);
        merchant_dto->cart_id = NULL;
    }
    if (merchant_dto->currency_id) {
        free(merchant_dto->currency_id);
        merchant_dto->currency_id = NULL;
    }
    if (merchant_dto->timezone_id) {
        free(merchant_dto->timezone_id);
        merchant_dto->timezone_id = NULL;
    }
    if (merchant_dto->country_id) {
        free(merchant_dto->country_id);
        merchant_dto->country_id = NULL;
    }
    if (merchant_dto->state_id) {
        free(merchant_dto->state_id);
        merchant_dto->state_id = NULL;
    }
    if (merchant_dto->city_id) {
        free(merchant_dto->city_id);
        merchant_dto->city_id = NULL;
    }
    if (merchant_dto->email) {
        free(merchant_dto->email);
        merchant_dto->email = NULL;
    }
    if (merchant_dto->phone) {
        free(merchant_dto->phone);
        merchant_dto->phone = NULL;
    }
    if (merchant_dto->web_url) {
        free(merchant_dto->web_url);
        merchant_dto->web_url = NULL;
    }
    if (merchant_dto->facebook_url) {
        free(merchant_dto->facebook_url);
        merchant_dto->facebook_url = NULL;
    }
    if (merchant_dto->twitter_url) {
        free(merchant_dto->twitter_url);
        merchant_dto->twitter_url = NULL;
    }
    if (merchant_dto->git_hub_url) {
        free(merchant_dto->git_hub_url);
        merchant_dto->git_hub_url = NULL;
    }
    if (merchant_dto->linked_in_url) {
        free(merchant_dto->linked_in_url);
        merchant_dto->linked_in_url = NULL;
    }
    if (merchant_dto->instagram_url) {
        free(merchant_dto->instagram_url);
        merchant_dto->instagram_url = NULL;
    }
    if (merchant_dto->you_tube_url) {
        free(merchant_dto->you_tube_url);
        merchant_dto->you_tube_url = NULL;
    }
    if (merchant_dto->whats_app_number) {
        free(merchant_dto->whats_app_number);
        merchant_dto->whats_app_number = NULL;
    }
    if (merchant_dto->support_phone_number) {
        free(merchant_dto->support_phone_number);
        merchant_dto->support_phone_number = NULL;
    }
    if (merchant_dto->business_name) {
        free(merchant_dto->business_name);
        merchant_dto->business_name = NULL;
    }
    if (merchant_dto->business_legal_name) {
        free(merchant_dto->business_legal_name);
        merchant_dto->business_legal_name = NULL;
    }
    if (merchant_dto->twitter_username) {
        free(merchant_dto->twitter_username);
        merchant_dto->twitter_username = NULL;
    }
    free(merchant_dto);
}

cJSON *merchant_dto_convertToJSON(merchant_dto_t *merchant_dto) {
    cJSON *item = cJSON_CreateObject();

    // merchant_dto->id
    if(merchant_dto->id) {
    if(cJSON_AddStringToObject(item, "id", merchant_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // merchant_dto->timestamp
    if(merchant_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", merchant_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // merchant_dto->qualified_name
    if(merchant_dto->qualified_name) {
    if(cJSON_AddStringToObject(item, "qualifiedName", merchant_dto->qualified_name) == NULL) {
    goto fail; //String
    }
    }


    // merchant_dto->tax_id
    if(merchant_dto->tax_id) {
    if(cJSON_AddStringToObject(item, "taxId", merchant_dto->tax_id) == NULL) {
    goto fail; //String
    }
    }


    // merchant_dto->about
    if(merchant_dto->about) {
    if(cJSON_AddStringToObject(item, "about", merchant_dto->about) == NULL) {
    goto fail; //String
    }
    }


    // merchant_dto->wallet_id
    if(merchant_dto->wallet_id) {
    if(cJSON_AddStringToObject(item, "walletId", merchant_dto->wallet_id) == NULL) {
    goto fail; //String
    }
    }


    // merchant_dto->social_feed_id
    if(merchant_dto->social_feed_id) {
    if(cJSON_AddStringToObject(item, "socialFeedId", merchant_dto->social_feed_id) == NULL) {
    goto fail; //String
    }
    }


    // merchant_dto->business_industry_id
    if(merchant_dto->business_industry_id) {
    if(cJSON_AddStringToObject(item, "businessIndustryId", merchant_dto->business_industry_id) == NULL) {
    goto fail; //String
    }
    }


    // merchant_dto->business_segment_id
    if(merchant_dto->business_segment_id) {
    if(cJSON_AddStringToObject(item, "businessSegmentId", merchant_dto->business_segment_id) == NULL) {
    goto fail; //String
    }
    }


    // merchant_dto->social_profile_id
    if(merchant_dto->social_profile_id) {
    if(cJSON_AddStringToObject(item, "socialProfileId", merchant_dto->social_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // merchant_dto->language_id
    if(merchant_dto->language_id) {
    if(cJSON_AddStringToObject(item, "languageId", merchant_dto->language_id) == NULL) {
    goto fail; //String
    }
    }


    // merchant_dto->name
    if(merchant_dto->name) {
    if(cJSON_AddStringToObject(item, "name", merchant_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // merchant_dto->duns
    if(merchant_dto->duns) {
    if(cJSON_AddStringToObject(item, "duns", merchant_dto->duns) == NULL) {
    goto fail; //String
    }
    }


    // merchant_dto->slogan
    if(merchant_dto->slogan) {
    if(cJSON_AddStringToObject(item, "slogan", merchant_dto->slogan) == NULL) {
    goto fail; //String
    }
    }


    // merchant_dto->legal_name
    if(merchant_dto->legal_name) {
    if(cJSON_AddStringToObject(item, "legalName", merchant_dto->legal_name) == NULL) {
    goto fail; //String
    }
    }


    // merchant_dto->cover_url
    if(merchant_dto->cover_url) {
    if(cJSON_AddStringToObject(item, "coverUrl", merchant_dto->cover_url) == NULL) {
    goto fail; //String
    }
    }


    // merchant_dto->avatar_url
    if(merchant_dto->avatar_url) {
    if(cJSON_AddStringToObject(item, "avatarUrl", merchant_dto->avatar_url) == NULL) {
    goto fail; //String
    }
    }


    // merchant_dto->cart_id
    if(merchant_dto->cart_id) {
    if(cJSON_AddStringToObject(item, "cartId", merchant_dto->cart_id) == NULL) {
    goto fail; //String
    }
    }


    // merchant_dto->currency_id
    if(merchant_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", merchant_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // merchant_dto->timezone_id
    if(merchant_dto->timezone_id) {
    if(cJSON_AddStringToObject(item, "timezoneId", merchant_dto->timezone_id) == NULL) {
    goto fail; //String
    }
    }


    // merchant_dto->country_id
    if(merchant_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryId", merchant_dto->country_id) == NULL) {
    goto fail; //String
    }
    }


    // merchant_dto->state_id
    if(merchant_dto->state_id) {
    if(cJSON_AddStringToObject(item, "stateId", merchant_dto->state_id) == NULL) {
    goto fail; //String
    }
    }


    // merchant_dto->city_id
    if(merchant_dto->city_id) {
    if(cJSON_AddStringToObject(item, "cityId", merchant_dto->city_id) == NULL) {
    goto fail; //String
    }
    }


    // merchant_dto->email
    if(merchant_dto->email) {
    if(cJSON_AddStringToObject(item, "email", merchant_dto->email) == NULL) {
    goto fail; //String
    }
    }


    // merchant_dto->phone
    if(merchant_dto->phone) {
    if(cJSON_AddStringToObject(item, "phone", merchant_dto->phone) == NULL) {
    goto fail; //String
    }
    }


    // merchant_dto->web_url
    if(merchant_dto->web_url) {
    if(cJSON_AddStringToObject(item, "webUrl", merchant_dto->web_url) == NULL) {
    goto fail; //String
    }
    }


    // merchant_dto->facebook_url
    if(merchant_dto->facebook_url) {
    if(cJSON_AddStringToObject(item, "facebookUrl", merchant_dto->facebook_url) == NULL) {
    goto fail; //String
    }
    }


    // merchant_dto->twitter_url
    if(merchant_dto->twitter_url) {
    if(cJSON_AddStringToObject(item, "twitterUrl", merchant_dto->twitter_url) == NULL) {
    goto fail; //String
    }
    }


    // merchant_dto->git_hub_url
    if(merchant_dto->git_hub_url) {
    if(cJSON_AddStringToObject(item, "gitHubUrl", merchant_dto->git_hub_url) == NULL) {
    goto fail; //String
    }
    }


    // merchant_dto->linked_in_url
    if(merchant_dto->linked_in_url) {
    if(cJSON_AddStringToObject(item, "linkedInUrl", merchant_dto->linked_in_url) == NULL) {
    goto fail; //String
    }
    }


    // merchant_dto->instagram_url
    if(merchant_dto->instagram_url) {
    if(cJSON_AddStringToObject(item, "instagramUrl", merchant_dto->instagram_url) == NULL) {
    goto fail; //String
    }
    }


    // merchant_dto->you_tube_url
    if(merchant_dto->you_tube_url) {
    if(cJSON_AddStringToObject(item, "youTubeUrl", merchant_dto->you_tube_url) == NULL) {
    goto fail; //String
    }
    }


    // merchant_dto->whats_app_number
    if(merchant_dto->whats_app_number) {
    if(cJSON_AddStringToObject(item, "whatsAppNumber", merchant_dto->whats_app_number) == NULL) {
    goto fail; //String
    }
    }


    // merchant_dto->support_phone_number
    if(merchant_dto->support_phone_number) {
    if(cJSON_AddStringToObject(item, "supportPhoneNumber", merchant_dto->support_phone_number) == NULL) {
    goto fail; //String
    }
    }


    // merchant_dto->verified
    if(merchant_dto->verified) {
    if(cJSON_AddBoolToObject(item, "verified", merchant_dto->verified) == NULL) {
    goto fail; //Bool
    }
    }


    // merchant_dto->business_name
    if(merchant_dto->business_name) {
    if(cJSON_AddStringToObject(item, "businessName", merchant_dto->business_name) == NULL) {
    goto fail; //String
    }
    }


    // merchant_dto->business_legal_name
    if(merchant_dto->business_legal_name) {
    if(cJSON_AddStringToObject(item, "businessLegalName", merchant_dto->business_legal_name) == NULL) {
    goto fail; //String
    }
    }


    // merchant_dto->twitter_username
    if(merchant_dto->twitter_username) {
    if(cJSON_AddStringToObject(item, "twitterUsername", merchant_dto->twitter_username) == NULL) {
    goto fail; //String
    }
    }


    // merchant_dto->products_count
    if(merchant_dto->products_count) {
    if(cJSON_AddNumberToObject(item, "productsCount", merchant_dto->products_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // merchant_dto->merchant_rating
    if(merchant_dto->merchant_rating) {
    if(cJSON_AddNumberToObject(item, "merchantRating", merchant_dto->merchant_rating) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

merchant_dto_t *merchant_dto_parseFromJSON(cJSON *merchant_dtoJSON){

    merchant_dto_t *merchant_dto_local_var = NULL;

    // merchant_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(merchant_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // merchant_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(merchant_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // merchant_dto->qualified_name
    cJSON *qualified_name = cJSON_GetObjectItemCaseSensitive(merchant_dtoJSON, "qualifiedName");
    if (qualified_name) { 
    if(!cJSON_IsString(qualified_name) && !cJSON_IsNull(qualified_name))
    {
    goto end; //String
    }
    }

    // merchant_dto->tax_id
    cJSON *tax_id = cJSON_GetObjectItemCaseSensitive(merchant_dtoJSON, "taxId");
    if (tax_id) { 
    if(!cJSON_IsString(tax_id) && !cJSON_IsNull(tax_id))
    {
    goto end; //String
    }
    }

    // merchant_dto->about
    cJSON *about = cJSON_GetObjectItemCaseSensitive(merchant_dtoJSON, "about");
    if (about) { 
    if(!cJSON_IsString(about) && !cJSON_IsNull(about))
    {
    goto end; //String
    }
    }

    // merchant_dto->wallet_id
    cJSON *wallet_id = cJSON_GetObjectItemCaseSensitive(merchant_dtoJSON, "walletId");
    if (wallet_id) { 
    if(!cJSON_IsString(wallet_id) && !cJSON_IsNull(wallet_id))
    {
    goto end; //String
    }
    }

    // merchant_dto->social_feed_id
    cJSON *social_feed_id = cJSON_GetObjectItemCaseSensitive(merchant_dtoJSON, "socialFeedId");
    if (social_feed_id) { 
    if(!cJSON_IsString(social_feed_id) && !cJSON_IsNull(social_feed_id))
    {
    goto end; //String
    }
    }

    // merchant_dto->business_industry_id
    cJSON *business_industry_id = cJSON_GetObjectItemCaseSensitive(merchant_dtoJSON, "businessIndustryId");
    if (business_industry_id) { 
    if(!cJSON_IsString(business_industry_id) && !cJSON_IsNull(business_industry_id))
    {
    goto end; //String
    }
    }

    // merchant_dto->business_segment_id
    cJSON *business_segment_id = cJSON_GetObjectItemCaseSensitive(merchant_dtoJSON, "businessSegmentId");
    if (business_segment_id) { 
    if(!cJSON_IsString(business_segment_id) && !cJSON_IsNull(business_segment_id))
    {
    goto end; //String
    }
    }

    // merchant_dto->social_profile_id
    cJSON *social_profile_id = cJSON_GetObjectItemCaseSensitive(merchant_dtoJSON, "socialProfileId");
    if (social_profile_id) { 
    if(!cJSON_IsString(social_profile_id) && !cJSON_IsNull(social_profile_id))
    {
    goto end; //String
    }
    }

    // merchant_dto->language_id
    cJSON *language_id = cJSON_GetObjectItemCaseSensitive(merchant_dtoJSON, "languageId");
    if (language_id) { 
    if(!cJSON_IsString(language_id) && !cJSON_IsNull(language_id))
    {
    goto end; //String
    }
    }

    // merchant_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(merchant_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // merchant_dto->duns
    cJSON *duns = cJSON_GetObjectItemCaseSensitive(merchant_dtoJSON, "duns");
    if (duns) { 
    if(!cJSON_IsString(duns) && !cJSON_IsNull(duns))
    {
    goto end; //String
    }
    }

    // merchant_dto->slogan
    cJSON *slogan = cJSON_GetObjectItemCaseSensitive(merchant_dtoJSON, "slogan");
    if (slogan) { 
    if(!cJSON_IsString(slogan) && !cJSON_IsNull(slogan))
    {
    goto end; //String
    }
    }

    // merchant_dto->legal_name
    cJSON *legal_name = cJSON_GetObjectItemCaseSensitive(merchant_dtoJSON, "legalName");
    if (legal_name) { 
    if(!cJSON_IsString(legal_name) && !cJSON_IsNull(legal_name))
    {
    goto end; //String
    }
    }

    // merchant_dto->cover_url
    cJSON *cover_url = cJSON_GetObjectItemCaseSensitive(merchant_dtoJSON, "coverUrl");
    if (cover_url) { 
    if(!cJSON_IsString(cover_url) && !cJSON_IsNull(cover_url))
    {
    goto end; //String
    }
    }

    // merchant_dto->avatar_url
    cJSON *avatar_url = cJSON_GetObjectItemCaseSensitive(merchant_dtoJSON, "avatarUrl");
    if (avatar_url) { 
    if(!cJSON_IsString(avatar_url) && !cJSON_IsNull(avatar_url))
    {
    goto end; //String
    }
    }

    // merchant_dto->cart_id
    cJSON *cart_id = cJSON_GetObjectItemCaseSensitive(merchant_dtoJSON, "cartId");
    if (cart_id) { 
    if(!cJSON_IsString(cart_id) && !cJSON_IsNull(cart_id))
    {
    goto end; //String
    }
    }

    // merchant_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(merchant_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // merchant_dto->timezone_id
    cJSON *timezone_id = cJSON_GetObjectItemCaseSensitive(merchant_dtoJSON, "timezoneId");
    if (timezone_id) { 
    if(!cJSON_IsString(timezone_id) && !cJSON_IsNull(timezone_id))
    {
    goto end; //String
    }
    }

    // merchant_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(merchant_dtoJSON, "countryId");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }

    // merchant_dto->state_id
    cJSON *state_id = cJSON_GetObjectItemCaseSensitive(merchant_dtoJSON, "stateId");
    if (state_id) { 
    if(!cJSON_IsString(state_id) && !cJSON_IsNull(state_id))
    {
    goto end; //String
    }
    }

    // merchant_dto->city_id
    cJSON *city_id = cJSON_GetObjectItemCaseSensitive(merchant_dtoJSON, "cityId");
    if (city_id) { 
    if(!cJSON_IsString(city_id) && !cJSON_IsNull(city_id))
    {
    goto end; //String
    }
    }

    // merchant_dto->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(merchant_dtoJSON, "email");
    if (email) { 
    if(!cJSON_IsString(email) && !cJSON_IsNull(email))
    {
    goto end; //String
    }
    }

    // merchant_dto->phone
    cJSON *phone = cJSON_GetObjectItemCaseSensitive(merchant_dtoJSON, "phone");
    if (phone) { 
    if(!cJSON_IsString(phone) && !cJSON_IsNull(phone))
    {
    goto end; //String
    }
    }

    // merchant_dto->web_url
    cJSON *web_url = cJSON_GetObjectItemCaseSensitive(merchant_dtoJSON, "webUrl");
    if (web_url) { 
    if(!cJSON_IsString(web_url) && !cJSON_IsNull(web_url))
    {
    goto end; //String
    }
    }

    // merchant_dto->facebook_url
    cJSON *facebook_url = cJSON_GetObjectItemCaseSensitive(merchant_dtoJSON, "facebookUrl");
    if (facebook_url) { 
    if(!cJSON_IsString(facebook_url) && !cJSON_IsNull(facebook_url))
    {
    goto end; //String
    }
    }

    // merchant_dto->twitter_url
    cJSON *twitter_url = cJSON_GetObjectItemCaseSensitive(merchant_dtoJSON, "twitterUrl");
    if (twitter_url) { 
    if(!cJSON_IsString(twitter_url) && !cJSON_IsNull(twitter_url))
    {
    goto end; //String
    }
    }

    // merchant_dto->git_hub_url
    cJSON *git_hub_url = cJSON_GetObjectItemCaseSensitive(merchant_dtoJSON, "gitHubUrl");
    if (git_hub_url) { 
    if(!cJSON_IsString(git_hub_url) && !cJSON_IsNull(git_hub_url))
    {
    goto end; //String
    }
    }

    // merchant_dto->linked_in_url
    cJSON *linked_in_url = cJSON_GetObjectItemCaseSensitive(merchant_dtoJSON, "linkedInUrl");
    if (linked_in_url) { 
    if(!cJSON_IsString(linked_in_url) && !cJSON_IsNull(linked_in_url))
    {
    goto end; //String
    }
    }

    // merchant_dto->instagram_url
    cJSON *instagram_url = cJSON_GetObjectItemCaseSensitive(merchant_dtoJSON, "instagramUrl");
    if (instagram_url) { 
    if(!cJSON_IsString(instagram_url) && !cJSON_IsNull(instagram_url))
    {
    goto end; //String
    }
    }

    // merchant_dto->you_tube_url
    cJSON *you_tube_url = cJSON_GetObjectItemCaseSensitive(merchant_dtoJSON, "youTubeUrl");
    if (you_tube_url) { 
    if(!cJSON_IsString(you_tube_url) && !cJSON_IsNull(you_tube_url))
    {
    goto end; //String
    }
    }

    // merchant_dto->whats_app_number
    cJSON *whats_app_number = cJSON_GetObjectItemCaseSensitive(merchant_dtoJSON, "whatsAppNumber");
    if (whats_app_number) { 
    if(!cJSON_IsString(whats_app_number) && !cJSON_IsNull(whats_app_number))
    {
    goto end; //String
    }
    }

    // merchant_dto->support_phone_number
    cJSON *support_phone_number = cJSON_GetObjectItemCaseSensitive(merchant_dtoJSON, "supportPhoneNumber");
    if (support_phone_number) { 
    if(!cJSON_IsString(support_phone_number) && !cJSON_IsNull(support_phone_number))
    {
    goto end; //String
    }
    }

    // merchant_dto->verified
    cJSON *verified = cJSON_GetObjectItemCaseSensitive(merchant_dtoJSON, "verified");
    if (verified) { 
    if(!cJSON_IsBool(verified))
    {
    goto end; //Bool
    }
    }

    // merchant_dto->business_name
    cJSON *business_name = cJSON_GetObjectItemCaseSensitive(merchant_dtoJSON, "businessName");
    if (business_name) { 
    if(!cJSON_IsString(business_name) && !cJSON_IsNull(business_name))
    {
    goto end; //String
    }
    }

    // merchant_dto->business_legal_name
    cJSON *business_legal_name = cJSON_GetObjectItemCaseSensitive(merchant_dtoJSON, "businessLegalName");
    if (business_legal_name) { 
    if(!cJSON_IsString(business_legal_name) && !cJSON_IsNull(business_legal_name))
    {
    goto end; //String
    }
    }

    // merchant_dto->twitter_username
    cJSON *twitter_username = cJSON_GetObjectItemCaseSensitive(merchant_dtoJSON, "twitterUsername");
    if (twitter_username) { 
    if(!cJSON_IsString(twitter_username) && !cJSON_IsNull(twitter_username))
    {
    goto end; //String
    }
    }

    // merchant_dto->products_count
    cJSON *products_count = cJSON_GetObjectItemCaseSensitive(merchant_dtoJSON, "productsCount");
    if (products_count) { 
    if(!cJSON_IsNumber(products_count))
    {
    goto end; //Numeric
    }
    }

    // merchant_dto->merchant_rating
    cJSON *merchant_rating = cJSON_GetObjectItemCaseSensitive(merchant_dtoJSON, "merchantRating");
    if (merchant_rating) { 
    if(!cJSON_IsNumber(merchant_rating))
    {
    goto end; //Numeric
    }
    }


    merchant_dto_local_var = merchant_dto_create (
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
        twitter_username && !cJSON_IsNull(twitter_username) ? strdup(twitter_username->valuestring) : NULL,
        products_count ? products_count->valuedouble : 0,
        merchant_rating ? merchant_rating->valuedouble : 0
        );

    return merchant_dto_local_var;
end:
    return NULL;

}
