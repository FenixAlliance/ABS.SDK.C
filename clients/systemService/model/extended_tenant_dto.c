#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "extended_tenant_dto.h"



extended_tenant_dto_t *extended_tenant_dto_create(
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
    cart_dto_t *cart,
    wallet_dto_t *wallet,
    social_profile_dto_t *social_profile
    ) {
    extended_tenant_dto_t *extended_tenant_dto_local_var = malloc(sizeof(extended_tenant_dto_t));
    if (!extended_tenant_dto_local_var) {
        return NULL;
    }
    extended_tenant_dto_local_var->id = id;
    extended_tenant_dto_local_var->timestamp = timestamp;
    extended_tenant_dto_local_var->qualified_name = qualified_name;
    extended_tenant_dto_local_var->tax_id = tax_id;
    extended_tenant_dto_local_var->about = about;
    extended_tenant_dto_local_var->wallet_id = wallet_id;
    extended_tenant_dto_local_var->social_feed_id = social_feed_id;
    extended_tenant_dto_local_var->business_industry_id = business_industry_id;
    extended_tenant_dto_local_var->business_segment_id = business_segment_id;
    extended_tenant_dto_local_var->social_profile_id = social_profile_id;
    extended_tenant_dto_local_var->language_id = language_id;
    extended_tenant_dto_local_var->name = name;
    extended_tenant_dto_local_var->duns = duns;
    extended_tenant_dto_local_var->slogan = slogan;
    extended_tenant_dto_local_var->legal_name = legal_name;
    extended_tenant_dto_local_var->cover_url = cover_url;
    extended_tenant_dto_local_var->avatar_url = avatar_url;
    extended_tenant_dto_local_var->cart_id = cart_id;
    extended_tenant_dto_local_var->currency_id = currency_id;
    extended_tenant_dto_local_var->timezone_id = timezone_id;
    extended_tenant_dto_local_var->country_id = country_id;
    extended_tenant_dto_local_var->state_id = state_id;
    extended_tenant_dto_local_var->city_id = city_id;
    extended_tenant_dto_local_var->email = email;
    extended_tenant_dto_local_var->phone = phone;
    extended_tenant_dto_local_var->web_url = web_url;
    extended_tenant_dto_local_var->facebook_url = facebook_url;
    extended_tenant_dto_local_var->twitter_url = twitter_url;
    extended_tenant_dto_local_var->git_hub_url = git_hub_url;
    extended_tenant_dto_local_var->linked_in_url = linked_in_url;
    extended_tenant_dto_local_var->instagram_url = instagram_url;
    extended_tenant_dto_local_var->you_tube_url = you_tube_url;
    extended_tenant_dto_local_var->whats_app_number = whats_app_number;
    extended_tenant_dto_local_var->support_phone_number = support_phone_number;
    extended_tenant_dto_local_var->verified = verified;
    extended_tenant_dto_local_var->business_name = business_name;
    extended_tenant_dto_local_var->business_legal_name = business_legal_name;
    extended_tenant_dto_local_var->twitter_username = twitter_username;
    extended_tenant_dto_local_var->cart = cart;
    extended_tenant_dto_local_var->wallet = wallet;
    extended_tenant_dto_local_var->social_profile = social_profile;

    return extended_tenant_dto_local_var;
}


void extended_tenant_dto_free(extended_tenant_dto_t *extended_tenant_dto) {
    if(NULL == extended_tenant_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (extended_tenant_dto->id) {
        free(extended_tenant_dto->id);
        extended_tenant_dto->id = NULL;
    }
    if (extended_tenant_dto->timestamp) {
        free(extended_tenant_dto->timestamp);
        extended_tenant_dto->timestamp = NULL;
    }
    if (extended_tenant_dto->qualified_name) {
        free(extended_tenant_dto->qualified_name);
        extended_tenant_dto->qualified_name = NULL;
    }
    if (extended_tenant_dto->tax_id) {
        free(extended_tenant_dto->tax_id);
        extended_tenant_dto->tax_id = NULL;
    }
    if (extended_tenant_dto->about) {
        free(extended_tenant_dto->about);
        extended_tenant_dto->about = NULL;
    }
    if (extended_tenant_dto->wallet_id) {
        free(extended_tenant_dto->wallet_id);
        extended_tenant_dto->wallet_id = NULL;
    }
    if (extended_tenant_dto->social_feed_id) {
        free(extended_tenant_dto->social_feed_id);
        extended_tenant_dto->social_feed_id = NULL;
    }
    if (extended_tenant_dto->business_industry_id) {
        free(extended_tenant_dto->business_industry_id);
        extended_tenant_dto->business_industry_id = NULL;
    }
    if (extended_tenant_dto->business_segment_id) {
        free(extended_tenant_dto->business_segment_id);
        extended_tenant_dto->business_segment_id = NULL;
    }
    if (extended_tenant_dto->social_profile_id) {
        free(extended_tenant_dto->social_profile_id);
        extended_tenant_dto->social_profile_id = NULL;
    }
    if (extended_tenant_dto->language_id) {
        free(extended_tenant_dto->language_id);
        extended_tenant_dto->language_id = NULL;
    }
    if (extended_tenant_dto->name) {
        free(extended_tenant_dto->name);
        extended_tenant_dto->name = NULL;
    }
    if (extended_tenant_dto->duns) {
        free(extended_tenant_dto->duns);
        extended_tenant_dto->duns = NULL;
    }
    if (extended_tenant_dto->slogan) {
        free(extended_tenant_dto->slogan);
        extended_tenant_dto->slogan = NULL;
    }
    if (extended_tenant_dto->legal_name) {
        free(extended_tenant_dto->legal_name);
        extended_tenant_dto->legal_name = NULL;
    }
    if (extended_tenant_dto->cover_url) {
        free(extended_tenant_dto->cover_url);
        extended_tenant_dto->cover_url = NULL;
    }
    if (extended_tenant_dto->avatar_url) {
        free(extended_tenant_dto->avatar_url);
        extended_tenant_dto->avatar_url = NULL;
    }
    if (extended_tenant_dto->cart_id) {
        free(extended_tenant_dto->cart_id);
        extended_tenant_dto->cart_id = NULL;
    }
    if (extended_tenant_dto->currency_id) {
        free(extended_tenant_dto->currency_id);
        extended_tenant_dto->currency_id = NULL;
    }
    if (extended_tenant_dto->timezone_id) {
        free(extended_tenant_dto->timezone_id);
        extended_tenant_dto->timezone_id = NULL;
    }
    if (extended_tenant_dto->country_id) {
        free(extended_tenant_dto->country_id);
        extended_tenant_dto->country_id = NULL;
    }
    if (extended_tenant_dto->state_id) {
        free(extended_tenant_dto->state_id);
        extended_tenant_dto->state_id = NULL;
    }
    if (extended_tenant_dto->city_id) {
        free(extended_tenant_dto->city_id);
        extended_tenant_dto->city_id = NULL;
    }
    if (extended_tenant_dto->email) {
        free(extended_tenant_dto->email);
        extended_tenant_dto->email = NULL;
    }
    if (extended_tenant_dto->phone) {
        free(extended_tenant_dto->phone);
        extended_tenant_dto->phone = NULL;
    }
    if (extended_tenant_dto->web_url) {
        free(extended_tenant_dto->web_url);
        extended_tenant_dto->web_url = NULL;
    }
    if (extended_tenant_dto->facebook_url) {
        free(extended_tenant_dto->facebook_url);
        extended_tenant_dto->facebook_url = NULL;
    }
    if (extended_tenant_dto->twitter_url) {
        free(extended_tenant_dto->twitter_url);
        extended_tenant_dto->twitter_url = NULL;
    }
    if (extended_tenant_dto->git_hub_url) {
        free(extended_tenant_dto->git_hub_url);
        extended_tenant_dto->git_hub_url = NULL;
    }
    if (extended_tenant_dto->linked_in_url) {
        free(extended_tenant_dto->linked_in_url);
        extended_tenant_dto->linked_in_url = NULL;
    }
    if (extended_tenant_dto->instagram_url) {
        free(extended_tenant_dto->instagram_url);
        extended_tenant_dto->instagram_url = NULL;
    }
    if (extended_tenant_dto->you_tube_url) {
        free(extended_tenant_dto->you_tube_url);
        extended_tenant_dto->you_tube_url = NULL;
    }
    if (extended_tenant_dto->whats_app_number) {
        free(extended_tenant_dto->whats_app_number);
        extended_tenant_dto->whats_app_number = NULL;
    }
    if (extended_tenant_dto->support_phone_number) {
        free(extended_tenant_dto->support_phone_number);
        extended_tenant_dto->support_phone_number = NULL;
    }
    if (extended_tenant_dto->business_name) {
        free(extended_tenant_dto->business_name);
        extended_tenant_dto->business_name = NULL;
    }
    if (extended_tenant_dto->business_legal_name) {
        free(extended_tenant_dto->business_legal_name);
        extended_tenant_dto->business_legal_name = NULL;
    }
    if (extended_tenant_dto->twitter_username) {
        free(extended_tenant_dto->twitter_username);
        extended_tenant_dto->twitter_username = NULL;
    }
    if (extended_tenant_dto->cart) {
        cart_dto_free(extended_tenant_dto->cart);
        extended_tenant_dto->cart = NULL;
    }
    if (extended_tenant_dto->wallet) {
        wallet_dto_free(extended_tenant_dto->wallet);
        extended_tenant_dto->wallet = NULL;
    }
    if (extended_tenant_dto->social_profile) {
        social_profile_dto_free(extended_tenant_dto->social_profile);
        extended_tenant_dto->social_profile = NULL;
    }
    free(extended_tenant_dto);
}

cJSON *extended_tenant_dto_convertToJSON(extended_tenant_dto_t *extended_tenant_dto) {
    cJSON *item = cJSON_CreateObject();

    // extended_tenant_dto->id
    if(extended_tenant_dto->id) {
    if(cJSON_AddStringToObject(item, "id", extended_tenant_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // extended_tenant_dto->timestamp
    if(extended_tenant_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", extended_tenant_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // extended_tenant_dto->qualified_name
    if(extended_tenant_dto->qualified_name) {
    if(cJSON_AddStringToObject(item, "qualifiedName", extended_tenant_dto->qualified_name) == NULL) {
    goto fail; //String
    }
    }


    // extended_tenant_dto->tax_id
    if(extended_tenant_dto->tax_id) {
    if(cJSON_AddStringToObject(item, "taxId", extended_tenant_dto->tax_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_tenant_dto->about
    if(extended_tenant_dto->about) {
    if(cJSON_AddStringToObject(item, "about", extended_tenant_dto->about) == NULL) {
    goto fail; //String
    }
    }


    // extended_tenant_dto->wallet_id
    if(extended_tenant_dto->wallet_id) {
    if(cJSON_AddStringToObject(item, "walletId", extended_tenant_dto->wallet_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_tenant_dto->social_feed_id
    if(extended_tenant_dto->social_feed_id) {
    if(cJSON_AddStringToObject(item, "socialFeedId", extended_tenant_dto->social_feed_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_tenant_dto->business_industry_id
    if(extended_tenant_dto->business_industry_id) {
    if(cJSON_AddStringToObject(item, "businessIndustryId", extended_tenant_dto->business_industry_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_tenant_dto->business_segment_id
    if(extended_tenant_dto->business_segment_id) {
    if(cJSON_AddStringToObject(item, "businessSegmentId", extended_tenant_dto->business_segment_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_tenant_dto->social_profile_id
    if(extended_tenant_dto->social_profile_id) {
    if(cJSON_AddStringToObject(item, "socialProfileId", extended_tenant_dto->social_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_tenant_dto->language_id
    if(extended_tenant_dto->language_id) {
    if(cJSON_AddStringToObject(item, "languageId", extended_tenant_dto->language_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_tenant_dto->name
    if(extended_tenant_dto->name) {
    if(cJSON_AddStringToObject(item, "name", extended_tenant_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // extended_tenant_dto->duns
    if(extended_tenant_dto->duns) {
    if(cJSON_AddStringToObject(item, "duns", extended_tenant_dto->duns) == NULL) {
    goto fail; //String
    }
    }


    // extended_tenant_dto->slogan
    if(extended_tenant_dto->slogan) {
    if(cJSON_AddStringToObject(item, "slogan", extended_tenant_dto->slogan) == NULL) {
    goto fail; //String
    }
    }


    // extended_tenant_dto->legal_name
    if(extended_tenant_dto->legal_name) {
    if(cJSON_AddStringToObject(item, "legalName", extended_tenant_dto->legal_name) == NULL) {
    goto fail; //String
    }
    }


    // extended_tenant_dto->cover_url
    if(extended_tenant_dto->cover_url) {
    if(cJSON_AddStringToObject(item, "coverUrl", extended_tenant_dto->cover_url) == NULL) {
    goto fail; //String
    }
    }


    // extended_tenant_dto->avatar_url
    if(extended_tenant_dto->avatar_url) {
    if(cJSON_AddStringToObject(item, "avatarUrl", extended_tenant_dto->avatar_url) == NULL) {
    goto fail; //String
    }
    }


    // extended_tenant_dto->cart_id
    if(extended_tenant_dto->cart_id) {
    if(cJSON_AddStringToObject(item, "cartId", extended_tenant_dto->cart_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_tenant_dto->currency_id
    if(extended_tenant_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", extended_tenant_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_tenant_dto->timezone_id
    if(extended_tenant_dto->timezone_id) {
    if(cJSON_AddStringToObject(item, "timezoneId", extended_tenant_dto->timezone_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_tenant_dto->country_id
    if(extended_tenant_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryId", extended_tenant_dto->country_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_tenant_dto->state_id
    if(extended_tenant_dto->state_id) {
    if(cJSON_AddStringToObject(item, "stateId", extended_tenant_dto->state_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_tenant_dto->city_id
    if(extended_tenant_dto->city_id) {
    if(cJSON_AddStringToObject(item, "cityId", extended_tenant_dto->city_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_tenant_dto->email
    if(extended_tenant_dto->email) {
    if(cJSON_AddStringToObject(item, "email", extended_tenant_dto->email) == NULL) {
    goto fail; //String
    }
    }


    // extended_tenant_dto->phone
    if(extended_tenant_dto->phone) {
    if(cJSON_AddStringToObject(item, "phone", extended_tenant_dto->phone) == NULL) {
    goto fail; //String
    }
    }


    // extended_tenant_dto->web_url
    if(extended_tenant_dto->web_url) {
    if(cJSON_AddStringToObject(item, "webUrl", extended_tenant_dto->web_url) == NULL) {
    goto fail; //String
    }
    }


    // extended_tenant_dto->facebook_url
    if(extended_tenant_dto->facebook_url) {
    if(cJSON_AddStringToObject(item, "facebookUrl", extended_tenant_dto->facebook_url) == NULL) {
    goto fail; //String
    }
    }


    // extended_tenant_dto->twitter_url
    if(extended_tenant_dto->twitter_url) {
    if(cJSON_AddStringToObject(item, "twitterUrl", extended_tenant_dto->twitter_url) == NULL) {
    goto fail; //String
    }
    }


    // extended_tenant_dto->git_hub_url
    if(extended_tenant_dto->git_hub_url) {
    if(cJSON_AddStringToObject(item, "gitHubUrl", extended_tenant_dto->git_hub_url) == NULL) {
    goto fail; //String
    }
    }


    // extended_tenant_dto->linked_in_url
    if(extended_tenant_dto->linked_in_url) {
    if(cJSON_AddStringToObject(item, "linkedInUrl", extended_tenant_dto->linked_in_url) == NULL) {
    goto fail; //String
    }
    }


    // extended_tenant_dto->instagram_url
    if(extended_tenant_dto->instagram_url) {
    if(cJSON_AddStringToObject(item, "instagramUrl", extended_tenant_dto->instagram_url) == NULL) {
    goto fail; //String
    }
    }


    // extended_tenant_dto->you_tube_url
    if(extended_tenant_dto->you_tube_url) {
    if(cJSON_AddStringToObject(item, "youTubeUrl", extended_tenant_dto->you_tube_url) == NULL) {
    goto fail; //String
    }
    }


    // extended_tenant_dto->whats_app_number
    if(extended_tenant_dto->whats_app_number) {
    if(cJSON_AddStringToObject(item, "whatsAppNumber", extended_tenant_dto->whats_app_number) == NULL) {
    goto fail; //String
    }
    }


    // extended_tenant_dto->support_phone_number
    if(extended_tenant_dto->support_phone_number) {
    if(cJSON_AddStringToObject(item, "supportPhoneNumber", extended_tenant_dto->support_phone_number) == NULL) {
    goto fail; //String
    }
    }


    // extended_tenant_dto->verified
    if(extended_tenant_dto->verified) {
    if(cJSON_AddBoolToObject(item, "verified", extended_tenant_dto->verified) == NULL) {
    goto fail; //Bool
    }
    }


    // extended_tenant_dto->business_name
    if(extended_tenant_dto->business_name) {
    if(cJSON_AddStringToObject(item, "businessName", extended_tenant_dto->business_name) == NULL) {
    goto fail; //String
    }
    }


    // extended_tenant_dto->business_legal_name
    if(extended_tenant_dto->business_legal_name) {
    if(cJSON_AddStringToObject(item, "businessLegalName", extended_tenant_dto->business_legal_name) == NULL) {
    goto fail; //String
    }
    }


    // extended_tenant_dto->twitter_username
    if(extended_tenant_dto->twitter_username) {
    if(cJSON_AddStringToObject(item, "twitterUsername", extended_tenant_dto->twitter_username) == NULL) {
    goto fail; //String
    }
    }


    // extended_tenant_dto->cart
    if(extended_tenant_dto->cart) {
    cJSON *cart_local_JSON = cart_dto_convertToJSON(extended_tenant_dto->cart);
    if(cart_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "cart", cart_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // extended_tenant_dto->wallet
    if(extended_tenant_dto->wallet) {
    cJSON *wallet_local_JSON = wallet_dto_convertToJSON(extended_tenant_dto->wallet);
    if(wallet_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "wallet", wallet_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // extended_tenant_dto->social_profile
    if(extended_tenant_dto->social_profile) {
    cJSON *social_profile_local_JSON = social_profile_dto_convertToJSON(extended_tenant_dto->social_profile);
    if(social_profile_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "socialProfile", social_profile_local_JSON);
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

extended_tenant_dto_t *extended_tenant_dto_parseFromJSON(cJSON *extended_tenant_dtoJSON){

    extended_tenant_dto_t *extended_tenant_dto_local_var = NULL;

    // define the local variable for extended_tenant_dto->cart
    cart_dto_t *cart_local_nonprim = NULL;

    // define the local variable for extended_tenant_dto->wallet
    wallet_dto_t *wallet_local_nonprim = NULL;

    // define the local variable for extended_tenant_dto->social_profile
    social_profile_dto_t *social_profile_local_nonprim = NULL;

    // extended_tenant_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(extended_tenant_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // extended_tenant_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(extended_tenant_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // extended_tenant_dto->qualified_name
    cJSON *qualified_name = cJSON_GetObjectItemCaseSensitive(extended_tenant_dtoJSON, "qualifiedName");
    if (qualified_name) { 
    if(!cJSON_IsString(qualified_name) && !cJSON_IsNull(qualified_name))
    {
    goto end; //String
    }
    }

    // extended_tenant_dto->tax_id
    cJSON *tax_id = cJSON_GetObjectItemCaseSensitive(extended_tenant_dtoJSON, "taxId");
    if (tax_id) { 
    if(!cJSON_IsString(tax_id) && !cJSON_IsNull(tax_id))
    {
    goto end; //String
    }
    }

    // extended_tenant_dto->about
    cJSON *about = cJSON_GetObjectItemCaseSensitive(extended_tenant_dtoJSON, "about");
    if (about) { 
    if(!cJSON_IsString(about) && !cJSON_IsNull(about))
    {
    goto end; //String
    }
    }

    // extended_tenant_dto->wallet_id
    cJSON *wallet_id = cJSON_GetObjectItemCaseSensitive(extended_tenant_dtoJSON, "walletId");
    if (wallet_id) { 
    if(!cJSON_IsString(wallet_id) && !cJSON_IsNull(wallet_id))
    {
    goto end; //String
    }
    }

    // extended_tenant_dto->social_feed_id
    cJSON *social_feed_id = cJSON_GetObjectItemCaseSensitive(extended_tenant_dtoJSON, "socialFeedId");
    if (social_feed_id) { 
    if(!cJSON_IsString(social_feed_id) && !cJSON_IsNull(social_feed_id))
    {
    goto end; //String
    }
    }

    // extended_tenant_dto->business_industry_id
    cJSON *business_industry_id = cJSON_GetObjectItemCaseSensitive(extended_tenant_dtoJSON, "businessIndustryId");
    if (business_industry_id) { 
    if(!cJSON_IsString(business_industry_id) && !cJSON_IsNull(business_industry_id))
    {
    goto end; //String
    }
    }

    // extended_tenant_dto->business_segment_id
    cJSON *business_segment_id = cJSON_GetObjectItemCaseSensitive(extended_tenant_dtoJSON, "businessSegmentId");
    if (business_segment_id) { 
    if(!cJSON_IsString(business_segment_id) && !cJSON_IsNull(business_segment_id))
    {
    goto end; //String
    }
    }

    // extended_tenant_dto->social_profile_id
    cJSON *social_profile_id = cJSON_GetObjectItemCaseSensitive(extended_tenant_dtoJSON, "socialProfileId");
    if (social_profile_id) { 
    if(!cJSON_IsString(social_profile_id) && !cJSON_IsNull(social_profile_id))
    {
    goto end; //String
    }
    }

    // extended_tenant_dto->language_id
    cJSON *language_id = cJSON_GetObjectItemCaseSensitive(extended_tenant_dtoJSON, "languageId");
    if (language_id) { 
    if(!cJSON_IsString(language_id) && !cJSON_IsNull(language_id))
    {
    goto end; //String
    }
    }

    // extended_tenant_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(extended_tenant_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // extended_tenant_dto->duns
    cJSON *duns = cJSON_GetObjectItemCaseSensitive(extended_tenant_dtoJSON, "duns");
    if (duns) { 
    if(!cJSON_IsString(duns) && !cJSON_IsNull(duns))
    {
    goto end; //String
    }
    }

    // extended_tenant_dto->slogan
    cJSON *slogan = cJSON_GetObjectItemCaseSensitive(extended_tenant_dtoJSON, "slogan");
    if (slogan) { 
    if(!cJSON_IsString(slogan) && !cJSON_IsNull(slogan))
    {
    goto end; //String
    }
    }

    // extended_tenant_dto->legal_name
    cJSON *legal_name = cJSON_GetObjectItemCaseSensitive(extended_tenant_dtoJSON, "legalName");
    if (legal_name) { 
    if(!cJSON_IsString(legal_name) && !cJSON_IsNull(legal_name))
    {
    goto end; //String
    }
    }

    // extended_tenant_dto->cover_url
    cJSON *cover_url = cJSON_GetObjectItemCaseSensitive(extended_tenant_dtoJSON, "coverUrl");
    if (cover_url) { 
    if(!cJSON_IsString(cover_url) && !cJSON_IsNull(cover_url))
    {
    goto end; //String
    }
    }

    // extended_tenant_dto->avatar_url
    cJSON *avatar_url = cJSON_GetObjectItemCaseSensitive(extended_tenant_dtoJSON, "avatarUrl");
    if (avatar_url) { 
    if(!cJSON_IsString(avatar_url) && !cJSON_IsNull(avatar_url))
    {
    goto end; //String
    }
    }

    // extended_tenant_dto->cart_id
    cJSON *cart_id = cJSON_GetObjectItemCaseSensitive(extended_tenant_dtoJSON, "cartId");
    if (cart_id) { 
    if(!cJSON_IsString(cart_id) && !cJSON_IsNull(cart_id))
    {
    goto end; //String
    }
    }

    // extended_tenant_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(extended_tenant_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // extended_tenant_dto->timezone_id
    cJSON *timezone_id = cJSON_GetObjectItemCaseSensitive(extended_tenant_dtoJSON, "timezoneId");
    if (timezone_id) { 
    if(!cJSON_IsString(timezone_id) && !cJSON_IsNull(timezone_id))
    {
    goto end; //String
    }
    }

    // extended_tenant_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(extended_tenant_dtoJSON, "countryId");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }

    // extended_tenant_dto->state_id
    cJSON *state_id = cJSON_GetObjectItemCaseSensitive(extended_tenant_dtoJSON, "stateId");
    if (state_id) { 
    if(!cJSON_IsString(state_id) && !cJSON_IsNull(state_id))
    {
    goto end; //String
    }
    }

    // extended_tenant_dto->city_id
    cJSON *city_id = cJSON_GetObjectItemCaseSensitive(extended_tenant_dtoJSON, "cityId");
    if (city_id) { 
    if(!cJSON_IsString(city_id) && !cJSON_IsNull(city_id))
    {
    goto end; //String
    }
    }

    // extended_tenant_dto->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(extended_tenant_dtoJSON, "email");
    if (email) { 
    if(!cJSON_IsString(email) && !cJSON_IsNull(email))
    {
    goto end; //String
    }
    }

    // extended_tenant_dto->phone
    cJSON *phone = cJSON_GetObjectItemCaseSensitive(extended_tenant_dtoJSON, "phone");
    if (phone) { 
    if(!cJSON_IsString(phone) && !cJSON_IsNull(phone))
    {
    goto end; //String
    }
    }

    // extended_tenant_dto->web_url
    cJSON *web_url = cJSON_GetObjectItemCaseSensitive(extended_tenant_dtoJSON, "webUrl");
    if (web_url) { 
    if(!cJSON_IsString(web_url) && !cJSON_IsNull(web_url))
    {
    goto end; //String
    }
    }

    // extended_tenant_dto->facebook_url
    cJSON *facebook_url = cJSON_GetObjectItemCaseSensitive(extended_tenant_dtoJSON, "facebookUrl");
    if (facebook_url) { 
    if(!cJSON_IsString(facebook_url) && !cJSON_IsNull(facebook_url))
    {
    goto end; //String
    }
    }

    // extended_tenant_dto->twitter_url
    cJSON *twitter_url = cJSON_GetObjectItemCaseSensitive(extended_tenant_dtoJSON, "twitterUrl");
    if (twitter_url) { 
    if(!cJSON_IsString(twitter_url) && !cJSON_IsNull(twitter_url))
    {
    goto end; //String
    }
    }

    // extended_tenant_dto->git_hub_url
    cJSON *git_hub_url = cJSON_GetObjectItemCaseSensitive(extended_tenant_dtoJSON, "gitHubUrl");
    if (git_hub_url) { 
    if(!cJSON_IsString(git_hub_url) && !cJSON_IsNull(git_hub_url))
    {
    goto end; //String
    }
    }

    // extended_tenant_dto->linked_in_url
    cJSON *linked_in_url = cJSON_GetObjectItemCaseSensitive(extended_tenant_dtoJSON, "linkedInUrl");
    if (linked_in_url) { 
    if(!cJSON_IsString(linked_in_url) && !cJSON_IsNull(linked_in_url))
    {
    goto end; //String
    }
    }

    // extended_tenant_dto->instagram_url
    cJSON *instagram_url = cJSON_GetObjectItemCaseSensitive(extended_tenant_dtoJSON, "instagramUrl");
    if (instagram_url) { 
    if(!cJSON_IsString(instagram_url) && !cJSON_IsNull(instagram_url))
    {
    goto end; //String
    }
    }

    // extended_tenant_dto->you_tube_url
    cJSON *you_tube_url = cJSON_GetObjectItemCaseSensitive(extended_tenant_dtoJSON, "youTubeUrl");
    if (you_tube_url) { 
    if(!cJSON_IsString(you_tube_url) && !cJSON_IsNull(you_tube_url))
    {
    goto end; //String
    }
    }

    // extended_tenant_dto->whats_app_number
    cJSON *whats_app_number = cJSON_GetObjectItemCaseSensitive(extended_tenant_dtoJSON, "whatsAppNumber");
    if (whats_app_number) { 
    if(!cJSON_IsString(whats_app_number) && !cJSON_IsNull(whats_app_number))
    {
    goto end; //String
    }
    }

    // extended_tenant_dto->support_phone_number
    cJSON *support_phone_number = cJSON_GetObjectItemCaseSensitive(extended_tenant_dtoJSON, "supportPhoneNumber");
    if (support_phone_number) { 
    if(!cJSON_IsString(support_phone_number) && !cJSON_IsNull(support_phone_number))
    {
    goto end; //String
    }
    }

    // extended_tenant_dto->verified
    cJSON *verified = cJSON_GetObjectItemCaseSensitive(extended_tenant_dtoJSON, "verified");
    if (verified) { 
    if(!cJSON_IsBool(verified))
    {
    goto end; //Bool
    }
    }

    // extended_tenant_dto->business_name
    cJSON *business_name = cJSON_GetObjectItemCaseSensitive(extended_tenant_dtoJSON, "businessName");
    if (business_name) { 
    if(!cJSON_IsString(business_name) && !cJSON_IsNull(business_name))
    {
    goto end; //String
    }
    }

    // extended_tenant_dto->business_legal_name
    cJSON *business_legal_name = cJSON_GetObjectItemCaseSensitive(extended_tenant_dtoJSON, "businessLegalName");
    if (business_legal_name) { 
    if(!cJSON_IsString(business_legal_name) && !cJSON_IsNull(business_legal_name))
    {
    goto end; //String
    }
    }

    // extended_tenant_dto->twitter_username
    cJSON *twitter_username = cJSON_GetObjectItemCaseSensitive(extended_tenant_dtoJSON, "twitterUsername");
    if (twitter_username) { 
    if(!cJSON_IsString(twitter_username) && !cJSON_IsNull(twitter_username))
    {
    goto end; //String
    }
    }

    // extended_tenant_dto->cart
    cJSON *cart = cJSON_GetObjectItemCaseSensitive(extended_tenant_dtoJSON, "cart");
    if (cart) { 
    cart_local_nonprim = cart_dto_parseFromJSON(cart); //nonprimitive
    }

    // extended_tenant_dto->wallet
    cJSON *wallet = cJSON_GetObjectItemCaseSensitive(extended_tenant_dtoJSON, "wallet");
    if (wallet) { 
    wallet_local_nonprim = wallet_dto_parseFromJSON(wallet); //nonprimitive
    }

    // extended_tenant_dto->social_profile
    cJSON *social_profile = cJSON_GetObjectItemCaseSensitive(extended_tenant_dtoJSON, "socialProfile");
    if (social_profile) { 
    social_profile_local_nonprim = social_profile_dto_parseFromJSON(social_profile); //nonprimitive
    }


    extended_tenant_dto_local_var = extended_tenant_dto_create (
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
        cart ? cart_local_nonprim : NULL,
        wallet ? wallet_local_nonprim : NULL,
        social_profile ? social_profile_local_nonprim : NULL
        );

    return extended_tenant_dto_local_var;
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
    return NULL;

}
