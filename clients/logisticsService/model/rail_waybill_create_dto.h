/*
 * rail_waybill_create_dto.h
 *
 * 
 */

#ifndef _rail_waybill_create_dto_H_
#define _rail_waybill_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct rail_waybill_create_dto_t rail_waybill_create_dto_t;




typedef struct rail_waybill_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *document_number; // string
    char *shipper_contact_id; // string
    char *consignee_contact_id; // string
    char *carrier_id; // string
    char *rail_operator_name; // string
    char *station_of_departure; // string
    char *station_of_departure_code; // string
    char *station_of_destination; // string
    char *station_of_destination_code; // string
    char *prescribed_route; // string
    char *wagon_numbers; // string
    char *date_of_acceptance; //date time
    char *freight_terms; // string
    double freight_amount; //numeric
    char *freight_currency_id; // string
    double total_gross_weight_kg; //numeric
    int total_packages; //numeric
    double total_volume_m3; //numeric
    char *customs_formalities; // string
    char *special_instructions; // string
    char *remarks; // string
    char *shipment_id; // string

} rail_waybill_create_dto_t;

rail_waybill_create_dto_t *rail_waybill_create_dto_create(
    char *id,
    char *timestamp,
    char *document_number,
    char *shipper_contact_id,
    char *consignee_contact_id,
    char *carrier_id,
    char *rail_operator_name,
    char *station_of_departure,
    char *station_of_departure_code,
    char *station_of_destination,
    char *station_of_destination_code,
    char *prescribed_route,
    char *wagon_numbers,
    char *date_of_acceptance,
    char *freight_terms,
    double freight_amount,
    char *freight_currency_id,
    double total_gross_weight_kg,
    int total_packages,
    double total_volume_m3,
    char *customs_formalities,
    char *special_instructions,
    char *remarks,
    char *shipment_id
);

void rail_waybill_create_dto_free(rail_waybill_create_dto_t *rail_waybill_create_dto);

rail_waybill_create_dto_t *rail_waybill_create_dto_parseFromJSON(cJSON *rail_waybill_create_dtoJSON);

cJSON *rail_waybill_create_dto_convertToJSON(rail_waybill_create_dto_t *rail_waybill_create_dto);

#endif /* _rail_waybill_create_dto_H_ */

