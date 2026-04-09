#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "extended_contact_dto.h"


char* extended_contact_dto_type_ToString(crmservice_extended_contact_dto_TYPE_e type) {
    char* typeArray[] =  { "NULL", "Individual", "Organization" };
    return typeArray[type];
}

crmservice_extended_contact_dto_TYPE_e extended_contact_dto_type_FromString(char* type){
    int stringToReturn = 0;
    char *typeArray[] =  { "NULL", "Individual", "Organization" };
    size_t sizeofArray = sizeof(typeArray) / sizeof(typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(type, typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

extended_contact_dto_t *extended_contact_dto_create(
    char *id,
    char *timestamp,
    char *qualified_name,
    char *tenant_id,
    crmservice_extended_contact_dto_TYPE_e type,
    char *email,
    char *phone,
    char *public_name,
    char *first_name,
    char *last_name,
    char *job_title,
    char *cover_url,
    char *avatar_url,
    char *country_id,
    char *timezone_id,
    char *language_id,
    char *social_profile_id,
    char *web_url,
    char *git_hub_url,
    char *twitch_url,
    char *reddit_url,
    char *tik_tok_url,
    char *website_url,
    char *twitter_url,
    char *facebook_url,
    char *you_tube_url,
    char *linked_in_url,
    char *instagram_url,
    char *github_username,
    char *duns,
    char *tax_id,
    char *about,
    char *street,
    char *cart_id,
    char *city_id,
    char *zip_code,
    char *state_id,
    char *wallet_id,
    char *fax_number,
    char *postal_code,
    char *currency_id,
    char *street_line1,
    char *street_line2,
    char *territory_id,
    char *mobile_phone,
    char *enrollment_id,
    char *annual_revenue,
    char *related_user_id,
    char *business_phone,
    char *owner_contact_id,
    char *related_tenant_id,
    char *activity_feed_id,
    char *parent_contact_id,
    char *identity_provider,
    char *partner_profile_id,
    char *primary_contact_id,
    char *active_directory_id,
    char *identity_provider_access_token,
    char *birthday,
    cart_dto_t *cart,
    wallet_dto_t *wallet,
    social_profile_dto_t *social_profile,
    simple_contact_dto_t *parent_contact,
    simple_contact_dto_t *primary_contact
    ) {
    extended_contact_dto_t *extended_contact_dto_local_var = malloc(sizeof(extended_contact_dto_t));
    if (!extended_contact_dto_local_var) {
        return NULL;
    }
    extended_contact_dto_local_var->id = id;
    extended_contact_dto_local_var->timestamp = timestamp;
    extended_contact_dto_local_var->qualified_name = qualified_name;
    extended_contact_dto_local_var->tenant_id = tenant_id;
    extended_contact_dto_local_var->type = type;
    extended_contact_dto_local_var->email = email;
    extended_contact_dto_local_var->phone = phone;
    extended_contact_dto_local_var->public_name = public_name;
    extended_contact_dto_local_var->first_name = first_name;
    extended_contact_dto_local_var->last_name = last_name;
    extended_contact_dto_local_var->job_title = job_title;
    extended_contact_dto_local_var->cover_url = cover_url;
    extended_contact_dto_local_var->avatar_url = avatar_url;
    extended_contact_dto_local_var->country_id = country_id;
    extended_contact_dto_local_var->timezone_id = timezone_id;
    extended_contact_dto_local_var->language_id = language_id;
    extended_contact_dto_local_var->social_profile_id = social_profile_id;
    extended_contact_dto_local_var->web_url = web_url;
    extended_contact_dto_local_var->git_hub_url = git_hub_url;
    extended_contact_dto_local_var->twitch_url = twitch_url;
    extended_contact_dto_local_var->reddit_url = reddit_url;
    extended_contact_dto_local_var->tik_tok_url = tik_tok_url;
    extended_contact_dto_local_var->website_url = website_url;
    extended_contact_dto_local_var->twitter_url = twitter_url;
    extended_contact_dto_local_var->facebook_url = facebook_url;
    extended_contact_dto_local_var->you_tube_url = you_tube_url;
    extended_contact_dto_local_var->linked_in_url = linked_in_url;
    extended_contact_dto_local_var->instagram_url = instagram_url;
    extended_contact_dto_local_var->github_username = github_username;
    extended_contact_dto_local_var->duns = duns;
    extended_contact_dto_local_var->tax_id = tax_id;
    extended_contact_dto_local_var->about = about;
    extended_contact_dto_local_var->street = street;
    extended_contact_dto_local_var->cart_id = cart_id;
    extended_contact_dto_local_var->city_id = city_id;
    extended_contact_dto_local_var->zip_code = zip_code;
    extended_contact_dto_local_var->state_id = state_id;
    extended_contact_dto_local_var->wallet_id = wallet_id;
    extended_contact_dto_local_var->fax_number = fax_number;
    extended_contact_dto_local_var->postal_code = postal_code;
    extended_contact_dto_local_var->currency_id = currency_id;
    extended_contact_dto_local_var->street_line1 = street_line1;
    extended_contact_dto_local_var->street_line2 = street_line2;
    extended_contact_dto_local_var->territory_id = territory_id;
    extended_contact_dto_local_var->mobile_phone = mobile_phone;
    extended_contact_dto_local_var->enrollment_id = enrollment_id;
    extended_contact_dto_local_var->annual_revenue = annual_revenue;
    extended_contact_dto_local_var->related_user_id = related_user_id;
    extended_contact_dto_local_var->business_phone = business_phone;
    extended_contact_dto_local_var->owner_contact_id = owner_contact_id;
    extended_contact_dto_local_var->related_tenant_id = related_tenant_id;
    extended_contact_dto_local_var->activity_feed_id = activity_feed_id;
    extended_contact_dto_local_var->parent_contact_id = parent_contact_id;
    extended_contact_dto_local_var->identity_provider = identity_provider;
    extended_contact_dto_local_var->partner_profile_id = partner_profile_id;
    extended_contact_dto_local_var->primary_contact_id = primary_contact_id;
    extended_contact_dto_local_var->active_directory_id = active_directory_id;
    extended_contact_dto_local_var->identity_provider_access_token = identity_provider_access_token;
    extended_contact_dto_local_var->birthday = birthday;
    extended_contact_dto_local_var->cart = cart;
    extended_contact_dto_local_var->wallet = wallet;
    extended_contact_dto_local_var->social_profile = social_profile;
    extended_contact_dto_local_var->parent_contact = parent_contact;
    extended_contact_dto_local_var->primary_contact = primary_contact;

    return extended_contact_dto_local_var;
}


void extended_contact_dto_free(extended_contact_dto_t *extended_contact_dto) {
    if(NULL == extended_contact_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (extended_contact_dto->id) {
        free(extended_contact_dto->id);
        extended_contact_dto->id = NULL;
    }
    if (extended_contact_dto->timestamp) {
        free(extended_contact_dto->timestamp);
        extended_contact_dto->timestamp = NULL;
    }
    if (extended_contact_dto->qualified_name) {
        free(extended_contact_dto->qualified_name);
        extended_contact_dto->qualified_name = NULL;
    }
    if (extended_contact_dto->tenant_id) {
        free(extended_contact_dto->tenant_id);
        extended_contact_dto->tenant_id = NULL;
    }
    if (extended_contact_dto->email) {
        free(extended_contact_dto->email);
        extended_contact_dto->email = NULL;
    }
    if (extended_contact_dto->phone) {
        free(extended_contact_dto->phone);
        extended_contact_dto->phone = NULL;
    }
    if (extended_contact_dto->public_name) {
        free(extended_contact_dto->public_name);
        extended_contact_dto->public_name = NULL;
    }
    if (extended_contact_dto->first_name) {
        free(extended_contact_dto->first_name);
        extended_contact_dto->first_name = NULL;
    }
    if (extended_contact_dto->last_name) {
        free(extended_contact_dto->last_name);
        extended_contact_dto->last_name = NULL;
    }
    if (extended_contact_dto->job_title) {
        free(extended_contact_dto->job_title);
        extended_contact_dto->job_title = NULL;
    }
    if (extended_contact_dto->cover_url) {
        free(extended_contact_dto->cover_url);
        extended_contact_dto->cover_url = NULL;
    }
    if (extended_contact_dto->avatar_url) {
        free(extended_contact_dto->avatar_url);
        extended_contact_dto->avatar_url = NULL;
    }
    if (extended_contact_dto->country_id) {
        free(extended_contact_dto->country_id);
        extended_contact_dto->country_id = NULL;
    }
    if (extended_contact_dto->timezone_id) {
        free(extended_contact_dto->timezone_id);
        extended_contact_dto->timezone_id = NULL;
    }
    if (extended_contact_dto->language_id) {
        free(extended_contact_dto->language_id);
        extended_contact_dto->language_id = NULL;
    }
    if (extended_contact_dto->social_profile_id) {
        free(extended_contact_dto->social_profile_id);
        extended_contact_dto->social_profile_id = NULL;
    }
    if (extended_contact_dto->web_url) {
        free(extended_contact_dto->web_url);
        extended_contact_dto->web_url = NULL;
    }
    if (extended_contact_dto->git_hub_url) {
        free(extended_contact_dto->git_hub_url);
        extended_contact_dto->git_hub_url = NULL;
    }
    if (extended_contact_dto->twitch_url) {
        free(extended_contact_dto->twitch_url);
        extended_contact_dto->twitch_url = NULL;
    }
    if (extended_contact_dto->reddit_url) {
        free(extended_contact_dto->reddit_url);
        extended_contact_dto->reddit_url = NULL;
    }
    if (extended_contact_dto->tik_tok_url) {
        free(extended_contact_dto->tik_tok_url);
        extended_contact_dto->tik_tok_url = NULL;
    }
    if (extended_contact_dto->website_url) {
        free(extended_contact_dto->website_url);
        extended_contact_dto->website_url = NULL;
    }
    if (extended_contact_dto->twitter_url) {
        free(extended_contact_dto->twitter_url);
        extended_contact_dto->twitter_url = NULL;
    }
    if (extended_contact_dto->facebook_url) {
        free(extended_contact_dto->facebook_url);
        extended_contact_dto->facebook_url = NULL;
    }
    if (extended_contact_dto->you_tube_url) {
        free(extended_contact_dto->you_tube_url);
        extended_contact_dto->you_tube_url = NULL;
    }
    if (extended_contact_dto->linked_in_url) {
        free(extended_contact_dto->linked_in_url);
        extended_contact_dto->linked_in_url = NULL;
    }
    if (extended_contact_dto->instagram_url) {
        free(extended_contact_dto->instagram_url);
        extended_contact_dto->instagram_url = NULL;
    }
    if (extended_contact_dto->github_username) {
        free(extended_contact_dto->github_username);
        extended_contact_dto->github_username = NULL;
    }
    if (extended_contact_dto->duns) {
        free(extended_contact_dto->duns);
        extended_contact_dto->duns = NULL;
    }
    if (extended_contact_dto->tax_id) {
        free(extended_contact_dto->tax_id);
        extended_contact_dto->tax_id = NULL;
    }
    if (extended_contact_dto->about) {
        free(extended_contact_dto->about);
        extended_contact_dto->about = NULL;
    }
    if (extended_contact_dto->street) {
        free(extended_contact_dto->street);
        extended_contact_dto->street = NULL;
    }
    if (extended_contact_dto->cart_id) {
        free(extended_contact_dto->cart_id);
        extended_contact_dto->cart_id = NULL;
    }
    if (extended_contact_dto->city_id) {
        free(extended_contact_dto->city_id);
        extended_contact_dto->city_id = NULL;
    }
    if (extended_contact_dto->zip_code) {
        free(extended_contact_dto->zip_code);
        extended_contact_dto->zip_code = NULL;
    }
    if (extended_contact_dto->state_id) {
        free(extended_contact_dto->state_id);
        extended_contact_dto->state_id = NULL;
    }
    if (extended_contact_dto->wallet_id) {
        free(extended_contact_dto->wallet_id);
        extended_contact_dto->wallet_id = NULL;
    }
    if (extended_contact_dto->fax_number) {
        free(extended_contact_dto->fax_number);
        extended_contact_dto->fax_number = NULL;
    }
    if (extended_contact_dto->postal_code) {
        free(extended_contact_dto->postal_code);
        extended_contact_dto->postal_code = NULL;
    }
    if (extended_contact_dto->currency_id) {
        free(extended_contact_dto->currency_id);
        extended_contact_dto->currency_id = NULL;
    }
    if (extended_contact_dto->street_line1) {
        free(extended_contact_dto->street_line1);
        extended_contact_dto->street_line1 = NULL;
    }
    if (extended_contact_dto->street_line2) {
        free(extended_contact_dto->street_line2);
        extended_contact_dto->street_line2 = NULL;
    }
    if (extended_contact_dto->territory_id) {
        free(extended_contact_dto->territory_id);
        extended_contact_dto->territory_id = NULL;
    }
    if (extended_contact_dto->mobile_phone) {
        free(extended_contact_dto->mobile_phone);
        extended_contact_dto->mobile_phone = NULL;
    }
    if (extended_contact_dto->enrollment_id) {
        free(extended_contact_dto->enrollment_id);
        extended_contact_dto->enrollment_id = NULL;
    }
    if (extended_contact_dto->annual_revenue) {
        free(extended_contact_dto->annual_revenue);
        extended_contact_dto->annual_revenue = NULL;
    }
    if (extended_contact_dto->related_user_id) {
        free(extended_contact_dto->related_user_id);
        extended_contact_dto->related_user_id = NULL;
    }
    if (extended_contact_dto->business_phone) {
        free(extended_contact_dto->business_phone);
        extended_contact_dto->business_phone = NULL;
    }
    if (extended_contact_dto->owner_contact_id) {
        free(extended_contact_dto->owner_contact_id);
        extended_contact_dto->owner_contact_id = NULL;
    }
    if (extended_contact_dto->related_tenant_id) {
        free(extended_contact_dto->related_tenant_id);
        extended_contact_dto->related_tenant_id = NULL;
    }
    if (extended_contact_dto->activity_feed_id) {
        free(extended_contact_dto->activity_feed_id);
        extended_contact_dto->activity_feed_id = NULL;
    }
    if (extended_contact_dto->parent_contact_id) {
        free(extended_contact_dto->parent_contact_id);
        extended_contact_dto->parent_contact_id = NULL;
    }
    if (extended_contact_dto->identity_provider) {
        free(extended_contact_dto->identity_provider);
        extended_contact_dto->identity_provider = NULL;
    }
    if (extended_contact_dto->partner_profile_id) {
        free(extended_contact_dto->partner_profile_id);
        extended_contact_dto->partner_profile_id = NULL;
    }
    if (extended_contact_dto->primary_contact_id) {
        free(extended_contact_dto->primary_contact_id);
        extended_contact_dto->primary_contact_id = NULL;
    }
    if (extended_contact_dto->active_directory_id) {
        free(extended_contact_dto->active_directory_id);
        extended_contact_dto->active_directory_id = NULL;
    }
    if (extended_contact_dto->identity_provider_access_token) {
        free(extended_contact_dto->identity_provider_access_token);
        extended_contact_dto->identity_provider_access_token = NULL;
    }
    if (extended_contact_dto->birthday) {
        free(extended_contact_dto->birthday);
        extended_contact_dto->birthday = NULL;
    }
    if (extended_contact_dto->cart) {
        cart_dto_free(extended_contact_dto->cart);
        extended_contact_dto->cart = NULL;
    }
    if (extended_contact_dto->wallet) {
        wallet_dto_free(extended_contact_dto->wallet);
        extended_contact_dto->wallet = NULL;
    }
    if (extended_contact_dto->social_profile) {
        social_profile_dto_free(extended_contact_dto->social_profile);
        extended_contact_dto->social_profile = NULL;
    }
    if (extended_contact_dto->parent_contact) {
        simple_contact_dto_free(extended_contact_dto->parent_contact);
        extended_contact_dto->parent_contact = NULL;
    }
    if (extended_contact_dto->primary_contact) {
        simple_contact_dto_free(extended_contact_dto->primary_contact);
        extended_contact_dto->primary_contact = NULL;
    }
    free(extended_contact_dto);
}

cJSON *extended_contact_dto_convertToJSON(extended_contact_dto_t *extended_contact_dto) {
    cJSON *item = cJSON_CreateObject();

    // extended_contact_dto->id
    if(extended_contact_dto->id) {
    if(cJSON_AddStringToObject(item, "id", extended_contact_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->timestamp
    if(extended_contact_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", extended_contact_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // extended_contact_dto->qualified_name
    if(extended_contact_dto->qualified_name) {
    if(cJSON_AddStringToObject(item, "qualifiedName", extended_contact_dto->qualified_name) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->tenant_id
    if(extended_contact_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", extended_contact_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->type
    if(extended_contact_dto->type != crmservice_extended_contact_dto_TYPE_NULL) {
    if(cJSON_AddStringToObject(item, "type", typeextended_contact_dto_ToString(extended_contact_dto->type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // extended_contact_dto->email
    if(extended_contact_dto->email) {
    if(cJSON_AddStringToObject(item, "email", extended_contact_dto->email) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->phone
    if(extended_contact_dto->phone) {
    if(cJSON_AddStringToObject(item, "phone", extended_contact_dto->phone) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->public_name
    if(extended_contact_dto->public_name) {
    if(cJSON_AddStringToObject(item, "publicName", extended_contact_dto->public_name) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->first_name
    if(extended_contact_dto->first_name) {
    if(cJSON_AddStringToObject(item, "firstName", extended_contact_dto->first_name) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->last_name
    if(extended_contact_dto->last_name) {
    if(cJSON_AddStringToObject(item, "lastName", extended_contact_dto->last_name) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->job_title
    if(extended_contact_dto->job_title) {
    if(cJSON_AddStringToObject(item, "jobTitle", extended_contact_dto->job_title) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->cover_url
    if(extended_contact_dto->cover_url) {
    if(cJSON_AddStringToObject(item, "coverUrl", extended_contact_dto->cover_url) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->avatar_url
    if(extended_contact_dto->avatar_url) {
    if(cJSON_AddStringToObject(item, "avatarUrl", extended_contact_dto->avatar_url) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->country_id
    if(extended_contact_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryId", extended_contact_dto->country_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->timezone_id
    if(extended_contact_dto->timezone_id) {
    if(cJSON_AddStringToObject(item, "timezoneId", extended_contact_dto->timezone_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->language_id
    if(extended_contact_dto->language_id) {
    if(cJSON_AddStringToObject(item, "languageId", extended_contact_dto->language_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->social_profile_id
    if(extended_contact_dto->social_profile_id) {
    if(cJSON_AddStringToObject(item, "socialProfileId", extended_contact_dto->social_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->web_url
    if(extended_contact_dto->web_url) {
    if(cJSON_AddStringToObject(item, "webUrl", extended_contact_dto->web_url) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->git_hub_url
    if(extended_contact_dto->git_hub_url) {
    if(cJSON_AddStringToObject(item, "gitHubUrl", extended_contact_dto->git_hub_url) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->twitch_url
    if(extended_contact_dto->twitch_url) {
    if(cJSON_AddStringToObject(item, "twitchUrl", extended_contact_dto->twitch_url) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->reddit_url
    if(extended_contact_dto->reddit_url) {
    if(cJSON_AddStringToObject(item, "redditUrl", extended_contact_dto->reddit_url) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->tik_tok_url
    if(extended_contact_dto->tik_tok_url) {
    if(cJSON_AddStringToObject(item, "tikTokUrl", extended_contact_dto->tik_tok_url) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->website_url
    if(extended_contact_dto->website_url) {
    if(cJSON_AddStringToObject(item, "websiteUrl", extended_contact_dto->website_url) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->twitter_url
    if(extended_contact_dto->twitter_url) {
    if(cJSON_AddStringToObject(item, "twitterUrl", extended_contact_dto->twitter_url) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->facebook_url
    if(extended_contact_dto->facebook_url) {
    if(cJSON_AddStringToObject(item, "facebookUrl", extended_contact_dto->facebook_url) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->you_tube_url
    if(extended_contact_dto->you_tube_url) {
    if(cJSON_AddStringToObject(item, "youTubeUrl", extended_contact_dto->you_tube_url) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->linked_in_url
    if(extended_contact_dto->linked_in_url) {
    if(cJSON_AddStringToObject(item, "linkedInUrl", extended_contact_dto->linked_in_url) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->instagram_url
    if(extended_contact_dto->instagram_url) {
    if(cJSON_AddStringToObject(item, "instagramUrl", extended_contact_dto->instagram_url) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->github_username
    if(extended_contact_dto->github_username) {
    if(cJSON_AddStringToObject(item, "githubUsername", extended_contact_dto->github_username) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->duns
    if(extended_contact_dto->duns) {
    if(cJSON_AddStringToObject(item, "duns", extended_contact_dto->duns) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->tax_id
    if(extended_contact_dto->tax_id) {
    if(cJSON_AddStringToObject(item, "taxId", extended_contact_dto->tax_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->about
    if(extended_contact_dto->about) {
    if(cJSON_AddStringToObject(item, "about", extended_contact_dto->about) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->street
    if(extended_contact_dto->street) {
    if(cJSON_AddStringToObject(item, "street", extended_contact_dto->street) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->cart_id
    if(extended_contact_dto->cart_id) {
    if(cJSON_AddStringToObject(item, "cartId", extended_contact_dto->cart_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->city_id
    if(extended_contact_dto->city_id) {
    if(cJSON_AddStringToObject(item, "cityId", extended_contact_dto->city_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->zip_code
    if(extended_contact_dto->zip_code) {
    if(cJSON_AddStringToObject(item, "zipCode", extended_contact_dto->zip_code) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->state_id
    if(extended_contact_dto->state_id) {
    if(cJSON_AddStringToObject(item, "stateId", extended_contact_dto->state_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->wallet_id
    if(extended_contact_dto->wallet_id) {
    if(cJSON_AddStringToObject(item, "walletId", extended_contact_dto->wallet_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->fax_number
    if(extended_contact_dto->fax_number) {
    if(cJSON_AddStringToObject(item, "faxNumber", extended_contact_dto->fax_number) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->postal_code
    if(extended_contact_dto->postal_code) {
    if(cJSON_AddStringToObject(item, "postalCode", extended_contact_dto->postal_code) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->currency_id
    if(extended_contact_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", extended_contact_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->street_line1
    if(extended_contact_dto->street_line1) {
    if(cJSON_AddStringToObject(item, "streetLine1", extended_contact_dto->street_line1) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->street_line2
    if(extended_contact_dto->street_line2) {
    if(cJSON_AddStringToObject(item, "streetLine2", extended_contact_dto->street_line2) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->territory_id
    if(extended_contact_dto->territory_id) {
    if(cJSON_AddStringToObject(item, "territoryId", extended_contact_dto->territory_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->mobile_phone
    if(extended_contact_dto->mobile_phone) {
    if(cJSON_AddStringToObject(item, "mobilePhone", extended_contact_dto->mobile_phone) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->enrollment_id
    if(extended_contact_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", extended_contact_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->annual_revenue
    if(extended_contact_dto->annual_revenue) {
    if(cJSON_AddStringToObject(item, "annualRevenue", extended_contact_dto->annual_revenue) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->related_user_id
    if(extended_contact_dto->related_user_id) {
    if(cJSON_AddStringToObject(item, "relatedUserId", extended_contact_dto->related_user_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->business_phone
    if(extended_contact_dto->business_phone) {
    if(cJSON_AddStringToObject(item, "businessPhone", extended_contact_dto->business_phone) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->owner_contact_id
    if(extended_contact_dto->owner_contact_id) {
    if(cJSON_AddStringToObject(item, "ownerContactId", extended_contact_dto->owner_contact_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->related_tenant_id
    if(extended_contact_dto->related_tenant_id) {
    if(cJSON_AddStringToObject(item, "relatedTenantId", extended_contact_dto->related_tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->activity_feed_id
    if(extended_contact_dto->activity_feed_id) {
    if(cJSON_AddStringToObject(item, "activityFeedId", extended_contact_dto->activity_feed_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->parent_contact_id
    if(extended_contact_dto->parent_contact_id) {
    if(cJSON_AddStringToObject(item, "parentContactId", extended_contact_dto->parent_contact_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->identity_provider
    if(extended_contact_dto->identity_provider) {
    if(cJSON_AddStringToObject(item, "identityProvider", extended_contact_dto->identity_provider) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->partner_profile_id
    if(extended_contact_dto->partner_profile_id) {
    if(cJSON_AddStringToObject(item, "partnerProfileId", extended_contact_dto->partner_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->primary_contact_id
    if(extended_contact_dto->primary_contact_id) {
    if(cJSON_AddStringToObject(item, "primaryContactId", extended_contact_dto->primary_contact_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->active_directory_id
    if(extended_contact_dto->active_directory_id) {
    if(cJSON_AddStringToObject(item, "activeDirectoryId", extended_contact_dto->active_directory_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->identity_provider_access_token
    if(extended_contact_dto->identity_provider_access_token) {
    if(cJSON_AddStringToObject(item, "identityProviderAccessToken", extended_contact_dto->identity_provider_access_token) == NULL) {
    goto fail; //String
    }
    }


    // extended_contact_dto->birthday
    if(extended_contact_dto->birthday) {
    if(cJSON_AddStringToObject(item, "birthday", extended_contact_dto->birthday) == NULL) {
    goto fail; //Date-Time
    }
    }


    // extended_contact_dto->cart
    if(extended_contact_dto->cart) {
    cJSON *cart_local_JSON = cart_dto_convertToJSON(extended_contact_dto->cart);
    if(cart_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "cart", cart_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // extended_contact_dto->wallet
    if(extended_contact_dto->wallet) {
    cJSON *wallet_local_JSON = wallet_dto_convertToJSON(extended_contact_dto->wallet);
    if(wallet_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "wallet", wallet_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // extended_contact_dto->social_profile
    if(extended_contact_dto->social_profile) {
    cJSON *social_profile_local_JSON = social_profile_dto_convertToJSON(extended_contact_dto->social_profile);
    if(social_profile_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "socialProfile", social_profile_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // extended_contact_dto->parent_contact
    if(extended_contact_dto->parent_contact) {
    cJSON *parent_contact_local_JSON = simple_contact_dto_convertToJSON(extended_contact_dto->parent_contact);
    if(parent_contact_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "parentContact", parent_contact_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // extended_contact_dto->primary_contact
    if(extended_contact_dto->primary_contact) {
    cJSON *primary_contact_local_JSON = simple_contact_dto_convertToJSON(extended_contact_dto->primary_contact);
    if(primary_contact_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "primaryContact", primary_contact_local_JSON);
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

extended_contact_dto_t *extended_contact_dto_parseFromJSON(cJSON *extended_contact_dtoJSON){

    extended_contact_dto_t *extended_contact_dto_local_var = NULL;

    // define the local variable for extended_contact_dto->cart
    cart_dto_t *cart_local_nonprim = NULL;

    // define the local variable for extended_contact_dto->wallet
    wallet_dto_t *wallet_local_nonprim = NULL;

    // define the local variable for extended_contact_dto->social_profile
    social_profile_dto_t *social_profile_local_nonprim = NULL;

    // define the local variable for extended_contact_dto->parent_contact
    simple_contact_dto_t *parent_contact_local_nonprim = NULL;

    // define the local variable for extended_contact_dto->primary_contact
    simple_contact_dto_t *primary_contact_local_nonprim = NULL;

    // extended_contact_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // extended_contact_dto->qualified_name
    cJSON *qualified_name = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "qualifiedName");
    if (qualified_name) { 
    if(!cJSON_IsString(qualified_name) && !cJSON_IsNull(qualified_name))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "type");
    crmservice_extended_contact_dto_TYPE_e typeVariable;
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //Enum
    }
    typeVariable = extended_contact_dto_type_FromString(type->valuestring);
    }

    // extended_contact_dto->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "email");
    if (email) { 
    if(!cJSON_IsString(email) && !cJSON_IsNull(email))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->phone
    cJSON *phone = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "phone");
    if (phone) { 
    if(!cJSON_IsString(phone) && !cJSON_IsNull(phone))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->public_name
    cJSON *public_name = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "publicName");
    if (public_name) { 
    if(!cJSON_IsString(public_name) && !cJSON_IsNull(public_name))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->first_name
    cJSON *first_name = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "firstName");
    if (first_name) { 
    if(!cJSON_IsString(first_name) && !cJSON_IsNull(first_name))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->last_name
    cJSON *last_name = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "lastName");
    if (last_name) { 
    if(!cJSON_IsString(last_name) && !cJSON_IsNull(last_name))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->job_title
    cJSON *job_title = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "jobTitle");
    if (job_title) { 
    if(!cJSON_IsString(job_title) && !cJSON_IsNull(job_title))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->cover_url
    cJSON *cover_url = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "coverUrl");
    if (cover_url) { 
    if(!cJSON_IsString(cover_url) && !cJSON_IsNull(cover_url))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->avatar_url
    cJSON *avatar_url = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "avatarUrl");
    if (avatar_url) { 
    if(!cJSON_IsString(avatar_url) && !cJSON_IsNull(avatar_url))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "countryId");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->timezone_id
    cJSON *timezone_id = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "timezoneId");
    if (timezone_id) { 
    if(!cJSON_IsString(timezone_id) && !cJSON_IsNull(timezone_id))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->language_id
    cJSON *language_id = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "languageId");
    if (language_id) { 
    if(!cJSON_IsString(language_id) && !cJSON_IsNull(language_id))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->social_profile_id
    cJSON *social_profile_id = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "socialProfileId");
    if (social_profile_id) { 
    if(!cJSON_IsString(social_profile_id) && !cJSON_IsNull(social_profile_id))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->web_url
    cJSON *web_url = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "webUrl");
    if (web_url) { 
    if(!cJSON_IsString(web_url) && !cJSON_IsNull(web_url))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->git_hub_url
    cJSON *git_hub_url = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "gitHubUrl");
    if (git_hub_url) { 
    if(!cJSON_IsString(git_hub_url) && !cJSON_IsNull(git_hub_url))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->twitch_url
    cJSON *twitch_url = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "twitchUrl");
    if (twitch_url) { 
    if(!cJSON_IsString(twitch_url) && !cJSON_IsNull(twitch_url))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->reddit_url
    cJSON *reddit_url = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "redditUrl");
    if (reddit_url) { 
    if(!cJSON_IsString(reddit_url) && !cJSON_IsNull(reddit_url))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->tik_tok_url
    cJSON *tik_tok_url = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "tikTokUrl");
    if (tik_tok_url) { 
    if(!cJSON_IsString(tik_tok_url) && !cJSON_IsNull(tik_tok_url))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->website_url
    cJSON *website_url = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "websiteUrl");
    if (website_url) { 
    if(!cJSON_IsString(website_url) && !cJSON_IsNull(website_url))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->twitter_url
    cJSON *twitter_url = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "twitterUrl");
    if (twitter_url) { 
    if(!cJSON_IsString(twitter_url) && !cJSON_IsNull(twitter_url))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->facebook_url
    cJSON *facebook_url = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "facebookUrl");
    if (facebook_url) { 
    if(!cJSON_IsString(facebook_url) && !cJSON_IsNull(facebook_url))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->you_tube_url
    cJSON *you_tube_url = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "youTubeUrl");
    if (you_tube_url) { 
    if(!cJSON_IsString(you_tube_url) && !cJSON_IsNull(you_tube_url))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->linked_in_url
    cJSON *linked_in_url = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "linkedInUrl");
    if (linked_in_url) { 
    if(!cJSON_IsString(linked_in_url) && !cJSON_IsNull(linked_in_url))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->instagram_url
    cJSON *instagram_url = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "instagramUrl");
    if (instagram_url) { 
    if(!cJSON_IsString(instagram_url) && !cJSON_IsNull(instagram_url))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->github_username
    cJSON *github_username = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "githubUsername");
    if (github_username) { 
    if(!cJSON_IsString(github_username) && !cJSON_IsNull(github_username))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->duns
    cJSON *duns = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "duns");
    if (duns) { 
    if(!cJSON_IsString(duns) && !cJSON_IsNull(duns))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->tax_id
    cJSON *tax_id = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "taxId");
    if (tax_id) { 
    if(!cJSON_IsString(tax_id) && !cJSON_IsNull(tax_id))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->about
    cJSON *about = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "about");
    if (about) { 
    if(!cJSON_IsString(about) && !cJSON_IsNull(about))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->street
    cJSON *street = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "street");
    if (street) { 
    if(!cJSON_IsString(street) && !cJSON_IsNull(street))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->cart_id
    cJSON *cart_id = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "cartId");
    if (cart_id) { 
    if(!cJSON_IsString(cart_id) && !cJSON_IsNull(cart_id))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->city_id
    cJSON *city_id = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "cityId");
    if (city_id) { 
    if(!cJSON_IsString(city_id) && !cJSON_IsNull(city_id))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->zip_code
    cJSON *zip_code = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "zipCode");
    if (zip_code) { 
    if(!cJSON_IsString(zip_code) && !cJSON_IsNull(zip_code))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->state_id
    cJSON *state_id = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "stateId");
    if (state_id) { 
    if(!cJSON_IsString(state_id) && !cJSON_IsNull(state_id))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->wallet_id
    cJSON *wallet_id = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "walletId");
    if (wallet_id) { 
    if(!cJSON_IsString(wallet_id) && !cJSON_IsNull(wallet_id))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->fax_number
    cJSON *fax_number = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "faxNumber");
    if (fax_number) { 
    if(!cJSON_IsString(fax_number) && !cJSON_IsNull(fax_number))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->postal_code
    cJSON *postal_code = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "postalCode");
    if (postal_code) { 
    if(!cJSON_IsString(postal_code) && !cJSON_IsNull(postal_code))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->street_line1
    cJSON *street_line1 = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "streetLine1");
    if (street_line1) { 
    if(!cJSON_IsString(street_line1) && !cJSON_IsNull(street_line1))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->street_line2
    cJSON *street_line2 = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "streetLine2");
    if (street_line2) { 
    if(!cJSON_IsString(street_line2) && !cJSON_IsNull(street_line2))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->territory_id
    cJSON *territory_id = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "territoryId");
    if (territory_id) { 
    if(!cJSON_IsString(territory_id) && !cJSON_IsNull(territory_id))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->mobile_phone
    cJSON *mobile_phone = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "mobilePhone");
    if (mobile_phone) { 
    if(!cJSON_IsString(mobile_phone) && !cJSON_IsNull(mobile_phone))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->annual_revenue
    cJSON *annual_revenue = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "annualRevenue");
    if (annual_revenue) { 
    if(!cJSON_IsString(annual_revenue) && !cJSON_IsNull(annual_revenue))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->related_user_id
    cJSON *related_user_id = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "relatedUserId");
    if (related_user_id) { 
    if(!cJSON_IsString(related_user_id) && !cJSON_IsNull(related_user_id))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->business_phone
    cJSON *business_phone = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "businessPhone");
    if (business_phone) { 
    if(!cJSON_IsString(business_phone) && !cJSON_IsNull(business_phone))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->owner_contact_id
    cJSON *owner_contact_id = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "ownerContactId");
    if (owner_contact_id) { 
    if(!cJSON_IsString(owner_contact_id) && !cJSON_IsNull(owner_contact_id))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->related_tenant_id
    cJSON *related_tenant_id = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "relatedTenantId");
    if (related_tenant_id) { 
    if(!cJSON_IsString(related_tenant_id) && !cJSON_IsNull(related_tenant_id))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->activity_feed_id
    cJSON *activity_feed_id = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "activityFeedId");
    if (activity_feed_id) { 
    if(!cJSON_IsString(activity_feed_id) && !cJSON_IsNull(activity_feed_id))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->parent_contact_id
    cJSON *parent_contact_id = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "parentContactId");
    if (parent_contact_id) { 
    if(!cJSON_IsString(parent_contact_id) && !cJSON_IsNull(parent_contact_id))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->identity_provider
    cJSON *identity_provider = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "identityProvider");
    if (identity_provider) { 
    if(!cJSON_IsString(identity_provider) && !cJSON_IsNull(identity_provider))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->partner_profile_id
    cJSON *partner_profile_id = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "partnerProfileId");
    if (partner_profile_id) { 
    if(!cJSON_IsString(partner_profile_id) && !cJSON_IsNull(partner_profile_id))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->primary_contact_id
    cJSON *primary_contact_id = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "primaryContactId");
    if (primary_contact_id) { 
    if(!cJSON_IsString(primary_contact_id) && !cJSON_IsNull(primary_contact_id))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->active_directory_id
    cJSON *active_directory_id = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "activeDirectoryId");
    if (active_directory_id) { 
    if(!cJSON_IsString(active_directory_id) && !cJSON_IsNull(active_directory_id))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->identity_provider_access_token
    cJSON *identity_provider_access_token = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "identityProviderAccessToken");
    if (identity_provider_access_token) { 
    if(!cJSON_IsString(identity_provider_access_token) && !cJSON_IsNull(identity_provider_access_token))
    {
    goto end; //String
    }
    }

    // extended_contact_dto->birthday
    cJSON *birthday = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "birthday");
    if (birthday) { 
    if(!cJSON_IsString(birthday) && !cJSON_IsNull(birthday))
    {
    goto end; //DateTime
    }
    }

    // extended_contact_dto->cart
    cJSON *cart = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "cart");
    if (cart) { 
    cart_local_nonprim = cart_dto_parseFromJSON(cart); //nonprimitive
    }

    // extended_contact_dto->wallet
    cJSON *wallet = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "wallet");
    if (wallet) { 
    wallet_local_nonprim = wallet_dto_parseFromJSON(wallet); //nonprimitive
    }

    // extended_contact_dto->social_profile
    cJSON *social_profile = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "socialProfile");
    if (social_profile) { 
    social_profile_local_nonprim = social_profile_dto_parseFromJSON(social_profile); //nonprimitive
    }

    // extended_contact_dto->parent_contact
    cJSON *parent_contact = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "parentContact");
    if (parent_contact) { 
    parent_contact_local_nonprim = simple_contact_dto_parseFromJSON(parent_contact); //nonprimitive
    }

    // extended_contact_dto->primary_contact
    cJSON *primary_contact = cJSON_GetObjectItemCaseSensitive(extended_contact_dtoJSON, "primaryContact");
    if (primary_contact) { 
    primary_contact_local_nonprim = simple_contact_dto_parseFromJSON(primary_contact); //nonprimitive
    }


    extended_contact_dto_local_var = extended_contact_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        qualified_name && !cJSON_IsNull(qualified_name) ? strdup(qualified_name->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        type ? typeVariable : crmservice_extended_contact_dto_TYPE_NULL,
        email && !cJSON_IsNull(email) ? strdup(email->valuestring) : NULL,
        phone && !cJSON_IsNull(phone) ? strdup(phone->valuestring) : NULL,
        public_name && !cJSON_IsNull(public_name) ? strdup(public_name->valuestring) : NULL,
        first_name && !cJSON_IsNull(first_name) ? strdup(first_name->valuestring) : NULL,
        last_name && !cJSON_IsNull(last_name) ? strdup(last_name->valuestring) : NULL,
        job_title && !cJSON_IsNull(job_title) ? strdup(job_title->valuestring) : NULL,
        cover_url && !cJSON_IsNull(cover_url) ? strdup(cover_url->valuestring) : NULL,
        avatar_url && !cJSON_IsNull(avatar_url) ? strdup(avatar_url->valuestring) : NULL,
        country_id && !cJSON_IsNull(country_id) ? strdup(country_id->valuestring) : NULL,
        timezone_id && !cJSON_IsNull(timezone_id) ? strdup(timezone_id->valuestring) : NULL,
        language_id && !cJSON_IsNull(language_id) ? strdup(language_id->valuestring) : NULL,
        social_profile_id && !cJSON_IsNull(social_profile_id) ? strdup(social_profile_id->valuestring) : NULL,
        web_url && !cJSON_IsNull(web_url) ? strdup(web_url->valuestring) : NULL,
        git_hub_url && !cJSON_IsNull(git_hub_url) ? strdup(git_hub_url->valuestring) : NULL,
        twitch_url && !cJSON_IsNull(twitch_url) ? strdup(twitch_url->valuestring) : NULL,
        reddit_url && !cJSON_IsNull(reddit_url) ? strdup(reddit_url->valuestring) : NULL,
        tik_tok_url && !cJSON_IsNull(tik_tok_url) ? strdup(tik_tok_url->valuestring) : NULL,
        website_url && !cJSON_IsNull(website_url) ? strdup(website_url->valuestring) : NULL,
        twitter_url && !cJSON_IsNull(twitter_url) ? strdup(twitter_url->valuestring) : NULL,
        facebook_url && !cJSON_IsNull(facebook_url) ? strdup(facebook_url->valuestring) : NULL,
        you_tube_url && !cJSON_IsNull(you_tube_url) ? strdup(you_tube_url->valuestring) : NULL,
        linked_in_url && !cJSON_IsNull(linked_in_url) ? strdup(linked_in_url->valuestring) : NULL,
        instagram_url && !cJSON_IsNull(instagram_url) ? strdup(instagram_url->valuestring) : NULL,
        github_username && !cJSON_IsNull(github_username) ? strdup(github_username->valuestring) : NULL,
        duns && !cJSON_IsNull(duns) ? strdup(duns->valuestring) : NULL,
        tax_id && !cJSON_IsNull(tax_id) ? strdup(tax_id->valuestring) : NULL,
        about && !cJSON_IsNull(about) ? strdup(about->valuestring) : NULL,
        street && !cJSON_IsNull(street) ? strdup(street->valuestring) : NULL,
        cart_id && !cJSON_IsNull(cart_id) ? strdup(cart_id->valuestring) : NULL,
        city_id && !cJSON_IsNull(city_id) ? strdup(city_id->valuestring) : NULL,
        zip_code && !cJSON_IsNull(zip_code) ? strdup(zip_code->valuestring) : NULL,
        state_id && !cJSON_IsNull(state_id) ? strdup(state_id->valuestring) : NULL,
        wallet_id && !cJSON_IsNull(wallet_id) ? strdup(wallet_id->valuestring) : NULL,
        fax_number && !cJSON_IsNull(fax_number) ? strdup(fax_number->valuestring) : NULL,
        postal_code && !cJSON_IsNull(postal_code) ? strdup(postal_code->valuestring) : NULL,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        street_line1 && !cJSON_IsNull(street_line1) ? strdup(street_line1->valuestring) : NULL,
        street_line2 && !cJSON_IsNull(street_line2) ? strdup(street_line2->valuestring) : NULL,
        territory_id && !cJSON_IsNull(territory_id) ? strdup(territory_id->valuestring) : NULL,
        mobile_phone && !cJSON_IsNull(mobile_phone) ? strdup(mobile_phone->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        annual_revenue && !cJSON_IsNull(annual_revenue) ? strdup(annual_revenue->valuestring) : NULL,
        related_user_id && !cJSON_IsNull(related_user_id) ? strdup(related_user_id->valuestring) : NULL,
        business_phone && !cJSON_IsNull(business_phone) ? strdup(business_phone->valuestring) : NULL,
        owner_contact_id && !cJSON_IsNull(owner_contact_id) ? strdup(owner_contact_id->valuestring) : NULL,
        related_tenant_id && !cJSON_IsNull(related_tenant_id) ? strdup(related_tenant_id->valuestring) : NULL,
        activity_feed_id && !cJSON_IsNull(activity_feed_id) ? strdup(activity_feed_id->valuestring) : NULL,
        parent_contact_id && !cJSON_IsNull(parent_contact_id) ? strdup(parent_contact_id->valuestring) : NULL,
        identity_provider && !cJSON_IsNull(identity_provider) ? strdup(identity_provider->valuestring) : NULL,
        partner_profile_id && !cJSON_IsNull(partner_profile_id) ? strdup(partner_profile_id->valuestring) : NULL,
        primary_contact_id && !cJSON_IsNull(primary_contact_id) ? strdup(primary_contact_id->valuestring) : NULL,
        active_directory_id && !cJSON_IsNull(active_directory_id) ? strdup(active_directory_id->valuestring) : NULL,
        identity_provider_access_token && !cJSON_IsNull(identity_provider_access_token) ? strdup(identity_provider_access_token->valuestring) : NULL,
        birthday && !cJSON_IsNull(birthday) ? strdup(birthday->valuestring) : NULL,
        cart ? cart_local_nonprim : NULL,
        wallet ? wallet_local_nonprim : NULL,
        social_profile ? social_profile_local_nonprim : NULL,
        parent_contact ? parent_contact_local_nonprim : NULL,
        primary_contact ? primary_contact_local_nonprim : NULL
        );

    return extended_contact_dto_local_var;
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
    if (parent_contact_local_nonprim) {
        simple_contact_dto_free(parent_contact_local_nonprim);
        parent_contact_local_nonprim = NULL;
    }
    if (primary_contact_local_nonprim) {
        simple_contact_dto_free(primary_contact_local_nonprim);
        primary_contact_local_nonprim = NULL;
    }
    return NULL;

}
