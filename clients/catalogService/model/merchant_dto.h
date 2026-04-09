/*
 * merchant_dto.h
 *
 * 
 */

#ifndef _merchant_dto_H_
#define _merchant_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct merchant_dto_t merchant_dto_t;




typedef struct merchant_dto_t {
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
    int products_count; //numeric
    double merchant_rating; //numeric

} merchant_dto_t;

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
);

void merchant_dto_free(merchant_dto_t *merchant_dto);

merchant_dto_t *merchant_dto_parseFromJSON(cJSON *merchant_dtoJSON);

cJSON *merchant_dto_convertToJSON(merchant_dto_t *merchant_dto);

#endif /* _merchant_dto_H_ */

