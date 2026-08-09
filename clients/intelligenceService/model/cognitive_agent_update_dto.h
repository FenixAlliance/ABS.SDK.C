/*
 * cognitive_agent_update_dto.h
 *
 * 
 */

#ifndef _cognitive_agent_update_dto_H_
#define _cognitive_agent_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cognitive_agent_update_dto_t cognitive_agent_update_dto_t;




typedef struct cognitive_agent_update_dto_t {
    char *name; // string
    char *avatar; // string
    char *description; // string
    char *soul; // string
    char *provider_key; // string
    char *model_id; // string
    char *engine_key; // string

} cognitive_agent_update_dto_t;

cognitive_agent_update_dto_t *cognitive_agent_update_dto_create(
    char *name,
    char *avatar,
    char *description,
    char *soul,
    char *provider_key,
    char *model_id,
    char *engine_key
);

void cognitive_agent_update_dto_free(cognitive_agent_update_dto_t *cognitive_agent_update_dto);

cognitive_agent_update_dto_t *cognitive_agent_update_dto_parseFromJSON(cJSON *cognitive_agent_update_dtoJSON);

cJSON *cognitive_agent_update_dto_convertToJSON(cognitive_agent_update_dto_t *cognitive_agent_update_dto);

#endif /* _cognitive_agent_update_dto_H_ */

