/*
 * item_restock_create_dto.h
 *
 * 
 */

#ifndef _item_restock_create_dto_H_
#define _item_restock_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_restock_create_dto_t item_restock_create_dto_t;




typedef struct item_restock_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *description; // string

} item_restock_create_dto_t;

item_restock_create_dto_t *item_restock_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description
);

void item_restock_create_dto_free(item_restock_create_dto_t *item_restock_create_dto);

item_restock_create_dto_t *item_restock_create_dto_parseFromJSON(cJSON *item_restock_create_dtoJSON);

cJSON *item_restock_create_dto_convertToJSON(item_restock_create_dto_t *item_restock_create_dto);

#endif /* _item_restock_create_dto_H_ */

