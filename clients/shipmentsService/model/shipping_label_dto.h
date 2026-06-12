/*
 * shipping_label_dto.h
 *
 * 
 */

#ifndef _shipping_label_dto_H_
#define _shipping_label_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct shipping_label_dto_t shipping_label_dto_t;




typedef struct shipping_label_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *tracking_code; // string
    char *expected_delivery; //date time
    char *location_id; // string
    char *tenant_id; // string
    char *shipment_id; // string
    char *shipping_courier_id; // string

} shipping_label_dto_t;

shipping_label_dto_t *shipping_label_dto_create(
    char *id,
    char *timestamp,
    char *tracking_code,
    char *expected_delivery,
    char *location_id,
    char *tenant_id,
    char *shipment_id,
    char *shipping_courier_id
);

void shipping_label_dto_free(shipping_label_dto_t *shipping_label_dto);

shipping_label_dto_t *shipping_label_dto_parseFromJSON(cJSON *shipping_label_dtoJSON);

cJSON *shipping_label_dto_convertToJSON(shipping_label_dto_t *shipping_label_dto);

#endif /* _shipping_label_dto_H_ */

