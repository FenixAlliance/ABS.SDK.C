/*
 * employee_profile_dto.h
 *
 * 
 */

#ifndef _employee_profile_dto_H_
#define _employee_profile_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct employee_profile_dto_t employee_profile_dto_t;




typedef struct employee_profile_dto_t {
    char *id; // string
    char *timestamp; //date time

} employee_profile_dto_t;

employee_profile_dto_t *employee_profile_dto_create(
    char *id,
    char *timestamp
);

void employee_profile_dto_free(employee_profile_dto_t *employee_profile_dto);

employee_profile_dto_t *employee_profile_dto_parseFromJSON(cJSON *employee_profile_dtoJSON);

cJSON *employee_profile_dto_convertToJSON(employee_profile_dto_t *employee_profile_dto);

#endif /* _employee_profile_dto_H_ */

