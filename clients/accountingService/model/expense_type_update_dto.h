/*
 * expense_type_update_dto.h
 *
 * 
 */

#ifndef _expense_type_update_dto_H_
#define _expense_type_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct expense_type_update_dto_t expense_type_update_dto_t;




typedef struct expense_type_update_dto_t {
    char *name; // string
    int enabled; //boolean

} expense_type_update_dto_t;

expense_type_update_dto_t *expense_type_update_dto_create(
    char *name,
    int enabled
);

void expense_type_update_dto_free(expense_type_update_dto_t *expense_type_update_dto);

expense_type_update_dto_t *expense_type_update_dto_parseFromJSON(cJSON *expense_type_update_dtoJSON);

cJSON *expense_type_update_dto_convertToJSON(expense_type_update_dto_t *expense_type_update_dto);

#endif /* _expense_type_update_dto_H_ */

