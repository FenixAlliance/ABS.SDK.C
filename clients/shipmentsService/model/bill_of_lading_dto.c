#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "bill_of_lading_dto.h"



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
    ) {
    bill_of_lading_dto_t *bill_of_lading_dto_local_var = malloc(sizeof(bill_of_lading_dto_t));
    if (!bill_of_lading_dto_local_var) {
        return NULL;
    }
    bill_of_lading_dto_local_var->id = id;
    bill_of_lading_dto_local_var->timestamp = timestamp;
    bill_of_lading_dto_local_var->bill_of_lading_number = bill_of_lading_number;
    bill_of_lading_dto_local_var->title = title;
    bill_of_lading_dto_local_var->description = description;
    bill_of_lading_dto_local_var->bill_of_lading_type = bill_of_lading_type;
    bill_of_lading_dto_local_var->status = status;
    bill_of_lading_dto_local_var->is_negotiable = is_negotiable;
    bill_of_lading_dto_local_var->is_clean = is_clean;
    bill_of_lading_dto_local_var->number_of_originals = number_of_originals;
    bill_of_lading_dto_local_var->freight_payment_type = freight_payment_type;
    bill_of_lading_dto_local_var->shipping_terms = shipping_terms;
    bill_of_lading_dto_local_var->freight_charges_description = freight_charges_description;
    bill_of_lading_dto_local_var->declared_value_amount = declared_value_amount;
    bill_of_lading_dto_local_var->declared_value_currency_id = declared_value_currency_id;
    bill_of_lading_dto_local_var->issued_date = issued_date;
    bill_of_lading_dto_local_var->on_board_date = on_board_date;
    bill_of_lading_dto_local_var->expiry_date = expiry_date;
    bill_of_lading_dto_local_var->vessel_name = vessel_name;
    bill_of_lading_dto_local_var->voyage_number = voyage_number;
    bill_of_lading_dto_local_var->shipper_contact_id = shipper_contact_id;
    bill_of_lading_dto_local_var->consignee_contact_id = consignee_contact_id;
    bill_of_lading_dto_local_var->notify_party_contact_id = notify_party_contact_id;
    bill_of_lading_dto_local_var->shipping_courier_id = shipping_courier_id;
    bill_of_lading_dto_local_var->port_of_loading_id = port_of_loading_id;
    bill_of_lading_dto_local_var->port_of_discharge_id = port_of_discharge_id;
    bill_of_lading_dto_local_var->place_of_receipt_id = place_of_receipt_id;
    bill_of_lading_dto_local_var->place_of_delivery_id = place_of_delivery_id;
    bill_of_lading_dto_local_var->shipment_id = shipment_id;
    bill_of_lading_dto_local_var->order_id = order_id;
    bill_of_lading_dto_local_var->voyage_id = voyage_id;
    bill_of_lading_dto_local_var->marks_and_numbers = marks_and_numbers;
    bill_of_lading_dto_local_var->total_packages = total_packages;
    bill_of_lading_dto_local_var->total_gross_weight_kg = total_gross_weight_kg;
    bill_of_lading_dto_local_var->total_volume_m3 = total_volume_m3;
    bill_of_lading_dto_local_var->tenant_id = tenant_id;
    bill_of_lading_dto_local_var->enrollment_id = enrollment_id;

    return bill_of_lading_dto_local_var;
}


void bill_of_lading_dto_free(bill_of_lading_dto_t *bill_of_lading_dto) {
    if(NULL == bill_of_lading_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (bill_of_lading_dto->id) {
        free(bill_of_lading_dto->id);
        bill_of_lading_dto->id = NULL;
    }
    if (bill_of_lading_dto->timestamp) {
        free(bill_of_lading_dto->timestamp);
        bill_of_lading_dto->timestamp = NULL;
    }
    if (bill_of_lading_dto->bill_of_lading_number) {
        free(bill_of_lading_dto->bill_of_lading_number);
        bill_of_lading_dto->bill_of_lading_number = NULL;
    }
    if (bill_of_lading_dto->title) {
        free(bill_of_lading_dto->title);
        bill_of_lading_dto->title = NULL;
    }
    if (bill_of_lading_dto->description) {
        free(bill_of_lading_dto->description);
        bill_of_lading_dto->description = NULL;
    }
    if (bill_of_lading_dto->bill_of_lading_type) {
        free(bill_of_lading_dto->bill_of_lading_type);
        bill_of_lading_dto->bill_of_lading_type = NULL;
    }
    if (bill_of_lading_dto->status) {
        free(bill_of_lading_dto->status);
        bill_of_lading_dto->status = NULL;
    }
    if (bill_of_lading_dto->freight_payment_type) {
        free(bill_of_lading_dto->freight_payment_type);
        bill_of_lading_dto->freight_payment_type = NULL;
    }
    if (bill_of_lading_dto->shipping_terms) {
        free(bill_of_lading_dto->shipping_terms);
        bill_of_lading_dto->shipping_terms = NULL;
    }
    if (bill_of_lading_dto->freight_charges_description) {
        free(bill_of_lading_dto->freight_charges_description);
        bill_of_lading_dto->freight_charges_description = NULL;
    }
    if (bill_of_lading_dto->declared_value_currency_id) {
        free(bill_of_lading_dto->declared_value_currency_id);
        bill_of_lading_dto->declared_value_currency_id = NULL;
    }
    if (bill_of_lading_dto->issued_date) {
        free(bill_of_lading_dto->issued_date);
        bill_of_lading_dto->issued_date = NULL;
    }
    if (bill_of_lading_dto->on_board_date) {
        free(bill_of_lading_dto->on_board_date);
        bill_of_lading_dto->on_board_date = NULL;
    }
    if (bill_of_lading_dto->expiry_date) {
        free(bill_of_lading_dto->expiry_date);
        bill_of_lading_dto->expiry_date = NULL;
    }
    if (bill_of_lading_dto->vessel_name) {
        free(bill_of_lading_dto->vessel_name);
        bill_of_lading_dto->vessel_name = NULL;
    }
    if (bill_of_lading_dto->voyage_number) {
        free(bill_of_lading_dto->voyage_number);
        bill_of_lading_dto->voyage_number = NULL;
    }
    if (bill_of_lading_dto->shipper_contact_id) {
        free(bill_of_lading_dto->shipper_contact_id);
        bill_of_lading_dto->shipper_contact_id = NULL;
    }
    if (bill_of_lading_dto->consignee_contact_id) {
        free(bill_of_lading_dto->consignee_contact_id);
        bill_of_lading_dto->consignee_contact_id = NULL;
    }
    if (bill_of_lading_dto->notify_party_contact_id) {
        free(bill_of_lading_dto->notify_party_contact_id);
        bill_of_lading_dto->notify_party_contact_id = NULL;
    }
    if (bill_of_lading_dto->shipping_courier_id) {
        free(bill_of_lading_dto->shipping_courier_id);
        bill_of_lading_dto->shipping_courier_id = NULL;
    }
    if (bill_of_lading_dto->port_of_loading_id) {
        free(bill_of_lading_dto->port_of_loading_id);
        bill_of_lading_dto->port_of_loading_id = NULL;
    }
    if (bill_of_lading_dto->port_of_discharge_id) {
        free(bill_of_lading_dto->port_of_discharge_id);
        bill_of_lading_dto->port_of_discharge_id = NULL;
    }
    if (bill_of_lading_dto->place_of_receipt_id) {
        free(bill_of_lading_dto->place_of_receipt_id);
        bill_of_lading_dto->place_of_receipt_id = NULL;
    }
    if (bill_of_lading_dto->place_of_delivery_id) {
        free(bill_of_lading_dto->place_of_delivery_id);
        bill_of_lading_dto->place_of_delivery_id = NULL;
    }
    if (bill_of_lading_dto->shipment_id) {
        free(bill_of_lading_dto->shipment_id);
        bill_of_lading_dto->shipment_id = NULL;
    }
    if (bill_of_lading_dto->order_id) {
        free(bill_of_lading_dto->order_id);
        bill_of_lading_dto->order_id = NULL;
    }
    if (bill_of_lading_dto->voyage_id) {
        free(bill_of_lading_dto->voyage_id);
        bill_of_lading_dto->voyage_id = NULL;
    }
    if (bill_of_lading_dto->marks_and_numbers) {
        free(bill_of_lading_dto->marks_and_numbers);
        bill_of_lading_dto->marks_and_numbers = NULL;
    }
    if (bill_of_lading_dto->tenant_id) {
        free(bill_of_lading_dto->tenant_id);
        bill_of_lading_dto->tenant_id = NULL;
    }
    if (bill_of_lading_dto->enrollment_id) {
        free(bill_of_lading_dto->enrollment_id);
        bill_of_lading_dto->enrollment_id = NULL;
    }
    free(bill_of_lading_dto);
}

cJSON *bill_of_lading_dto_convertToJSON(bill_of_lading_dto_t *bill_of_lading_dto) {
    cJSON *item = cJSON_CreateObject();

    // bill_of_lading_dto->id
    if(bill_of_lading_dto->id) {
    if(cJSON_AddStringToObject(item, "id", bill_of_lading_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // bill_of_lading_dto->timestamp
    if(bill_of_lading_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", bill_of_lading_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // bill_of_lading_dto->bill_of_lading_number
    if(bill_of_lading_dto->bill_of_lading_number) {
    if(cJSON_AddStringToObject(item, "billOfLadingNumber", bill_of_lading_dto->bill_of_lading_number) == NULL) {
    goto fail; //String
    }
    }


    // bill_of_lading_dto->title
    if(bill_of_lading_dto->title) {
    if(cJSON_AddStringToObject(item, "title", bill_of_lading_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // bill_of_lading_dto->description
    if(bill_of_lading_dto->description) {
    if(cJSON_AddStringToObject(item, "description", bill_of_lading_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // bill_of_lading_dto->bill_of_lading_type
    if(bill_of_lading_dto->bill_of_lading_type) {
    if(cJSON_AddStringToObject(item, "billOfLadingType", bill_of_lading_dto->bill_of_lading_type) == NULL) {
    goto fail; //String
    }
    }


    // bill_of_lading_dto->status
    if(bill_of_lading_dto->status) {
    if(cJSON_AddStringToObject(item, "status", bill_of_lading_dto->status) == NULL) {
    goto fail; //String
    }
    }


    // bill_of_lading_dto->is_negotiable
    if(bill_of_lading_dto->is_negotiable) {
    if(cJSON_AddBoolToObject(item, "isNegotiable", bill_of_lading_dto->is_negotiable) == NULL) {
    goto fail; //Bool
    }
    }


    // bill_of_lading_dto->is_clean
    if(bill_of_lading_dto->is_clean) {
    if(cJSON_AddBoolToObject(item, "isClean", bill_of_lading_dto->is_clean) == NULL) {
    goto fail; //Bool
    }
    }


    // bill_of_lading_dto->number_of_originals
    if(bill_of_lading_dto->number_of_originals) {
    if(cJSON_AddNumberToObject(item, "numberOfOriginals", bill_of_lading_dto->number_of_originals) == NULL) {
    goto fail; //Numeric
    }
    }


    // bill_of_lading_dto->freight_payment_type
    if(bill_of_lading_dto->freight_payment_type) {
    if(cJSON_AddStringToObject(item, "freightPaymentType", bill_of_lading_dto->freight_payment_type) == NULL) {
    goto fail; //String
    }
    }


    // bill_of_lading_dto->shipping_terms
    if(bill_of_lading_dto->shipping_terms) {
    if(cJSON_AddStringToObject(item, "shippingTerms", bill_of_lading_dto->shipping_terms) == NULL) {
    goto fail; //String
    }
    }


    // bill_of_lading_dto->freight_charges_description
    if(bill_of_lading_dto->freight_charges_description) {
    if(cJSON_AddStringToObject(item, "freightChargesDescription", bill_of_lading_dto->freight_charges_description) == NULL) {
    goto fail; //String
    }
    }


    // bill_of_lading_dto->declared_value_amount
    if(bill_of_lading_dto->declared_value_amount) {
    if(cJSON_AddNumberToObject(item, "declaredValueAmount", bill_of_lading_dto->declared_value_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // bill_of_lading_dto->declared_value_currency_id
    if(bill_of_lading_dto->declared_value_currency_id) {
    if(cJSON_AddStringToObject(item, "declaredValueCurrencyId", bill_of_lading_dto->declared_value_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // bill_of_lading_dto->issued_date
    if(bill_of_lading_dto->issued_date) {
    if(cJSON_AddStringToObject(item, "issuedDate", bill_of_lading_dto->issued_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // bill_of_lading_dto->on_board_date
    if(bill_of_lading_dto->on_board_date) {
    if(cJSON_AddStringToObject(item, "onBoardDate", bill_of_lading_dto->on_board_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // bill_of_lading_dto->expiry_date
    if(bill_of_lading_dto->expiry_date) {
    if(cJSON_AddStringToObject(item, "expiryDate", bill_of_lading_dto->expiry_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // bill_of_lading_dto->vessel_name
    if(bill_of_lading_dto->vessel_name) {
    if(cJSON_AddStringToObject(item, "vesselName", bill_of_lading_dto->vessel_name) == NULL) {
    goto fail; //String
    }
    }


    // bill_of_lading_dto->voyage_number
    if(bill_of_lading_dto->voyage_number) {
    if(cJSON_AddStringToObject(item, "voyageNumber", bill_of_lading_dto->voyage_number) == NULL) {
    goto fail; //String
    }
    }


    // bill_of_lading_dto->shipper_contact_id
    if(bill_of_lading_dto->shipper_contact_id) {
    if(cJSON_AddStringToObject(item, "shipperContactId", bill_of_lading_dto->shipper_contact_id) == NULL) {
    goto fail; //String
    }
    }


    // bill_of_lading_dto->consignee_contact_id
    if(bill_of_lading_dto->consignee_contact_id) {
    if(cJSON_AddStringToObject(item, "consigneeContactId", bill_of_lading_dto->consignee_contact_id) == NULL) {
    goto fail; //String
    }
    }


    // bill_of_lading_dto->notify_party_contact_id
    if(bill_of_lading_dto->notify_party_contact_id) {
    if(cJSON_AddStringToObject(item, "notifyPartyContactId", bill_of_lading_dto->notify_party_contact_id) == NULL) {
    goto fail; //String
    }
    }


    // bill_of_lading_dto->shipping_courier_id
    if(bill_of_lading_dto->shipping_courier_id) {
    if(cJSON_AddStringToObject(item, "shippingCourierId", bill_of_lading_dto->shipping_courier_id) == NULL) {
    goto fail; //String
    }
    }


    // bill_of_lading_dto->port_of_loading_id
    if(bill_of_lading_dto->port_of_loading_id) {
    if(cJSON_AddStringToObject(item, "portOfLoadingId", bill_of_lading_dto->port_of_loading_id) == NULL) {
    goto fail; //String
    }
    }


    // bill_of_lading_dto->port_of_discharge_id
    if(bill_of_lading_dto->port_of_discharge_id) {
    if(cJSON_AddStringToObject(item, "portOfDischargeId", bill_of_lading_dto->port_of_discharge_id) == NULL) {
    goto fail; //String
    }
    }


    // bill_of_lading_dto->place_of_receipt_id
    if(bill_of_lading_dto->place_of_receipt_id) {
    if(cJSON_AddStringToObject(item, "placeOfReceiptId", bill_of_lading_dto->place_of_receipt_id) == NULL) {
    goto fail; //String
    }
    }


    // bill_of_lading_dto->place_of_delivery_id
    if(bill_of_lading_dto->place_of_delivery_id) {
    if(cJSON_AddStringToObject(item, "placeOfDeliveryId", bill_of_lading_dto->place_of_delivery_id) == NULL) {
    goto fail; //String
    }
    }


    // bill_of_lading_dto->shipment_id
    if(bill_of_lading_dto->shipment_id) {
    if(cJSON_AddStringToObject(item, "shipmentId", bill_of_lading_dto->shipment_id) == NULL) {
    goto fail; //String
    }
    }


    // bill_of_lading_dto->order_id
    if(bill_of_lading_dto->order_id) {
    if(cJSON_AddStringToObject(item, "orderId", bill_of_lading_dto->order_id) == NULL) {
    goto fail; //String
    }
    }


    // bill_of_lading_dto->voyage_id
    if(bill_of_lading_dto->voyage_id) {
    if(cJSON_AddStringToObject(item, "voyageId", bill_of_lading_dto->voyage_id) == NULL) {
    goto fail; //String
    }
    }


    // bill_of_lading_dto->marks_and_numbers
    if(bill_of_lading_dto->marks_and_numbers) {
    if(cJSON_AddStringToObject(item, "marksAndNumbers", bill_of_lading_dto->marks_and_numbers) == NULL) {
    goto fail; //String
    }
    }


    // bill_of_lading_dto->total_packages
    if(bill_of_lading_dto->total_packages) {
    if(cJSON_AddNumberToObject(item, "totalPackages", bill_of_lading_dto->total_packages) == NULL) {
    goto fail; //Numeric
    }
    }


    // bill_of_lading_dto->total_gross_weight_kg
    if(bill_of_lading_dto->total_gross_weight_kg) {
    if(cJSON_AddNumberToObject(item, "totalGrossWeightKg", bill_of_lading_dto->total_gross_weight_kg) == NULL) {
    goto fail; //Numeric
    }
    }


    // bill_of_lading_dto->total_volume_m3
    if(bill_of_lading_dto->total_volume_m3) {
    if(cJSON_AddNumberToObject(item, "totalVolumeM3", bill_of_lading_dto->total_volume_m3) == NULL) {
    goto fail; //Numeric
    }
    }


    // bill_of_lading_dto->tenant_id
    if(bill_of_lading_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", bill_of_lading_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // bill_of_lading_dto->enrollment_id
    if(bill_of_lading_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", bill_of_lading_dto->enrollment_id) == NULL) {
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

bill_of_lading_dto_t *bill_of_lading_dto_parseFromJSON(cJSON *bill_of_lading_dtoJSON){

    bill_of_lading_dto_t *bill_of_lading_dto_local_var = NULL;

    // bill_of_lading_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // bill_of_lading_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // bill_of_lading_dto->bill_of_lading_number
    cJSON *bill_of_lading_number = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dtoJSON, "billOfLadingNumber");
    if (bill_of_lading_number) { 
    if(!cJSON_IsString(bill_of_lading_number) && !cJSON_IsNull(bill_of_lading_number))
    {
    goto end; //String
    }
    }

    // bill_of_lading_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // bill_of_lading_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // bill_of_lading_dto->bill_of_lading_type
    cJSON *bill_of_lading_type = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dtoJSON, "billOfLadingType");
    if (bill_of_lading_type) { 
    if(!cJSON_IsString(bill_of_lading_type) && !cJSON_IsNull(bill_of_lading_type))
    {
    goto end; //String
    }
    }

    // bill_of_lading_dto->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dtoJSON, "status");
    if (status) { 
    if(!cJSON_IsString(status) && !cJSON_IsNull(status))
    {
    goto end; //String
    }
    }

    // bill_of_lading_dto->is_negotiable
    cJSON *is_negotiable = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dtoJSON, "isNegotiable");
    if (is_negotiable) { 
    if(!cJSON_IsBool(is_negotiable))
    {
    goto end; //Bool
    }
    }

    // bill_of_lading_dto->is_clean
    cJSON *is_clean = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dtoJSON, "isClean");
    if (is_clean) { 
    if(!cJSON_IsBool(is_clean))
    {
    goto end; //Bool
    }
    }

    // bill_of_lading_dto->number_of_originals
    cJSON *number_of_originals = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dtoJSON, "numberOfOriginals");
    if (number_of_originals) { 
    if(!cJSON_IsNumber(number_of_originals))
    {
    goto end; //Numeric
    }
    }

    // bill_of_lading_dto->freight_payment_type
    cJSON *freight_payment_type = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dtoJSON, "freightPaymentType");
    if (freight_payment_type) { 
    if(!cJSON_IsString(freight_payment_type) && !cJSON_IsNull(freight_payment_type))
    {
    goto end; //String
    }
    }

    // bill_of_lading_dto->shipping_terms
    cJSON *shipping_terms = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dtoJSON, "shippingTerms");
    if (shipping_terms) { 
    if(!cJSON_IsString(shipping_terms) && !cJSON_IsNull(shipping_terms))
    {
    goto end; //String
    }
    }

    // bill_of_lading_dto->freight_charges_description
    cJSON *freight_charges_description = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dtoJSON, "freightChargesDescription");
    if (freight_charges_description) { 
    if(!cJSON_IsString(freight_charges_description) && !cJSON_IsNull(freight_charges_description))
    {
    goto end; //String
    }
    }

    // bill_of_lading_dto->declared_value_amount
    cJSON *declared_value_amount = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dtoJSON, "declaredValueAmount");
    if (declared_value_amount) { 
    if(!cJSON_IsNumber(declared_value_amount))
    {
    goto end; //Numeric
    }
    }

    // bill_of_lading_dto->declared_value_currency_id
    cJSON *declared_value_currency_id = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dtoJSON, "declaredValueCurrencyId");
    if (declared_value_currency_id) { 
    if(!cJSON_IsString(declared_value_currency_id) && !cJSON_IsNull(declared_value_currency_id))
    {
    goto end; //String
    }
    }

    // bill_of_lading_dto->issued_date
    cJSON *issued_date = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dtoJSON, "issuedDate");
    if (issued_date) { 
    if(!cJSON_IsString(issued_date) && !cJSON_IsNull(issued_date))
    {
    goto end; //DateTime
    }
    }

    // bill_of_lading_dto->on_board_date
    cJSON *on_board_date = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dtoJSON, "onBoardDate");
    if (on_board_date) { 
    if(!cJSON_IsString(on_board_date) && !cJSON_IsNull(on_board_date))
    {
    goto end; //DateTime
    }
    }

    // bill_of_lading_dto->expiry_date
    cJSON *expiry_date = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dtoJSON, "expiryDate");
    if (expiry_date) { 
    if(!cJSON_IsString(expiry_date) && !cJSON_IsNull(expiry_date))
    {
    goto end; //DateTime
    }
    }

    // bill_of_lading_dto->vessel_name
    cJSON *vessel_name = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dtoJSON, "vesselName");
    if (vessel_name) { 
    if(!cJSON_IsString(vessel_name) && !cJSON_IsNull(vessel_name))
    {
    goto end; //String
    }
    }

    // bill_of_lading_dto->voyage_number
    cJSON *voyage_number = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dtoJSON, "voyageNumber");
    if (voyage_number) { 
    if(!cJSON_IsString(voyage_number) && !cJSON_IsNull(voyage_number))
    {
    goto end; //String
    }
    }

    // bill_of_lading_dto->shipper_contact_id
    cJSON *shipper_contact_id = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dtoJSON, "shipperContactId");
    if (shipper_contact_id) { 
    if(!cJSON_IsString(shipper_contact_id) && !cJSON_IsNull(shipper_contact_id))
    {
    goto end; //String
    }
    }

    // bill_of_lading_dto->consignee_contact_id
    cJSON *consignee_contact_id = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dtoJSON, "consigneeContactId");
    if (consignee_contact_id) { 
    if(!cJSON_IsString(consignee_contact_id) && !cJSON_IsNull(consignee_contact_id))
    {
    goto end; //String
    }
    }

    // bill_of_lading_dto->notify_party_contact_id
    cJSON *notify_party_contact_id = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dtoJSON, "notifyPartyContactId");
    if (notify_party_contact_id) { 
    if(!cJSON_IsString(notify_party_contact_id) && !cJSON_IsNull(notify_party_contact_id))
    {
    goto end; //String
    }
    }

    // bill_of_lading_dto->shipping_courier_id
    cJSON *shipping_courier_id = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dtoJSON, "shippingCourierId");
    if (shipping_courier_id) { 
    if(!cJSON_IsString(shipping_courier_id) && !cJSON_IsNull(shipping_courier_id))
    {
    goto end; //String
    }
    }

    // bill_of_lading_dto->port_of_loading_id
    cJSON *port_of_loading_id = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dtoJSON, "portOfLoadingId");
    if (port_of_loading_id) { 
    if(!cJSON_IsString(port_of_loading_id) && !cJSON_IsNull(port_of_loading_id))
    {
    goto end; //String
    }
    }

    // bill_of_lading_dto->port_of_discharge_id
    cJSON *port_of_discharge_id = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dtoJSON, "portOfDischargeId");
    if (port_of_discharge_id) { 
    if(!cJSON_IsString(port_of_discharge_id) && !cJSON_IsNull(port_of_discharge_id))
    {
    goto end; //String
    }
    }

    // bill_of_lading_dto->place_of_receipt_id
    cJSON *place_of_receipt_id = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dtoJSON, "placeOfReceiptId");
    if (place_of_receipt_id) { 
    if(!cJSON_IsString(place_of_receipt_id) && !cJSON_IsNull(place_of_receipt_id))
    {
    goto end; //String
    }
    }

    // bill_of_lading_dto->place_of_delivery_id
    cJSON *place_of_delivery_id = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dtoJSON, "placeOfDeliveryId");
    if (place_of_delivery_id) { 
    if(!cJSON_IsString(place_of_delivery_id) && !cJSON_IsNull(place_of_delivery_id))
    {
    goto end; //String
    }
    }

    // bill_of_lading_dto->shipment_id
    cJSON *shipment_id = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dtoJSON, "shipmentId");
    if (shipment_id) { 
    if(!cJSON_IsString(shipment_id) && !cJSON_IsNull(shipment_id))
    {
    goto end; //String
    }
    }

    // bill_of_lading_dto->order_id
    cJSON *order_id = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dtoJSON, "orderId");
    if (order_id) { 
    if(!cJSON_IsString(order_id) && !cJSON_IsNull(order_id))
    {
    goto end; //String
    }
    }

    // bill_of_lading_dto->voyage_id
    cJSON *voyage_id = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dtoJSON, "voyageId");
    if (voyage_id) { 
    if(!cJSON_IsString(voyage_id) && !cJSON_IsNull(voyage_id))
    {
    goto end; //String
    }
    }

    // bill_of_lading_dto->marks_and_numbers
    cJSON *marks_and_numbers = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dtoJSON, "marksAndNumbers");
    if (marks_and_numbers) { 
    if(!cJSON_IsString(marks_and_numbers) && !cJSON_IsNull(marks_and_numbers))
    {
    goto end; //String
    }
    }

    // bill_of_lading_dto->total_packages
    cJSON *total_packages = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dtoJSON, "totalPackages");
    if (total_packages) { 
    if(!cJSON_IsNumber(total_packages))
    {
    goto end; //Numeric
    }
    }

    // bill_of_lading_dto->total_gross_weight_kg
    cJSON *total_gross_weight_kg = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dtoJSON, "totalGrossWeightKg");
    if (total_gross_weight_kg) { 
    if(!cJSON_IsNumber(total_gross_weight_kg))
    {
    goto end; //Numeric
    }
    }

    // bill_of_lading_dto->total_volume_m3
    cJSON *total_volume_m3 = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dtoJSON, "totalVolumeM3");
    if (total_volume_m3) { 
    if(!cJSON_IsNumber(total_volume_m3))
    {
    goto end; //Numeric
    }
    }

    // bill_of_lading_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // bill_of_lading_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(bill_of_lading_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    bill_of_lading_dto_local_var = bill_of_lading_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        bill_of_lading_number && !cJSON_IsNull(bill_of_lading_number) ? strdup(bill_of_lading_number->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        bill_of_lading_type && !cJSON_IsNull(bill_of_lading_type) ? strdup(bill_of_lading_type->valuestring) : NULL,
        status && !cJSON_IsNull(status) ? strdup(status->valuestring) : NULL,
        is_negotiable ? is_negotiable->valueint : 0,
        is_clean ? is_clean->valueint : 0,
        number_of_originals ? number_of_originals->valuedouble : 0,
        freight_payment_type && !cJSON_IsNull(freight_payment_type) ? strdup(freight_payment_type->valuestring) : NULL,
        shipping_terms && !cJSON_IsNull(shipping_terms) ? strdup(shipping_terms->valuestring) : NULL,
        freight_charges_description && !cJSON_IsNull(freight_charges_description) ? strdup(freight_charges_description->valuestring) : NULL,
        declared_value_amount ? declared_value_amount->valuedouble : 0,
        declared_value_currency_id && !cJSON_IsNull(declared_value_currency_id) ? strdup(declared_value_currency_id->valuestring) : NULL,
        issued_date && !cJSON_IsNull(issued_date) ? strdup(issued_date->valuestring) : NULL,
        on_board_date && !cJSON_IsNull(on_board_date) ? strdup(on_board_date->valuestring) : NULL,
        expiry_date && !cJSON_IsNull(expiry_date) ? strdup(expiry_date->valuestring) : NULL,
        vessel_name && !cJSON_IsNull(vessel_name) ? strdup(vessel_name->valuestring) : NULL,
        voyage_number && !cJSON_IsNull(voyage_number) ? strdup(voyage_number->valuestring) : NULL,
        shipper_contact_id && !cJSON_IsNull(shipper_contact_id) ? strdup(shipper_contact_id->valuestring) : NULL,
        consignee_contact_id && !cJSON_IsNull(consignee_contact_id) ? strdup(consignee_contact_id->valuestring) : NULL,
        notify_party_contact_id && !cJSON_IsNull(notify_party_contact_id) ? strdup(notify_party_contact_id->valuestring) : NULL,
        shipping_courier_id && !cJSON_IsNull(shipping_courier_id) ? strdup(shipping_courier_id->valuestring) : NULL,
        port_of_loading_id && !cJSON_IsNull(port_of_loading_id) ? strdup(port_of_loading_id->valuestring) : NULL,
        port_of_discharge_id && !cJSON_IsNull(port_of_discharge_id) ? strdup(port_of_discharge_id->valuestring) : NULL,
        place_of_receipt_id && !cJSON_IsNull(place_of_receipt_id) ? strdup(place_of_receipt_id->valuestring) : NULL,
        place_of_delivery_id && !cJSON_IsNull(place_of_delivery_id) ? strdup(place_of_delivery_id->valuestring) : NULL,
        shipment_id && !cJSON_IsNull(shipment_id) ? strdup(shipment_id->valuestring) : NULL,
        order_id && !cJSON_IsNull(order_id) ? strdup(order_id->valuestring) : NULL,
        voyage_id && !cJSON_IsNull(voyage_id) ? strdup(voyage_id->valuestring) : NULL,
        marks_and_numbers && !cJSON_IsNull(marks_and_numbers) ? strdup(marks_and_numbers->valuestring) : NULL,
        total_packages ? total_packages->valuedouble : 0,
        total_gross_weight_kg ? total_gross_weight_kg->valuedouble : 0,
        total_volume_m3 ? total_volume_m3->valuedouble : 0,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return bill_of_lading_dto_local_var;
end:
    return NULL;

}
