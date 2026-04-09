/*
 * user_create_dto.h
 *
 * 
 */

#ifndef _user_create_dto_H_
#define _user_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct user_create_dto_t user_create_dto_t;


// Enum GENDER for user_create_dto

typedef enum  { systemservice_user_create_dto_GENDER_NULL = 0, systemservice_user_create_dto_GENDER_Unknown, systemservice_user_create_dto_GENDER_Male, systemservice_user_create_dto_GENDER_Female, systemservice_user_create_dto_GENDER_PreferNotToSay } systemservice_user_create_dto_GENDER_e;

char* user_create_dto_gender_ToString(systemservice_user_create_dto_GENDER_e gender);

systemservice_user_create_dto_GENDER_e user_create_dto_gender_FromString(char* gender);



typedef struct user_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *qualified_name; // string
    char *birthday; //date time
    char *first_name; // string
    char *last_name; // string
    char *public_name; // string
    char *id_provider; // string
    systemservice_user_create_dto_GENDER_e gender; //enum
    char *email; // string
    char *about; // string
    char *status; // string
    char *job_title; // string
    char *git_hub_url; // string
    char *website_url; // string
    char *twitter_url; // string
    char *facebook_url; // string
    char *you_tube_url; // string
    char *linked_in_url; // string
    char *instagram_url; // string
    char *timezone_id; // string
    char *language_id; // string
    char *currency_id; // string
    char *country_id; // string
    char *state_id; // string
    char *city_id; // string
    char *password; // string

} user_create_dto_t;

user_create_dto_t *user_create_dto_create(
    char *id,
    char *timestamp,
    char *qualified_name,
    char *birthday,
    char *first_name,
    char *last_name,
    char *public_name,
    char *id_provider,
    systemservice_user_create_dto_GENDER_e gender,
    char *email,
    char *about,
    char *status,
    char *job_title,
    char *git_hub_url,
    char *website_url,
    char *twitter_url,
    char *facebook_url,
    char *you_tube_url,
    char *linked_in_url,
    char *instagram_url,
    char *timezone_id,
    char *language_id,
    char *currency_id,
    char *country_id,
    char *state_id,
    char *city_id,
    char *password
);

void user_create_dto_free(user_create_dto_t *user_create_dto);

user_create_dto_t *user_create_dto_parseFromJSON(cJSON *user_create_dtoJSON);

cJSON *user_create_dto_convertToJSON(user_create_dto_t *user_create_dto);

#endif /* _user_create_dto_H_ */

