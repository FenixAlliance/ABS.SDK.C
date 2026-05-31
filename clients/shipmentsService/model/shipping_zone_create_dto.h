/*
 * shipping_zone_create_dto.h
 *
 * 
 */

#ifndef _shipping_zone_create_dto_H_
#define _shipping_zone_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct shipping_zone_create_dto_t shipping_zone_create_dto_t;




typedef struct shipping_zone_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    int _default; //boolean
    int everywhere; //boolean
    char *postal_codes; // string
    char *country_codes; // string

} shipping_zone_create_dto_t;

shipping_zone_create_dto_t *shipping_zone_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    int _default,
    int everywhere,
    char *postal_codes,
    char *country_codes
);

void shipping_zone_create_dto_free(shipping_zone_create_dto_t *shipping_zone_create_dto);

shipping_zone_create_dto_t *shipping_zone_create_dto_parseFromJSON(cJSON *shipping_zone_create_dtoJSON);

cJSON *shipping_zone_create_dto_convertToJSON(shipping_zone_create_dto_t *shipping_zone_create_dto);

#endif /* _shipping_zone_create_dto_H_ */

