/*
 * shipping_courier_update_dto.h
 *
 * 
 */

#ifndef _shipping_courier_update_dto_H_
#define _shipping_courier_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct shipping_courier_update_dto_t shipping_courier_update_dto_t;




typedef struct shipping_courier_update_dto_t {
    char *name; // string
    char *logo_url; // string
    char *country_id; // string
    char *business_profile_record_id; // string

} shipping_courier_update_dto_t;

shipping_courier_update_dto_t *shipping_courier_update_dto_create(
    char *name,
    char *logo_url,
    char *country_id,
    char *business_profile_record_id
);

void shipping_courier_update_dto_free(shipping_courier_update_dto_t *shipping_courier_update_dto);

shipping_courier_update_dto_t *shipping_courier_update_dto_parseFromJSON(cJSON *shipping_courier_update_dtoJSON);

cJSON *shipping_courier_update_dto_convertToJSON(shipping_courier_update_dto_t *shipping_courier_update_dto);

#endif /* _shipping_courier_update_dto_H_ */

