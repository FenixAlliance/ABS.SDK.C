/*
 * item_packing_slip_entry_dto.h
 *
 * 
 */

#ifndef _item_packing_slip_entry_dto_H_
#define _item_packing_slip_entry_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_packing_slip_entry_dto_t item_packing_slip_entry_dto_t;




typedef struct item_packing_slip_entry_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *quantity; // string
    char *item_id; // string
    char *item_packing_slip_id; // string
    char *tenant_id; // string

} item_packing_slip_entry_dto_t;

item_packing_slip_entry_dto_t *item_packing_slip_entry_dto_create(
    char *id,
    char *timestamp,
    char *quantity,
    char *item_id,
    char *item_packing_slip_id,
    char *tenant_id
);

void item_packing_slip_entry_dto_free(item_packing_slip_entry_dto_t *item_packing_slip_entry_dto);

item_packing_slip_entry_dto_t *item_packing_slip_entry_dto_parseFromJSON(cJSON *item_packing_slip_entry_dtoJSON);

cJSON *item_packing_slip_entry_dto_convertToJSON(item_packing_slip_entry_dto_t *item_packing_slip_entry_dto);

#endif /* _item_packing_slip_entry_dto_H_ */

