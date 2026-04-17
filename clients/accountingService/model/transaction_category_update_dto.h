/*
 * transaction_category_update_dto.h
 *
 * 
 */

#ifndef _transaction_category_update_dto_H_
#define _transaction_category_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct transaction_category_update_dto_t transaction_category_update_dto_t;




typedef struct transaction_category_update_dto_t {
    char *name; // string
    char *description; // string

} transaction_category_update_dto_t;

transaction_category_update_dto_t *transaction_category_update_dto_create(
    char *name,
    char *description
);

void transaction_category_update_dto_free(transaction_category_update_dto_t *transaction_category_update_dto);

transaction_category_update_dto_t *transaction_category_update_dto_parseFromJSON(cJSON *transaction_category_update_dtoJSON);

cJSON *transaction_category_update_dto_convertToJSON(transaction_category_update_dto_t *transaction_category_update_dto);

#endif /* _transaction_category_update_dto_H_ */

