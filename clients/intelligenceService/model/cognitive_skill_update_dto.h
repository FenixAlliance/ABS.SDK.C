/*
 * cognitive_skill_update_dto.h
 *
 * 
 */

#ifndef _cognitive_skill_update_dto_H_
#define _cognitive_skill_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cognitive_skill_update_dto_t cognitive_skill_update_dto_t;

#include "cognitive_skill_tool_dto.h"



typedef struct cognitive_skill_update_dto_t {
    char *name; // string
    char *description; // string
    char *tool_key; // string
    char *config_json; // string
    int enabled; //boolean
    list_t *tools; //nonprimitive container

} cognitive_skill_update_dto_t;

cognitive_skill_update_dto_t *cognitive_skill_update_dto_create(
    char *name,
    char *description,
    char *tool_key,
    char *config_json,
    int enabled,
    list_t *tools
);

void cognitive_skill_update_dto_free(cognitive_skill_update_dto_t *cognitive_skill_update_dto);

cognitive_skill_update_dto_t *cognitive_skill_update_dto_parseFromJSON(cJSON *cognitive_skill_update_dtoJSON);

cJSON *cognitive_skill_update_dto_convertToJSON(cognitive_skill_update_dto_t *cognitive_skill_update_dto);

#endif /* _cognitive_skill_update_dto_H_ */

