/*
 * loan_type_dto.h
 *
 * 
 */

#ifndef _loan_type_dto_H_
#define _loan_type_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct loan_type_dto_t loan_type_dto_t;




typedef struct loan_type_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *description; // string
    char *tenant_id; // string
    char *enrollment_id; // string

} loan_type_dto_t;

loan_type_dto_t *loan_type_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *tenant_id,
    char *enrollment_id
);

void loan_type_dto_free(loan_type_dto_t *loan_type_dto);

loan_type_dto_t *loan_type_dto_parseFromJSON(cJSON *loan_type_dtoJSON);

cJSON *loan_type_dto_convertToJSON(loan_type_dto_t *loan_type_dto);

#endif /* _loan_type_dto_H_ */

