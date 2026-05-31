/*
 * item_restock_entry_update_dto.h
 *
 * 
 */

#ifndef _item_restock_entry_update_dto_H_
#define _item_restock_entry_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_restock_entry_update_dto_t item_restock_entry_update_dto_t;




typedef struct item_restock_entry_update_dto_t {
    char *item_id; // string
    char *warehouse_id; // string
    double quantity; //numeric
    char *order_item_record_id; // string

} item_restock_entry_update_dto_t;

item_restock_entry_update_dto_t *item_restock_entry_update_dto_create(
    char *item_id,
    char *warehouse_id,
    double quantity,
    char *order_item_record_id
);

void item_restock_entry_update_dto_free(item_restock_entry_update_dto_t *item_restock_entry_update_dto);

item_restock_entry_update_dto_t *item_restock_entry_update_dto_parseFromJSON(cJSON *item_restock_entry_update_dtoJSON);

cJSON *item_restock_entry_update_dto_convertToJSON(item_restock_entry_update_dto_t *item_restock_entry_update_dto);

#endif /* _item_restock_entry_update_dto_H_ */

