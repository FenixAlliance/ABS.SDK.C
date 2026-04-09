/*
 * user_dto.h
 *
 * 
 */

#ifndef _user_dto_H_
#define _user_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct user_dto_t user_dto_t;


// Enum GENDER for user_dto

typedef enum  { walletsservice_user_dto_GENDER_NULL = 0, walletsservice_user_dto_GENDER_Unknown, walletsservice_user_dto_GENDER_Male, walletsservice_user_dto_GENDER_Female, walletsservice_user_dto_GENDER_PreferNotToSay } walletsservice_user_dto_GENDER_e;

char* user_dto_gender_ToString(walletsservice_user_dto_GENDER_e gender);

walletsservice_user_dto_GENDER_e user_dto_gender_FromString(char* gender);

// Enum AVAILABILITY for user_dto

typedef enum  { walletsservice_user_dto_AVAILABILITY_NULL = 0, walletsservice_user_dto_AVAILABILITY_DND, walletsservice_user_dto_AVAILABILITY_Busy, walletsservice_user_dto_AVAILABILITY_Away, walletsservice_user_dto_AVAILABILITY_Offline, walletsservice_user_dto_AVAILABILITY_Available } walletsservice_user_dto_AVAILABILITY_e;

char* user_dto_availability_ToString(walletsservice_user_dto_AVAILABILITY_e availability);

walletsservice_user_dto_AVAILABILITY_e user_dto_availability_FromString(char* availability);

// Enum SITETHEME for user_dto

typedef enum  { walletsservice_user_dto_SITETHEME_NULL = 0, walletsservice_user_dto_SITETHEME_System, walletsservice_user_dto_SITETHEME_Light, walletsservice_user_dto_SITETHEME_Dark } walletsservice_user_dto_SITETHEME_e;

char* user_dto_site_theme_ToString(walletsservice_user_dto_SITETHEME_e site_theme);

walletsservice_user_dto_SITETHEME_e user_dto_site_theme_FromString(char* site_theme);



typedef struct user_dto_t {
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
    char *birthday; //date time
    char *id_provider; // string
    char *language_id; // string
    walletsservice_user_dto_GENDER_e gender; //enum
    char *city_id; // string
    char *state_id; // string
    char *email; // string
    char *about; // string
    char *job_title; // string
    char *social_feed_id; // string
    char *current_tenant_id; // string
    char *current_enrollment_id; // string
    char *status; // string
    char *cart_id; // string
    char *wallet_id; // string
    char *user_name; // string
    char *currency_id; // string
    char *phone_number; // string
    char *public_identifier; // string
    char *identity_provider; // string
    int phone_number_confirmed; //boolean
    int email_confirmed; //boolean
    walletsservice_user_dto_AVAILABILITY_e availability; //enum
    int lockout_enabled; //boolean
    char *lockout_end; //date time
    int enrollments_count; //numeric
    walletsservice_user_dto_SITETHEME_e site_theme; //enum

} user_dto_t;

user_dto_t *user_dto_create(
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
    char *social_profile_id,
    char *birthday,
    char *id_provider,
    char *language_id,
    walletsservice_user_dto_GENDER_e gender,
    char *city_id,
    char *state_id,
    char *email,
    char *about,
    char *job_title,
    char *social_feed_id,
    char *current_tenant_id,
    char *current_enrollment_id,
    char *status,
    char *cart_id,
    char *wallet_id,
    char *user_name,
    char *currency_id,
    char *phone_number,
    char *public_identifier,
    char *identity_provider,
    int phone_number_confirmed,
    int email_confirmed,
    walletsservice_user_dto_AVAILABILITY_e availability,
    int lockout_enabled,
    char *lockout_end,
    int enrollments_count,
    walletsservice_user_dto_SITETHEME_e site_theme
);

void user_dto_free(user_dto_t *user_dto);

user_dto_t *user_dto_parseFromJSON(cJSON *user_dtoJSON);

cJSON *user_dto_convertToJSON(user_dto_t *user_dto);

#endif /* _user_dto_H_ */

