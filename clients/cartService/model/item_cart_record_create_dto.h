/*
 * item_cart_record_create_dto.h
 *
 * 
 */

#ifndef _item_cart_record_create_dto_H_
#define _item_cart_record_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_cart_record_create_dto_t item_cart_record_create_dto_t;




typedef struct item_cart_record_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *cart_id; // string
    char *product_id; // string
    double quantity; //numeric

} item_cart_record_create_dto_t;

item_cart_record_create_dto_t *item_cart_record_create_dto_create(
    char *id,
    char *timestamp,
    char *cart_id,
    char *product_id,
    double quantity
);

void item_cart_record_create_dto_free(item_cart_record_create_dto_t *item_cart_record_create_dto);

item_cart_record_create_dto_t *item_cart_record_create_dto_parseFromJSON(cJSON *item_cart_record_create_dtoJSON);

cJSON *item_cart_record_create_dto_convertToJSON(item_cart_record_create_dto_t *item_cart_record_create_dto);

#endif /* _item_cart_record_create_dto_H_ */

