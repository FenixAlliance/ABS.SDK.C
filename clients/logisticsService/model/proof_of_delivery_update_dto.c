#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "proof_of_delivery_update_dto.h"



proof_of_delivery_update_dto_t *proof_of_delivery_update_dto_create(
    char *document_number,
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
    char *overall_condition,
    int total_quantity_delivered,
    int total_quantity_rejected,
    char *remarks,
    char *photo_evidence_uri
    ) {
    proof_of_delivery_update_dto_t *proof_of_delivery_update_dto_local_var = malloc(sizeof(proof_of_delivery_update_dto_t));
    if (!proof_of_delivery_update_dto_local_var) {
        return NULL;
    }
    proof_of_delivery_update_dto_local_var->document_number = document_number;
    proof_of_delivery_update_dto_local_var->shipment_id = shipment_id;
    proof_of_delivery_update_dto_local_var->bill_of_lading_id = bill_of_lading_id;
    proof_of_delivery_update_dto_local_var->seaway_bill_id = seaway_bill_id;
    proof_of_delivery_update_dto_local_var->airway_bill_id = airway_bill_id;
    proof_of_delivery_update_dto_local_var->road_waybill_id = road_waybill_id;
    proof_of_delivery_update_dto_local_var->rail_waybill_id = rail_waybill_id;
    proof_of_delivery_update_dto_local_var->truck_trip_id = truck_trip_id;
    proof_of_delivery_update_dto_local_var->recipient_name = recipient_name;
    proof_of_delivery_update_dto_local_var->recipient_company_contact_id = recipient_company_contact_id;
    proof_of_delivery_update_dto_local_var->delivery_address = delivery_address;
    proof_of_delivery_update_dto_local_var->delivery_date = delivery_date;
    proof_of_delivery_update_dto_local_var->delivery_time = delivery_time;
    proof_of_delivery_update_dto_local_var->overall_condition = overall_condition;
    proof_of_delivery_update_dto_local_var->total_quantity_delivered = total_quantity_delivered;
    proof_of_delivery_update_dto_local_var->total_quantity_rejected = total_quantity_rejected;
    proof_of_delivery_update_dto_local_var->remarks = remarks;
    proof_of_delivery_update_dto_local_var->photo_evidence_uri = photo_evidence_uri;

    return proof_of_delivery_update_dto_local_var;
}


void proof_of_delivery_update_dto_free(proof_of_delivery_update_dto_t *proof_of_delivery_update_dto) {
    if(NULL == proof_of_delivery_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (proof_of_delivery_update_dto->document_number) {
        free(proof_of_delivery_update_dto->document_number);
        proof_of_delivery_update_dto->document_number = NULL;
    }
    if (proof_of_delivery_update_dto->shipment_id) {
        free(proof_of_delivery_update_dto->shipment_id);
        proof_of_delivery_update_dto->shipment_id = NULL;
    }
    if (proof_of_delivery_update_dto->bill_of_lading_id) {
        free(proof_of_delivery_update_dto->bill_of_lading_id);
        proof_of_delivery_update_dto->bill_of_lading_id = NULL;
    }
    if (proof_of_delivery_update_dto->seaway_bill_id) {
        free(proof_of_delivery_update_dto->seaway_bill_id);
        proof_of_delivery_update_dto->seaway_bill_id = NULL;
    }
    if (proof_of_delivery_update_dto->airway_bill_id) {
        free(proof_of_delivery_update_dto->airway_bill_id);
        proof_of_delivery_update_dto->airway_bill_id = NULL;
    }
    if (proof_of_delivery_update_dto->road_waybill_id) {
        free(proof_of_delivery_update_dto->road_waybill_id);
        proof_of_delivery_update_dto->road_waybill_id = NULL;
    }
    if (proof_of_delivery_update_dto->rail_waybill_id) {
        free(proof_of_delivery_update_dto->rail_waybill_id);
        proof_of_delivery_update_dto->rail_waybill_id = NULL;
    }
    if (proof_of_delivery_update_dto->truck_trip_id) {
        free(proof_of_delivery_update_dto->truck_trip_id);
        proof_of_delivery_update_dto->truck_trip_id = NULL;
    }
    if (proof_of_delivery_update_dto->recipient_name) {
        free(proof_of_delivery_update_dto->recipient_name);
        proof_of_delivery_update_dto->recipient_name = NULL;
    }
    if (proof_of_delivery_update_dto->recipient_company_contact_id) {
        free(proof_of_delivery_update_dto->recipient_company_contact_id);
        proof_of_delivery_update_dto->recipient_company_contact_id = NULL;
    }
    if (proof_of_delivery_update_dto->delivery_address) {
        free(proof_of_delivery_update_dto->delivery_address);
        proof_of_delivery_update_dto->delivery_address = NULL;
    }
    if (proof_of_delivery_update_dto->delivery_date) {
        free(proof_of_delivery_update_dto->delivery_date);
        proof_of_delivery_update_dto->delivery_date = NULL;
    }
    if (proof_of_delivery_update_dto->delivery_time) {
        free(proof_of_delivery_update_dto->delivery_time);
        proof_of_delivery_update_dto->delivery_time = NULL;
    }
    if (proof_of_delivery_update_dto->overall_condition) {
        free(proof_of_delivery_update_dto->overall_condition);
        proof_of_delivery_update_dto->overall_condition = NULL;
    }
    if (proof_of_delivery_update_dto->remarks) {
        free(proof_of_delivery_update_dto->remarks);
        proof_of_delivery_update_dto->remarks = NULL;
    }
    if (proof_of_delivery_update_dto->photo_evidence_uri) {
        free(proof_of_delivery_update_dto->photo_evidence_uri);
        proof_of_delivery_update_dto->photo_evidence_uri = NULL;
    }
    free(proof_of_delivery_update_dto);
}

cJSON *proof_of_delivery_update_dto_convertToJSON(proof_of_delivery_update_dto_t *proof_of_delivery_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // proof_of_delivery_update_dto->document_number
    if(proof_of_delivery_update_dto->document_number) {
    if(cJSON_AddStringToObject(item, "documentNumber", proof_of_delivery_update_dto->document_number) == NULL) {
    goto fail; //String
    }
    }


    // proof_of_delivery_update_dto->shipment_id
    if(proof_of_delivery_update_dto->shipment_id) {
    if(cJSON_AddStringToObject(item, "shipmentId", proof_of_delivery_update_dto->shipment_id) == NULL) {
    goto fail; //String
    }
    }


    // proof_of_delivery_update_dto->bill_of_lading_id
    if(proof_of_delivery_update_dto->bill_of_lading_id) {
    if(cJSON_AddStringToObject(item, "billOfLadingId", proof_of_delivery_update_dto->bill_of_lading_id) == NULL) {
    goto fail; //String
    }
    }


    // proof_of_delivery_update_dto->seaway_bill_id
    if(proof_of_delivery_update_dto->seaway_bill_id) {
    if(cJSON_AddStringToObject(item, "seawayBillId", proof_of_delivery_update_dto->seaway_bill_id) == NULL) {
    goto fail; //String
    }
    }


    // proof_of_delivery_update_dto->airway_bill_id
    if(proof_of_delivery_update_dto->airway_bill_id) {
    if(cJSON_AddStringToObject(item, "airwayBillId", proof_of_delivery_update_dto->airway_bill_id) == NULL) {
    goto fail; //String
    }
    }


    // proof_of_delivery_update_dto->road_waybill_id
    if(proof_of_delivery_update_dto->road_waybill_id) {
    if(cJSON_AddStringToObject(item, "roadWaybillId", proof_of_delivery_update_dto->road_waybill_id) == NULL) {
    goto fail; //String
    }
    }


    // proof_of_delivery_update_dto->rail_waybill_id
    if(proof_of_delivery_update_dto->rail_waybill_id) {
    if(cJSON_AddStringToObject(item, "railWaybillId", proof_of_delivery_update_dto->rail_waybill_id) == NULL) {
    goto fail; //String
    }
    }


    // proof_of_delivery_update_dto->truck_trip_id
    if(proof_of_delivery_update_dto->truck_trip_id) {
    if(cJSON_AddStringToObject(item, "truckTripId", proof_of_delivery_update_dto->truck_trip_id) == NULL) {
    goto fail; //String
    }
    }


    // proof_of_delivery_update_dto->recipient_name
    if(proof_of_delivery_update_dto->recipient_name) {
    if(cJSON_AddStringToObject(item, "recipientName", proof_of_delivery_update_dto->recipient_name) == NULL) {
    goto fail; //String
    }
    }


    // proof_of_delivery_update_dto->recipient_company_contact_id
    if(proof_of_delivery_update_dto->recipient_company_contact_id) {
    if(cJSON_AddStringToObject(item, "recipientCompanyContactId", proof_of_delivery_update_dto->recipient_company_contact_id) == NULL) {
    goto fail; //String
    }
    }


    // proof_of_delivery_update_dto->delivery_address
    if(proof_of_delivery_update_dto->delivery_address) {
    if(cJSON_AddStringToObject(item, "deliveryAddress", proof_of_delivery_update_dto->delivery_address) == NULL) {
    goto fail; //String
    }
    }


    // proof_of_delivery_update_dto->delivery_date
    if(proof_of_delivery_update_dto->delivery_date) {
    if(cJSON_AddStringToObject(item, "deliveryDate", proof_of_delivery_update_dto->delivery_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // proof_of_delivery_update_dto->delivery_time
    if(proof_of_delivery_update_dto->delivery_time) {
    if(cJSON_AddStringToObject(item, "deliveryTime", proof_of_delivery_update_dto->delivery_time) == NULL) {
    goto fail; //String
    }
    }


    // proof_of_delivery_update_dto->overall_condition
    if(proof_of_delivery_update_dto->overall_condition) {
    if(cJSON_AddStringToObject(item, "overallCondition", proof_of_delivery_update_dto->overall_condition) == NULL) {
    goto fail; //String
    }
    }


    // proof_of_delivery_update_dto->total_quantity_delivered
    if(proof_of_delivery_update_dto->total_quantity_delivered) {
    if(cJSON_AddNumberToObject(item, "totalQuantityDelivered", proof_of_delivery_update_dto->total_quantity_delivered) == NULL) {
    goto fail; //Numeric
    }
    }


    // proof_of_delivery_update_dto->total_quantity_rejected
    if(proof_of_delivery_update_dto->total_quantity_rejected) {
    if(cJSON_AddNumberToObject(item, "totalQuantityRejected", proof_of_delivery_update_dto->total_quantity_rejected) == NULL) {
    goto fail; //Numeric
    }
    }


    // proof_of_delivery_update_dto->remarks
    if(proof_of_delivery_update_dto->remarks) {
    if(cJSON_AddStringToObject(item, "remarks", proof_of_delivery_update_dto->remarks) == NULL) {
    goto fail; //String
    }
    }


    // proof_of_delivery_update_dto->photo_evidence_uri
    if(proof_of_delivery_update_dto->photo_evidence_uri) {
    if(cJSON_AddStringToObject(item, "photoEvidenceUri", proof_of_delivery_update_dto->photo_evidence_uri) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

proof_of_delivery_update_dto_t *proof_of_delivery_update_dto_parseFromJSON(cJSON *proof_of_delivery_update_dtoJSON){

    proof_of_delivery_update_dto_t *proof_of_delivery_update_dto_local_var = NULL;

    // proof_of_delivery_update_dto->document_number
    cJSON *document_number = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_update_dtoJSON, "documentNumber");
    if (document_number) { 
    if(!cJSON_IsString(document_number) && !cJSON_IsNull(document_number))
    {
    goto end; //String
    }
    }

    // proof_of_delivery_update_dto->shipment_id
    cJSON *shipment_id = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_update_dtoJSON, "shipmentId");
    if (shipment_id) { 
    if(!cJSON_IsString(shipment_id) && !cJSON_IsNull(shipment_id))
    {
    goto end; //String
    }
    }

    // proof_of_delivery_update_dto->bill_of_lading_id
    cJSON *bill_of_lading_id = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_update_dtoJSON, "billOfLadingId");
    if (bill_of_lading_id) { 
    if(!cJSON_IsString(bill_of_lading_id) && !cJSON_IsNull(bill_of_lading_id))
    {
    goto end; //String
    }
    }

    // proof_of_delivery_update_dto->seaway_bill_id
    cJSON *seaway_bill_id = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_update_dtoJSON, "seawayBillId");
    if (seaway_bill_id) { 
    if(!cJSON_IsString(seaway_bill_id) && !cJSON_IsNull(seaway_bill_id))
    {
    goto end; //String
    }
    }

    // proof_of_delivery_update_dto->airway_bill_id
    cJSON *airway_bill_id = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_update_dtoJSON, "airwayBillId");
    if (airway_bill_id) { 
    if(!cJSON_IsString(airway_bill_id) && !cJSON_IsNull(airway_bill_id))
    {
    goto end; //String
    }
    }

    // proof_of_delivery_update_dto->road_waybill_id
    cJSON *road_waybill_id = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_update_dtoJSON, "roadWaybillId");
    if (road_waybill_id) { 
    if(!cJSON_IsString(road_waybill_id) && !cJSON_IsNull(road_waybill_id))
    {
    goto end; //String
    }
    }

    // proof_of_delivery_update_dto->rail_waybill_id
    cJSON *rail_waybill_id = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_update_dtoJSON, "railWaybillId");
    if (rail_waybill_id) { 
    if(!cJSON_IsString(rail_waybill_id) && !cJSON_IsNull(rail_waybill_id))
    {
    goto end; //String
    }
    }

    // proof_of_delivery_update_dto->truck_trip_id
    cJSON *truck_trip_id = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_update_dtoJSON, "truckTripId");
    if (truck_trip_id) { 
    if(!cJSON_IsString(truck_trip_id) && !cJSON_IsNull(truck_trip_id))
    {
    goto end; //String
    }
    }

    // proof_of_delivery_update_dto->recipient_name
    cJSON *recipient_name = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_update_dtoJSON, "recipientName");
    if (recipient_name) { 
    if(!cJSON_IsString(recipient_name) && !cJSON_IsNull(recipient_name))
    {
    goto end; //String
    }
    }

    // proof_of_delivery_update_dto->recipient_company_contact_id
    cJSON *recipient_company_contact_id = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_update_dtoJSON, "recipientCompanyContactId");
    if (recipient_company_contact_id) { 
    if(!cJSON_IsString(recipient_company_contact_id) && !cJSON_IsNull(recipient_company_contact_id))
    {
    goto end; //String
    }
    }

    // proof_of_delivery_update_dto->delivery_address
    cJSON *delivery_address = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_update_dtoJSON, "deliveryAddress");
    if (delivery_address) { 
    if(!cJSON_IsString(delivery_address) && !cJSON_IsNull(delivery_address))
    {
    goto end; //String
    }
    }

    // proof_of_delivery_update_dto->delivery_date
    cJSON *delivery_date = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_update_dtoJSON, "deliveryDate");
    if (delivery_date) { 
    if(!cJSON_IsString(delivery_date) && !cJSON_IsNull(delivery_date))
    {
    goto end; //DateTime
    }
    }

    // proof_of_delivery_update_dto->delivery_time
    cJSON *delivery_time = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_update_dtoJSON, "deliveryTime");
    if (delivery_time) { 
    if(!cJSON_IsString(delivery_time) && !cJSON_IsNull(delivery_time))
    {
    goto end; //String
    }
    }

    // proof_of_delivery_update_dto->overall_condition
    cJSON *overall_condition = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_update_dtoJSON, "overallCondition");
    if (overall_condition) { 
    if(!cJSON_IsString(overall_condition) && !cJSON_IsNull(overall_condition))
    {
    goto end; //String
    }
    }

    // proof_of_delivery_update_dto->total_quantity_delivered
    cJSON *total_quantity_delivered = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_update_dtoJSON, "totalQuantityDelivered");
    if (total_quantity_delivered) { 
    if(!cJSON_IsNumber(total_quantity_delivered))
    {
    goto end; //Numeric
    }
    }

    // proof_of_delivery_update_dto->total_quantity_rejected
    cJSON *total_quantity_rejected = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_update_dtoJSON, "totalQuantityRejected");
    if (total_quantity_rejected) { 
    if(!cJSON_IsNumber(total_quantity_rejected))
    {
    goto end; //Numeric
    }
    }

    // proof_of_delivery_update_dto->remarks
    cJSON *remarks = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_update_dtoJSON, "remarks");
    if (remarks) { 
    if(!cJSON_IsString(remarks) && !cJSON_IsNull(remarks))
    {
    goto end; //String
    }
    }

    // proof_of_delivery_update_dto->photo_evidence_uri
    cJSON *photo_evidence_uri = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_update_dtoJSON, "photoEvidenceUri");
    if (photo_evidence_uri) { 
    if(!cJSON_IsString(photo_evidence_uri) && !cJSON_IsNull(photo_evidence_uri))
    {
    goto end; //String
    }
    }


    proof_of_delivery_update_dto_local_var = proof_of_delivery_update_dto_create (
        document_number && !cJSON_IsNull(document_number) ? strdup(document_number->valuestring) : NULL,
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
        overall_condition && !cJSON_IsNull(overall_condition) ? strdup(overall_condition->valuestring) : NULL,
        total_quantity_delivered ? total_quantity_delivered->valuedouble : 0,
        total_quantity_rejected ? total_quantity_rejected->valuedouble : 0,
        remarks && !cJSON_IsNull(remarks) ? strdup(remarks->valuestring) : NULL,
        photo_evidence_uri && !cJSON_IsNull(photo_evidence_uri) ? strdup(photo_evidence_uri->valuestring) : NULL
        );

    return proof_of_delivery_update_dto_local_var;
end:
    return NULL;

}
