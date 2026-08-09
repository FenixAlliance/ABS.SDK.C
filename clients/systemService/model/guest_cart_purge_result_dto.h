/*
 * guest_cart_purge_result_dto.h
 *
 * 
 */

#ifndef _guest_cart_purge_result_dto_H_
#define _guest_cart_purge_result_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct guest_cart_purge_result_dto_t guest_cart_purge_result_dto_t;




typedef struct guest_cart_purge_result_dto_t {
    int guest_carts_deleted; //numeric
    int item_cart_records_deleted; //numeric
    int wish_lists_deleted; //numeric

} guest_cart_purge_result_dto_t;

guest_cart_purge_result_dto_t *guest_cart_purge_result_dto_create(
    int guest_carts_deleted,
    int item_cart_records_deleted,
    int wish_lists_deleted
);

void guest_cart_purge_result_dto_free(guest_cart_purge_result_dto_t *guest_cart_purge_result_dto);

guest_cart_purge_result_dto_t *guest_cart_purge_result_dto_parseFromJSON(cJSON *guest_cart_purge_result_dtoJSON);

cJSON *guest_cart_purge_result_dto_convertToJSON(guest_cart_purge_result_dto_t *guest_cart_purge_result_dto);

#endif /* _guest_cart_purge_result_dto_H_ */

