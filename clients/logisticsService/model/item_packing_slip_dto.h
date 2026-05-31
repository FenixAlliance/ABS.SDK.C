/*
 * item_packing_slip_dto.h
 *
 * 
 */

#ifndef _item_packing_slip_dto_H_
#define _item_packing_slip_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_packing_slip_dto_t item_packing_slip_dto_t;




typedef struct item_packing_slip_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *instructions; // string
    char *delivery_note_id; // string
    char *tenant_id; // string
    char *order_id; // string

} item_packing_slip_dto_t;

item_packing_slip_dto_t *item_packing_slip_dto_create(
    char *id,
    char *timestamp,
    char *instructions,
    char *delivery_note_id,
    char *tenant_id,
    char *order_id
);

void item_packing_slip_dto_free(item_packing_slip_dto_t *item_packing_slip_dto);

item_packing_slip_dto_t *item_packing_slip_dto_parseFromJSON(cJSON *item_packing_slip_dtoJSON);

cJSON *item_packing_slip_dto_convertToJSON(item_packing_slip_dto_t *item_packing_slip_dto);

#endif /* _item_packing_slip_dto_H_ */

