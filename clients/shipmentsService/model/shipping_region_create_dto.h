/*
 * shipping_region_create_dto.h
 *
 * 
 */

#ifndef _shipping_region_create_dto_H_
#define _shipping_region_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct shipping_region_create_dto_t shipping_region_create_dto_t;




typedef struct shipping_region_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *postal_codes; // string

} shipping_region_create_dto_t;

shipping_region_create_dto_t *shipping_region_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *postal_codes
);

void shipping_region_create_dto_free(shipping_region_create_dto_t *shipping_region_create_dto);

shipping_region_create_dto_t *shipping_region_create_dto_parseFromJSON(cJSON *shipping_region_create_dtoJSON);

cJSON *shipping_region_create_dto_convertToJSON(shipping_region_create_dto_t *shipping_region_create_dto);

#endif /* _shipping_region_create_dto_H_ */

