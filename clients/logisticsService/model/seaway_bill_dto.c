#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "seaway_bill_dto.h"



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
    ) {
    seaway_bill_dto_t *seaway_bill_dto_local_var = malloc(sizeof(seaway_bill_dto_t));
    if (!seaway_bill_dto_local_var) {
        return NULL;
    }
    seaway_bill_dto_local_var->id = id;
    seaway_bill_dto_local_var->timestamp = timestamp;
    seaway_bill_dto_local_var->document_number = document_number;
    seaway_bill_dto_local_var->status = status;
    seaway_bill_dto_local_var->shipper_contact_id = shipper_contact_id;
    seaway_bill_dto_local_var->consignee_contact_id = consignee_contact_id;
    seaway_bill_dto_local_var->notify_party_contact_id = notify_party_contact_id;
    seaway_bill_dto_local_var->carrier_id = carrier_id;
    seaway_bill_dto_local_var->vessel_id = vessel_id;
    seaway_bill_dto_local_var->voyage_id = voyage_id;
    seaway_bill_dto_local_var->port_of_loading_id = port_of_loading_id;
    seaway_bill_dto_local_var->port_of_discharge_id = port_of_discharge_id;
    seaway_bill_dto_local_var->place_of_receipt = place_of_receipt;
    seaway_bill_dto_local_var->place_of_delivery = place_of_delivery;
    seaway_bill_dto_local_var->date_issued = date_issued;
    seaway_bill_dto_local_var->date_shipped = date_shipped;
    seaway_bill_dto_local_var->date_delivered = date_delivered;
    seaway_bill_dto_local_var->freight_terms = freight_terms;
    seaway_bill_dto_local_var->freight_amount = freight_amount;
    seaway_bill_dto_local_var->freight_currency_id = freight_currency_id;
    seaway_bill_dto_local_var->total_weight = total_weight;
    seaway_bill_dto_local_var->total_packages = total_packages;
    seaway_bill_dto_local_var->special_instructions = special_instructions;
    seaway_bill_dto_local_var->remarks = remarks;
    seaway_bill_dto_local_var->shipment_id = shipment_id;
    seaway_bill_dto_local_var->tenant_id = tenant_id;
    seaway_bill_dto_local_var->enrollment_id = enrollment_id;
    seaway_bill_dto_local_var->lines = lines;

    return seaway_bill_dto_local_var;
}


void seaway_bill_dto_free(seaway_bill_dto_t *seaway_bill_dto) {
    if(NULL == seaway_bill_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (seaway_bill_dto->id) {
        free(seaway_bill_dto->id);
        seaway_bill_dto->id = NULL;
    }
    if (seaway_bill_dto->timestamp) {
        free(seaway_bill_dto->timestamp);
        seaway_bill_dto->timestamp = NULL;
    }
    if (seaway_bill_dto->document_number) {
        free(seaway_bill_dto->document_number);
        seaway_bill_dto->document_number = NULL;
    }
    if (seaway_bill_dto->status) {
        free(seaway_bill_dto->status);
        seaway_bill_dto->status = NULL;
    }
    if (seaway_bill_dto->shipper_contact_id) {
        free(seaway_bill_dto->shipper_contact_id);
        seaway_bill_dto->shipper_contact_id = NULL;
    }
    if (seaway_bill_dto->consignee_contact_id) {
        free(seaway_bill_dto->consignee_contact_id);
        seaway_bill_dto->consignee_contact_id = NULL;
    }
    if (seaway_bill_dto->notify_party_contact_id) {
        free(seaway_bill_dto->notify_party_contact_id);
        seaway_bill_dto->notify_party_contact_id = NULL;
    }
    if (seaway_bill_dto->carrier_id) {
        free(seaway_bill_dto->carrier_id);
        seaway_bill_dto->carrier_id = NULL;
    }
    if (seaway_bill_dto->vessel_id) {
        free(seaway_bill_dto->vessel_id);
        seaway_bill_dto->vessel_id = NULL;
    }
    if (seaway_bill_dto->voyage_id) {
        free(seaway_bill_dto->voyage_id);
        seaway_bill_dto->voyage_id = NULL;
    }
    if (seaway_bill_dto->port_of_loading_id) {
        free(seaway_bill_dto->port_of_loading_id);
        seaway_bill_dto->port_of_loading_id = NULL;
    }
    if (seaway_bill_dto->port_of_discharge_id) {
        free(seaway_bill_dto->port_of_discharge_id);
        seaway_bill_dto->port_of_discharge_id = NULL;
    }
    if (seaway_bill_dto->place_of_receipt) {
        free(seaway_bill_dto->place_of_receipt);
        seaway_bill_dto->place_of_receipt = NULL;
    }
    if (seaway_bill_dto->place_of_delivery) {
        free(seaway_bill_dto->place_of_delivery);
        seaway_bill_dto->place_of_delivery = NULL;
    }
    if (seaway_bill_dto->date_issued) {
        free(seaway_bill_dto->date_issued);
        seaway_bill_dto->date_issued = NULL;
    }
    if (seaway_bill_dto->date_shipped) {
        free(seaway_bill_dto->date_shipped);
        seaway_bill_dto->date_shipped = NULL;
    }
    if (seaway_bill_dto->date_delivered) {
        free(seaway_bill_dto->date_delivered);
        seaway_bill_dto->date_delivered = NULL;
    }
    if (seaway_bill_dto->freight_terms) {
        free(seaway_bill_dto->freight_terms);
        seaway_bill_dto->freight_terms = NULL;
    }
    if (seaway_bill_dto->freight_currency_id) {
        free(seaway_bill_dto->freight_currency_id);
        seaway_bill_dto->freight_currency_id = NULL;
    }
    if (seaway_bill_dto->special_instructions) {
        free(seaway_bill_dto->special_instructions);
        seaway_bill_dto->special_instructions = NULL;
    }
    if (seaway_bill_dto->remarks) {
        free(seaway_bill_dto->remarks);
        seaway_bill_dto->remarks = NULL;
    }
    if (seaway_bill_dto->shipment_id) {
        free(seaway_bill_dto->shipment_id);
        seaway_bill_dto->shipment_id = NULL;
    }
    if (seaway_bill_dto->tenant_id) {
        free(seaway_bill_dto->tenant_id);
        seaway_bill_dto->tenant_id = NULL;
    }
    if (seaway_bill_dto->enrollment_id) {
        free(seaway_bill_dto->enrollment_id);
        seaway_bill_dto->enrollment_id = NULL;
    }
    if (seaway_bill_dto->lines) {
        list_ForEach(listEntry, seaway_bill_dto->lines) {
            waybill_line_dto_free(listEntry->data);
        }
        list_freeList(seaway_bill_dto->lines);
        seaway_bill_dto->lines = NULL;
    }
    free(seaway_bill_dto);
}

cJSON *seaway_bill_dto_convertToJSON(seaway_bill_dto_t *seaway_bill_dto) {
    cJSON *item = cJSON_CreateObject();

    // seaway_bill_dto->id
    if(seaway_bill_dto->id) {
    if(cJSON_AddStringToObject(item, "id", seaway_bill_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // seaway_bill_dto->timestamp
    if(seaway_bill_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", seaway_bill_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // seaway_bill_dto->document_number
    if(seaway_bill_dto->document_number) {
    if(cJSON_AddStringToObject(item, "documentNumber", seaway_bill_dto->document_number) == NULL) {
    goto fail; //String
    }
    }


    // seaway_bill_dto->status
    if(seaway_bill_dto->status) {
    if(cJSON_AddStringToObject(item, "status", seaway_bill_dto->status) == NULL) {
    goto fail; //String
    }
    }


    // seaway_bill_dto->shipper_contact_id
    if(seaway_bill_dto->shipper_contact_id) {
    if(cJSON_AddStringToObject(item, "shipperContactId", seaway_bill_dto->shipper_contact_id) == NULL) {
    goto fail; //String
    }
    }


    // seaway_bill_dto->consignee_contact_id
    if(seaway_bill_dto->consignee_contact_id) {
    if(cJSON_AddStringToObject(item, "consigneeContactId", seaway_bill_dto->consignee_contact_id) == NULL) {
    goto fail; //String
    }
    }


    // seaway_bill_dto->notify_party_contact_id
    if(seaway_bill_dto->notify_party_contact_id) {
    if(cJSON_AddStringToObject(item, "notifyPartyContactId", seaway_bill_dto->notify_party_contact_id) == NULL) {
    goto fail; //String
    }
    }


    // seaway_bill_dto->carrier_id
    if(seaway_bill_dto->carrier_id) {
    if(cJSON_AddStringToObject(item, "carrierId", seaway_bill_dto->carrier_id) == NULL) {
    goto fail; //String
    }
    }


    // seaway_bill_dto->vessel_id
    if(seaway_bill_dto->vessel_id) {
    if(cJSON_AddStringToObject(item, "vesselId", seaway_bill_dto->vessel_id) == NULL) {
    goto fail; //String
    }
    }


    // seaway_bill_dto->voyage_id
    if(seaway_bill_dto->voyage_id) {
    if(cJSON_AddStringToObject(item, "voyageId", seaway_bill_dto->voyage_id) == NULL) {
    goto fail; //String
    }
    }


    // seaway_bill_dto->port_of_loading_id
    if(seaway_bill_dto->port_of_loading_id) {
    if(cJSON_AddStringToObject(item, "portOfLoadingId", seaway_bill_dto->port_of_loading_id) == NULL) {
    goto fail; //String
    }
    }


    // seaway_bill_dto->port_of_discharge_id
    if(seaway_bill_dto->port_of_discharge_id) {
    if(cJSON_AddStringToObject(item, "portOfDischargeId", seaway_bill_dto->port_of_discharge_id) == NULL) {
    goto fail; //String
    }
    }


    // seaway_bill_dto->place_of_receipt
    if(seaway_bill_dto->place_of_receipt) {
    if(cJSON_AddStringToObject(item, "placeOfReceipt", seaway_bill_dto->place_of_receipt) == NULL) {
    goto fail; //String
    }
    }


    // seaway_bill_dto->place_of_delivery
    if(seaway_bill_dto->place_of_delivery) {
    if(cJSON_AddStringToObject(item, "placeOfDelivery", seaway_bill_dto->place_of_delivery) == NULL) {
    goto fail; //String
    }
    }


    // seaway_bill_dto->date_issued
    if(seaway_bill_dto->date_issued) {
    if(cJSON_AddStringToObject(item, "dateIssued", seaway_bill_dto->date_issued) == NULL) {
    goto fail; //Date-Time
    }
    }


    // seaway_bill_dto->date_shipped
    if(seaway_bill_dto->date_shipped) {
    if(cJSON_AddStringToObject(item, "dateShipped", seaway_bill_dto->date_shipped) == NULL) {
    goto fail; //Date-Time
    }
    }


    // seaway_bill_dto->date_delivered
    if(seaway_bill_dto->date_delivered) {
    if(cJSON_AddStringToObject(item, "dateDelivered", seaway_bill_dto->date_delivered) == NULL) {
    goto fail; //Date-Time
    }
    }


    // seaway_bill_dto->freight_terms
    if(seaway_bill_dto->freight_terms) {
    if(cJSON_AddStringToObject(item, "freightTerms", seaway_bill_dto->freight_terms) == NULL) {
    goto fail; //String
    }
    }


    // seaway_bill_dto->freight_amount
    if(seaway_bill_dto->freight_amount) {
    if(cJSON_AddNumberToObject(item, "freightAmount", seaway_bill_dto->freight_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // seaway_bill_dto->freight_currency_id
    if(seaway_bill_dto->freight_currency_id) {
    if(cJSON_AddStringToObject(item, "freightCurrencyId", seaway_bill_dto->freight_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // seaway_bill_dto->total_weight
    if(seaway_bill_dto->total_weight) {
    if(cJSON_AddNumberToObject(item, "totalWeight", seaway_bill_dto->total_weight) == NULL) {
    goto fail; //Numeric
    }
    }


    // seaway_bill_dto->total_packages
    if(seaway_bill_dto->total_packages) {
    if(cJSON_AddNumberToObject(item, "totalPackages", seaway_bill_dto->total_packages) == NULL) {
    goto fail; //Numeric
    }
    }


    // seaway_bill_dto->special_instructions
    if(seaway_bill_dto->special_instructions) {
    if(cJSON_AddStringToObject(item, "specialInstructions", seaway_bill_dto->special_instructions) == NULL) {
    goto fail; //String
    }
    }


    // seaway_bill_dto->remarks
    if(seaway_bill_dto->remarks) {
    if(cJSON_AddStringToObject(item, "remarks", seaway_bill_dto->remarks) == NULL) {
    goto fail; //String
    }
    }


    // seaway_bill_dto->shipment_id
    if(seaway_bill_dto->shipment_id) {
    if(cJSON_AddStringToObject(item, "shipmentId", seaway_bill_dto->shipment_id) == NULL) {
    goto fail; //String
    }
    }


    // seaway_bill_dto->tenant_id
    if(seaway_bill_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", seaway_bill_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // seaway_bill_dto->enrollment_id
    if(seaway_bill_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", seaway_bill_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // seaway_bill_dto->lines
    if(seaway_bill_dto->lines) {
    cJSON *lines = cJSON_AddArrayToObject(item, "lines");
    if(lines == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *linesListEntry;
    if (seaway_bill_dto->lines) {
    list_ForEach(linesListEntry, seaway_bill_dto->lines) {
    cJSON *itemLocal = waybill_line_dto_convertToJSON(linesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(lines, itemLocal);
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

seaway_bill_dto_t *seaway_bill_dto_parseFromJSON(cJSON *seaway_bill_dtoJSON){

    seaway_bill_dto_t *seaway_bill_dto_local_var = NULL;

    // define the local list for seaway_bill_dto->lines
    list_t *linesList = NULL;

    // seaway_bill_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(seaway_bill_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // seaway_bill_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(seaway_bill_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // seaway_bill_dto->document_number
    cJSON *document_number = cJSON_GetObjectItemCaseSensitive(seaway_bill_dtoJSON, "documentNumber");
    if (document_number) { 
    if(!cJSON_IsString(document_number) && !cJSON_IsNull(document_number))
    {
    goto end; //String
    }
    }

    // seaway_bill_dto->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(seaway_bill_dtoJSON, "status");
    if (status) { 
    if(!cJSON_IsString(status) && !cJSON_IsNull(status))
    {
    goto end; //String
    }
    }

    // seaway_bill_dto->shipper_contact_id
    cJSON *shipper_contact_id = cJSON_GetObjectItemCaseSensitive(seaway_bill_dtoJSON, "shipperContactId");
    if (shipper_contact_id) { 
    if(!cJSON_IsString(shipper_contact_id) && !cJSON_IsNull(shipper_contact_id))
    {
    goto end; //String
    }
    }

    // seaway_bill_dto->consignee_contact_id
    cJSON *consignee_contact_id = cJSON_GetObjectItemCaseSensitive(seaway_bill_dtoJSON, "consigneeContactId");
    if (consignee_contact_id) { 
    if(!cJSON_IsString(consignee_contact_id) && !cJSON_IsNull(consignee_contact_id))
    {
    goto end; //String
    }
    }

    // seaway_bill_dto->notify_party_contact_id
    cJSON *notify_party_contact_id = cJSON_GetObjectItemCaseSensitive(seaway_bill_dtoJSON, "notifyPartyContactId");
    if (notify_party_contact_id) { 
    if(!cJSON_IsString(notify_party_contact_id) && !cJSON_IsNull(notify_party_contact_id))
    {
    goto end; //String
    }
    }

    // seaway_bill_dto->carrier_id
    cJSON *carrier_id = cJSON_GetObjectItemCaseSensitive(seaway_bill_dtoJSON, "carrierId");
    if (carrier_id) { 
    if(!cJSON_IsString(carrier_id) && !cJSON_IsNull(carrier_id))
    {
    goto end; //String
    }
    }

    // seaway_bill_dto->vessel_id
    cJSON *vessel_id = cJSON_GetObjectItemCaseSensitive(seaway_bill_dtoJSON, "vesselId");
    if (vessel_id) { 
    if(!cJSON_IsString(vessel_id) && !cJSON_IsNull(vessel_id))
    {
    goto end; //String
    }
    }

    // seaway_bill_dto->voyage_id
    cJSON *voyage_id = cJSON_GetObjectItemCaseSensitive(seaway_bill_dtoJSON, "voyageId");
    if (voyage_id) { 
    if(!cJSON_IsString(voyage_id) && !cJSON_IsNull(voyage_id))
    {
    goto end; //String
    }
    }

    // seaway_bill_dto->port_of_loading_id
    cJSON *port_of_loading_id = cJSON_GetObjectItemCaseSensitive(seaway_bill_dtoJSON, "portOfLoadingId");
    if (port_of_loading_id) { 
    if(!cJSON_IsString(port_of_loading_id) && !cJSON_IsNull(port_of_loading_id))
    {
    goto end; //String
    }
    }

    // seaway_bill_dto->port_of_discharge_id
    cJSON *port_of_discharge_id = cJSON_GetObjectItemCaseSensitive(seaway_bill_dtoJSON, "portOfDischargeId");
    if (port_of_discharge_id) { 
    if(!cJSON_IsString(port_of_discharge_id) && !cJSON_IsNull(port_of_discharge_id))
    {
    goto end; //String
    }
    }

    // seaway_bill_dto->place_of_receipt
    cJSON *place_of_receipt = cJSON_GetObjectItemCaseSensitive(seaway_bill_dtoJSON, "placeOfReceipt");
    if (place_of_receipt) { 
    if(!cJSON_IsString(place_of_receipt) && !cJSON_IsNull(place_of_receipt))
    {
    goto end; //String
    }
    }

    // seaway_bill_dto->place_of_delivery
    cJSON *place_of_delivery = cJSON_GetObjectItemCaseSensitive(seaway_bill_dtoJSON, "placeOfDelivery");
    if (place_of_delivery) { 
    if(!cJSON_IsString(place_of_delivery) && !cJSON_IsNull(place_of_delivery))
    {
    goto end; //String
    }
    }

    // seaway_bill_dto->date_issued
    cJSON *date_issued = cJSON_GetObjectItemCaseSensitive(seaway_bill_dtoJSON, "dateIssued");
    if (date_issued) { 
    if(!cJSON_IsString(date_issued) && !cJSON_IsNull(date_issued))
    {
    goto end; //DateTime
    }
    }

    // seaway_bill_dto->date_shipped
    cJSON *date_shipped = cJSON_GetObjectItemCaseSensitive(seaway_bill_dtoJSON, "dateShipped");
    if (date_shipped) { 
    if(!cJSON_IsString(date_shipped) && !cJSON_IsNull(date_shipped))
    {
    goto end; //DateTime
    }
    }

    // seaway_bill_dto->date_delivered
    cJSON *date_delivered = cJSON_GetObjectItemCaseSensitive(seaway_bill_dtoJSON, "dateDelivered");
    if (date_delivered) { 
    if(!cJSON_IsString(date_delivered) && !cJSON_IsNull(date_delivered))
    {
    goto end; //DateTime
    }
    }

    // seaway_bill_dto->freight_terms
    cJSON *freight_terms = cJSON_GetObjectItemCaseSensitive(seaway_bill_dtoJSON, "freightTerms");
    if (freight_terms) { 
    if(!cJSON_IsString(freight_terms) && !cJSON_IsNull(freight_terms))
    {
    goto end; //String
    }
    }

    // seaway_bill_dto->freight_amount
    cJSON *freight_amount = cJSON_GetObjectItemCaseSensitive(seaway_bill_dtoJSON, "freightAmount");
    if (freight_amount) { 
    if(!cJSON_IsNumber(freight_amount))
    {
    goto end; //Numeric
    }
    }

    // seaway_bill_dto->freight_currency_id
    cJSON *freight_currency_id = cJSON_GetObjectItemCaseSensitive(seaway_bill_dtoJSON, "freightCurrencyId");
    if (freight_currency_id) { 
    if(!cJSON_IsString(freight_currency_id) && !cJSON_IsNull(freight_currency_id))
    {
    goto end; //String
    }
    }

    // seaway_bill_dto->total_weight
    cJSON *total_weight = cJSON_GetObjectItemCaseSensitive(seaway_bill_dtoJSON, "totalWeight");
    if (total_weight) { 
    if(!cJSON_IsNumber(total_weight))
    {
    goto end; //Numeric
    }
    }

    // seaway_bill_dto->total_packages
    cJSON *total_packages = cJSON_GetObjectItemCaseSensitive(seaway_bill_dtoJSON, "totalPackages");
    if (total_packages) { 
    if(!cJSON_IsNumber(total_packages))
    {
    goto end; //Numeric
    }
    }

    // seaway_bill_dto->special_instructions
    cJSON *special_instructions = cJSON_GetObjectItemCaseSensitive(seaway_bill_dtoJSON, "specialInstructions");
    if (special_instructions) { 
    if(!cJSON_IsString(special_instructions) && !cJSON_IsNull(special_instructions))
    {
    goto end; //String
    }
    }

    // seaway_bill_dto->remarks
    cJSON *remarks = cJSON_GetObjectItemCaseSensitive(seaway_bill_dtoJSON, "remarks");
    if (remarks) { 
    if(!cJSON_IsString(remarks) && !cJSON_IsNull(remarks))
    {
    goto end; //String
    }
    }

    // seaway_bill_dto->shipment_id
    cJSON *shipment_id = cJSON_GetObjectItemCaseSensitive(seaway_bill_dtoJSON, "shipmentId");
    if (shipment_id) { 
    if(!cJSON_IsString(shipment_id) && !cJSON_IsNull(shipment_id))
    {
    goto end; //String
    }
    }

    // seaway_bill_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(seaway_bill_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // seaway_bill_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(seaway_bill_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // seaway_bill_dto->lines
    cJSON *lines = cJSON_GetObjectItemCaseSensitive(seaway_bill_dtoJSON, "lines");
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
        waybill_line_dto_t *linesItem = waybill_line_dto_parseFromJSON(lines_local_nonprimitive);

        list_addElement(linesList, linesItem);
    }
    }


    seaway_bill_dto_local_var = seaway_bill_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        document_number && !cJSON_IsNull(document_number) ? strdup(document_number->valuestring) : NULL,
        status && !cJSON_IsNull(status) ? strdup(status->valuestring) : NULL,
        shipper_contact_id && !cJSON_IsNull(shipper_contact_id) ? strdup(shipper_contact_id->valuestring) : NULL,
        consignee_contact_id && !cJSON_IsNull(consignee_contact_id) ? strdup(consignee_contact_id->valuestring) : NULL,
        notify_party_contact_id && !cJSON_IsNull(notify_party_contact_id) ? strdup(notify_party_contact_id->valuestring) : NULL,
        carrier_id && !cJSON_IsNull(carrier_id) ? strdup(carrier_id->valuestring) : NULL,
        vessel_id && !cJSON_IsNull(vessel_id) ? strdup(vessel_id->valuestring) : NULL,
        voyage_id && !cJSON_IsNull(voyage_id) ? strdup(voyage_id->valuestring) : NULL,
        port_of_loading_id && !cJSON_IsNull(port_of_loading_id) ? strdup(port_of_loading_id->valuestring) : NULL,
        port_of_discharge_id && !cJSON_IsNull(port_of_discharge_id) ? strdup(port_of_discharge_id->valuestring) : NULL,
        place_of_receipt && !cJSON_IsNull(place_of_receipt) ? strdup(place_of_receipt->valuestring) : NULL,
        place_of_delivery && !cJSON_IsNull(place_of_delivery) ? strdup(place_of_delivery->valuestring) : NULL,
        date_issued && !cJSON_IsNull(date_issued) ? strdup(date_issued->valuestring) : NULL,
        date_shipped && !cJSON_IsNull(date_shipped) ? strdup(date_shipped->valuestring) : NULL,
        date_delivered && !cJSON_IsNull(date_delivered) ? strdup(date_delivered->valuestring) : NULL,
        freight_terms && !cJSON_IsNull(freight_terms) ? strdup(freight_terms->valuestring) : NULL,
        freight_amount ? freight_amount->valuedouble : 0,
        freight_currency_id && !cJSON_IsNull(freight_currency_id) ? strdup(freight_currency_id->valuestring) : NULL,
        total_weight ? total_weight->valuedouble : 0,
        total_packages ? total_packages->valuedouble : 0,
        special_instructions && !cJSON_IsNull(special_instructions) ? strdup(special_instructions->valuestring) : NULL,
        remarks && !cJSON_IsNull(remarks) ? strdup(remarks->valuestring) : NULL,
        shipment_id && !cJSON_IsNull(shipment_id) ? strdup(shipment_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        lines ? linesList : NULL
        );

    return seaway_bill_dto_local_var;
end:
    if (linesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, linesList) {
            waybill_line_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(linesList);
        linesList = NULL;
    }
    return NULL;

}
