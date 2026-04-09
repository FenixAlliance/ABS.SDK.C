/*
 * cart_dto.h
 *
 * 
 */

#ifndef _cart_dto_H_
#define _cart_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cart_dto_t cart_dto_t;




typedef struct cart_dto_t {
    char *id; // string
    char *ip; // string
    char *type; // string
    double total; //numeric
    double taxes; //numeric
    double freight; //numeric
    double sub_total; //numeric
    char *currency_id; // string
    char *country_id; // string
    int item_cart_records_count; //numeric
    int item_to_compare_records_count; //numeric

} cart_dto_t;

cart_dto_t *cart_dto_create(
    char *id,
    char *ip,
    char *type,
    double total,
    double taxes,
    double freight,
    double sub_total,
    char *currency_id,
    char *country_id,
    int item_cart_records_count,
    int item_to_compare_records_count
);

void cart_dto_free(cart_dto_t *cart_dto);

cart_dto_t *cart_dto_parseFromJSON(cJSON *cart_dtoJSON);

cJSON *cart_dto_convertToJSON(cart_dto_t *cart_dto);

#endif /* _cart_dto_H_ */

