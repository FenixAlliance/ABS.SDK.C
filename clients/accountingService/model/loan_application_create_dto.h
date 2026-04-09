/*
 * loan_application_create_dto.h
 *
 * 
 */

#ifndef _loan_application_create_dto_H_
#define _loan_application_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct loan_application_create_dto_t loan_application_create_dto_t;




typedef struct loan_application_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *tenant_id; // string
    char *enrollment_id; // string

} loan_application_create_dto_t;

loan_application_create_dto_t *loan_application_create_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *enrollment_id
);

void loan_application_create_dto_free(loan_application_create_dto_t *loan_application_create_dto);

loan_application_create_dto_t *loan_application_create_dto_parseFromJSON(cJSON *loan_application_create_dtoJSON);

cJSON *loan_application_create_dto_convertToJSON(loan_application_create_dto_t *loan_application_create_dto);

#endif /* _loan_application_create_dto_H_ */

