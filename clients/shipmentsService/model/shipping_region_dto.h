/*
 * shipping_region_dto.h
 *
 * 
 */

#ifndef _shipping_region_dto_H_
#define _shipping_region_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct shipping_region_dto_t shipping_region_dto_t;




typedef struct shipping_region_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *postal_codes; // string
    char *business_id; // string

} shipping_region_dto_t;

shipping_region_dto_t *shipping_region_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *postal_codes,
    char *business_id
);

void shipping_region_dto_free(shipping_region_dto_t *shipping_region_dto);

shipping_region_dto_t *shipping_region_dto_parseFromJSON(cJSON *shipping_region_dtoJSON);

cJSON *shipping_region_dto_convertToJSON(shipping_region_dto_t *shipping_region_dto);

#endif /* _shipping_region_dto_H_ */

