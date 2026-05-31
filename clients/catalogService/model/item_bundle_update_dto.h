/*
 * item_bundle_update_dto.h
 *
 * 
 */

#ifndef _item_bundle_update_dto_H_
#define _item_bundle_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_bundle_update_dto_t item_bundle_update_dto_t;




typedef struct item_bundle_update_dto_t {
    char *name; // string
    char *code; // string
    char *description; // string
    int disabled; //boolean

} item_bundle_update_dto_t;

item_bundle_update_dto_t *item_bundle_update_dto_create(
    char *name,
    char *code,
    char *description,
    int disabled
);

void item_bundle_update_dto_free(item_bundle_update_dto_t *item_bundle_update_dto);

item_bundle_update_dto_t *item_bundle_update_dto_parseFromJSON(cJSON *item_bundle_update_dtoJSON);

cJSON *item_bundle_update_dto_convertToJSON(item_bundle_update_dto_t *item_bundle_update_dto);

#endif /* _item_bundle_update_dto_H_ */

