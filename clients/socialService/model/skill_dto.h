/*
 * skill_dto.h
 *
 * 
 */

#ifndef _skill_dto_H_
#define _skill_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct skill_dto_t skill_dto_t;


// Enum SKILLTYPE for skill_dto

typedef enum  { socialservice_skill_dto_SKILLTYPE_NULL = 0, socialservice_skill_dto_SKILLTYPE_Skill, socialservice_skill_dto_SKILLTYPE_Certification } socialservice_skill_dto_SKILLTYPE_e;

char* skill_dto_skill_type_ToString(socialservice_skill_dto_SKILLTYPE_e skill_type);

socialservice_skill_dto_SKILLTYPE_e skill_dto_skill_type_FromString(char* skill_type);



typedef struct skill_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *url; // string
    char *type; // string
    char *icon_url; // string
    char *description; // string
    socialservice_skill_dto_SKILLTYPE_e skill_type; //enum
    char *tenant_id; // string
    char *enrollment_id; // string

} skill_dto_t;

skill_dto_t *skill_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *url,
    char *type,
    char *icon_url,
    char *description,
    socialservice_skill_dto_SKILLTYPE_e skill_type,
    char *tenant_id,
    char *enrollment_id
);

void skill_dto_free(skill_dto_t *skill_dto);

skill_dto_t *skill_dto_parseFromJSON(cJSON *skill_dtoJSON);

cJSON *skill_dto_convertToJSON(skill_dto_t *skill_dto);

#endif /* _skill_dto_H_ */

