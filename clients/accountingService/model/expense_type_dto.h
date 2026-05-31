/*
 * expense_type_dto.h
 *
 * 
 */

#ifndef _expense_type_dto_H_
#define _expense_type_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct expense_type_dto_t expense_type_dto_t;




typedef struct expense_type_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    int enabled; //boolean
    char *tenant_id; // string
    char *enrollment_id; // string

} expense_type_dto_t;

expense_type_dto_t *expense_type_dto_create(
    char *id,
    char *timestamp,
    char *name,
    int enabled,
    char *tenant_id,
    char *enrollment_id
);

void expense_type_dto_free(expense_type_dto_t *expense_type_dto);

expense_type_dto_t *expense_type_dto_parseFromJSON(cJSON *expense_type_dtoJSON);

cJSON *expense_type_dto_convertToJSON(expense_type_dto_t *expense_type_dto);

#endif /* _expense_type_dto_H_ */

