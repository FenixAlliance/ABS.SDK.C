/*
 * cognitive_agent_skill_update_dto.h
 *
 * 
 */

#ifndef _cognitive_agent_skill_update_dto_H_
#define _cognitive_agent_skill_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cognitive_agent_skill_update_dto_t cognitive_agent_skill_update_dto_t;




typedef struct cognitive_agent_skill_update_dto_t {
    int enabled; //boolean
    char *config_json; // string

} cognitive_agent_skill_update_dto_t;

cognitive_agent_skill_update_dto_t *cognitive_agent_skill_update_dto_create(
    int enabled,
    char *config_json
);

void cognitive_agent_skill_update_dto_free(cognitive_agent_skill_update_dto_t *cognitive_agent_skill_update_dto);

cognitive_agent_skill_update_dto_t *cognitive_agent_skill_update_dto_parseFromJSON(cJSON *cognitive_agent_skill_update_dtoJSON);

cJSON *cognitive_agent_skill_update_dto_convertToJSON(cognitive_agent_skill_update_dto_t *cognitive_agent_skill_update_dto);

#endif /* _cognitive_agent_skill_update_dto_H_ */

