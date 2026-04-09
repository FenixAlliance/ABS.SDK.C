/*
 * item_brand_update_dto.h
 *
 * 
 */

#ifndef _item_brand_update_dto_H_
#define _item_brand_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_brand_update_dto_t item_brand_update_dto_t;




typedef struct item_brand_update_dto_t {
    char *name; // string
    char *description; // string
    char *website_url; // string
    char *logo_url; // string
    int featured; //boolean
    int trending; //boolean

} item_brand_update_dto_t;

item_brand_update_dto_t *item_brand_update_dto_create(
    char *name,
    char *description,
    char *website_url,
    char *logo_url,
    int featured,
    int trending
);

void item_brand_update_dto_free(item_brand_update_dto_t *item_brand_update_dto);

item_brand_update_dto_t *item_brand_update_dto_parseFromJSON(cJSON *item_brand_update_dtoJSON);

cJSON *item_brand_update_dto_convertToJSON(item_brand_update_dto_t *item_brand_update_dto);

#endif /* _item_brand_update_dto_H_ */

