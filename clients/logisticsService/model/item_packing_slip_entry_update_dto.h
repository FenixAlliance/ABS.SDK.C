/*
 * item_packing_slip_entry_update_dto.h
 *
 * 
 */

#ifndef _item_packing_slip_entry_update_dto_H_
#define _item_packing_slip_entry_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_packing_slip_entry_update_dto_t item_packing_slip_entry_update_dto_t;




typedef struct item_packing_slip_entry_update_dto_t {
    char *item_id; // string
    char *quantity; // string

} item_packing_slip_entry_update_dto_t;

item_packing_slip_entry_update_dto_t *item_packing_slip_entry_update_dto_create(
    char *item_id,
    char *quantity
);

void item_packing_slip_entry_update_dto_free(item_packing_slip_entry_update_dto_t *item_packing_slip_entry_update_dto);

item_packing_slip_entry_update_dto_t *item_packing_slip_entry_update_dto_parseFromJSON(cJSON *item_packing_slip_entry_update_dtoJSON);

cJSON *item_packing_slip_entry_update_dto_convertToJSON(item_packing_slip_entry_update_dto_t *item_packing_slip_entry_update_dto);

#endif /* _item_packing_slip_entry_update_dto_H_ */

