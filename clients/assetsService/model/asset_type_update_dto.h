/*
 * asset_type_update_dto.h
 *
 * 
 */

#ifndef _asset_type_update_dto_H_
#define _asset_type_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct asset_type_update_dto_t asset_type_update_dto_t;




typedef struct asset_type_update_dto_t {
    char *name; // string
    char *description; // string

} asset_type_update_dto_t;

asset_type_update_dto_t *asset_type_update_dto_create(
    char *name,
    char *description
);

void asset_type_update_dto_free(asset_type_update_dto_t *asset_type_update_dto);

asset_type_update_dto_t *asset_type_update_dto_parseFromJSON(cJSON *asset_type_update_dtoJSON);

cJSON *asset_type_update_dto_convertToJSON(asset_type_update_dto_t *asset_type_update_dto);

#endif /* _asset_type_update_dto_H_ */

