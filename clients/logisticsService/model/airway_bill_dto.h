/*
 * airway_bill_dto.h
 *
 * 
 */

#ifndef _airway_bill_dto_H_
#define _airway_bill_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct airway_bill_dto_t airway_bill_dto_t;

#include "waybill_line_dto.h"



typedef struct airway_bill_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *document_number; // string
    char *airway_bill_type; // string
    char *master_awb_number; // string
    char *status; // string
    char *shipper_contact_id; // string
    char *consignee_contact_id; // string
    char *notify_party_contact_id; // string
    char *carrier_id; // string
    char *airline_code; // string
    char *flight_number; // string
    char *airport_of_departure_code; // string
    char *airport_of_destination_code; // string
    char *departure_date; //date time
    char *arrival_date; //date time
    char *date_issued; //date time
    char *date_delivered; //date time
    char *freight_terms; // string
    double freight_amount; //numeric
    char *freight_currency_id; // string
    double chargeable_weight_kg; //numeric
    double total_gross_weight_kg; //numeric
    int total_packages; //numeric
    double total_volume_m3; //numeric
    double declared_value_for_carriage; //numeric
    double declared_value_for_customs; //numeric
    double insurance_amount; //numeric
    char *special_handling_codes; // string
    char *special_instructions; // string
    char *remarks; // string
    char *shipment_id; // string
    char *tenant_id; // string
    char *enrollment_id; // string
    list_t *lines; //nonprimitive container

} airway_bill_dto_t;

airway_bill_dto_t *airway_bill_dto_create(
    char *id,
    char *timestamp,
    char *document_number,
    char *airway_bill_type,
    char *master_awb_number,
    char *status,
    char *shipper_contact_id,
    char *consignee_contact_id,
    char *notify_party_contact_id,
    char *carrier_id,
    char *airline_code,
    char *flight_number,
    char *airport_of_departure_code,
    char *airport_of_destination_code,
    char *departure_date,
    char *arrival_date,
    char *date_issued,
    char *date_delivered,
    char *freight_terms,
    double freight_amount,
    char *freight_currency_id,
    double chargeable_weight_kg,
    double total_gross_weight_kg,
    int total_packages,
    double total_volume_m3,
    double declared_value_for_carriage,
    double declared_value_for_customs,
    double insurance_amount,
    char *special_handling_codes,
    char *special_instructions,
    char *remarks,
    char *shipment_id,
    char *tenant_id,
    char *enrollment_id,
    list_t *lines
);

void airway_bill_dto_free(airway_bill_dto_t *airway_bill_dto);

airway_bill_dto_t *airway_bill_dto_parseFromJSON(cJSON *airway_bill_dtoJSON);

cJSON *airway_bill_dto_convertToJSON(airway_bill_dto_t *airway_bill_dto);

#endif /* _airway_bill_dto_H_ */

