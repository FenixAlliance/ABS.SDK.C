/*
 * salary_create_dto.h
 *
 * 
 */

#ifndef _salary_create_dto_H_
#define _salary_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct salary_create_dto_t salary_create_dto_t;




typedef struct salary_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    double amount; //numeric
    char *currency_id; // string
    char *employee_profile_id; // string

} salary_create_dto_t;

salary_create_dto_t *salary_create_dto_create(
    char *id,
    char *timestamp,
    double amount,
    char *currency_id,
    char *employee_profile_id
);

void salary_create_dto_free(salary_create_dto_t *salary_create_dto);

salary_create_dto_t *salary_create_dto_parseFromJSON(cJSON *salary_create_dtoJSON);

cJSON *salary_create_dto_convertToJSON(salary_create_dto_t *salary_create_dto);

#endif /* _salary_create_dto_H_ */

