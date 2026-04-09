/*
 * blog_author_dto.h
 *
 * 
 */

#ifndef _blog_author_dto_H_
#define _blog_author_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct blog_author_dto_t blog_author_dto_t;


// Enum GENDER for blog_author_dto

typedef enum  { contentservice_blog_author_dto_GENDER_NULL = 0, contentservice_blog_author_dto_GENDER_Unknown, contentservice_blog_author_dto_GENDER_Male, contentservice_blog_author_dto_GENDER_Female, contentservice_blog_author_dto_GENDER_PreferNotToSay } contentservice_blog_author_dto_GENDER_e;

char* blog_author_dto_gender_ToString(contentservice_blog_author_dto_GENDER_e gender);

contentservice_blog_author_dto_GENDER_e blog_author_dto_gender_FromString(char* gender);

// Enum AVAILABILITY for blog_author_dto

typedef enum  { contentservice_blog_author_dto_AVAILABILITY_NULL = 0, contentservice_blog_author_dto_AVAILABILITY_DND, contentservice_blog_author_dto_AVAILABILITY_Busy, contentservice_blog_author_dto_AVAILABILITY_Away, contentservice_blog_author_dto_AVAILABILITY_Offline, contentservice_blog_author_dto_AVAILABILITY_Available } contentservice_blog_author_dto_AVAILABILITY_e;

char* blog_author_dto_availability_ToString(contentservice_blog_author_dto_AVAILABILITY_e availability);

contentservice_blog_author_dto_AVAILABILITY_e blog_author_dto_availability_FromString(char* availability);



typedef struct blog_author_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *qualified_name; // string
    char *birthday; //date time
    char *first_name; // string
    char *last_name; // string
    char *public_name; // string
    char *language_id; // string
    char *timezone_id; // string
    char *country_id; // string
    char *city_id; // string
    char *state_id; // string
    char *about; // string
    char *job_title; // string
    char *cover_url; // string
    char *avatar_url; // string
    char *git_hub_url; // string
    char *website_url; // string
    char *twitter_url; // string
    char *facebook_url; // string
    char *you_tube_url; // string
    char *linked_in_url; // string
    char *instagram_url; // string
    char *social_feed_id; // string
    char *social_profile_id; // string
    contentservice_blog_author_dto_GENDER_e gender; //enum
    char *wallet_id; // string
    char *status; // string
    char *user_name; // string
    char *public_identifier; // string
    int phone_number_confirmed; //boolean
    contentservice_blog_author_dto_AVAILABILITY_e availability; //enum

} blog_author_dto_t;

blog_author_dto_t *blog_author_dto_create(
    char *id,
    char *timestamp,
    char *qualified_name,
    char *birthday,
    char *first_name,
    char *last_name,
    char *public_name,
    char *language_id,
    char *timezone_id,
    char *country_id,
    char *city_id,
    char *state_id,
    char *about,
    char *job_title,
    char *cover_url,
    char *avatar_url,
    char *git_hub_url,
    char *website_url,
    char *twitter_url,
    char *facebook_url,
    char *you_tube_url,
    char *linked_in_url,
    char *instagram_url,
    char *social_feed_id,
    char *social_profile_id,
    contentservice_blog_author_dto_GENDER_e gender,
    char *wallet_id,
    char *status,
    char *user_name,
    char *public_identifier,
    int phone_number_confirmed,
    contentservice_blog_author_dto_AVAILABILITY_e availability
);

void blog_author_dto_free(blog_author_dto_t *blog_author_dto);

blog_author_dto_t *blog_author_dto_parseFromJSON(cJSON *blog_author_dtoJSON);

cJSON *blog_author_dto_convertToJSON(blog_author_dto_t *blog_author_dto);

#endif /* _blog_author_dto_H_ */

