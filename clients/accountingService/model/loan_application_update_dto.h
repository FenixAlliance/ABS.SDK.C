/*
 * loan_application_update_dto.h
 *
 * 
 */

#ifndef _loan_application_update_dto_H_
#define _loan_application_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct loan_application_update_dto_t loan_application_update_dto_t;




typedef struct loan_application_update_dto_t {
    char *tenant_id; // string
    char *enrollment_id; // string

} loan_application_update_dto_t;

loan_application_update_dto_t *loan_application_update_dto_create(
    char *tenant_id,
    char *enrollment_id
);

void loan_application_update_dto_free(loan_application_update_dto_t *loan_application_update_dto);

loan_application_update_dto_t *loan_application_update_dto_parseFromJSON(cJSON *loan_application_update_dtoJSON);

cJSON *loan_application_update_dto_convertToJSON(loan_application_update_dto_t *loan_application_update_dto);

#endif /* _loan_application_update_dto_H_ */

