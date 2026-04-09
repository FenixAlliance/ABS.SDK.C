/*
 * unit_create_dto.h
 *
 * 
 */

#ifndef _unit_create_dto_H_
#define _unit_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct unit_create_dto_t unit_create_dto_t;




typedef struct unit_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    double base_unit_amount; //numeric
    char *base_unit_id; // string

} unit_create_dto_t;

unit_create_dto_t *unit_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    double base_unit_amount,
    char *base_unit_id
);

void unit_create_dto_free(unit_create_dto_t *unit_create_dto);

unit_create_dto_t *unit_create_dto_parseFromJSON(cJSON *unit_create_dtoJSON);

cJSON *unit_create_dto_convertToJSON(unit_create_dto_t *unit_create_dto);

#endif /* _unit_create_dto_H_ */

