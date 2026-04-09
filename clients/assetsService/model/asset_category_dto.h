/*
 * asset_category_dto.h
 *
 * 
 */

#ifndef _asset_category_dto_H_
#define _asset_category_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct asset_category_dto_t asset_category_dto_t;




typedef struct asset_category_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *tenant_id; // string
    char *business_name; // string
    char *enrollment_id; // string
    char *name; // string
    char *description; // string
    int asset_count; //numeric

} asset_category_dto_t;

asset_category_dto_t *asset_category_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *business_name,
    char *enrollment_id,
    char *name,
    char *description,
    int asset_count
);

void asset_category_dto_free(asset_category_dto_t *asset_category_dto);

asset_category_dto_t *asset_category_dto_parseFromJSON(cJSON *asset_category_dtoJSON);

cJSON *asset_category_dto_convertToJSON(asset_category_dto_t *asset_category_dto);

#endif /* _asset_category_dto_H_ */

