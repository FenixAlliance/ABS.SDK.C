/*
 * cognitive_agent_variable_dto.h
 *
 * 
 */

#ifndef _cognitive_agent_variable_dto_H_
#define _cognitive_agent_variable_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cognitive_agent_variable_dto_t cognitive_agent_variable_dto_t;




typedef struct cognitive_agent_variable_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *cognitive_agent_id; // string
    char *key; // string
    char *value; // string
    char *tenant_id; // string
    char *enrollment_id; // string

} cognitive_agent_variable_dto_t;

cognitive_agent_variable_dto_t *cognitive_agent_variable_dto_create(
    char *id,
    char *timestamp,
    char *cognitive_agent_id,
    char *key,
    char *value,
    char *tenant_id,
    char *enrollment_id
);

void cognitive_agent_variable_dto_free(cognitive_agent_variable_dto_t *cognitive_agent_variable_dto);

cognitive_agent_variable_dto_t *cognitive_agent_variable_dto_parseFromJSON(cJSON *cognitive_agent_variable_dtoJSON);

cJSON *cognitive_agent_variable_dto_convertToJSON(cognitive_agent_variable_dto_t *cognitive_agent_variable_dto);

#endif /* _cognitive_agent_variable_dto_H_ */

