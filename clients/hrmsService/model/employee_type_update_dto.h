/*
 * employee_type_update_dto.h
 *
 * 
 */

#ifndef _employee_type_update_dto_H_
#define _employee_type_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct employee_type_update_dto_t employee_type_update_dto_t;




typedef struct employee_type_update_dto_t {
    char *name; // string
    char *description; // string

} employee_type_update_dto_t;

employee_type_update_dto_t *employee_type_update_dto_create(
    char *name,
    char *description
);

void employee_type_update_dto_free(employee_type_update_dto_t *employee_type_update_dto);

employee_type_update_dto_t *employee_type_update_dto_parseFromJSON(cJSON *employee_type_update_dtoJSON);

cJSON *employee_type_update_dto_convertToJSON(employee_type_update_dto_t *employee_type_update_dto);

#endif /* _employee_type_update_dto_H_ */

