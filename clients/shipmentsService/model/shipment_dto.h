/*
 * shipment_dto.h
 *
 * 
 */

#ifndef _shipment_dto_H_
#define _shipment_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct shipment_dto_t shipment_dto_t;




typedef struct shipment_dto_t {
    char *id; // string
    char *tracking_code; // string
    int is_international; //boolean
    char *shipment_timestamp; //date time
    char *delivery_timestamp; //date time
    char *expected_shipping_date; //date time
    char *expected_delivery_date; //date time

} shipment_dto_t;

shipment_dto_t *shipment_dto_create(
    char *id,
    char *tracking_code,
    int is_international,
    char *shipment_timestamp,
    char *delivery_timestamp,
    char *expected_shipping_date,
    char *expected_delivery_date
);

void shipment_dto_free(shipment_dto_t *shipment_dto);

shipment_dto_t *shipment_dto_parseFromJSON(cJSON *shipment_dtoJSON);

cJSON *shipment_dto_convertToJSON(shipment_dto_t *shipment_dto);

#endif /* _shipment_dto_H_ */

