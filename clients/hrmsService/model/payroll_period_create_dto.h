/*
 * payroll_period_create_dto.h
 *
 * 
 */

#ifndef _payroll_period_create_dto_H_
#define _payroll_period_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct payroll_period_create_dto_t payroll_period_create_dto_t;




typedef struct payroll_period_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *description; // string
    char *start_date; //date time
    char *end_date; //date time

} payroll_period_create_dto_t;

payroll_period_create_dto_t *payroll_period_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *start_date,
    char *end_date
);

void payroll_period_create_dto_free(payroll_period_create_dto_t *payroll_period_create_dto);

payroll_period_create_dto_t *payroll_period_create_dto_parseFromJSON(cJSON *payroll_period_create_dtoJSON);

cJSON *payroll_period_create_dto_convertToJSON(payroll_period_create_dto_t *payroll_period_create_dto);

#endif /* _payroll_period_create_dto_H_ */

