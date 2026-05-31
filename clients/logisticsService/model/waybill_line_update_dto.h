/*
 * waybill_line_update_dto.h
 *
 * 
 */

#ifndef _waybill_line_update_dto_H_
#define _waybill_line_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct waybill_line_update_dto_t waybill_line_update_dto_t;




typedef struct waybill_line_update_dto_t {
    char *description; // string
    int quantity; //numeric
    double gross_weight_kg; //numeric
    double volume_m3; //numeric
    char *package_type; // string
    double length_cm; //numeric
    double width_cm; //numeric
    double height_cm; //numeric
    char *hs_code; // string
    char *marks_and_numbers; // string
    double declared_value; //numeric
    char *declared_value_currency_id; // string
    char *seal_number; // string
    char *container_number; // string
    double chargeable_weight_kg; //numeric
    char *iata_rate_class; // string
    char *dangerous_goods_class; // string
    char *un_hazmat_number; // string
    char *wagon_number; // string

} waybill_line_update_dto_t;

waybill_line_update_dto_t *waybill_line_update_dto_create(
    char *description,
    int quantity,
    double gross_weight_kg,
    double volume_m3,
    char *package_type,
    double length_cm,
    double width_cm,
    double height_cm,
    char *hs_code,
    char *marks_and_numbers,
    double declared_value,
    char *declared_value_currency_id,
    char *seal_number,
    char *container_number,
    double chargeable_weight_kg,
    char *iata_rate_class,
    char *dangerous_goods_class,
    char *un_hazmat_number,
    char *wagon_number
);

void waybill_line_update_dto_free(waybill_line_update_dto_t *waybill_line_update_dto);

waybill_line_update_dto_t *waybill_line_update_dto_parseFromJSON(cJSON *waybill_line_update_dtoJSON);

cJSON *waybill_line_update_dto_convertToJSON(waybill_line_update_dto_t *waybill_line_update_dto);

#endif /* _waybill_line_update_dto_H_ */

