#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "contact_dto.h"


char* contact_dto_type_ToString(dealsservice_contact_dto_TYPE_e type) {
    char* typeArray[] =  { "NULL", "Individual", "Organization" };
    return typeArray[type];
}

dealsservice_contact_dto_TYPE_e contact_dto_type_FromString(char* type){
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

contact_dto_t *contact_dto_create(
    char *id,
    char *timestamp,
    char *qualified_name,
    char *tenant_id,
    dealsservice_contact_dto_TYPE_e type,
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
    char *birthday
    ) {
    contact_dto_t *contact_dto_local_var = malloc(sizeof(contact_dto_t));
    if (!contact_dto_local_var) {
        return NULL;
    }
    contact_dto_local_var->id = id;
    contact_dto_local_var->timestamp = timestamp;
    contact_dto_local_var->qualified_name = qualified_name;
    contact_dto_local_var->tenant_id = tenant_id;
    contact_dto_local_var->type = type;
    contact_dto_local_var->email = email;
    contact_dto_local_var->phone = phone;
    contact_dto_local_var->public_name = public_name;
    contact_dto_local_var->first_name = first_name;
    contact_dto_local_var->last_name = last_name;
    contact_dto_local_var->job_title = job_title;
    contact_dto_local_var->cover_url = cover_url;
    contact_dto_local_var->avatar_url = avatar_url;
    contact_dto_local_var->country_id = country_id;
    contact_dto_local_var->timezone_id = timezone_id;
    contact_dto_local_var->language_id = language_id;
    contact_dto_local_var->social_profile_id = social_profile_id;
    contact_dto_local_var->web_url = web_url;
    contact_dto_local_var->git_hub_url = git_hub_url;
    contact_dto_local_var->twitch_url = twitch_url;
    contact_dto_local_var->reddit_url = reddit_url;
    contact_dto_local_var->tik_tok_url = tik_tok_url;
    contact_dto_local_var->website_url = website_url;
    contact_dto_local_var->twitter_url = twitter_url;
    contact_dto_local_var->facebook_url = facebook_url;
    contact_dto_local_var->you_tube_url = you_tube_url;
    contact_dto_local_var->linked_in_url = linked_in_url;
    contact_dto_local_var->instagram_url = instagram_url;
    contact_dto_local_var->github_username = github_username;
    contact_dto_local_var->duns = duns;
    contact_dto_local_var->tax_id = tax_id;
    contact_dto_local_var->about = about;
    contact_dto_local_var->street = street;
    contact_dto_local_var->cart_id = cart_id;
    contact_dto_local_var->city_id = city_id;
    contact_dto_local_var->zip_code = zip_code;
    contact_dto_local_var->state_id = state_id;
    contact_dto_local_var->wallet_id = wallet_id;
    contact_dto_local_var->fax_number = fax_number;
    contact_dto_local_var->postal_code = postal_code;
    contact_dto_local_var->currency_id = currency_id;
    contact_dto_local_var->street_line1 = street_line1;
    contact_dto_local_var->street_line2 = street_line2;
    contact_dto_local_var->territory_id = territory_id;
    contact_dto_local_var->mobile_phone = mobile_phone;
    contact_dto_local_var->enrollment_id = enrollment_id;
    contact_dto_local_var->annual_revenue = annual_revenue;
    contact_dto_local_var->related_user_id = related_user_id;
    contact_dto_local_var->business_phone = business_phone;
    contact_dto_local_var->owner_contact_id = owner_contact_id;
    contact_dto_local_var->related_tenant_id = related_tenant_id;
    contact_dto_local_var->activity_feed_id = activity_feed_id;
    contact_dto_local_var->parent_contact_id = parent_contact_id;
    contact_dto_local_var->identity_provider = identity_provider;
    contact_dto_local_var->partner_profile_id = partner_profile_id;
    contact_dto_local_var->primary_contact_id = primary_contact_id;
    contact_dto_local_var->active_directory_id = active_directory_id;
    contact_dto_local_var->identity_provider_access_token = identity_provider_access_token;
    contact_dto_local_var->birthday = birthday;

    return contact_dto_local_var;
}


void contact_dto_free(contact_dto_t *contact_dto) {
    if(NULL == contact_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (contact_dto->id) {
        free(contact_dto->id);
        contact_dto->id = NULL;
    }
    if (contact_dto->timestamp) {
        free(contact_dto->timestamp);
        contact_dto->timestamp = NULL;
    }
    if (contact_dto->qualified_name) {
        free(contact_dto->qualified_name);
        contact_dto->qualified_name = NULL;
    }
    if (contact_dto->tenant_id) {
        free(contact_dto->tenant_id);
        contact_dto->tenant_id = NULL;
    }
    if (contact_dto->email) {
        free(contact_dto->email);
        contact_dto->email = NULL;
    }
    if (contact_dto->phone) {
        free(contact_dto->phone);
        contact_dto->phone = NULL;
    }
    if (contact_dto->public_name) {
        free(contact_dto->public_name);
        contact_dto->public_name = NULL;
    }
    if (contact_dto->first_name) {
        free(contact_dto->first_name);
        contact_dto->first_name = NULL;
    }
    if (contact_dto->last_name) {
        free(contact_dto->last_name);
        contact_dto->last_name = NULL;
    }
    if (contact_dto->job_title) {
        free(contact_dto->job_title);
        contact_dto->job_title = NULL;
    }
    if (contact_dto->cover_url) {
        free(contact_dto->cover_url);
        contact_dto->cover_url = NULL;
    }
    if (contact_dto->avatar_url) {
        free(contact_dto->avatar_url);
        contact_dto->avatar_url = NULL;
    }
    if (contact_dto->country_id) {
        free(contact_dto->country_id);
        contact_dto->country_id = NULL;
    }
    if (contact_dto->timezone_id) {
        free(contact_dto->timezone_id);
        contact_dto->timezone_id = NULL;
    }
    if (contact_dto->language_id) {
        free(contact_dto->language_id);
        contact_dto->language_id = NULL;
    }
    if (contact_dto->social_profile_id) {
        free(contact_dto->social_profile_id);
        contact_dto->social_profile_id = NULL;
    }
    if (contact_dto->web_url) {
        free(contact_dto->web_url);
        contact_dto->web_url = NULL;
    }
    if (contact_dto->git_hub_url) {
        free(contact_dto->git_hub_url);
        contact_dto->git_hub_url = NULL;
    }
    if (contact_dto->twitch_url) {
        free(contact_dto->twitch_url);
        contact_dto->twitch_url = NULL;
    }
    if (contact_dto->reddit_url) {
        free(contact_dto->reddit_url);
        contact_dto->reddit_url = NULL;
    }
    if (contact_dto->tik_tok_url) {
        free(contact_dto->tik_tok_url);
        contact_dto->tik_tok_url = NULL;
    }
    if (contact_dto->website_url) {
        free(contact_dto->website_url);
        contact_dto->website_url = NULL;
    }
    if (contact_dto->twitter_url) {
        free(contact_dto->twitter_url);
        contact_dto->twitter_url = NULL;
    }
    if (contact_dto->facebook_url) {
        free(contact_dto->facebook_url);
        contact_dto->facebook_url = NULL;
    }
    if (contact_dto->you_tube_url) {
        free(contact_dto->you_tube_url);
        contact_dto->you_tube_url = NULL;
    }
    if (contact_dto->linked_in_url) {
        free(contact_dto->linked_in_url);
        contact_dto->linked_in_url = NULL;
    }
    if (contact_dto->instagram_url) {
        free(contact_dto->instagram_url);
        contact_dto->instagram_url = NULL;
    }
    if (contact_dto->github_username) {
        free(contact_dto->github_username);
        contact_dto->github_username = NULL;
    }
    if (contact_dto->duns) {
        free(contact_dto->duns);
        contact_dto->duns = NULL;
    }
    if (contact_dto->tax_id) {
        free(contact_dto->tax_id);
        contact_dto->tax_id = NULL;
    }
    if (contact_dto->about) {
        free(contact_dto->about);
        contact_dto->about = NULL;
    }
    if (contact_dto->street) {
        free(contact_dto->street);
        contact_dto->street = NULL;
    }
    if (contact_dto->cart_id) {
        free(contact_dto->cart_id);
        contact_dto->cart_id = NULL;
    }
    if (contact_dto->city_id) {
        free(contact_dto->city_id);
        contact_dto->city_id = NULL;
    }
    if (contact_dto->zip_code) {
        free(contact_dto->zip_code);
        contact_dto->zip_code = NULL;
    }
    if (contact_dto->state_id) {
        free(contact_dto->state_id);
        contact_dto->state_id = NULL;
    }
    if (contact_dto->wallet_id) {
        free(contact_dto->wallet_id);
        contact_dto->wallet_id = NULL;
    }
    if (contact_dto->fax_number) {
        free(contact_dto->fax_number);
        contact_dto->fax_number = NULL;
    }
    if (contact_dto->postal_code) {
        free(contact_dto->postal_code);
        contact_dto->postal_code = NULL;
    }
    if (contact_dto->currency_id) {
        free(contact_dto->currency_id);
        contact_dto->currency_id = NULL;
    }
    if (contact_dto->street_line1) {
        free(contact_dto->street_line1);
        contact_dto->street_line1 = NULL;
    }
    if (contact_dto->street_line2) {
        free(contact_dto->street_line2);
        contact_dto->street_line2 = NULL;
    }
    if (contact_dto->territory_id) {
        free(contact_dto->territory_id);
        contact_dto->territory_id = NULL;
    }
    if (contact_dto->mobile_phone) {
        free(contact_dto->mobile_phone);
        contact_dto->mobile_phone = NULL;
    }
    if (contact_dto->enrollment_id) {
        free(contact_dto->enrollment_id);
        contact_dto->enrollment_id = NULL;
    }
    if (contact_dto->annual_revenue) {
        free(contact_dto->annual_revenue);
        contact_dto->annual_revenue = NULL;
    }
    if (contact_dto->related_user_id) {
        free(contact_dto->related_user_id);
        contact_dto->related_user_id = NULL;
    }
    if (contact_dto->business_phone) {
        free(contact_dto->business_phone);
        contact_dto->business_phone = NULL;
    }
    if (contact_dto->owner_contact_id) {
        free(contact_dto->owner_contact_id);
        contact_dto->owner_contact_id = NULL;
    }
    if (contact_dto->related_tenant_id) {
        free(contact_dto->related_tenant_id);
        contact_dto->related_tenant_id = NULL;
    }
    if (contact_dto->activity_feed_id) {
        free(contact_dto->activity_feed_id);
        contact_dto->activity_feed_id = NULL;
    }
    if (contact_dto->parent_contact_id) {
        free(contact_dto->parent_contact_id);
        contact_dto->parent_contact_id = NULL;
    }
    if (contact_dto->identity_provider) {
        free(contact_dto->identity_provider);
        contact_dto->identity_provider = NULL;
    }
    if (contact_dto->partner_profile_id) {
        free(contact_dto->partner_profile_id);
        contact_dto->partner_profile_id = NULL;
    }
    if (contact_dto->primary_contact_id) {
        free(contact_dto->primary_contact_id);
        contact_dto->primary_contact_id = NULL;
    }
    if (contact_dto->active_directory_id) {
        free(contact_dto->active_directory_id);
        contact_dto->active_directory_id = NULL;
    }
    if (contact_dto->identity_provider_access_token) {
        free(contact_dto->identity_provider_access_token);
        contact_dto->identity_provider_access_token = NULL;
    }
    if (contact_dto->birthday) {
        free(contact_dto->birthday);
        contact_dto->birthday = NULL;
    }
    free(contact_dto);
}

cJSON *contact_dto_convertToJSON(contact_dto_t *contact_dto) {
    cJSON *item = cJSON_CreateObject();

    // contact_dto->id
    if(contact_dto->id) {
    if(cJSON_AddStringToObject(item, "id", contact_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->timestamp
    if(contact_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", contact_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // contact_dto->qualified_name
    if(contact_dto->qualified_name) {
    if(cJSON_AddStringToObject(item, "qualifiedName", contact_dto->qualified_name) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->tenant_id
    if(contact_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", contact_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->type
    if(contact_dto->type != dealsservice_contact_dto_TYPE_NULL) {
    if(cJSON_AddStringToObject(item, "type", typecontact_dto_ToString(contact_dto->type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // contact_dto->email
    if(contact_dto->email) {
    if(cJSON_AddStringToObject(item, "email", contact_dto->email) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->phone
    if(contact_dto->phone) {
    if(cJSON_AddStringToObject(item, "phone", contact_dto->phone) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->public_name
    if(contact_dto->public_name) {
    if(cJSON_AddStringToObject(item, "publicName", contact_dto->public_name) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->first_name
    if(contact_dto->first_name) {
    if(cJSON_AddStringToObject(item, "firstName", contact_dto->first_name) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->last_name
    if(contact_dto->last_name) {
    if(cJSON_AddStringToObject(item, "lastName", contact_dto->last_name) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->job_title
    if(contact_dto->job_title) {
    if(cJSON_AddStringToObject(item, "jobTitle", contact_dto->job_title) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->cover_url
    if(contact_dto->cover_url) {
    if(cJSON_AddStringToObject(item, "coverUrl", contact_dto->cover_url) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->avatar_url
    if(contact_dto->avatar_url) {
    if(cJSON_AddStringToObject(item, "avatarUrl", contact_dto->avatar_url) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->country_id
    if(contact_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryId", contact_dto->country_id) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->timezone_id
    if(contact_dto->timezone_id) {
    if(cJSON_AddStringToObject(item, "timezoneId", contact_dto->timezone_id) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->language_id
    if(contact_dto->language_id) {
    if(cJSON_AddStringToObject(item, "languageId", contact_dto->language_id) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->social_profile_id
    if(contact_dto->social_profile_id) {
    if(cJSON_AddStringToObject(item, "socialProfileId", contact_dto->social_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->web_url
    if(contact_dto->web_url) {
    if(cJSON_AddStringToObject(item, "webUrl", contact_dto->web_url) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->git_hub_url
    if(contact_dto->git_hub_url) {
    if(cJSON_AddStringToObject(item, "gitHubUrl", contact_dto->git_hub_url) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->twitch_url
    if(contact_dto->twitch_url) {
    if(cJSON_AddStringToObject(item, "twitchUrl", contact_dto->twitch_url) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->reddit_url
    if(contact_dto->reddit_url) {
    if(cJSON_AddStringToObject(item, "redditUrl", contact_dto->reddit_url) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->tik_tok_url
    if(contact_dto->tik_tok_url) {
    if(cJSON_AddStringToObject(item, "tikTokUrl", contact_dto->tik_tok_url) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->website_url
    if(contact_dto->website_url) {
    if(cJSON_AddStringToObject(item, "websiteUrl", contact_dto->website_url) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->twitter_url
    if(contact_dto->twitter_url) {
    if(cJSON_AddStringToObject(item, "twitterUrl", contact_dto->twitter_url) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->facebook_url
    if(contact_dto->facebook_url) {
    if(cJSON_AddStringToObject(item, "facebookUrl", contact_dto->facebook_url) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->you_tube_url
    if(contact_dto->you_tube_url) {
    if(cJSON_AddStringToObject(item, "youTubeUrl", contact_dto->you_tube_url) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->linked_in_url
    if(contact_dto->linked_in_url) {
    if(cJSON_AddStringToObject(item, "linkedInUrl", contact_dto->linked_in_url) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->instagram_url
    if(contact_dto->instagram_url) {
    if(cJSON_AddStringToObject(item, "instagramUrl", contact_dto->instagram_url) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->github_username
    if(contact_dto->github_username) {
    if(cJSON_AddStringToObject(item, "githubUsername", contact_dto->github_username) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->duns
    if(contact_dto->duns) {
    if(cJSON_AddStringToObject(item, "duns", contact_dto->duns) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->tax_id
    if(contact_dto->tax_id) {
    if(cJSON_AddStringToObject(item, "taxId", contact_dto->tax_id) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->about
    if(contact_dto->about) {
    if(cJSON_AddStringToObject(item, "about", contact_dto->about) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->street
    if(contact_dto->street) {
    if(cJSON_AddStringToObject(item, "street", contact_dto->street) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->cart_id
    if(contact_dto->cart_id) {
    if(cJSON_AddStringToObject(item, "cartId", contact_dto->cart_id) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->city_id
    if(contact_dto->city_id) {
    if(cJSON_AddStringToObject(item, "cityId", contact_dto->city_id) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->zip_code
    if(contact_dto->zip_code) {
    if(cJSON_AddStringToObject(item, "zipCode", contact_dto->zip_code) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->state_id
    if(contact_dto->state_id) {
    if(cJSON_AddStringToObject(item, "stateId", contact_dto->state_id) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->wallet_id
    if(contact_dto->wallet_id) {
    if(cJSON_AddStringToObject(item, "walletId", contact_dto->wallet_id) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->fax_number
    if(contact_dto->fax_number) {
    if(cJSON_AddStringToObject(item, "faxNumber", contact_dto->fax_number) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->postal_code
    if(contact_dto->postal_code) {
    if(cJSON_AddStringToObject(item, "postalCode", contact_dto->postal_code) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->currency_id
    if(contact_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", contact_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->street_line1
    if(contact_dto->street_line1) {
    if(cJSON_AddStringToObject(item, "streetLine1", contact_dto->street_line1) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->street_line2
    if(contact_dto->street_line2) {
    if(cJSON_AddStringToObject(item, "streetLine2", contact_dto->street_line2) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->territory_id
    if(contact_dto->territory_id) {
    if(cJSON_AddStringToObject(item, "territoryId", contact_dto->territory_id) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->mobile_phone
    if(contact_dto->mobile_phone) {
    if(cJSON_AddStringToObject(item, "mobilePhone", contact_dto->mobile_phone) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->enrollment_id
    if(contact_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", contact_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->annual_revenue
    if(contact_dto->annual_revenue) {
    if(cJSON_AddStringToObject(item, "annualRevenue", contact_dto->annual_revenue) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->related_user_id
    if(contact_dto->related_user_id) {
    if(cJSON_AddStringToObject(item, "relatedUserId", contact_dto->related_user_id) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->business_phone
    if(contact_dto->business_phone) {
    if(cJSON_AddStringToObject(item, "businessPhone", contact_dto->business_phone) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->owner_contact_id
    if(contact_dto->owner_contact_id) {
    if(cJSON_AddStringToObject(item, "ownerContactId", contact_dto->owner_contact_id) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->related_tenant_id
    if(contact_dto->related_tenant_id) {
    if(cJSON_AddStringToObject(item, "relatedTenantId", contact_dto->related_tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->activity_feed_id
    if(contact_dto->activity_feed_id) {
    if(cJSON_AddStringToObject(item, "activityFeedId", contact_dto->activity_feed_id) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->parent_contact_id
    if(contact_dto->parent_contact_id) {
    if(cJSON_AddStringToObject(item, "parentContactId", contact_dto->parent_contact_id) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->identity_provider
    if(contact_dto->identity_provider) {
    if(cJSON_AddStringToObject(item, "identityProvider", contact_dto->identity_provider) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->partner_profile_id
    if(contact_dto->partner_profile_id) {
    if(cJSON_AddStringToObject(item, "partnerProfileId", contact_dto->partner_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->primary_contact_id
    if(contact_dto->primary_contact_id) {
    if(cJSON_AddStringToObject(item, "primaryContactId", contact_dto->primary_contact_id) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->active_directory_id
    if(contact_dto->active_directory_id) {
    if(cJSON_AddStringToObject(item, "activeDirectoryId", contact_dto->active_directory_id) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->identity_provider_access_token
    if(contact_dto->identity_provider_access_token) {
    if(cJSON_AddStringToObject(item, "identityProviderAccessToken", contact_dto->identity_provider_access_token) == NULL) {
    goto fail; //String
    }
    }


    // contact_dto->birthday
    if(contact_dto->birthday) {
    if(cJSON_AddStringToObject(item, "birthday", contact_dto->birthday) == NULL) {
    goto fail; //Date-Time
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

contact_dto_t *contact_dto_parseFromJSON(cJSON *contact_dtoJSON){

    contact_dto_t *contact_dto_local_var = NULL;

    // contact_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // contact_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // contact_dto->qualified_name
    cJSON *qualified_name = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "qualifiedName");
    if (qualified_name) { 
    if(!cJSON_IsString(qualified_name) && !cJSON_IsNull(qualified_name))
    {
    goto end; //String
    }
    }

    // contact_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // contact_dto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "type");
    dealsservice_contact_dto_TYPE_e typeVariable;
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //Enum
    }
    typeVariable = contact_dto_type_FromString(type->valuestring);
    }

    // contact_dto->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "email");
    if (email) { 
    if(!cJSON_IsString(email) && !cJSON_IsNull(email))
    {
    goto end; //String
    }
    }

    // contact_dto->phone
    cJSON *phone = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "phone");
    if (phone) { 
    if(!cJSON_IsString(phone) && !cJSON_IsNull(phone))
    {
    goto end; //String
    }
    }

    // contact_dto->public_name
    cJSON *public_name = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "publicName");
    if (public_name) { 
    if(!cJSON_IsString(public_name) && !cJSON_IsNull(public_name))
    {
    goto end; //String
    }
    }

    // contact_dto->first_name
    cJSON *first_name = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "firstName");
    if (first_name) { 
    if(!cJSON_IsString(first_name) && !cJSON_IsNull(first_name))
    {
    goto end; //String
    }
    }

    // contact_dto->last_name
    cJSON *last_name = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "lastName");
    if (last_name) { 
    if(!cJSON_IsString(last_name) && !cJSON_IsNull(last_name))
    {
    goto end; //String
    }
    }

    // contact_dto->job_title
    cJSON *job_title = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "jobTitle");
    if (job_title) { 
    if(!cJSON_IsString(job_title) && !cJSON_IsNull(job_title))
    {
    goto end; //String
    }
    }

    // contact_dto->cover_url
    cJSON *cover_url = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "coverUrl");
    if (cover_url) { 
    if(!cJSON_IsString(cover_url) && !cJSON_IsNull(cover_url))
    {
    goto end; //String
    }
    }

    // contact_dto->avatar_url
    cJSON *avatar_url = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "avatarUrl");
    if (avatar_url) { 
    if(!cJSON_IsString(avatar_url) && !cJSON_IsNull(avatar_url))
    {
    goto end; //String
    }
    }

    // contact_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "countryId");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }

    // contact_dto->timezone_id
    cJSON *timezone_id = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "timezoneId");
    if (timezone_id) { 
    if(!cJSON_IsString(timezone_id) && !cJSON_IsNull(timezone_id))
    {
    goto end; //String
    }
    }

    // contact_dto->language_id
    cJSON *language_id = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "languageId");
    if (language_id) { 
    if(!cJSON_IsString(language_id) && !cJSON_IsNull(language_id))
    {
    goto end; //String
    }
    }

    // contact_dto->social_profile_id
    cJSON *social_profile_id = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "socialProfileId");
    if (social_profile_id) { 
    if(!cJSON_IsString(social_profile_id) && !cJSON_IsNull(social_profile_id))
    {
    goto end; //String
    }
    }

    // contact_dto->web_url
    cJSON *web_url = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "webUrl");
    if (web_url) { 
    if(!cJSON_IsString(web_url) && !cJSON_IsNull(web_url))
    {
    goto end; //String
    }
    }

    // contact_dto->git_hub_url
    cJSON *git_hub_url = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "gitHubUrl");
    if (git_hub_url) { 
    if(!cJSON_IsString(git_hub_url) && !cJSON_IsNull(git_hub_url))
    {
    goto end; //String
    }
    }

    // contact_dto->twitch_url
    cJSON *twitch_url = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "twitchUrl");
    if (twitch_url) { 
    if(!cJSON_IsString(twitch_url) && !cJSON_IsNull(twitch_url))
    {
    goto end; //String
    }
    }

    // contact_dto->reddit_url
    cJSON *reddit_url = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "redditUrl");
    if (reddit_url) { 
    if(!cJSON_IsString(reddit_url) && !cJSON_IsNull(reddit_url))
    {
    goto end; //String
    }
    }

    // contact_dto->tik_tok_url
    cJSON *tik_tok_url = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "tikTokUrl");
    if (tik_tok_url) { 
    if(!cJSON_IsString(tik_tok_url) && !cJSON_IsNull(tik_tok_url))
    {
    goto end; //String
    }
    }

    // contact_dto->website_url
    cJSON *website_url = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "websiteUrl");
    if (website_url) { 
    if(!cJSON_IsString(website_url) && !cJSON_IsNull(website_url))
    {
    goto end; //String
    }
    }

    // contact_dto->twitter_url
    cJSON *twitter_url = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "twitterUrl");
    if (twitter_url) { 
    if(!cJSON_IsString(twitter_url) && !cJSON_IsNull(twitter_url))
    {
    goto end; //String
    }
    }

    // contact_dto->facebook_url
    cJSON *facebook_url = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "facebookUrl");
    if (facebook_url) { 
    if(!cJSON_IsString(facebook_url) && !cJSON_IsNull(facebook_url))
    {
    goto end; //String
    }
    }

    // contact_dto->you_tube_url
    cJSON *you_tube_url = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "youTubeUrl");
    if (you_tube_url) { 
    if(!cJSON_IsString(you_tube_url) && !cJSON_IsNull(you_tube_url))
    {
    goto end; //String
    }
    }

    // contact_dto->linked_in_url
    cJSON *linked_in_url = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "linkedInUrl");
    if (linked_in_url) { 
    if(!cJSON_IsString(linked_in_url) && !cJSON_IsNull(linked_in_url))
    {
    goto end; //String
    }
    }

    // contact_dto->instagram_url
    cJSON *instagram_url = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "instagramUrl");
    if (instagram_url) { 
    if(!cJSON_IsString(instagram_url) && !cJSON_IsNull(instagram_url))
    {
    goto end; //String
    }
    }

    // contact_dto->github_username
    cJSON *github_username = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "githubUsername");
    if (github_username) { 
    if(!cJSON_IsString(github_username) && !cJSON_IsNull(github_username))
    {
    goto end; //String
    }
    }

    // contact_dto->duns
    cJSON *duns = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "duns");
    if (duns) { 
    if(!cJSON_IsString(duns) && !cJSON_IsNull(duns))
    {
    goto end; //String
    }
    }

    // contact_dto->tax_id
    cJSON *tax_id = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "taxId");
    if (tax_id) { 
    if(!cJSON_IsString(tax_id) && !cJSON_IsNull(tax_id))
    {
    goto end; //String
    }
    }

    // contact_dto->about
    cJSON *about = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "about");
    if (about) { 
    if(!cJSON_IsString(about) && !cJSON_IsNull(about))
    {
    goto end; //String
    }
    }

    // contact_dto->street
    cJSON *street = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "street");
    if (street) { 
    if(!cJSON_IsString(street) && !cJSON_IsNull(street))
    {
    goto end; //String
    }
    }

    // contact_dto->cart_id
    cJSON *cart_id = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "cartId");
    if (cart_id) { 
    if(!cJSON_IsString(cart_id) && !cJSON_IsNull(cart_id))
    {
    goto end; //String
    }
    }

    // contact_dto->city_id
    cJSON *city_id = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "cityId");
    if (city_id) { 
    if(!cJSON_IsString(city_id) && !cJSON_IsNull(city_id))
    {
    goto end; //String
    }
    }

    // contact_dto->zip_code
    cJSON *zip_code = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "zipCode");
    if (zip_code) { 
    if(!cJSON_IsString(zip_code) && !cJSON_IsNull(zip_code))
    {
    goto end; //String
    }
    }

    // contact_dto->state_id
    cJSON *state_id = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "stateId");
    if (state_id) { 
    if(!cJSON_IsString(state_id) && !cJSON_IsNull(state_id))
    {
    goto end; //String
    }
    }

    // contact_dto->wallet_id
    cJSON *wallet_id = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "walletId");
    if (wallet_id) { 
    if(!cJSON_IsString(wallet_id) && !cJSON_IsNull(wallet_id))
    {
    goto end; //String
    }
    }

    // contact_dto->fax_number
    cJSON *fax_number = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "faxNumber");
    if (fax_number) { 
    if(!cJSON_IsString(fax_number) && !cJSON_IsNull(fax_number))
    {
    goto end; //String
    }
    }

    // contact_dto->postal_code
    cJSON *postal_code = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "postalCode");
    if (postal_code) { 
    if(!cJSON_IsString(postal_code) && !cJSON_IsNull(postal_code))
    {
    goto end; //String
    }
    }

    // contact_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // contact_dto->street_line1
    cJSON *street_line1 = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "streetLine1");
    if (street_line1) { 
    if(!cJSON_IsString(street_line1) && !cJSON_IsNull(street_line1))
    {
    goto end; //String
    }
    }

    // contact_dto->street_line2
    cJSON *street_line2 = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "streetLine2");
    if (street_line2) { 
    if(!cJSON_IsString(street_line2) && !cJSON_IsNull(street_line2))
    {
    goto end; //String
    }
    }

    // contact_dto->territory_id
    cJSON *territory_id = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "territoryId");
    if (territory_id) { 
    if(!cJSON_IsString(territory_id) && !cJSON_IsNull(territory_id))
    {
    goto end; //String
    }
    }

    // contact_dto->mobile_phone
    cJSON *mobile_phone = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "mobilePhone");
    if (mobile_phone) { 
    if(!cJSON_IsString(mobile_phone) && !cJSON_IsNull(mobile_phone))
    {
    goto end; //String
    }
    }

    // contact_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // contact_dto->annual_revenue
    cJSON *annual_revenue = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "annualRevenue");
    if (annual_revenue) { 
    if(!cJSON_IsString(annual_revenue) && !cJSON_IsNull(annual_revenue))
    {
    goto end; //String
    }
    }

    // contact_dto->related_user_id
    cJSON *related_user_id = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "relatedUserId");
    if (related_user_id) { 
    if(!cJSON_IsString(related_user_id) && !cJSON_IsNull(related_user_id))
    {
    goto end; //String
    }
    }

    // contact_dto->business_phone
    cJSON *business_phone = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "businessPhone");
    if (business_phone) { 
    if(!cJSON_IsString(business_phone) && !cJSON_IsNull(business_phone))
    {
    goto end; //String
    }
    }

    // contact_dto->owner_contact_id
    cJSON *owner_contact_id = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "ownerContactId");
    if (owner_contact_id) { 
    if(!cJSON_IsString(owner_contact_id) && !cJSON_IsNull(owner_contact_id))
    {
    goto end; //String
    }
    }

    // contact_dto->related_tenant_id
    cJSON *related_tenant_id = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "relatedTenantId");
    if (related_tenant_id) { 
    if(!cJSON_IsString(related_tenant_id) && !cJSON_IsNull(related_tenant_id))
    {
    goto end; //String
    }
    }

    // contact_dto->activity_feed_id
    cJSON *activity_feed_id = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "activityFeedId");
    if (activity_feed_id) { 
    if(!cJSON_IsString(activity_feed_id) && !cJSON_IsNull(activity_feed_id))
    {
    goto end; //String
    }
    }

    // contact_dto->parent_contact_id
    cJSON *parent_contact_id = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "parentContactId");
    if (parent_contact_id) { 
    if(!cJSON_IsString(parent_contact_id) && !cJSON_IsNull(parent_contact_id))
    {
    goto end; //String
    }
    }

    // contact_dto->identity_provider
    cJSON *identity_provider = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "identityProvider");
    if (identity_provider) { 
    if(!cJSON_IsString(identity_provider) && !cJSON_IsNull(identity_provider))
    {
    goto end; //String
    }
    }

    // contact_dto->partner_profile_id
    cJSON *partner_profile_id = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "partnerProfileId");
    if (partner_profile_id) { 
    if(!cJSON_IsString(partner_profile_id) && !cJSON_IsNull(partner_profile_id))
    {
    goto end; //String
    }
    }

    // contact_dto->primary_contact_id
    cJSON *primary_contact_id = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "primaryContactId");
    if (primary_contact_id) { 
    if(!cJSON_IsString(primary_contact_id) && !cJSON_IsNull(primary_contact_id))
    {
    goto end; //String
    }
    }

    // contact_dto->active_directory_id
    cJSON *active_directory_id = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "activeDirectoryId");
    if (active_directory_id) { 
    if(!cJSON_IsString(active_directory_id) && !cJSON_IsNull(active_directory_id))
    {
    goto end; //String
    }
    }

    // contact_dto->identity_provider_access_token
    cJSON *identity_provider_access_token = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "identityProviderAccessToken");
    if (identity_provider_access_token) { 
    if(!cJSON_IsString(identity_provider_access_token) && !cJSON_IsNull(identity_provider_access_token))
    {
    goto end; //String
    }
    }

    // contact_dto->birthday
    cJSON *birthday = cJSON_GetObjectItemCaseSensitive(contact_dtoJSON, "birthday");
    if (birthday) { 
    if(!cJSON_IsString(birthday) && !cJSON_IsNull(birthday))
    {
    goto end; //DateTime
    }
    }


    contact_dto_local_var = contact_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        qualified_name && !cJSON_IsNull(qualified_name) ? strdup(qualified_name->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        type ? typeVariable : dealsservice_contact_dto_TYPE_NULL,
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
        birthday && !cJSON_IsNull(birthday) ? strdup(birthday->valuestring) : NULL
        );

    return contact_dto_local_var;
end:
    return NULL;

}
