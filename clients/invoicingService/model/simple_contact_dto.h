/*
 * simple_contact_dto.h
 *
 * 
 */

#ifndef _simple_contact_dto_H_
#define _simple_contact_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct simple_contact_dto_t simple_contact_dto_t;


// Enum TYPE for simple_contact_dto

typedef enum  { invoicingservice_simple_contact_dto_TYPE_NULL = 0, invoicingservice_simple_contact_dto_TYPE_Individual, invoicingservice_simple_contact_dto_TYPE_Organization } invoicingservice_simple_contact_dto_TYPE_e;

char* simple_contact_dto_type_ToString(invoicingservice_simple_contact_dto_TYPE_e type);

invoicingservice_simple_contact_dto_TYPE_e simple_contact_dto_type_FromString(char* type);



typedef struct simple_contact_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *qualified_name; // string
    char *tenant_id; // string
    invoicingservice_simple_contact_dto_TYPE_e type; //enum
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

} simple_contact_dto_t;

simple_contact_dto_t *simple_contact_dto_create(
    char *id,
    char *timestamp,
    char *qualified_name,
    char *tenant_id,
    invoicingservice_simple_contact_dto_TYPE_e type,
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
    char *github_username
);

void simple_contact_dto_free(simple_contact_dto_t *simple_contact_dto);

simple_contact_dto_t *simple_contact_dto_parseFromJSON(cJSON *simple_contact_dtoJSON);

cJSON *simple_contact_dto_convertToJSON(simple_contact_dto_t *simple_contact_dto);

#endif /* _simple_contact_dto_H_ */

