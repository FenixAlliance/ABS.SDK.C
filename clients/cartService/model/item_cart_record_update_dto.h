/*
 * item_cart_record_update_dto.h
 *
 * 
 */

#ifndef _item_cart_record_update_dto_H_
#define _item_cart_record_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_cart_record_update_dto_t item_cart_record_update_dto_t;




typedef struct item_cart_record_update_dto_t {
    double quantity; //numeric

} item_cart_record_update_dto_t;

item_cart_record_update_dto_t *item_cart_record_update_dto_create(
    double quantity
);

void item_cart_record_update_dto_free(item_cart_record_update_dto_t *item_cart_record_update_dto);

item_cart_record_update_dto_t *item_cart_record_update_dto_parseFromJSON(cJSON *item_cart_record_update_dtoJSON);

cJSON *item_cart_record_update_dto_convertToJSON(item_cart_record_update_dto_t *item_cart_record_update_dto);

#endif /* _item_cart_record_update_dto_H_ */

