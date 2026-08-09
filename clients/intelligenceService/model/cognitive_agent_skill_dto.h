/*
 * cognitive_agent_skill_dto.h
 *
 * 
 */

#ifndef _cognitive_agent_skill_dto_H_
#define _cognitive_agent_skill_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cognitive_agent_skill_dto_t cognitive_agent_skill_dto_t;




typedef struct cognitive_agent_skill_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *cognitive_agent_id; // string
    char *cognitive_skill_id; // string
    int enabled; //boolean
    char *config_json; // string
    char *tenant_id; // string
    char *enrollment_id; // string

} cognitive_agent_skill_dto_t;

cognitive_agent_skill_dto_t *cognitive_agent_skill_dto_create(
    char *id,
    char *timestamp,
    char *cognitive_agent_id,
    char *cognitive_skill_id,
    int enabled,
    char *config_json,
    char *tenant_id,
    char *enrollment_id
);

void cognitive_agent_skill_dto_free(cognitive_agent_skill_dto_t *cognitive_agent_skill_dto);

cognitive_agent_skill_dto_t *cognitive_agent_skill_dto_parseFromJSON(cJSON *cognitive_agent_skill_dtoJSON);

cJSON *cognitive_agent_skill_dto_convertToJSON(cognitive_agent_skill_dto_t *cognitive_agent_skill_dto);

#endif /* _cognitive_agent_skill_dto_H_ */

