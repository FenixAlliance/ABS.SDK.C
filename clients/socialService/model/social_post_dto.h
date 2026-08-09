/*
 * social_post_dto.h
 *
 * 
 */

#ifndef _social_post_dto_H_
#define _social_post_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct social_post_dto_t social_post_dto_t;


// Enum SOCIALPROFILETYPE for social_post_dto

typedef enum  { socialservice_social_post_dto_SOCIALPROFILETYPE_NULL = 0, socialservice_social_post_dto_SOCIALPROFILETYPE_User, socialservice_social_post_dto_SOCIALPROFILETYPE_Tenant, socialservice_social_post_dto_SOCIALPROFILETYPE_Contact } socialservice_social_post_dto_SOCIALPROFILETYPE_e;

char* social_post_dto_social_profile_type_ToString(socialservice_social_post_dto_SOCIALPROFILETYPE_e social_profile_type);

socialservice_social_post_dto_SOCIALPROFILETYPE_e social_post_dto_social_profile_type_FromString(char* social_profile_type);

// Enum BODYFORMAT for social_post_dto

typedef enum  { socialservice_social_post_dto_BODYFORMAT_NULL = 0, socialservice_social_post_dto_BODYFORMAT_PlainText, socialservice_social_post_dto_BODYFORMAT_Html } socialservice_social_post_dto_BODYFORMAT_e;

char* social_post_dto_body_format_ToString(socialservice_social_post_dto_BODYFORMAT_e body_format);

socialservice_social_post_dto_BODYFORMAT_e social_post_dto_body_format_FromString(char* body_format);



typedef struct social_post_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *message; // string
    char *social_profile_id; // string
    char *social_profile_name; // string
    char *social_profile_avatar_url; // string
    int comments_count; //numeric
    int reactions_count; //numeric
    socialservice_social_post_dto_SOCIALPROFILETYPE_e social_profile_type; //enum
    char *body_html; // string
    socialservice_social_post_dto_BODYFORMAT_e body_format; //enum
    char *background_style; // string

} social_post_dto_t;

social_post_dto_t *social_post_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *message,
    char *social_profile_id,
    char *social_profile_name,
    char *social_profile_avatar_url,
    int comments_count,
    int reactions_count,
    socialservice_social_post_dto_SOCIALPROFILETYPE_e social_profile_type,
    char *body_html,
    socialservice_social_post_dto_BODYFORMAT_e body_format,
    char *background_style
);

void social_post_dto_free(social_post_dto_t *social_post_dto);

social_post_dto_t *social_post_dto_parseFromJSON(cJSON *social_post_dtoJSON);

cJSON *social_post_dto_convertToJSON(social_post_dto_t *social_post_dto);

#endif /* _social_post_dto_H_ */

