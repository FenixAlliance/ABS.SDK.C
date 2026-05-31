/*
 * employee_type_dto.h
 *
 * 
 */

#ifndef _employee_type_dto_H_
#define _employee_type_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct employee_type_dto_t employee_type_dto_t;




typedef struct employee_type_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *description; // string
    char *tenant_id; // string
    char *enrollment_id; // string

} employee_type_dto_t;

employee_type_dto_t *employee_type_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *tenant_id,
    char *enrollment_id
);

void employee_type_dto_free(employee_type_dto_t *employee_type_dto);

employee_type_dto_t *employee_type_dto_parseFromJSON(cJSON *employee_type_dtoJSON);

cJSON *employee_type_dto_convertToJSON(employee_type_dto_t *employee_type_dto);

#endif /* _employee_type_dto_H_ */

