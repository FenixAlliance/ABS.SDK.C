/*
 * cognitive_skill_tool_dto.h
 *
 * 
 */

#ifndef _cognitive_skill_tool_dto_H_
#define _cognitive_skill_tool_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cognitive_skill_tool_dto_t cognitive_skill_tool_dto_t;




typedef struct cognitive_skill_tool_dto_t {
    char *tool_key; // string
    char *config_json; // string
    int enabled; //boolean

} cognitive_skill_tool_dto_t;

cognitive_skill_tool_dto_t *cognitive_skill_tool_dto_create(
    char *tool_key,
    char *config_json,
    int enabled
);

void cognitive_skill_tool_dto_free(cognitive_skill_tool_dto_t *cognitive_skill_tool_dto);

cognitive_skill_tool_dto_t *cognitive_skill_tool_dto_parseFromJSON(cJSON *cognitive_skill_tool_dtoJSON);

cJSON *cognitive_skill_tool_dto_convertToJSON(cognitive_skill_tool_dto_t *cognitive_skill_tool_dto);

#endif /* _cognitive_skill_tool_dto_H_ */

