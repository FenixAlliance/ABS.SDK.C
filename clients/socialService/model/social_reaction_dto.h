/*
 * social_reaction_dto.h
 *
 * 
 */

#ifndef _social_reaction_dto_H_
#define _social_reaction_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct social_reaction_dto_t social_reaction_dto_t;


// Enum REACTION for social_reaction_dto

typedef enum  { socialservice_social_reaction_dto_REACTION_NULL = 0, socialservice_social_reaction_dto_REACTION_Like, socialservice_social_reaction_dto_REACTION_Happy, socialservice_social_reaction_dto_REACTION_HaHa, socialservice_social_reaction_dto_REACTION_Love, socialservice_social_reaction_dto_REACTION_Sad, socialservice_social_reaction_dto_REACTION_Angry, socialservice_social_reaction_dto_REACTION_Wow, socialservice_social_reaction_dto_REACTION_Afraid } socialservice_social_reaction_dto_REACTION_e;

char* social_reaction_dto_reaction_ToString(socialservice_social_reaction_dto_REACTION_e reaction);

socialservice_social_reaction_dto_REACTION_e social_reaction_dto_reaction_FromString(char* reaction);



typedef struct social_reaction_dto_t {
    char *id; // string
    char *timestamp; //date time
    socialservice_social_reaction_dto_REACTION_e reaction; //enum
    char *reaction_value; // string
    char *social_profile_id; // string
    char *social_profile_name; // string
    char *social_profile_avatar_url; // string

} social_reaction_dto_t;

social_reaction_dto_t *social_reaction_dto_create(
    char *id,
    char *timestamp,
    socialservice_social_reaction_dto_REACTION_e reaction,
    char *reaction_value,
    char *social_profile_id,
    char *social_profile_name,
    char *social_profile_avatar_url
);

void social_reaction_dto_free(social_reaction_dto_t *social_reaction_dto);

social_reaction_dto_t *social_reaction_dto_parseFromJSON(cJSON *social_reaction_dtoJSON);

cJSON *social_reaction_dto_convertToJSON(social_reaction_dto_t *social_reaction_dto);

#endif /* _social_reaction_dto_H_ */

