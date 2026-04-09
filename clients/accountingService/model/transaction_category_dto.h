/*
 * transaction_category_dto.h
 *
 * 
 */

#ifndef _transaction_category_dto_H_
#define _transaction_category_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct transaction_category_dto_t transaction_category_dto_t;




typedef struct transaction_category_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *description; // string
    char *enrollment_id; // string
    char *tenant_id; // string

} transaction_category_dto_t;

transaction_category_dto_t *transaction_category_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *enrollment_id,
    char *tenant_id
);

void transaction_category_dto_free(transaction_category_dto_t *transaction_category_dto);

transaction_category_dto_t *transaction_category_dto_parseFromJSON(cJSON *transaction_category_dtoJSON);

cJSON *transaction_category_dto_convertToJSON(transaction_category_dto_t *transaction_category_dto);

#endif /* _transaction_category_dto_H_ */

