/*
 * cognitive_agent_variable_create_dto.h
 *
 * 
 */

#ifndef _cognitive_agent_variable_create_dto_H_
#define _cognitive_agent_variable_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cognitive_agent_variable_create_dto_t cognitive_agent_variable_create_dto_t;




typedef struct cognitive_agent_variable_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *key; // string
    char *value; // string

} cognitive_agent_variable_create_dto_t;

cognitive_agent_variable_create_dto_t *cognitive_agent_variable_create_dto_create(
    char *id,
    char *timestamp,
    char *key,
    char *value
);

void cognitive_agent_variable_create_dto_free(cognitive_agent_variable_create_dto_t *cognitive_agent_variable_create_dto);

cognitive_agent_variable_create_dto_t *cognitive_agent_variable_create_dto_parseFromJSON(cJSON *cognitive_agent_variable_create_dtoJSON);

cJSON *cognitive_agent_variable_create_dto_convertToJSON(cognitive_agent_variable_create_dto_t *cognitive_agent_variable_create_dto);

#endif /* _cognitive_agent_variable_create_dto_H_ */

