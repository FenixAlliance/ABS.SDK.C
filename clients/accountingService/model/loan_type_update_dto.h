/*
 * loan_type_update_dto.h
 *
 * 
 */

#ifndef _loan_type_update_dto_H_
#define _loan_type_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct loan_type_update_dto_t loan_type_update_dto_t;




typedef struct loan_type_update_dto_t {
    char *name; // string
    char *description; // string

} loan_type_update_dto_t;

loan_type_update_dto_t *loan_type_update_dto_create(
    char *name,
    char *description
);

void loan_type_update_dto_free(loan_type_update_dto_t *loan_type_update_dto);

loan_type_update_dto_t *loan_type_update_dto_parseFromJSON(cJSON *loan_type_update_dtoJSON);

cJSON *loan_type_update_dto_convertToJSON(loan_type_update_dto_t *loan_type_update_dto);

#endif /* _loan_type_update_dto_H_ */

