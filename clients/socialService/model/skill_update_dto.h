/*
 * skill_update_dto.h
 *
 * 
 */

#ifndef _skill_update_dto_H_
#define _skill_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct skill_update_dto_t skill_update_dto_t;


// Enum SKILLTYPE for skill_update_dto

typedef enum  { socialservice_skill_update_dto_SKILLTYPE_NULL = 0, socialservice_skill_update_dto_SKILLTYPE_Skill, socialservice_skill_update_dto_SKILLTYPE_Certification } socialservice_skill_update_dto_SKILLTYPE_e;

char* skill_update_dto_skill_type_ToString(socialservice_skill_update_dto_SKILLTYPE_e skill_type);

socialservice_skill_update_dto_SKILLTYPE_e skill_update_dto_skill_type_FromString(char* skill_type);



typedef struct skill_update_dto_t {
    char *name; // string
    char *url; // string
    char *type; // string
    char *icon_url; // string
    char *description; // string
    socialservice_skill_update_dto_SKILLTYPE_e skill_type; //enum

} skill_update_dto_t;

skill_update_dto_t *skill_update_dto_create(
    char *name,
    char *url,
    char *type,
    char *icon_url,
    char *description,
    socialservice_skill_update_dto_SKILLTYPE_e skill_type
);

void skill_update_dto_free(skill_update_dto_t *skill_update_dto);

skill_update_dto_t *skill_update_dto_parseFromJSON(cJSON *skill_update_dtoJSON);

cJSON *skill_update_dto_convertToJSON(skill_update_dto_t *skill_update_dto);

#endif /* _skill_update_dto_H_ */

