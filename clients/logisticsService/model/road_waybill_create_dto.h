/*
 * road_waybill_create_dto.h
 *
 * 
 */

#ifndef _road_waybill_create_dto_H_
#define _road_waybill_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct road_waybill_create_dto_t road_waybill_create_dto_t;




typedef struct road_waybill_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *document_number; // string
    char *road_waybill_type; // string
    char *shipper_contact_id; // string
    char *consignee_contact_id; // string
    char *carrier_id; // string
    char *successive_carriers; // string
    char *truck_id; // string
    char *truck_driver_id; // string
    char *vehicle_registration; // string
    char *trailer_registration; // string
    char *place_of_taking_over; // string
    char *place_of_taking_over_port_id; // string
    char *place_of_delivery; // string
    char *place_of_delivery_port_id; // string
    char *date_of_taking_over; //date time
    char *freight_terms; // string
    double freight_amount; //numeric
    char *freight_currency_id; // string
    double total_gross_weight_kg; //numeric
    int total_packages; //numeric
    double total_volume_m3; //numeric
    int adr_dangerous_goods; //boolean
    char *special_instructions; // string
    char *remarks; // string
    char *shipment_id; // string
    char *truck_trip_id; // string

} road_waybill_create_dto_t;

road_waybill_create_dto_t *road_waybill_create_dto_create(
    char *id,
    char *timestamp,
    char *document_number,
    char *road_waybill_type,
    char *shipper_contact_id,
    char *consignee_contact_id,
    char *carrier_id,
    char *successive_carriers,
    char *truck_id,
    char *truck_driver_id,
    char *vehicle_registration,
    char *trailer_registration,
    char *place_of_taking_over,
    char *place_of_taking_over_port_id,
    char *place_of_delivery,
    char *place_of_delivery_port_id,
    char *date_of_taking_over,
    char *freight_terms,
    double freight_amount,
    char *freight_currency_id,
    double total_gross_weight_kg,
    int total_packages,
    double total_volume_m3,
    int adr_dangerous_goods,
    char *special_instructions,
    char *remarks,
    char *shipment_id,
    char *truck_trip_id
);

void road_waybill_create_dto_free(road_waybill_create_dto_t *road_waybill_create_dto);

road_waybill_create_dto_t *road_waybill_create_dto_parseFromJSON(cJSON *road_waybill_create_dtoJSON);

cJSON *road_waybill_create_dto_convertToJSON(road_waybill_create_dto_t *road_waybill_create_dto);

#endif /* _road_waybill_create_dto_H_ */

