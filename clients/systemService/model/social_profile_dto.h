/*
 * social_profile_dto.h
 *
 * 
 */

#ifndef _social_profile_dto_H_
#define _social_profile_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct social_profile_dto_t social_profile_dto_t;


// Enum TYPE for social_profile_dto

typedef enum  { systemservice_social_profile_dto_TYPE_NULL = 0, systemservice_social_profile_dto_TYPE_User, systemservice_social_profile_dto_TYPE_Tenant, systemservice_social_profile_dto_TYPE_Contact } systemservice_social_profile_dto_TYPE_e;

char* social_profile_dto_type_ToString(systemservice_social_profile_dto_TYPE_e type);

systemservice_social_profile_dto_TYPE_e social_profile_dto_type_FromString(char* type);



typedef struct social_profile_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *about; // string
    char *cover; // string
    char *avatar; // string
    char *country_id; // string
    char *country_name; // string
    char *identity_id; // string
    int follows_count; //numeric
    int messages_count; //numeric
    int followers_count; //numeric
    int notifications_count; //numeric
    int unread_notifications_count; //numeric
    int unread_messages_count; //numeric
    systemservice_social_profile_dto_TYPE_e type; //enum
    char *social_feed_id; // string
    char *twitter_url; // string
    char *facebook_url; // string
    char *linked_in_url; // string
    char *youtube_url; // string
    char *github_url; // string
    char *pinterest_url; // string
    char *dribble_url; // string
    char *domain; // string
    char *notes; // string

} social_profile_dto_t;

social_profile_dto_t *social_profile_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *about,
    char *cover,
    char *avatar,
    char *country_id,
    char *country_name,
    char *identity_id,
    int follows_count,
    int messages_count,
    int followers_count,
    int notifications_count,
    int unread_notifications_count,
    int unread_messages_count,
    systemservice_social_profile_dto_TYPE_e type,
    char *social_feed_id,
    char *twitter_url,
    char *facebook_url,
    char *linked_in_url,
    char *youtube_url,
    char *github_url,
    char *pinterest_url,
    char *dribble_url,
    char *domain,
    char *notes
);

void social_profile_dto_free(social_profile_dto_t *social_profile_dto);

social_profile_dto_t *social_profile_dto_parseFromJSON(cJSON *social_profile_dtoJSON);

cJSON *social_profile_dto_convertToJSON(social_profile_dto_t *social_profile_dto);

#endif /* _social_profile_dto_H_ */

