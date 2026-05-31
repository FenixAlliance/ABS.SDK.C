/*
 * seaway_bill_dto.h
 *
 * 
 */

#ifndef _seaway_bill_dto_H_
#define _seaway_bill_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct seaway_bill_dto_t seaway_bill_dto_t;

#include "waybill_line_dto.h"



typedef struct seaway_bill_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *document_number; // string
    char *status; // string
    char *shipper_contact_id; // string
    char *consignee_contact_id; // string
    char *notify_party_contact_id; // string
    char *carrier_id; // string
    char *vessel_id; // string
    char *voyage_id; // string
    char *port_of_loading_id; // string
    char *port_of_discharge_id; // string
    char *place_of_receipt; // string
    char *place_of_delivery; // string
    char *date_issued; //date time
    char *date_shipped; //date time
    char *date_delivered; //date time
    char *freight_terms; // string
    double freight_amount; //numeric
    char *freight_currency_id; // string
    double total_weight; //numeric
    int total_packages; //numeric
    char *special_instructions; // string
    char *remarks; // string
    char *shipment_id; // string
    char *tenant_id; // string
    char *enrollment_id; // string
    list_t *lines; //nonprimitive container

} seaway_bill_dto_t;

seaway_bill_dto_t *seaway_bill_dto_create(
    char *id,
    char *timestamp,
    char *document_number,
    char *status,
    char *shipper_contact_id,
    char *consignee_contact_id,
    char *notify_party_contact_id,
    char *carrier_id,
    char *vessel_id,
    char *voyage_id,
    char *port_of_loading_id,
    char *port_of_discharge_id,
    char *place_of_receipt,
    char *place_of_delivery,
    char *date_issued,
    char *date_shipped,
    char *date_delivered,
    char *freight_terms,
    double freight_amount,
    char *freight_currency_id,
    double total_weight,
    int total_packages,
    char *special_instructions,
    char *remarks,
    char *shipment_id,
    char *tenant_id,
    char *enrollment_id,
    list_t *lines
);

void seaway_bill_dto_free(seaway_bill_dto_t *seaway_bill_dto);

seaway_bill_dto_t *seaway_bill_dto_parseFromJSON(cJSON *seaway_bill_dtoJSON);

cJSON *seaway_bill_dto_convertToJSON(seaway_bill_dto_t *seaway_bill_dto);

#endif /* _seaway_bill_dto_H_ */

