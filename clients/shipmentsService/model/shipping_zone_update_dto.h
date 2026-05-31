/*
 * shipping_zone_update_dto.h
 *
 * 
 */

#ifndef _shipping_zone_update_dto_H_
#define _shipping_zone_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct shipping_zone_update_dto_t shipping_zone_update_dto_t;




typedef struct shipping_zone_update_dto_t {
    char *name; // string
    int _default; //boolean
    int everywhere; //boolean
    char *postal_codes; // string
    char *country_codes; // string

} shipping_zone_update_dto_t;

shipping_zone_update_dto_t *shipping_zone_update_dto_create(
    char *name,
    int _default,
    int everywhere,
    char *postal_codes,
    char *country_codes
);

void shipping_zone_update_dto_free(shipping_zone_update_dto_t *shipping_zone_update_dto);

shipping_zone_update_dto_t *shipping_zone_update_dto_parseFromJSON(cJSON *shipping_zone_update_dtoJSON);

cJSON *shipping_zone_update_dto_convertToJSON(shipping_zone_update_dto_t *shipping_zone_update_dto);

#endif /* _shipping_zone_update_dto_H_ */

