/*
 * social_post_reaction_dto.h
 *
 * 
 */

#ifndef _social_post_reaction_dto_H_
#define _social_post_reaction_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct social_post_reaction_dto_t social_post_reaction_dto_t;


// Enum REACTION for social_post_reaction_dto

typedef enum  { socialservice_social_post_reaction_dto_REACTION_NULL = 0, socialservice_social_post_reaction_dto_REACTION_Like, socialservice_social_post_reaction_dto_REACTION_Happy, socialservice_social_post_reaction_dto_REACTION_HaHa, socialservice_social_post_reaction_dto_REACTION_Love, socialservice_social_post_reaction_dto_REACTION_Sad, socialservice_social_post_reaction_dto_REACTION_Angry, socialservice_social_post_reaction_dto_REACTION_Wow, socialservice_social_post_reaction_dto_REACTION_Afraid } socialservice_social_post_reaction_dto_REACTION_e;

char* social_post_reaction_dto_reaction_ToString(socialservice_social_post_reaction_dto_REACTION_e reaction);

socialservice_social_post_reaction_dto_REACTION_e social_post_reaction_dto_reaction_FromString(char* reaction);

// Enum SOCIALPROFILETYPE for social_post_reaction_dto

typedef enum  { socialservice_social_post_reaction_dto_SOCIALPROFILETYPE_NULL = 0, socialservice_social_post_reaction_dto_SOCIALPROFILETYPE_User, socialservice_social_post_reaction_dto_SOCIALPROFILETYPE_Tenant, socialservice_social_post_reaction_dto_SOCIALPROFILETYPE_Contact } socialservice_social_post_reaction_dto_SOCIALPROFILETYPE_e;

char* social_post_reaction_dto_social_profile_type_ToString(socialservice_social_post_reaction_dto_SOCIALPROFILETYPE_e social_profile_type);

socialservice_social_post_reaction_dto_SOCIALPROFILETYPE_e social_post_reaction_dto_social_profile_type_FromString(char* social_profile_type);



typedef struct social_post_reaction_dto_t {
    char *id; // string
    char *timestamp; //date time
    socialservice_social_post_reaction_dto_REACTION_e reaction; //enum
    char *reaction_value; // string
    char *social_profile_id; // string
    char *social_profile_name; // string
    char *social_profile_avatar_url; // string
    socialservice_social_post_reaction_dto_SOCIALPROFILETYPE_e social_profile_type; //enum
    char *social_post_id; // string

} social_post_reaction_dto_t;

social_post_reaction_dto_t *social_post_reaction_dto_create(
    char *id,
    char *timestamp,
    socialservice_social_post_reaction_dto_REACTION_e reaction,
    char *reaction_value,
    char *social_profile_id,
    char *social_profile_name,
    char *social_profile_avatar_url,
    socialservice_social_post_reaction_dto_SOCIALPROFILETYPE_e social_profile_type,
    char *social_post_id
);

void social_post_reaction_dto_free(social_post_reaction_dto_t *social_post_reaction_dto);

social_post_reaction_dto_t *social_post_reaction_dto_parseFromJSON(cJSON *social_post_reaction_dtoJSON);

cJSON *social_post_reaction_dto_convertToJSON(social_post_reaction_dto_t *social_post_reaction_dto);

#endif /* _social_post_reaction_dto_H_ */

