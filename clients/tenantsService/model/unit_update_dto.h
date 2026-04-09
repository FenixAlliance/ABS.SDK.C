/*
 * unit_update_dto.h
 *
 * 
 */

#ifndef _unit_update_dto_H_
#define _unit_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct unit_update_dto_t unit_update_dto_t;




typedef struct unit_update_dto_t {
    char *name; // string
    double base_unit_amount; //numeric
    char *base_unit_id; // string

} unit_update_dto_t;

unit_update_dto_t *unit_update_dto_create(
    char *name,
    double base_unit_amount,
    char *base_unit_id
);

void unit_update_dto_free(unit_update_dto_t *unit_update_dto);

unit_update_dto_t *unit_update_dto_parseFromJSON(cJSON *unit_update_dtoJSON);

cJSON *unit_update_dto_convertToJSON(unit_update_dto_t *unit_update_dto);

#endif /* _unit_update_dto_H_ */

