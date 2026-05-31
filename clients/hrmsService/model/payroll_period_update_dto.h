/*
 * payroll_period_update_dto.h
 *
 * 
 */

#ifndef _payroll_period_update_dto_H_
#define _payroll_period_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct payroll_period_update_dto_t payroll_period_update_dto_t;




typedef struct payroll_period_update_dto_t {
    char *title; // string
    char *description; // string
    char *start_date; //date time
    char *end_date; //date time

} payroll_period_update_dto_t;

payroll_period_update_dto_t *payroll_period_update_dto_create(
    char *title,
    char *description,
    char *start_date,
    char *end_date
);

void payroll_period_update_dto_free(payroll_period_update_dto_t *payroll_period_update_dto);

payroll_period_update_dto_t *payroll_period_update_dto_parseFromJSON(cJSON *payroll_period_update_dtoJSON);

cJSON *payroll_period_update_dto_convertToJSON(payroll_period_update_dto_t *payroll_period_update_dto);

#endif /* _payroll_period_update_dto_H_ */

