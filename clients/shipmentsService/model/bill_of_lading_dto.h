/*
 * bill_of_lading_dto.h
 *
 * 
 */

#ifndef _bill_of_lading_dto_H_
#define _bill_of_lading_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct bill_of_lading_dto_t bill_of_lading_dto_t;




typedef struct bill_of_lading_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *bill_of_lading_number; // string
    char *title; // string
    char *description; // string
    char *bill_of_lading_type; // string
    char *status; // string
    int is_negotiable; //boolean
    int is_clean; //boolean
    int number_of_originals; //numeric
    char *freight_payment_type; // string
    char *shipping_terms; // string
    char *freight_charges_description; // string
    double declared_value_amount; //numeric
    char *declared_value_currency_id; // string
    char *issued_date; //date time
    char *on_board_date; //date time
    char *expiry_date; //date time
    char *vessel_name; // string
    char *voyage_number; // string
    char *shipper_contact_id; // string
    char *consignee_contact_id; // string
    char *notify_party_contact_id; // string
    char *shipping_courier_id; // string
    char *port_of_loading_id; // string
    char *port_of_discharge_id; // string
    char *place_of_receipt_id; // string
    char *place_of_delivery_id; // string
    char *shipment_id; // string
    char *order_id; // string
    char *voyage_id; // string
    char *marks_and_numbers; // string
    int total_packages; //numeric
    double total_gross_weight_kg; //numeric
    double total_volume_m3; //numeric
    char *tenant_id; // string
    char *enrollment_id; // string

} bill_of_lading_dto_t;

bill_of_lading_dto_t *bill_of_lading_dto_create(
    char *id,
    char *timestamp,
    char *bill_of_lading_number,
    char *title,
    char *description,
    char *bill_of_lading_type,
    char *status,
    int is_negotiable,
    int is_clean,
    int number_of_originals,
    char *freight_payment_type,
    char *shipping_terms,
    char *freight_charges_description,
    double declared_value_amount,
    char *declared_value_currency_id,
    char *issued_date,
    char *on_board_date,
    char *expiry_date,
    char *vessel_name,
    char *voyage_number,
    char *shipper_contact_id,
    char *consignee_contact_id,
    char *notify_party_contact_id,
    char *shipping_courier_id,
    char *port_of_loading_id,
    char *port_of_discharge_id,
    char *place_of_receipt_id,
    char *place_of_delivery_id,
    char *shipment_id,
    char *order_id,
    char *voyage_id,
    char *marks_and_numbers,
    int total_packages,
    double total_gross_weight_kg,
    double total_volume_m3,
    char *tenant_id,
    char *enrollment_id
);

void bill_of_lading_dto_free(bill_of_lading_dto_t *bill_of_lading_dto);

bill_of_lading_dto_t *bill_of_lading_dto_parseFromJSON(cJSON *bill_of_lading_dtoJSON);

cJSON *bill_of_lading_dto_convertToJSON(bill_of_lading_dto_t *bill_of_lading_dto);

#endif /* _bill_of_lading_dto_H_ */

