/*
 * contact_create_dto.h
 *
 * 
 */

#ifndef _contact_create_dto_H_
#define _contact_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct contact_create_dto_t contact_create_dto_t;


// Enum TYPE for contact_create_dto

typedef enum  { crmservice_contact_create_dto_TYPE_NULL = 0, crmservice_contact_create_dto_TYPE_Individual, crmservice_contact_create_dto_TYPE_Organization } crmservice_contact_create_dto_TYPE_e;

char* contact_create_dto_type_ToString(crmservice_contact_create_dto_TYPE_e type);

crmservice_contact_create_dto_TYPE_e contact_create_dto_type_FromString(char* type);



typedef struct contact_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    crmservice_contact_create_dto_TYPE_e type; //enum
    char *first_name; // string
    char *last_name; // string
    char *email; // string
    char *tax_id; // string
    char *primary_contact_id; // string
    char *qualified_name; // string
    char *about; // string
    char *country_id; // string
    char *state_id; // string
    char *city_id; // string
    char *mobile_phone; // string
    char *business_phone; // string
    char *postal_code; // string
    char *duns; // string
    char *job_title; // string
    char *web_url; // string
    char *currency_id; // string
    char *language_id; // string
    char *timezone_id; // string
    char *birthday; //date time
    char *street_line1; // string
    char *street_line2; // string
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
    char *instagram_username; // string
    char *tik_tok_username; // string
    char *stack_exchange_url; // string
    char *stack_overflow_url; // string
    char *parent_contact_id; // string
    char *fax_number; // string

} contact_create_dto_t;

contact_create_dto_t *contact_create_dto_create(
    char *id,
    char *timestamp,
    crmservice_contact_create_dto_TYPE_e type,
    char *first_name,
    char *last_name,
    char *email,
    char *tax_id,
    char *primary_contact_id,
    char *qualified_name,
    char *about,
    char *country_id,
    char *state_id,
    char *city_id,
    char *mobile_phone,
    char *business_phone,
    char *postal_code,
    char *duns,
    char *job_title,
    char *web_url,
    char *currency_id,
    char *language_id,
    char *timezone_id,
    char *birthday,
    char *street_line1,
    char *street_line2,
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
    char *instagram_username,
    char *tik_tok_username,
    char *stack_exchange_url,
    char *stack_overflow_url,
    char *parent_contact_id,
    char *fax_number
);

void contact_create_dto_free(contact_create_dto_t *contact_create_dto);

contact_create_dto_t *contact_create_dto_parseFromJSON(cJSON *contact_create_dtoJSON);

cJSON *contact_create_dto_convertToJSON(contact_create_dto_t *contact_create_dto);

#endif /* _contact_create_dto_H_ */

