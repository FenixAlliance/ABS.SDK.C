/*
 * extended_contact_dto.h
 *
 * 
 */

#ifndef _extended_contact_dto_H_
#define _extended_contact_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct extended_contact_dto_t extended_contact_dto_t;

#include "cart_dto.h"
#include "simple_contact_dto.h"
#include "social_profile_dto.h"
#include "wallet_dto.h"

// Enum TYPE for extended_contact_dto

typedef enum  { crmservice_extended_contact_dto_TYPE_NULL = 0, crmservice_extended_contact_dto_TYPE_Individual, crmservice_extended_contact_dto_TYPE_Organization } crmservice_extended_contact_dto_TYPE_e;

char* extended_contact_dto_type_ToString(crmservice_extended_contact_dto_TYPE_e type);

crmservice_extended_contact_dto_TYPE_e extended_contact_dto_type_FromString(char* type);



typedef struct extended_contact_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *qualified_name; // string
    char *tenant_id; // string
    crmservice_extended_contact_dto_TYPE_e type; //enum
    char *email; // string
    char *phone; // string
    char *public_name; // string
    char *first_name; // string
    char *last_name; // string
    char *job_title; // string
    char *cover_url; // string
    char *avatar_url; // string
    char *country_id; // string
    char *timezone_id; // string
    char *language_id; // string
    char *social_profile_id; // string
    char *web_url; // string
    char *git_hub_url; // string
    char *twitch_url; // string
    char *reddit_url; // string
    char *tik_tok_url; // string
    char *website_url; // string
    char *twitter_url; // string
    char *facebook_url; // string
    char *you_tube_url; // string
    char *linked_in_url; // string
    char *instagram_url; // string
    char *github_username; // string
    char *duns; // string
    char *tax_id; // string
    char *about; // string
    char *street; // string
    char *cart_id; // string
    char *city_id; // string
    char *zip_code; // string
    char *state_id; // string
    char *wallet_id; // string
    char *fax_number; // string
    char *postal_code; // string
    char *currency_id; // string
    char *street_line1; // string
    char *street_line2; // string
    char *territory_id; // string
    char *mobile_phone; // string
    char *enrollment_id; // string
    char *annual_revenue; // string
    char *related_user_id; // string
    char *business_phone; // string
    char *owner_contact_id; // string
    char *related_tenant_id; // string
    char *activity_feed_id; // string
    char *parent_contact_id; // string
    char *identity_provider; // string
    char *partner_profile_id; // string
    char *primary_contact_id; // string
    char *active_directory_id; // string
    char *identity_provider_access_token; // string
    char *birthday; //date time
    struct cart_dto_t *cart; //model
    struct wallet_dto_t *wallet; //model
    struct social_profile_dto_t *social_profile; //model
    struct simple_contact_dto_t *parent_contact; //model
    struct simple_contact_dto_t *primary_contact; //model

} extended_contact_dto_t;

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
);

void extended_contact_dto_free(extended_contact_dto_t *extended_contact_dto);

extended_contact_dto_t *extended_contact_dto_parseFromJSON(cJSON *extended_contact_dtoJSON);

cJSON *extended_contact_dto_convertToJSON(extended_contact_dto_t *extended_contact_dto);

#endif /* _extended_contact_dto_H_ */

