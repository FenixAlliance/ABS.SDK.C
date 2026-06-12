/*
 * item_family_dto.h
 *
 * 
 */

#ifndef _item_family_dto_H_
#define _item_family_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_family_dto_t item_family_dto_t;




typedef struct item_family_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *code; // string
    char *description; // string
    char *tenant_id; // string

} item_family_dto_t;

item_family_dto_t *item_family_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *code,
    char *description,
    char *tenant_id
);

void item_family_dto_free(item_family_dto_t *item_family_dto);

item_family_dto_t *item_family_dto_parseFromJSON(cJSON *item_family_dtoJSON);

cJSON *item_family_dto_convertToJSON(item_family_dto_t *item_family_dto);

#endif /* _item_family_dto_H_ */

