/*
 * unit_group_create_dto.h
 *
 * 
 */

#ifndef _unit_group_create_dto_H_
#define _unit_group_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct unit_group_create_dto_t unit_group_create_dto_t;




typedef struct unit_group_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *description; // string

} unit_group_create_dto_t;

unit_group_create_dto_t *unit_group_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description
);

void unit_group_create_dto_free(unit_group_create_dto_t *unit_group_create_dto);

unit_group_create_dto_t *unit_group_create_dto_parseFromJSON(cJSON *unit_group_create_dtoJSON);

cJSON *unit_group_create_dto_convertToJSON(unit_group_create_dto_t *unit_group_create_dto);

#endif /* _unit_group_create_dto_H_ */

