/*
 * skill_create_dto.h
 *
 * 
 */

#ifndef _skill_create_dto_H_
#define _skill_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct skill_create_dto_t skill_create_dto_t;


// Enum SKILLTYPE for skill_create_dto

typedef enum  { socialservice_skill_create_dto_SKILLTYPE_NULL = 0, socialservice_skill_create_dto_SKILLTYPE_Skill, socialservice_skill_create_dto_SKILLTYPE_Certification } socialservice_skill_create_dto_SKILLTYPE_e;

char* skill_create_dto_skill_type_ToString(socialservice_skill_create_dto_SKILLTYPE_e skill_type);

socialservice_skill_create_dto_SKILLTYPE_e skill_create_dto_skill_type_FromString(char* skill_type);



typedef struct skill_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *url; // string
    char *type; // string
    char *icon_url; // string
    char *description; // string
    socialservice_skill_create_dto_SKILLTYPE_e skill_type; //enum

} skill_create_dto_t;

skill_create_dto_t *skill_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *url,
    char *type,
    char *icon_url,
    char *description,
    socialservice_skill_create_dto_SKILLTYPE_e skill_type
);

void skill_create_dto_free(skill_create_dto_t *skill_create_dto);

skill_create_dto_t *skill_create_dto_parseFromJSON(cJSON *skill_create_dtoJSON);

cJSON *skill_create_dto_convertToJSON(skill_create_dto_t *skill_create_dto);

#endif /* _skill_create_dto_H_ */

