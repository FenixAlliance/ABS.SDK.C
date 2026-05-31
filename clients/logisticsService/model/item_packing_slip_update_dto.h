/*
 * item_packing_slip_update_dto.h
 *
 * 
 */

#ifndef _item_packing_slip_update_dto_H_
#define _item_packing_slip_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_packing_slip_update_dto_t item_packing_slip_update_dto_t;




typedef struct item_packing_slip_update_dto_t {
    char *instructions; // string
    char *delivery_note_id; // string
    char *order_id; // string

} item_packing_slip_update_dto_t;

item_packing_slip_update_dto_t *item_packing_slip_update_dto_create(
    char *instructions,
    char *delivery_note_id,
    char *order_id
);

void item_packing_slip_update_dto_free(item_packing_slip_update_dto_t *item_packing_slip_update_dto);

item_packing_slip_update_dto_t *item_packing_slip_update_dto_parseFromJSON(cJSON *item_packing_slip_update_dtoJSON);

cJSON *item_packing_slip_update_dto_convertToJSON(item_packing_slip_update_dto_t *item_packing_slip_update_dto);

#endif /* _item_packing_slip_update_dto_H_ */

