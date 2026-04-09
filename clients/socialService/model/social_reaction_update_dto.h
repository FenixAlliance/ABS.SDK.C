/*
 * social_reaction_update_dto.h
 *
 * 
 */

#ifndef _social_reaction_update_dto_H_
#define _social_reaction_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct social_reaction_update_dto_t social_reaction_update_dto_t;


// Enum REACTION for social_reaction_update_dto

typedef enum  { socialservice_social_reaction_update_dto_REACTION_NULL = 0, socialservice_social_reaction_update_dto_REACTION_Like, socialservice_social_reaction_update_dto_REACTION_Happy, socialservice_social_reaction_update_dto_REACTION_HaHa, socialservice_social_reaction_update_dto_REACTION_Love, socialservice_social_reaction_update_dto_REACTION_Sad, socialservice_social_reaction_update_dto_REACTION_Angry, socialservice_social_reaction_update_dto_REACTION_Wow, socialservice_social_reaction_update_dto_REACTION_Afraid } socialservice_social_reaction_update_dto_REACTION_e;

char* social_reaction_update_dto_reaction_ToString(socialservice_social_reaction_update_dto_REACTION_e reaction);

socialservice_social_reaction_update_dto_REACTION_e social_reaction_update_dto_reaction_FromString(char* reaction);



typedef struct social_reaction_update_dto_t {
    char *id; // string
    char *timestamp; //date time
    socialservice_social_reaction_update_dto_REACTION_e reaction; //enum
    char *reaction_value; // string

} social_reaction_update_dto_t;

social_reaction_update_dto_t *social_reaction_update_dto_create(
    char *id,
    char *timestamp,
    socialservice_social_reaction_update_dto_REACTION_e reaction,
    char *reaction_value
);

void social_reaction_update_dto_free(social_reaction_update_dto_t *social_reaction_update_dto);

social_reaction_update_dto_t *social_reaction_update_dto_parseFromJSON(cJSON *social_reaction_update_dtoJSON);

cJSON *social_reaction_update_dto_convertToJSON(social_reaction_update_dto_t *social_reaction_update_dto);

#endif /* _social_reaction_update_dto_H_ */

