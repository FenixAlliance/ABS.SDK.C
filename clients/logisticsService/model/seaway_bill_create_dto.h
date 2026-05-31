/*
 * seaway_bill_create_dto.h
 *
 * 
 */

#ifndef _seaway_bill_create_dto_H_
#define _seaway_bill_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct seaway_bill_create_dto_t seaway_bill_create_dto_t;




typedef struct seaway_bill_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *document_number; // string
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
    char *freight_terms; // string
    double freight_amount; //numeric
    char *freight_currency_id; // string
    double total_weight; //numeric
    int total_packages; //numeric
    char *special_instructions; // string
    char *remarks; // string
    char *shipment_id; // string

} seaway_bill_create_dto_t;

seaway_bill_create_dto_t *seaway_bill_create_dto_create(
    char *id,
    char *timestamp,
    char *document_number,
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
    char *freight_terms,
    double freight_amount,
    char *freight_currency_id,
    double total_weight,
    int total_packages,
    char *special_instructions,
    char *remarks,
    char *shipment_id
);

void seaway_bill_create_dto_free(seaway_bill_create_dto_t *seaway_bill_create_dto);

seaway_bill_create_dto_t *seaway_bill_create_dto_parseFromJSON(cJSON *seaway_bill_create_dtoJSON);

cJSON *seaway_bill_create_dto_convertToJSON(seaway_bill_create_dto_t *seaway_bill_create_dto);

#endif /* _seaway_bill_create_dto_H_ */

