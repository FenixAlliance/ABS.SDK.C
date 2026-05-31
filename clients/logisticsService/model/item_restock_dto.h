/*
 * item_restock_dto.h
 *
 * 
 */

#ifndef _item_restock_dto_H_
#define _item_restock_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_restock_dto_t item_restock_dto_t;




typedef struct item_restock_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *description; // string
    char *tenant_id; // string
    int entry_count; //numeric

} item_restock_dto_t;

item_restock_dto_t *item_restock_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *tenant_id,
    int entry_count
);

void item_restock_dto_free(item_restock_dto_t *item_restock_dto);

item_restock_dto_t *item_restock_dto_parseFromJSON(cJSON *item_restock_dtoJSON);

cJSON *item_restock_dto_convertToJSON(item_restock_dto_t *item_restock_dto);

#endif /* _item_restock_dto_H_ */

