/*
 * cognitive_skill_dto.h
 *
 * 
 */

#ifndef _cognitive_skill_dto_H_
#define _cognitive_skill_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cognitive_skill_dto_t cognitive_skill_dto_t;

#include "cognitive_skill_tool_dto.h"



typedef struct cognitive_skill_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *description; // string
    char *tool_key; // string
    char *config_json; // string
    int enabled; //boolean
    list_t *tools; //nonprimitive container
    char *tenant_id; // string
    char *enrollment_id; // string

} cognitive_skill_dto_t;

cognitive_skill_dto_t *cognitive_skill_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *tool_key,
    char *config_json,
    int enabled,
    list_t *tools,
    char *tenant_id,
    char *enrollment_id
);

void cognitive_skill_dto_free(cognitive_skill_dto_t *cognitive_skill_dto);

cognitive_skill_dto_t *cognitive_skill_dto_parseFromJSON(cJSON *cognitive_skill_dtoJSON);

cJSON *cognitive_skill_dto_convertToJSON(cognitive_skill_dto_t *cognitive_skill_dto);

#endif /* _cognitive_skill_dto_H_ */

