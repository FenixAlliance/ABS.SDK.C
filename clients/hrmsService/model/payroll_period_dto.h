/*
 * payroll_period_dto.h
 *
 * 
 */

#ifndef _payroll_period_dto_H_
#define _payroll_period_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct payroll_period_dto_t payroll_period_dto_t;




typedef struct payroll_period_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *description; // string
    char *start; //date time
    char *end; //date time

} payroll_period_dto_t;

payroll_period_dto_t *payroll_period_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *start,
    char *end
);

void payroll_period_dto_free(payroll_period_dto_t *payroll_period_dto);

payroll_period_dto_t *payroll_period_dto_parseFromJSON(cJSON *payroll_period_dtoJSON);

cJSON *payroll_period_dto_convertToJSON(payroll_period_dto_t *payroll_period_dto);

#endif /* _payroll_period_dto_H_ */

