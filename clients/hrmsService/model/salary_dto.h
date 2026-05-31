/*
 * salary_dto.h
 *
 * 
 */

#ifndef _salary_dto_H_
#define _salary_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct salary_dto_t salary_dto_t;




typedef struct salary_dto_t {
    char *id; // string
    char *timestamp; //date time
    double amount; //numeric
    char *currency_id; // string
    char *employee_profile_id; // string
    char *tenant_id; // string
    char *enrollment_id; // string

} salary_dto_t;

salary_dto_t *salary_dto_create(
    char *id,
    char *timestamp,
    double amount,
    char *currency_id,
    char *employee_profile_id,
    char *tenant_id,
    char *enrollment_id
);

void salary_dto_free(salary_dto_t *salary_dto);

salary_dto_t *salary_dto_parseFromJSON(cJSON *salary_dtoJSON);

cJSON *salary_dto_convertToJSON(salary_dto_t *salary_dto);

#endif /* _salary_dto_H_ */

