/*
 * salary_update_dto.h
 *
 * 
 */

#ifndef _salary_update_dto_H_
#define _salary_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct salary_update_dto_t salary_update_dto_t;




typedef struct salary_update_dto_t {
    double amount; //numeric
    char *currency_id; // string
    char *employee_profile_id; // string

} salary_update_dto_t;

salary_update_dto_t *salary_update_dto_create(
    double amount,
    char *currency_id,
    char *employee_profile_id
);

void salary_update_dto_free(salary_update_dto_t *salary_update_dto);

salary_update_dto_t *salary_update_dto_parseFromJSON(cJSON *salary_update_dtoJSON);

cJSON *salary_update_dto_convertToJSON(salary_update_dto_t *salary_update_dto);

#endif /* _salary_update_dto_H_ */

