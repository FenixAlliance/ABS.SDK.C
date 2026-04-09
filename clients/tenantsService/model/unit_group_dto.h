/*
 * unit_group_dto.h
 *
 * 
 */

#ifndef _unit_group_dto_H_
#define _unit_group_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct unit_group_dto_t unit_group_dto_t;




typedef struct unit_group_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *description; // string
    char *tenant_id; // string
    char *enrollment_id; // string
    int unit_count; //numeric

} unit_group_dto_t;

unit_group_dto_t *unit_group_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *tenant_id,
    char *enrollment_id,
    int unit_count
);

void unit_group_dto_free(unit_group_dto_t *unit_group_dto);

unit_group_dto_t *unit_group_dto_parseFromJSON(cJSON *unit_group_dtoJSON);

cJSON *unit_group_dto_convertToJSON(unit_group_dto_t *unit_group_dto);

#endif /* _unit_group_dto_H_ */

