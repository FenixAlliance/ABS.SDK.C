/*
 * asset_type_dto.h
 *
 * 
 */

#ifndef _asset_type_dto_H_
#define _asset_type_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct asset_type_dto_t asset_type_dto_t;




typedef struct asset_type_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *tenant_id; // string
    char *business_name; // string
    char *enrollment_id; // string
    char *name; // string
    char *description; // string
    int asset_count; //numeric

} asset_type_dto_t;

asset_type_dto_t *asset_type_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *business_name,
    char *enrollment_id,
    char *name,
    char *description,
    int asset_count
);

void asset_type_dto_free(asset_type_dto_t *asset_type_dto);

asset_type_dto_t *asset_type_dto_parseFromJSON(cJSON *asset_type_dtoJSON);

cJSON *asset_type_dto_convertToJSON(asset_type_dto_t *asset_type_dto);

#endif /* _asset_type_dto_H_ */

