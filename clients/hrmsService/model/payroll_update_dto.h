/*
 * payroll_update_dto.h
 *
 * 
 */

#ifndef _payroll_update_dto_H_
#define _payroll_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct payroll_update_dto_t payroll_update_dto_t;




typedef struct payroll_update_dto_t {
    char *payroll_period_id; // string

} payroll_update_dto_t;

payroll_update_dto_t *payroll_update_dto_create(
    char *payroll_period_id
);

void payroll_update_dto_free(payroll_update_dto_t *payroll_update_dto);

payroll_update_dto_t *payroll_update_dto_parseFromJSON(cJSON *payroll_update_dtoJSON);

cJSON *payroll_update_dto_convertToJSON(payroll_update_dto_t *payroll_update_dto);

#endif /* _payroll_update_dto_H_ */

