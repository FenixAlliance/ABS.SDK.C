/*
 * tenant_update_dto.h
 *
 * 
 */

#ifndef _tenant_update_dto_H_
#define _tenant_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct tenant_update_dto_t tenant_update_dto_t;




typedef struct tenant_update_dto_t {
    char *name; // string
    char *legal_name; // string
    char *email; // string
    char *phone; // string
    char *web_url; // string
    char *about; // string
    char *slogan; // string
    char *handler; // string
    char *currency_id; // string
    char *duns; // string
    char *tax_id; // string
    char *avatar_url; // string
    char *twitter_username; // string
    char *facebook_url; // string
    char *twitter_url; // string
    char *git_hub_url; // string
    char *linked_in_url; // string
    char *instagram_url; // string
    char *you_tube_url; // string
    char *whats_app_number; // string
    char *support_phone_number; // string
    char *country_id; // string
    char *timezone_id; // string
    char *language_id; // string
    char *state_id; // string
    char *city_id; // string

} tenant_update_dto_t;

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
);

void tenant_update_dto_free(tenant_update_dto_t *tenant_update_dto);

tenant_update_dto_t *tenant_update_dto_parseFromJSON(cJSON *tenant_update_dtoJSON);

cJSON *tenant_update_dto_convertToJSON(tenant_update_dto_t *tenant_update_dto);

#endif /* _tenant_update_dto_H_ */

