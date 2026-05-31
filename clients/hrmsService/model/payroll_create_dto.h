/*
 * payroll_create_dto.h
 *
 * 
 */

#ifndef _payroll_create_dto_H_
#define _payroll_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct payroll_create_dto_t payroll_create_dto_t;




typedef struct payroll_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *payroll_period_id; // string

} payroll_create_dto_t;

payroll_create_dto_t *payroll_create_dto_create(
    char *id,
    char *timestamp,
    char *payroll_period_id
);

void payroll_create_dto_free(payroll_create_dto_t *payroll_create_dto);

payroll_create_dto_t *payroll_create_dto_parseFromJSON(cJSON *payroll_create_dtoJSON);

cJSON *payroll_create_dto_convertToJSON(payroll_create_dto_t *payroll_create_dto);

#endif /* _payroll_create_dto_H_ */

