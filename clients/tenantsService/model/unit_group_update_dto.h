/*
 * unit_group_update_dto.h
 *
 * 
 */

#ifndef _unit_group_update_dto_H_
#define _unit_group_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct unit_group_update_dto_t unit_group_update_dto_t;




typedef struct unit_group_update_dto_t {
    char *name; // string
    char *description; // string

} unit_group_update_dto_t;

unit_group_update_dto_t *unit_group_update_dto_create(
    char *name,
    char *description
);

void unit_group_update_dto_free(unit_group_update_dto_t *unit_group_update_dto);

unit_group_update_dto_t *unit_group_update_dto_parseFromJSON(cJSON *unit_group_update_dtoJSON);

cJSON *unit_group_update_dto_convertToJSON(unit_group_update_dto_t *unit_group_update_dto);

#endif /* _unit_group_update_dto_H_ */

