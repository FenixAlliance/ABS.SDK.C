/*
 * transaction_update_dto.h
 *
 * 
 */

#ifndef _transaction_update_dto_H_
#define _transaction_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct transaction_update_dto_t transaction_update_dto_t;




typedef struct transaction_update_dto_t {
    char *description; // string
    double price; //numeric
    double quantity; //numeric
    char *external_description; // string
    double basis_quantity; //numeric
    double basis_amount; //numeric
    double percent; //numeric
    char *unit_group_id; // string
    char *unit_id; // string
    char *transaction_category_id; // string
    char *currency_id; // string

} transaction_update_dto_t;

transaction_update_dto_t *transaction_update_dto_create(
    char *description,
    double price,
    double quantity,
    char *external_description,
    double basis_quantity,
    double basis_amount,
    double percent,
    char *unit_group_id,
    char *unit_id,
    char *transaction_category_id,
    char *currency_id
);

void transaction_update_dto_free(transaction_update_dto_t *transaction_update_dto);

transaction_update_dto_t *transaction_update_dto_parseFromJSON(cJSON *transaction_update_dtoJSON);

cJSON *transaction_update_dto_convertToJSON(transaction_update_dto_t *transaction_update_dto);

#endif /* _transaction_update_dto_H_ */

