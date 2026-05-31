/*
 * item_bundle_dto.h
 *
 * 
 */

#ifndef _item_bundle_dto_H_
#define _item_bundle_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_bundle_dto_t item_bundle_dto_t;




typedef struct item_bundle_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *code; // string
    char *description; // string
    int disabled; //boolean
    char *business_id; // string

} item_bundle_dto_t;

item_bundle_dto_t *item_bundle_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *code,
    char *description,
    int disabled,
    char *business_id
);

void item_bundle_dto_free(item_bundle_dto_t *item_bundle_dto);

item_bundle_dto_t *item_bundle_dto_parseFromJSON(cJSON *item_bundle_dtoJSON);

cJSON *item_bundle_dto_convertToJSON(item_bundle_dto_t *item_bundle_dto);

#endif /* _item_bundle_dto_H_ */

