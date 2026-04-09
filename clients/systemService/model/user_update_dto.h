/*
 * user_update_dto.h
 *
 * 
 */

#ifndef _user_update_dto_H_
#define _user_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct user_update_dto_t user_update_dto_t;


// Enum GENDER for user_update_dto

typedef enum  { systemservice_user_update_dto_GENDER_NULL = 0, systemservice_user_update_dto_GENDER_Unknown, systemservice_user_update_dto_GENDER_Male, systemservice_user_update_dto_GENDER_Female, systemservice_user_update_dto_GENDER_PreferNotToSay } systemservice_user_update_dto_GENDER_e;

char* user_update_dto_gender_ToString(systemservice_user_update_dto_GENDER_e gender);

systemservice_user_update_dto_GENDER_e user_update_dto_gender_FromString(char* gender);

// Enum AVAILABILITY for user_update_dto

typedef enum  { systemservice_user_update_dto_AVAILABILITY_NULL = 0, systemservice_user_update_dto_AVAILABILITY_DND, systemservice_user_update_dto_AVAILABILITY_Busy, systemservice_user_update_dto_AVAILABILITY_Away, systemservice_user_update_dto_AVAILABILITY_Offline, systemservice_user_update_dto_AVAILABILITY_Available } systemservice_user_update_dto_AVAILABILITY_e;

char* user_update_dto_availability_ToString(systemservice_user_update_dto_AVAILABILITY_e availability);

systemservice_user_update_dto_AVAILABILITY_e user_update_dto_availability_FromString(char* availability);



typedef struct user_update_dto_t {
    char *qualified_name; // string
    char *birthday; //date time
    char *first_name; // string
    char *last_name; // string
    char *public_name; // string
    char *id_provider; // string
    systemservice_user_update_dto_GENDER_e gender; //enum
    char *email; // string
    char *about; // string
    char *status; // string
    char *job_title; // string
    char *timezone_id; // string
    char *language_id; // string
    char *currency_id; // string
    char *country_id; // string
    char *state_id; // string
    char *city_id; // string
    char *git_hub_url; // string
    char *website_url; // string
    char *twitter_url; // string
    char *facebook_url; // string
    char *you_tube_url; // string
    char *linked_in_url; // string
    char *instagram_url; // string
    char *web_url; // string
    systemservice_user_update_dto_AVAILABILITY_e availability; //enum

} user_update_dto_t;

user_update_dto_t *user_update_dto_create(
    char *qualified_name,
    char *birthday,
    char *first_name,
    char *last_name,
    char *public_name,
    char *id_provider,
    systemservice_user_update_dto_GENDER_e gender,
    char *email,
    char *about,
    char *status,
    char *job_title,
    char *timezone_id,
    char *language_id,
    char *currency_id,
    char *country_id,
    char *state_id,
    char *city_id,
    char *git_hub_url,
    char *website_url,
    char *twitter_url,
    char *facebook_url,
    char *you_tube_url,
    char *linked_in_url,
    char *instagram_url,
    char *web_url,
    systemservice_user_update_dto_AVAILABILITY_e availability
);

void user_update_dto_free(user_update_dto_t *user_update_dto);

user_update_dto_t *user_update_dto_parseFromJSON(cJSON *user_update_dtoJSON);

cJSON *user_update_dto_convertToJSON(user_update_dto_t *user_update_dto);

#endif /* _user_update_dto_H_ */

