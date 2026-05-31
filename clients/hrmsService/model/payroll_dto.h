/*
 * payroll_dto.h
 *
 * 
 */

#ifndef _payroll_dto_H_
#define _payroll_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct payroll_dto_t payroll_dto_t;




typedef struct payroll_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *tenant_id; // string
    char *enrollment_id; // string
    char *payroll_period_id; // string

} payroll_dto_t;

payroll_dto_t *payroll_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *enrollment_id,
    char *payroll_period_id
);

void payroll_dto_free(payroll_dto_t *payroll_dto);

payroll_dto_t *payroll_dto_parseFromJSON(cJSON *payroll_dtoJSON);

cJSON *payroll_dto_convertToJSON(payroll_dto_t *payroll_dto);

#endif /* _payroll_dto_H_ */

