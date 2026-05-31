#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "proof_of_delivery_dto.h"



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
    ) {
    proof_of_delivery_dto_t *proof_of_delivery_dto_local_var = malloc(sizeof(proof_of_delivery_dto_t));
    if (!proof_of_delivery_dto_local_var) {
        return NULL;
    }
    proof_of_delivery_dto_local_var->id = id;
    proof_of_delivery_dto_local_var->timestamp = timestamp;
    proof_of_delivery_dto_local_var->document_number = document_number;
    proof_of_delivery_dto_local_var->status = status;
    proof_of_delivery_dto_local_var->shipment_id = shipment_id;
    proof_of_delivery_dto_local_var->bill_of_lading_id = bill_of_lading_id;
    proof_of_delivery_dto_local_var->seaway_bill_id = seaway_bill_id;
    proof_of_delivery_dto_local_var->airway_bill_id = airway_bill_id;
    proof_of_delivery_dto_local_var->road_waybill_id = road_waybill_id;
    proof_of_delivery_dto_local_var->rail_waybill_id = rail_waybill_id;
    proof_of_delivery_dto_local_var->truck_trip_id = truck_trip_id;
    proof_of_delivery_dto_local_var->recipient_name = recipient_name;
    proof_of_delivery_dto_local_var->recipient_company_contact_id = recipient_company_contact_id;
    proof_of_delivery_dto_local_var->delivery_address = delivery_address;
    proof_of_delivery_dto_local_var->delivery_date = delivery_date;
    proof_of_delivery_dto_local_var->delivery_time = delivery_time;
    proof_of_delivery_dto_local_var->signed_by = signed_by;
    proof_of_delivery_dto_local_var->signer_identification = signer_identification;
    proof_of_delivery_dto_local_var->signature_date = signature_date;
    proof_of_delivery_dto_local_var->digital_signature_reference = digital_signature_reference;
    proof_of_delivery_dto_local_var->overall_condition = overall_condition;
    proof_of_delivery_dto_local_var->total_quantity_delivered = total_quantity_delivered;
    proof_of_delivery_dto_local_var->total_quantity_rejected = total_quantity_rejected;
    proof_of_delivery_dto_local_var->remarks = remarks;
    proof_of_delivery_dto_local_var->photo_evidence_uri = photo_evidence_uri;
    proof_of_delivery_dto_local_var->tenant_id = tenant_id;
    proof_of_delivery_dto_local_var->enrollment_id = enrollment_id;
    proof_of_delivery_dto_local_var->lines = lines;
    proof_of_delivery_dto_local_var->delivery_note_ids = delivery_note_ids;

    return proof_of_delivery_dto_local_var;
}


void proof_of_delivery_dto_free(proof_of_delivery_dto_t *proof_of_delivery_dto) {
    if(NULL == proof_of_delivery_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (proof_of_delivery_dto->id) {
        free(proof_of_delivery_dto->id);
        proof_of_delivery_dto->id = NULL;
    }
    if (proof_of_delivery_dto->timestamp) {
        free(proof_of_delivery_dto->timestamp);
        proof_of_delivery_dto->timestamp = NULL;
    }
    if (proof_of_delivery_dto->document_number) {
        free(proof_of_delivery_dto->document_number);
        proof_of_delivery_dto->document_number = NULL;
    }
    if (proof_of_delivery_dto->status) {
        free(proof_of_delivery_dto->status);
        proof_of_delivery_dto->status = NULL;
    }
    if (proof_of_delivery_dto->shipment_id) {
        free(proof_of_delivery_dto->shipment_id);
        proof_of_delivery_dto->shipment_id = NULL;
    }
    if (proof_of_delivery_dto->bill_of_lading_id) {
        free(proof_of_delivery_dto->bill_of_lading_id);
        proof_of_delivery_dto->bill_of_lading_id = NULL;
    }
    if (proof_of_delivery_dto->seaway_bill_id) {
        free(proof_of_delivery_dto->seaway_bill_id);
        proof_of_delivery_dto->seaway_bill_id = NULL;
    }
    if (proof_of_delivery_dto->airway_bill_id) {
        free(proof_of_delivery_dto->airway_bill_id);
        proof_of_delivery_dto->airway_bill_id = NULL;
    }
    if (proof_of_delivery_dto->road_waybill_id) {
        free(proof_of_delivery_dto->road_waybill_id);
        proof_of_delivery_dto->road_waybill_id = NULL;
    }
    if (proof_of_delivery_dto->rail_waybill_id) {
        free(proof_of_delivery_dto->rail_waybill_id);
        proof_of_delivery_dto->rail_waybill_id = NULL;
    }
    if (proof_of_delivery_dto->truck_trip_id) {
        free(proof_of_delivery_dto->truck_trip_id);
        proof_of_delivery_dto->truck_trip_id = NULL;
    }
    if (proof_of_delivery_dto->recipient_name) {
        free(proof_of_delivery_dto->recipient_name);
        proof_of_delivery_dto->recipient_name = NULL;
    }
    if (proof_of_delivery_dto->recipient_company_contact_id) {
        free(proof_of_delivery_dto->recipient_company_contact_id);
        proof_of_delivery_dto->recipient_company_contact_id = NULL;
    }
    if (proof_of_delivery_dto->delivery_address) {
        free(proof_of_delivery_dto->delivery_address);
        proof_of_delivery_dto->delivery_address = NULL;
    }
    if (proof_of_delivery_dto->delivery_date) {
        free(proof_of_delivery_dto->delivery_date);
        proof_of_delivery_dto->delivery_date = NULL;
    }
    if (proof_of_delivery_dto->delivery_time) {
        free(proof_of_delivery_dto->delivery_time);
        proof_of_delivery_dto->delivery_time = NULL;
    }
    if (proof_of_delivery_dto->signed_by) {
        free(proof_of_delivery_dto->signed_by);
        proof_of_delivery_dto->signed_by = NULL;
    }
    if (proof_of_delivery_dto->signer_identification) {
        free(proof_of_delivery_dto->signer_identification);
        proof_of_delivery_dto->signer_identification = NULL;
    }
    if (proof_of_delivery_dto->signature_date) {
        free(proof_of_delivery_dto->signature_date);
        proof_of_delivery_dto->signature_date = NULL;
    }
    if (proof_of_delivery_dto->digital_signature_reference) {
        free(proof_of_delivery_dto->digital_signature_reference);
        proof_of_delivery_dto->digital_signature_reference = NULL;
    }
    if (proof_of_delivery_dto->overall_condition) {
        free(proof_of_delivery_dto->overall_condition);
        proof_of_delivery_dto->overall_condition = NULL;
    }
    if (proof_of_delivery_dto->remarks) {
        free(proof_of_delivery_dto->remarks);
        proof_of_delivery_dto->remarks = NULL;
    }
    if (proof_of_delivery_dto->photo_evidence_uri) {
        free(proof_of_delivery_dto->photo_evidence_uri);
        proof_of_delivery_dto->photo_evidence_uri = NULL;
    }
    if (proof_of_delivery_dto->tenant_id) {
        free(proof_of_delivery_dto->tenant_id);
        proof_of_delivery_dto->tenant_id = NULL;
    }
    if (proof_of_delivery_dto->enrollment_id) {
        free(proof_of_delivery_dto->enrollment_id);
        proof_of_delivery_dto->enrollment_id = NULL;
    }
    if (proof_of_delivery_dto->lines) {
        list_ForEach(listEntry, proof_of_delivery_dto->lines) {
            proof_of_delivery_line_dto_free(listEntry->data);
        }
        list_freeList(proof_of_delivery_dto->lines);
        proof_of_delivery_dto->lines = NULL;
    }
    if (proof_of_delivery_dto->delivery_note_ids) {
        list_ForEach(listEntry, proof_of_delivery_dto->delivery_note_ids) {
            free(listEntry->data);
        }
        list_freeList(proof_of_delivery_dto->delivery_note_ids);
        proof_of_delivery_dto->delivery_note_ids = NULL;
    }
    free(proof_of_delivery_dto);
}

cJSON *proof_of_delivery_dto_convertToJSON(proof_of_delivery_dto_t *proof_of_delivery_dto) {
    cJSON *item = cJSON_CreateObject();

    // proof_of_delivery_dto->id
    if(proof_of_delivery_dto->id) {
    if(cJSON_AddStringToObject(item, "id", proof_of_delivery_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // proof_of_delivery_dto->timestamp
    if(proof_of_delivery_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", proof_of_delivery_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // proof_of_delivery_dto->document_number
    if(proof_of_delivery_dto->document_number) {
    if(cJSON_AddStringToObject(item, "documentNumber", proof_of_delivery_dto->document_number) == NULL) {
    goto fail; //String
    }
    }


    // proof_of_delivery_dto->status
    if(proof_of_delivery_dto->status) {
    if(cJSON_AddStringToObject(item, "status", proof_of_delivery_dto->status) == NULL) {
    goto fail; //String
    }
    }


    // proof_of_delivery_dto->shipment_id
    if(proof_of_delivery_dto->shipment_id) {
    if(cJSON_AddStringToObject(item, "shipmentId", proof_of_delivery_dto->shipment_id) == NULL) {
    goto fail; //String
    }
    }


    // proof_of_delivery_dto->bill_of_lading_id
    if(proof_of_delivery_dto->bill_of_lading_id) {
    if(cJSON_AddStringToObject(item, "billOfLadingId", proof_of_delivery_dto->bill_of_lading_id) == NULL) {
    goto fail; //String
    }
    }


    // proof_of_delivery_dto->seaway_bill_id
    if(proof_of_delivery_dto->seaway_bill_id) {
    if(cJSON_AddStringToObject(item, "seawayBillId", proof_of_delivery_dto->seaway_bill_id) == NULL) {
    goto fail; //String
    }
    }


    // proof_of_delivery_dto->airway_bill_id
    if(proof_of_delivery_dto->airway_bill_id) {
    if(cJSON_AddStringToObject(item, "airwayBillId", proof_of_delivery_dto->airway_bill_id) == NULL) {
    goto fail; //String
    }
    }


    // proof_of_delivery_dto->road_waybill_id
    if(proof_of_delivery_dto->road_waybill_id) {
    if(cJSON_AddStringToObject(item, "roadWaybillId", proof_of_delivery_dto->road_waybill_id) == NULL) {
    goto fail; //String
    }
    }


    // proof_of_delivery_dto->rail_waybill_id
    if(proof_of_delivery_dto->rail_waybill_id) {
    if(cJSON_AddStringToObject(item, "railWaybillId", proof_of_delivery_dto->rail_waybill_id) == NULL) {
    goto fail; //String
    }
    }


    // proof_of_delivery_dto->truck_trip_id
    if(proof_of_delivery_dto->truck_trip_id) {
    if(cJSON_AddStringToObject(item, "truckTripId", proof_of_delivery_dto->truck_trip_id) == NULL) {
    goto fail; //String
    }
    }


    // proof_of_delivery_dto->recipient_name
    if(proof_of_delivery_dto->recipient_name) {
    if(cJSON_AddStringToObject(item, "recipientName", proof_of_delivery_dto->recipient_name) == NULL) {
    goto fail; //String
    }
    }


    // proof_of_delivery_dto->recipient_company_contact_id
    if(proof_of_delivery_dto->recipient_company_contact_id) {
    if(cJSON_AddStringToObject(item, "recipientCompanyContactId", proof_of_delivery_dto->recipient_company_contact_id) == NULL) {
    goto fail; //String
    }
    }


    // proof_of_delivery_dto->delivery_address
    if(proof_of_delivery_dto->delivery_address) {
    if(cJSON_AddStringToObject(item, "deliveryAddress", proof_of_delivery_dto->delivery_address) == NULL) {
    goto fail; //String
    }
    }


    // proof_of_delivery_dto->delivery_date
    if(proof_of_delivery_dto->delivery_date) {
    if(cJSON_AddStringToObject(item, "deliveryDate", proof_of_delivery_dto->delivery_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // proof_of_delivery_dto->delivery_time
    if(proof_of_delivery_dto->delivery_time) {
    if(cJSON_AddStringToObject(item, "deliveryTime", proof_of_delivery_dto->delivery_time) == NULL) {
    goto fail; //String
    }
    }


    // proof_of_delivery_dto->signed_by
    if(proof_of_delivery_dto->signed_by) {
    if(cJSON_AddStringToObject(item, "signedBy", proof_of_delivery_dto->signed_by) == NULL) {
    goto fail; //String
    }
    }


    // proof_of_delivery_dto->signer_identification
    if(proof_of_delivery_dto->signer_identification) {
    if(cJSON_AddStringToObject(item, "signerIdentification", proof_of_delivery_dto->signer_identification) == NULL) {
    goto fail; //String
    }
    }


    // proof_of_delivery_dto->signature_date
    if(proof_of_delivery_dto->signature_date) {
    if(cJSON_AddStringToObject(item, "signatureDate", proof_of_delivery_dto->signature_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // proof_of_delivery_dto->digital_signature_reference
    if(proof_of_delivery_dto->digital_signature_reference) {
    if(cJSON_AddStringToObject(item, "digitalSignatureReference", proof_of_delivery_dto->digital_signature_reference) == NULL) {
    goto fail; //String
    }
    }


    // proof_of_delivery_dto->overall_condition
    if(proof_of_delivery_dto->overall_condition) {
    if(cJSON_AddStringToObject(item, "overallCondition", proof_of_delivery_dto->overall_condition) == NULL) {
    goto fail; //String
    }
    }


    // proof_of_delivery_dto->total_quantity_delivered
    if(proof_of_delivery_dto->total_quantity_delivered) {
    if(cJSON_AddNumberToObject(item, "totalQuantityDelivered", proof_of_delivery_dto->total_quantity_delivered) == NULL) {
    goto fail; //Numeric
    }
    }


    // proof_of_delivery_dto->total_quantity_rejected
    if(proof_of_delivery_dto->total_quantity_rejected) {
    if(cJSON_AddNumberToObject(item, "totalQuantityRejected", proof_of_delivery_dto->total_quantity_rejected) == NULL) {
    goto fail; //Numeric
    }
    }


    // proof_of_delivery_dto->remarks
    if(proof_of_delivery_dto->remarks) {
    if(cJSON_AddStringToObject(item, "remarks", proof_of_delivery_dto->remarks) == NULL) {
    goto fail; //String
    }
    }


    // proof_of_delivery_dto->photo_evidence_uri
    if(proof_of_delivery_dto->photo_evidence_uri) {
    if(cJSON_AddStringToObject(item, "photoEvidenceUri", proof_of_delivery_dto->photo_evidence_uri) == NULL) {
    goto fail; //String
    }
    }


    // proof_of_delivery_dto->tenant_id
    if(proof_of_delivery_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", proof_of_delivery_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // proof_of_delivery_dto->enrollment_id
    if(proof_of_delivery_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", proof_of_delivery_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // proof_of_delivery_dto->lines
    if(proof_of_delivery_dto->lines) {
    cJSON *lines = cJSON_AddArrayToObject(item, "lines");
    if(lines == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *linesListEntry;
    if (proof_of_delivery_dto->lines) {
    list_ForEach(linesListEntry, proof_of_delivery_dto->lines) {
    cJSON *itemLocal = proof_of_delivery_line_dto_convertToJSON(linesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(lines, itemLocal);
    }
    }
    }


    // proof_of_delivery_dto->delivery_note_ids
    if(proof_of_delivery_dto->delivery_note_ids) {
    cJSON *delivery_note_ids = cJSON_AddArrayToObject(item, "deliveryNoteIds");
    if(delivery_note_ids == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *delivery_note_idsListEntry;
    list_ForEach(delivery_note_idsListEntry, proof_of_delivery_dto->delivery_note_ids) {
    if(cJSON_AddStringToObject(delivery_note_ids, "", (char*)delivery_note_idsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

proof_of_delivery_dto_t *proof_of_delivery_dto_parseFromJSON(cJSON *proof_of_delivery_dtoJSON){

    proof_of_delivery_dto_t *proof_of_delivery_dto_local_var = NULL;

    // define the local list for proof_of_delivery_dto->lines
    list_t *linesList = NULL;

    // define the local list for proof_of_delivery_dto->delivery_note_ids
    list_t *delivery_note_idsList = NULL;

    // proof_of_delivery_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // proof_of_delivery_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // proof_of_delivery_dto->document_number
    cJSON *document_number = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_dtoJSON, "documentNumber");
    if (document_number) { 
    if(!cJSON_IsString(document_number) && !cJSON_IsNull(document_number))
    {
    goto end; //String
    }
    }

    // proof_of_delivery_dto->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_dtoJSON, "status");
    if (status) { 
    if(!cJSON_IsString(status) && !cJSON_IsNull(status))
    {
    goto end; //String
    }
    }

    // proof_of_delivery_dto->shipment_id
    cJSON *shipment_id = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_dtoJSON, "shipmentId");
    if (shipment_id) { 
    if(!cJSON_IsString(shipment_id) && !cJSON_IsNull(shipment_id))
    {
    goto end; //String
    }
    }

    // proof_of_delivery_dto->bill_of_lading_id
    cJSON *bill_of_lading_id = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_dtoJSON, "billOfLadingId");
    if (bill_of_lading_id) { 
    if(!cJSON_IsString(bill_of_lading_id) && !cJSON_IsNull(bill_of_lading_id))
    {
    goto end; //String
    }
    }

    // proof_of_delivery_dto->seaway_bill_id
    cJSON *seaway_bill_id = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_dtoJSON, "seawayBillId");
    if (seaway_bill_id) { 
    if(!cJSON_IsString(seaway_bill_id) && !cJSON_IsNull(seaway_bill_id))
    {
    goto end; //String
    }
    }

    // proof_of_delivery_dto->airway_bill_id
    cJSON *airway_bill_id = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_dtoJSON, "airwayBillId");
    if (airway_bill_id) { 
    if(!cJSON_IsString(airway_bill_id) && !cJSON_IsNull(airway_bill_id))
    {
    goto end; //String
    }
    }

    // proof_of_delivery_dto->road_waybill_id
    cJSON *road_waybill_id = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_dtoJSON, "roadWaybillId");
    if (road_waybill_id) { 
    if(!cJSON_IsString(road_waybill_id) && !cJSON_IsNull(road_waybill_id))
    {
    goto end; //String
    }
    }

    // proof_of_delivery_dto->rail_waybill_id
    cJSON *rail_waybill_id = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_dtoJSON, "railWaybillId");
    if (rail_waybill_id) { 
    if(!cJSON_IsString(rail_waybill_id) && !cJSON_IsNull(rail_waybill_id))
    {
    goto end; //String
    }
    }

    // proof_of_delivery_dto->truck_trip_id
    cJSON *truck_trip_id = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_dtoJSON, "truckTripId");
    if (truck_trip_id) { 
    if(!cJSON_IsString(truck_trip_id) && !cJSON_IsNull(truck_trip_id))
    {
    goto end; //String
    }
    }

    // proof_of_delivery_dto->recipient_name
    cJSON *recipient_name = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_dtoJSON, "recipientName");
    if (recipient_name) { 
    if(!cJSON_IsString(recipient_name) && !cJSON_IsNull(recipient_name))
    {
    goto end; //String
    }
    }

    // proof_of_delivery_dto->recipient_company_contact_id
    cJSON *recipient_company_contact_id = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_dtoJSON, "recipientCompanyContactId");
    if (recipient_company_contact_id) { 
    if(!cJSON_IsString(recipient_company_contact_id) && !cJSON_IsNull(recipient_company_contact_id))
    {
    goto end; //String
    }
    }

    // proof_of_delivery_dto->delivery_address
    cJSON *delivery_address = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_dtoJSON, "deliveryAddress");
    if (delivery_address) { 
    if(!cJSON_IsString(delivery_address) && !cJSON_IsNull(delivery_address))
    {
    goto end; //String
    }
    }

    // proof_of_delivery_dto->delivery_date
    cJSON *delivery_date = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_dtoJSON, "deliveryDate");
    if (delivery_date) { 
    if(!cJSON_IsString(delivery_date) && !cJSON_IsNull(delivery_date))
    {
    goto end; //DateTime
    }
    }

    // proof_of_delivery_dto->delivery_time
    cJSON *delivery_time = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_dtoJSON, "deliveryTime");
    if (delivery_time) { 
    if(!cJSON_IsString(delivery_time) && !cJSON_IsNull(delivery_time))
    {
    goto end; //String
    }
    }

    // proof_of_delivery_dto->signed_by
    cJSON *signed_by = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_dtoJSON, "signedBy");
    if (signed_by) { 
    if(!cJSON_IsString(signed_by) && !cJSON_IsNull(signed_by))
    {
    goto end; //String
    }
    }

    // proof_of_delivery_dto->signer_identification
    cJSON *signer_identification = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_dtoJSON, "signerIdentification");
    if (signer_identification) { 
    if(!cJSON_IsString(signer_identification) && !cJSON_IsNull(signer_identification))
    {
    goto end; //String
    }
    }

    // proof_of_delivery_dto->signature_date
    cJSON *signature_date = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_dtoJSON, "signatureDate");
    if (signature_date) { 
    if(!cJSON_IsString(signature_date) && !cJSON_IsNull(signature_date))
    {
    goto end; //DateTime
    }
    }

    // proof_of_delivery_dto->digital_signature_reference
    cJSON *digital_signature_reference = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_dtoJSON, "digitalSignatureReference");
    if (digital_signature_reference) { 
    if(!cJSON_IsString(digital_signature_reference) && !cJSON_IsNull(digital_signature_reference))
    {
    goto end; //String
    }
    }

    // proof_of_delivery_dto->overall_condition
    cJSON *overall_condition = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_dtoJSON, "overallCondition");
    if (overall_condition) { 
    if(!cJSON_IsString(overall_condition) && !cJSON_IsNull(overall_condition))
    {
    goto end; //String
    }
    }

    // proof_of_delivery_dto->total_quantity_delivered
    cJSON *total_quantity_delivered = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_dtoJSON, "totalQuantityDelivered");
    if (total_quantity_delivered) { 
    if(!cJSON_IsNumber(total_quantity_delivered))
    {
    goto end; //Numeric
    }
    }

    // proof_of_delivery_dto->total_quantity_rejected
    cJSON *total_quantity_rejected = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_dtoJSON, "totalQuantityRejected");
    if (total_quantity_rejected) { 
    if(!cJSON_IsNumber(total_quantity_rejected))
    {
    goto end; //Numeric
    }
    }

    // proof_of_delivery_dto->remarks
    cJSON *remarks = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_dtoJSON, "remarks");
    if (remarks) { 
    if(!cJSON_IsString(remarks) && !cJSON_IsNull(remarks))
    {
    goto end; //String
    }
    }

    // proof_of_delivery_dto->photo_evidence_uri
    cJSON *photo_evidence_uri = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_dtoJSON, "photoEvidenceUri");
    if (photo_evidence_uri) { 
    if(!cJSON_IsString(photo_evidence_uri) && !cJSON_IsNull(photo_evidence_uri))
    {
    goto end; //String
    }
    }

    // proof_of_delivery_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // proof_of_delivery_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // proof_of_delivery_dto->lines
    cJSON *lines = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_dtoJSON, "lines");
    if (lines) { 
    cJSON *lines_local_nonprimitive = NULL;
    if(!cJSON_IsArray(lines)){
        goto end; //nonprimitive container
    }

    linesList = list_createList();

    cJSON_ArrayForEach(lines_local_nonprimitive,lines )
    {
        if(!cJSON_IsObject(lines_local_nonprimitive)){
            goto end;
        }
        proof_of_delivery_line_dto_t *linesItem = proof_of_delivery_line_dto_parseFromJSON(lines_local_nonprimitive);

        list_addElement(linesList, linesItem);
    }
    }

    // proof_of_delivery_dto->delivery_note_ids
    cJSON *delivery_note_ids = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_dtoJSON, "deliveryNoteIds");
    if (delivery_note_ids) { 
    cJSON *delivery_note_ids_local = NULL;
    if(!cJSON_IsArray(delivery_note_ids)) {
        goto end;//primitive container
    }
    delivery_note_idsList = list_createList();

    cJSON_ArrayForEach(delivery_note_ids_local, delivery_note_ids)
    {
        if(!cJSON_IsString(delivery_note_ids_local))
        {
            goto end;
        }
        list_addElement(delivery_note_idsList , strdup(delivery_note_ids_local->valuestring));
    }
    }


    proof_of_delivery_dto_local_var = proof_of_delivery_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        document_number && !cJSON_IsNull(document_number) ? strdup(document_number->valuestring) : NULL,
        status && !cJSON_IsNull(status) ? strdup(status->valuestring) : NULL,
        shipment_id && !cJSON_IsNull(shipment_id) ? strdup(shipment_id->valuestring) : NULL,
        bill_of_lading_id && !cJSON_IsNull(bill_of_lading_id) ? strdup(bill_of_lading_id->valuestring) : NULL,
        seaway_bill_id && !cJSON_IsNull(seaway_bill_id) ? strdup(seaway_bill_id->valuestring) : NULL,
        airway_bill_id && !cJSON_IsNull(airway_bill_id) ? strdup(airway_bill_id->valuestring) : NULL,
        road_waybill_id && !cJSON_IsNull(road_waybill_id) ? strdup(road_waybill_id->valuestring) : NULL,
        rail_waybill_id && !cJSON_IsNull(rail_waybill_id) ? strdup(rail_waybill_id->valuestring) : NULL,
        truck_trip_id && !cJSON_IsNull(truck_trip_id) ? strdup(truck_trip_id->valuestring) : NULL,
        recipient_name && !cJSON_IsNull(recipient_name) ? strdup(recipient_name->valuestring) : NULL,
        recipient_company_contact_id && !cJSON_IsNull(recipient_company_contact_id) ? strdup(recipient_company_contact_id->valuestring) : NULL,
        delivery_address && !cJSON_IsNull(delivery_address) ? strdup(delivery_address->valuestring) : NULL,
        delivery_date && !cJSON_IsNull(delivery_date) ? strdup(delivery_date->valuestring) : NULL,
        delivery_time && !cJSON_IsNull(delivery_time) ? strdup(delivery_time->valuestring) : NULL,
        signed_by && !cJSON_IsNull(signed_by) ? strdup(signed_by->valuestring) : NULL,
        signer_identification && !cJSON_IsNull(signer_identification) ? strdup(signer_identification->valuestring) : NULL,
        signature_date && !cJSON_IsNull(signature_date) ? strdup(signature_date->valuestring) : NULL,
        digital_signature_reference && !cJSON_IsNull(digital_signature_reference) ? strdup(digital_signature_reference->valuestring) : NULL,
        overall_condition && !cJSON_IsNull(overall_condition) ? strdup(overall_condition->valuestring) : NULL,
        total_quantity_delivered ? total_quantity_delivered->valuedouble : 0,
        total_quantity_rejected ? total_quantity_rejected->valuedouble : 0,
        remarks && !cJSON_IsNull(remarks) ? strdup(remarks->valuestring) : NULL,
        photo_evidence_uri && !cJSON_IsNull(photo_evidence_uri) ? strdup(photo_evidence_uri->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        lines ? linesList : NULL,
        delivery_note_ids ? delivery_note_idsList : NULL
        );

    return proof_of_delivery_dto_local_var;
end:
    if (linesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, linesList) {
            proof_of_delivery_line_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(linesList);
        linesList = NULL;
    }
    if (delivery_note_idsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, delivery_note_idsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(delivery_note_idsList);
        delivery_note_idsList = NULL;
    }
    return NULL;

}
