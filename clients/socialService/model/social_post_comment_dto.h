/*
 * social_post_comment_dto.h
 *
 * 
 */

#ifndef _social_post_comment_dto_H_
#define _social_post_comment_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct social_post_comment_dto_t social_post_comment_dto_t;

#include "social_post_reaction_facepile_dto.h"

// Enum SOCIALPROFILETYPE for social_post_comment_dto

typedef enum  { socialservice_social_post_comment_dto_SOCIALPROFILETYPE_NULL = 0, socialservice_social_post_comment_dto_SOCIALPROFILETYPE_User, socialservice_social_post_comment_dto_SOCIALPROFILETYPE_Tenant, socialservice_social_post_comment_dto_SOCIALPROFILETYPE_Contact } socialservice_social_post_comment_dto_SOCIALPROFILETYPE_e;

char* social_post_comment_dto_social_profile_type_ToString(socialservice_social_post_comment_dto_SOCIALPROFILETYPE_e social_profile_type);

socialservice_social_post_comment_dto_SOCIALPROFILETYPE_e social_post_comment_dto_social_profile_type_FromString(char* social_profile_type);

// Enum BODYFORMAT for social_post_comment_dto

typedef enum  { socialservice_social_post_comment_dto_BODYFORMAT_NULL = 0, socialservice_social_post_comment_dto_BODYFORMAT_PlainText, socialservice_social_post_comment_dto_BODYFORMAT_Html } socialservice_social_post_comment_dto_BODYFORMAT_e;

char* social_post_comment_dto_body_format_ToString(socialservice_social_post_comment_dto_BODYFORMAT_e body_format);

socialservice_social_post_comment_dto_BODYFORMAT_e social_post_comment_dto_body_format_FromString(char* body_format);

// Enum MYREACTION for social_post_comment_dto

typedef enum  { socialservice_social_post_comment_dto_MYREACTION_NULL = 0, socialservice_social_post_comment_dto_MYREACTION_Like, socialservice_social_post_comment_dto_MYREACTION_Happy, socialservice_social_post_comment_dto_MYREACTION_HaHa, socialservice_social_post_comment_dto_MYREACTION_Love, socialservice_social_post_comment_dto_MYREACTION_Sad, socialservice_social_post_comment_dto_MYREACTION_Angry, socialservice_social_post_comment_dto_MYREACTION_Wow, socialservice_social_post_comment_dto_MYREACTION_Afraid } socialservice_social_post_comment_dto_MYREACTION_e;

char* social_post_comment_dto_my_reaction_ToString(socialservice_social_post_comment_dto_MYREACTION_e my_reaction);

socialservice_social_post_comment_dto_MYREACTION_e social_post_comment_dto_my_reaction_FromString(char* my_reaction);



typedef struct social_post_comment_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *message; // string
    char *parent_comment_id; // string
    char *social_profile_id; // string
    char *social_feed_post_id; // string
    char *social_profile_name; // string
    char *social_profile_avatar_url; // string
    socialservice_social_post_comment_dto_SOCIALPROFILETYPE_e social_profile_type; //enum
    char *body_html; // string
    socialservice_social_post_comment_dto_BODYFORMAT_e body_format; //enum
    int reply_count; //numeric
    int reactions_count; //numeric
    char *social_post_id; // string
    list_t *facepile; //nonprimitive container
    socialservice_social_post_comment_dto_MYREACTION_e my_reaction; //enum
    char *my_reaction_id; // string

} social_post_comment_dto_t;

social_post_comment_dto_t *social_post_comment_dto_create(
    char *id,
    char *timestamp,
    char *message,
    char *parent_comment_id,
    char *social_profile_id,
    char *social_feed_post_id,
    char *social_profile_name,
    char *social_profile_avatar_url,
    socialservice_social_post_comment_dto_SOCIALPROFILETYPE_e social_profile_type,
    char *body_html,
    socialservice_social_post_comment_dto_BODYFORMAT_e body_format,
    int reply_count,
    int reactions_count,
    char *social_post_id,
    list_t *facepile,
    socialservice_social_post_comment_dto_MYREACTION_e my_reaction,
    char *my_reaction_id
);

void social_post_comment_dto_free(social_post_comment_dto_t *social_post_comment_dto);

social_post_comment_dto_t *social_post_comment_dto_parseFromJSON(cJSON *social_post_comment_dtoJSON);

cJSON *social_post_comment_dto_convertToJSON(social_post_comment_dto_t *social_post_comment_dto);

#endif /* _social_post_comment_dto_H_ */

