/*
 * shipping_region_update_dto.h
 *
 * 
 */

#ifndef _shipping_region_update_dto_H_
#define _shipping_region_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct shipping_region_update_dto_t shipping_region_update_dto_t;




typedef struct shipping_region_update_dto_t {
    char *name; // string
    char *postal_codes; // string

} shipping_region_update_dto_t;

shipping_region_update_dto_t *shipping_region_update_dto_create(
    char *name,
    char *postal_codes
);

void shipping_region_update_dto_free(shipping_region_update_dto_t *shipping_region_update_dto);

shipping_region_update_dto_t *shipping_region_update_dto_parseFromJSON(cJSON *shipping_region_update_dtoJSON);

cJSON *shipping_region_update_dto_convertToJSON(shipping_region_update_dto_t *shipping_region_update_dto);

#endif /* _shipping_region_update_dto_H_ */

