/*
 * social_feed_post_dto.h
 *
 * 
 */

#ifndef _social_feed_post_dto_H_
#define _social_feed_post_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct social_feed_post_dto_t social_feed_post_dto_t;

#include "social_post_attachment_ref_dto.h"
#include "social_post_reaction_facepile_dto.h"

// Enum SOCIALPROFILETYPE for social_feed_post_dto

typedef enum  { socialservice_social_feed_post_dto_SOCIALPROFILETYPE_NULL = 0, socialservice_social_feed_post_dto_SOCIALPROFILETYPE_User, socialservice_social_feed_post_dto_SOCIALPROFILETYPE_Tenant, socialservice_social_feed_post_dto_SOCIALPROFILETYPE_Contact } socialservice_social_feed_post_dto_SOCIALPROFILETYPE_e;

char* social_feed_post_dto_social_profile_type_ToString(socialservice_social_feed_post_dto_SOCIALPROFILETYPE_e social_profile_type);

socialservice_social_feed_post_dto_SOCIALPROFILETYPE_e social_feed_post_dto_social_profile_type_FromString(char* social_profile_type);

// Enum BODYFORMAT for social_feed_post_dto

typedef enum  { socialservice_social_feed_post_dto_BODYFORMAT_NULL = 0, socialservice_social_feed_post_dto_BODYFORMAT_PlainText, socialservice_social_feed_post_dto_BODYFORMAT_Html } socialservice_social_feed_post_dto_BODYFORMAT_e;

char* social_feed_post_dto_body_format_ToString(socialservice_social_feed_post_dto_BODYFORMAT_e body_format);

socialservice_social_feed_post_dto_BODYFORMAT_e social_feed_post_dto_body_format_FromString(char* body_format);

// Enum MYREACTION for social_feed_post_dto

typedef enum  { socialservice_social_feed_post_dto_MYREACTION_NULL = 0, socialservice_social_feed_post_dto_MYREACTION_Like, socialservice_social_feed_post_dto_MYREACTION_Happy, socialservice_social_feed_post_dto_MYREACTION_HaHa, socialservice_social_feed_post_dto_MYREACTION_Love, socialservice_social_feed_post_dto_MYREACTION_Sad, socialservice_social_feed_post_dto_MYREACTION_Angry, socialservice_social_feed_post_dto_MYREACTION_Wow, socialservice_social_feed_post_dto_MYREACTION_Afraid } socialservice_social_feed_post_dto_MYREACTION_e;

char* social_feed_post_dto_my_reaction_ToString(socialservice_social_feed_post_dto_MYREACTION_e my_reaction);

socialservice_social_feed_post_dto_MYREACTION_e social_feed_post_dto_my_reaction_FromString(char* my_reaction);



typedef struct social_feed_post_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *message; // string
    char *social_profile_id; // string
    char *social_profile_name; // string
    char *social_profile_avatar_url; // string
    int comments_count; //numeric
    int reactions_count; //numeric
    socialservice_social_feed_post_dto_SOCIALPROFILETYPE_e social_profile_type; //enum
    char *body_html; // string
    socialservice_social_feed_post_dto_BODYFORMAT_e body_format; //enum
    char *background_style; // string
    char *social_feed_id; // string
    list_t *facepile; //nonprimitive container
    list_t *attachments; //nonprimitive container
    socialservice_social_feed_post_dto_MYREACTION_e my_reaction; //enum
    char *my_reaction_id; // string

} social_feed_post_dto_t;

social_feed_post_dto_t *social_feed_post_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *message,
    char *social_profile_id,
    char *social_profile_name,
    char *social_profile_avatar_url,
    int comments_count,
    int reactions_count,
    socialservice_social_feed_post_dto_SOCIALPROFILETYPE_e social_profile_type,
    char *body_html,
    socialservice_social_feed_post_dto_BODYFORMAT_e body_format,
    char *background_style,
    char *social_feed_id,
    list_t *facepile,
    list_t *attachments,
    socialservice_social_feed_post_dto_MYREACTION_e my_reaction,
    char *my_reaction_id
);

void social_feed_post_dto_free(social_feed_post_dto_t *social_feed_post_dto);

social_feed_post_dto_t *social_feed_post_dto_parseFromJSON(cJSON *social_feed_post_dtoJSON);

cJSON *social_feed_post_dto_convertToJSON(social_feed_post_dto_t *social_feed_post_dto);

#endif /* _social_feed_post_dto_H_ */

