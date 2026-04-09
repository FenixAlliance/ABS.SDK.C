/*
 * simple_user_dto.h
 *
 * 
 */

#ifndef _simple_user_dto_H_
#define _simple_user_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct simple_user_dto_t simple_user_dto_t;




typedef struct simple_user_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *full_name; // string
    char *qualified_name; // string
    char *public_name; // string
    char *handler; // string
    char *last_name; // string
    char *first_name; // string
    char *cover_url; // string
    char *avatar_url; // string
    char *git_hub_url; // string
    char *country_id; // string
    char *timezone_id; // string
    char *website_url; // string
    char *twitter_url; // string
    char *you_tube_url; // string
    char *linked_in_url; // string
    char *facebook_url; // string
    char *instagram_url; // string
    char *social_profile_id; // string

} simple_user_dto_t;

simple_user_dto_t *simple_user_dto_create(
    char *id,
    char *timestamp,
    char *full_name,
    char *qualified_name,
    char *public_name,
    char *handler,
    char *last_name,
    char *first_name,
    char *cover_url,
    char *avatar_url,
    char *git_hub_url,
    char *country_id,
    char *timezone_id,
    char *website_url,
    char *twitter_url,
    char *you_tube_url,
    char *linked_in_url,
    char *facebook_url,
    char *instagram_url,
    char *social_profile_id
);

void simple_user_dto_free(simple_user_dto_t *simple_user_dto);

simple_user_dto_t *simple_user_dto_parseFromJSON(cJSON *simple_user_dtoJSON);

cJSON *simple_user_dto_convertToJSON(simple_user_dto_t *simple_user_dto);

#endif /* _simple_user_dto_H_ */

