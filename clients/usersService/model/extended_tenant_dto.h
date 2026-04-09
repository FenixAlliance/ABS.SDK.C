/*
 * extended_tenant_dto.h
 *
 * 
 */

#ifndef _extended_tenant_dto_H_
#define _extended_tenant_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct extended_tenant_dto_t extended_tenant_dto_t;

#include "cart_dto.h"
#include "social_profile_dto.h"
#include "wallet_dto.h"



typedef struct extended_tenant_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *qualified_name; // string
    char *tax_id; // string
    char *about; // string
    char *wallet_id; // string
    char *social_feed_id; // string
    char *business_industry_id; // string
    char *business_segment_id; // string
    char *social_profile_id; // string
    char *language_id; // string
    char *name; // string
    char *duns; // string
    char *slogan; // string
    char *legal_name; // string
    char *cover_url; // string
    char *avatar_url; // string
    char *cart_id; // string
    char *currency_id; // string
    char *timezone_id; // string
    char *country_id; // string
    char *state_id; // string
    char *city_id; // string
    char *email; // string
    char *phone; // string
    char *web_url; // string
    char *facebook_url; // string
    char *twitter_url; // string
    char *git_hub_url; // string
    char *linked_in_url; // string
    char *instagram_url; // string
    char *you_tube_url; // string
    char *whats_app_number; // string
    char *support_phone_number; // string
    int verified; //boolean
    char *business_name; // string
    char *business_legal_name; // string
    char *twitter_username; // string
    struct cart_dto_t *cart; //model
    struct wallet_dto_t *wallet; //model
    struct social_profile_dto_t *social_profile; //model

} extended_tenant_dto_t;

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
);

void extended_tenant_dto_free(extended_tenant_dto_t *extended_tenant_dto);

extended_tenant_dto_t *extended_tenant_dto_parseFromJSON(cJSON *extended_tenant_dtoJSON);

cJSON *extended_tenant_dto_convertToJSON(extended_tenant_dto_t *extended_tenant_dto);

#endif /* _extended_tenant_dto_H_ */

