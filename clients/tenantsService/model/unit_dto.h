/*
 * unit_dto.h
 *
 * 
 */

#ifndef _unit_dto_H_
#define _unit_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct unit_dto_t unit_dto_t;




typedef struct unit_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *unit_group_id; // string
    double base_unit_amount; //numeric
    char *base_unit_id; // string
    char *tenant_id; // string
    char *enrollment_id; // string

} unit_dto_t;

unit_dto_t *unit_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *unit_group_id,
    double base_unit_amount,
    char *base_unit_id,
    char *tenant_id,
    char *enrollment_id
);

void unit_dto_free(unit_dto_t *unit_dto);

unit_dto_t *unit_dto_parseFromJSON(cJSON *unit_dtoJSON);

cJSON *unit_dto_convertToJSON(unit_dto_t *unit_dto);

#endif /* _unit_dto_H_ */

