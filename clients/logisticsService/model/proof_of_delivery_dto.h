/*
 * proof_of_delivery_dto.h
 *
 * 
 */

#ifndef _proof_of_delivery_dto_H_
#define _proof_of_delivery_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct proof_of_delivery_dto_t proof_of_delivery_dto_t;

#include "proof_of_delivery_line_dto.h"



typedef struct proof_of_delivery_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *document_number; // string
    char *status; // string
    char *shipment_id; // string
    char *bill_of_lading_id; // string
    char *seaway_bill_id; // string
    char *airway_bill_id; // string
    char *road_waybill_id; // string
    char *rail_waybill_id; // string
    char *truck_trip_id; // string
    char *recipient_name; // string
    char *recipient_company_contact_id; // string
    char *delivery_address; // string
    char *delivery_date; //date time
    char *delivery_time; // string
    char *signed_by; // string
    char *signer_identification; // string
    char *signature_date; //date time
    char *digital_signature_reference; // string
    char *overall_condition; // string
    int total_quantity_delivered; //numeric
    int total_quantity_rejected; //numeric
    char *remarks; // string
    char *photo_evidence_uri; // string
    char *tenant_id; // string
    char *enrollment_id; // string
    list_t *lines; //nonprimitive container
    list_t *delivery_note_ids; //primitive container

} proof_of_delivery_dto_t;

proof_of_delivery_dto_t *proof_of_delivery_dto_create(
    char *id,
    char *timestamp,
    char *document_number,
    char *status,
    char *shipment_id,
    char *bill_of_lading_id,
    char *seaway_bill_id,
    char *airway_bill_id,
    char *road_waybill_id,
    char *rail_waybill_id,
    char *truck_trip_id,
    char *recipient_name,
    char *recipient_company_contact_id,
    char *delivery_address,
    char *delivery_date,
    char *delivery_time,
    char *signed_by,
    char *signer_identification,
    char *signature_date,
    char *digital_signature_reference,
    char *overall_condition,
    int total_quantity_delivered,
    int total_quantity_rejected,
    char *remarks,
    char *photo_evidence_uri,
    char *tenant_id,
    char *enrollment_id,
    list_t *lines,
    list_t *delivery_note_ids
);

void proof_of_delivery_dto_free(proof_of_delivery_dto_t *proof_of_delivery_dto);

proof_of_delivery_dto_t *proof_of_delivery_dto_parseFromJSON(cJSON *proof_of_delivery_dtoJSON);

cJSON *proof_of_delivery_dto_convertToJSON(proof_of_delivery_dto_t *proof_of_delivery_dto);

#endif /* _proof_of_delivery_dto_H_ */

