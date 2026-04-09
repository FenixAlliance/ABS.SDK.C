/*
 * transaction_create_dto.h
 *
 * 
 */

#ifndef _transaction_create_dto_H_
#define _transaction_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct transaction_create_dto_t transaction_create_dto_t;




typedef struct transaction_create_dto_t {
    char *id; // string
    char *timestamp; //date time
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
    char *tenant_id; // string
    char *enrollment_id; // string

} transaction_create_dto_t;

transaction_create_dto_t *transaction_create_dto_create(
    char *id,
    char *timestamp,
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
    char *currency_id,
    char *tenant_id,
    char *enrollment_id
);

void transaction_create_dto_free(transaction_create_dto_t *transaction_create_dto);

transaction_create_dto_t *transaction_create_dto_parseFromJSON(cJSON *transaction_create_dtoJSON);

cJSON *transaction_create_dto_convertToJSON(transaction_create_dto_t *transaction_create_dto);

#endif /* _transaction_create_dto_H_ */

