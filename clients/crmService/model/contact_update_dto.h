/*
 * contact_update_dto.h
 *
 * 
 */

#ifndef _contact_update_dto_H_
#define _contact_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct contact_update_dto_t contact_update_dto_t;


// Enum TYPE for contact_update_dto

typedef enum  { crmservice_contact_update_dto_TYPE_NULL = 0, crmservice_contact_update_dto_TYPE_Individual, crmservice_contact_update_dto_TYPE_Organization } crmservice_contact_update_dto_TYPE_e;

char* contact_update_dto_type_ToString(crmservice_contact_update_dto_TYPE_e type);

crmservice_contact_update_dto_TYPE_e contact_update_dto_type_FromString(char* type);



typedef struct contact_update_dto_t {
    crmservice_contact_update_dto_TYPE_e type; //enum
    char *birthday; //date time
    char *duns; // string
    char *tax_id; // string
    char *email; // string
    char *first_name; // string
    char *last_name; // string
    char *primary_contact_id; // string
    char *qualified_name; // string
    char *about; // string
    char *mobile_phone; // string
    char *business_phone; // string
    char *job_title; // string
    char *country_id; // string
    char *parent_contact_id; // string
    char *address_line1; // string
    char *address_line2; // string
    char *postal_code; // string
    char *state_id; // string
    char *city_id; // string
    char *street_line1; // string
    char *street_line2; // string
    char *currency_id; // string
    char *language_id; // string
    char *timezone_id; // string
    char *cover_url; // string
    char *github_username; // string
    char *instagram_username; // string
    char *web_url; // string
    char *twitch_url; // string
    char *reddit_url; // string
    char *git_hub_url; // string
    char *tik_tok_url; // string
    char *twitter_url; // string
    char *you_tube_url; // string
    char *facebook_url; // string
    char *linked_in_url; // string
    char *instagram_url; // string
    char *tik_tok_username; // string
    char *stack_exchange_url; // string
    char *stack_overflow_url; // string
    char *fax_number; // string

} contact_update_dto_t;

contact_update_dto_t *contact_update_dto_create(
    crmservice_contact_update_dto_TYPE_e type,
    char *birthday,
    char *duns,
    char *tax_id,
    char *email,
    char *first_name,
    char *last_name,
    char *primary_contact_id,
    char *qualified_name,
    char *about,
    char *mobile_phone,
    char *business_phone,
    char *job_title,
    char *country_id,
    char *parent_contact_id,
    char *address_line1,
    char *address_line2,
    char *postal_code,
    char *state_id,
    char *city_id,
    char *street_line1,
    char *street_line2,
    char *currency_id,
    char *language_id,
    char *timezone_id,
    char *cover_url,
    char *github_username,
    char *instagram_username,
    char *web_url,
    char *twitch_url,
    char *reddit_url,
    char *git_hub_url,
    char *tik_tok_url,
    char *twitter_url,
    char *you_tube_url,
    char *facebook_url,
    char *linked_in_url,
    char *instagram_url,
    char *tik_tok_username,
    char *stack_exchange_url,
    char *stack_overflow_url,
    char *fax_number
);

void contact_update_dto_free(contact_update_dto_t *contact_update_dto);

contact_update_dto_t *contact_update_dto_parseFromJSON(cJSON *contact_update_dtoJSON);

cJSON *contact_update_dto_convertToJSON(contact_update_dto_t *contact_update_dto);

#endif /* _contact_update_dto_H_ */

