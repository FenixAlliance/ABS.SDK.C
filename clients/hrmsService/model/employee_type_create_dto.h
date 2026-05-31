/*
 * employee_type_create_dto.h
 *
 * 
 */

#ifndef _employee_type_create_dto_H_
#define _employee_type_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct employee_type_create_dto_t employee_type_create_dto_t;




typedef struct employee_type_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *description; // string

} employee_type_create_dto_t;

employee_type_create_dto_t *employee_type_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description
);

void employee_type_create_dto_free(employee_type_create_dto_t *employee_type_create_dto);

employee_type_create_dto_t *employee_type_create_dto_parseFromJSON(cJSON *employee_type_create_dtoJSON);

cJSON *employee_type_create_dto_convertToJSON(employee_type_create_dto_t *employee_type_create_dto);

#endif /* _employee_type_create_dto_H_ */

