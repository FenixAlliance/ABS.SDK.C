/*
 * item_brand_create_dto.h
 *
 * 
 */

#ifndef _item_brand_create_dto_H_
#define _item_brand_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_brand_create_dto_t item_brand_create_dto_t;




typedef struct item_brand_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *code; // string
    char *name; // string
    char *description; // string
    char *website_url; // string
    int featured; //boolean
    int trending; //boolean
    char *business_id; // string

} item_brand_create_dto_t;

item_brand_create_dto_t *item_brand_create_dto_create(
    char *id,
    char *timestamp,
    char *code,
    char *name,
    char *description,
    char *website_url,
    int featured,
    int trending,
    char *business_id
);

void item_brand_create_dto_free(item_brand_create_dto_t *item_brand_create_dto);

item_brand_create_dto_t *item_brand_create_dto_parseFromJSON(cJSON *item_brand_create_dtoJSON);

cJSON *item_brand_create_dto_convertToJSON(item_brand_create_dto_t *item_brand_create_dto);

#endif /* _item_brand_create_dto_H_ */

