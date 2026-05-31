#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "rail_waybill_dto.h"



rail_waybill_dto_t *rail_waybill_dto_create(
    char *id,
    char *timestamp,
    char *document_number,
    char *status,
    char *shipper_contact_id,
    char *consignee_contact_id,
    char *carrier_id,
    char *rail_operator_name,
    char *station_of_departure,
    char *station_of_departure_code,
    char *station_of_destination,
    char *station_of_destination_code,
    char *prescribed_route,
    char *wagon_numbers,
    char *date_of_acceptance,
    char *date_of_delivery,
    char *freight_terms,
    double freight_amount,
    char *freight_currency_id,
    double total_gross_weight_kg,
    int total_packages,
    double total_volume_m3,
    char *customs_formalities,
    char *special_instructions,
    char *remarks,
    char *sender_signed_date,
    char *carrier_signed_date,
    char *shipment_id,
    char *tenant_id,
    char *enrollment_id,
    list_t *lines
    ) {
    rail_waybill_dto_t *rail_waybill_dto_local_var = malloc(sizeof(rail_waybill_dto_t));
    if (!rail_waybill_dto_local_var) {
        return NULL;
    }
    rail_waybill_dto_local_var->id = id;
    rail_waybill_dto_local_var->timestamp = timestamp;
    rail_waybill_dto_local_var->document_number = document_number;
    rail_waybill_dto_local_var->status = status;
    rail_waybill_dto_local_var->shipper_contact_id = shipper_contact_id;
    rail_waybill_dto_local_var->consignee_contact_id = consignee_contact_id;
    rail_waybill_dto_local_var->carrier_id = carrier_id;
    rail_waybill_dto_local_var->rail_operator_name = rail_operator_name;
    rail_waybill_dto_local_var->station_of_departure = station_of_departure;
    rail_waybill_dto_local_var->station_of_departure_code = station_of_departure_code;
    rail_waybill_dto_local_var->station_of_destination = station_of_destination;
    rail_waybill_dto_local_var->station_of_destination_code = station_of_destination_code;
    rail_waybill_dto_local_var->prescribed_route = prescribed_route;
    rail_waybill_dto_local_var->wagon_numbers = wagon_numbers;
    rail_waybill_dto_local_var->date_of_acceptance = date_of_acceptance;
    rail_waybill_dto_local_var->date_of_delivery = date_of_delivery;
    rail_waybill_dto_local_var->freight_terms = freight_terms;
    rail_waybill_dto_local_var->freight_amount = freight_amount;
    rail_waybill_dto_local_var->freight_currency_id = freight_currency_id;
    rail_waybill_dto_local_var->total_gross_weight_kg = total_gross_weight_kg;
    rail_waybill_dto_local_var->total_packages = total_packages;
    rail_waybill_dto_local_var->total_volume_m3 = total_volume_m3;
    rail_waybill_dto_local_var->customs_formalities = customs_formalities;
    rail_waybill_dto_local_var->special_instructions = special_instructions;
    rail_waybill_dto_local_var->remarks = remarks;
    rail_waybill_dto_local_var->sender_signed_date = sender_signed_date;
    rail_waybill_dto_local_var->carrier_signed_date = carrier_signed_date;
    rail_waybill_dto_local_var->shipment_id = shipment_id;
    rail_waybill_dto_local_var->tenant_id = tenant_id;
    rail_waybill_dto_local_var->enrollment_id = enrollment_id;
    rail_waybill_dto_local_var->lines = lines;

    return rail_waybill_dto_local_var;
}


void rail_waybill_dto_free(rail_waybill_dto_t *rail_waybill_dto) {
    if(NULL == rail_waybill_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (rail_waybill_dto->id) {
        free(rail_waybill_dto->id);
        rail_waybill_dto->id = NULL;
    }
    if (rail_waybill_dto->timestamp) {
        free(rail_waybill_dto->timestamp);
        rail_waybill_dto->timestamp = NULL;
    }
    if (rail_waybill_dto->document_number) {
        free(rail_waybill_dto->document_number);
        rail_waybill_dto->document_number = NULL;
    }
    if (rail_waybill_dto->status) {
        free(rail_waybill_dto->status);
        rail_waybill_dto->status = NULL;
    }
    if (rail_waybill_dto->shipper_contact_id) {
        free(rail_waybill_dto->shipper_contact_id);
        rail_waybill_dto->shipper_contact_id = NULL;
    }
    if (rail_waybill_dto->consignee_contact_id) {
        free(rail_waybill_dto->consignee_contact_id);
        rail_waybill_dto->consignee_contact_id = NULL;
    }
    if (rail_waybill_dto->carrier_id) {
        free(rail_waybill_dto->carrier_id);
        rail_waybill_dto->carrier_id = NULL;
    }
    if (rail_waybill_dto->rail_operator_name) {
        free(rail_waybill_dto->rail_operator_name);
        rail_waybill_dto->rail_operator_name = NULL;
    }
    if (rail_waybill_dto->station_of_departure) {
        free(rail_waybill_dto->station_of_departure);
        rail_waybill_dto->station_of_departure = NULL;
    }
    if (rail_waybill_dto->station_of_departure_code) {
        free(rail_waybill_dto->station_of_departure_code);
        rail_waybill_dto->station_of_departure_code = NULL;
    }
    if (rail_waybill_dto->station_of_destination) {
        free(rail_waybill_dto->station_of_destination);
        rail_waybill_dto->station_of_destination = NULL;
    }
    if (rail_waybill_dto->station_of_destination_code) {
        free(rail_waybill_dto->station_of_destination_code);
        rail_waybill_dto->station_of_destination_code = NULL;
    }
    if (rail_waybill_dto->prescribed_route) {
        free(rail_waybill_dto->prescribed_route);
        rail_waybill_dto->prescribed_route = NULL;
    }
    if (rail_waybill_dto->wagon_numbers) {
        free(rail_waybill_dto->wagon_numbers);
        rail_waybill_dto->wagon_numbers = NULL;
    }
    if (rail_waybill_dto->date_of_acceptance) {
        free(rail_waybill_dto->date_of_acceptance);
        rail_waybill_dto->date_of_acceptance = NULL;
    }
    if (rail_waybill_dto->date_of_delivery) {
        free(rail_waybill_dto->date_of_delivery);
        rail_waybill_dto->date_of_delivery = NULL;
    }
    if (rail_waybill_dto->freight_terms) {
        free(rail_waybill_dto->freight_terms);
        rail_waybill_dto->freight_terms = NULL;
    }
    if (rail_waybill_dto->freight_currency_id) {
        free(rail_waybill_dto->freight_currency_id);
        rail_waybill_dto->freight_currency_id = NULL;
    }
    if (rail_waybill_dto->customs_formalities) {
        free(rail_waybill_dto->customs_formalities);
        rail_waybill_dto->customs_formalities = NULL;
    }
    if (rail_waybill_dto->special_instructions) {
        free(rail_waybill_dto->special_instructions);
        rail_waybill_dto->special_instructions = NULL;
    }
    if (rail_waybill_dto->remarks) {
        free(rail_waybill_dto->remarks);
        rail_waybill_dto->remarks = NULL;
    }
    if (rail_waybill_dto->sender_signed_date) {
        free(rail_waybill_dto->sender_signed_date);
        rail_waybill_dto->sender_signed_date = NULL;
    }
    if (rail_waybill_dto->carrier_signed_date) {
        free(rail_waybill_dto->carrier_signed_date);
        rail_waybill_dto->carrier_signed_date = NULL;
    }
    if (rail_waybill_dto->shipment_id) {
        free(rail_waybill_dto->shipment_id);
        rail_waybill_dto->shipment_id = NULL;
    }
    if (rail_waybill_dto->tenant_id) {
        free(rail_waybill_dto->tenant_id);
        rail_waybill_dto->tenant_id = NULL;
    }
    if (rail_waybill_dto->enrollment_id) {
        free(rail_waybill_dto->enrollment_id);
        rail_waybill_dto->enrollment_id = NULL;
    }
    if (rail_waybill_dto->lines) {
        list_ForEach(listEntry, rail_waybill_dto->lines) {
            waybill_line_dto_free(listEntry->data);
        }
        list_freeList(rail_waybill_dto->lines);
        rail_waybill_dto->lines = NULL;
    }
    free(rail_waybill_dto);
}

cJSON *rail_waybill_dto_convertToJSON(rail_waybill_dto_t *rail_waybill_dto) {
    cJSON *item = cJSON_CreateObject();

    // rail_waybill_dto->id
    if(rail_waybill_dto->id) {
    if(cJSON_AddStringToObject(item, "id", rail_waybill_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // rail_waybill_dto->timestamp
    if(rail_waybill_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", rail_waybill_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // rail_waybill_dto->document_number
    if(rail_waybill_dto->document_number) {
    if(cJSON_AddStringToObject(item, "documentNumber", rail_waybill_dto->document_number) == NULL) {
    goto fail; //String
    }
    }


    // rail_waybill_dto->status
    if(rail_waybill_dto->status) {
    if(cJSON_AddStringToObject(item, "status", rail_waybill_dto->status) == NULL) {
    goto fail; //String
    }
    }


    // rail_waybill_dto->shipper_contact_id
    if(rail_waybill_dto->shipper_contact_id) {
    if(cJSON_AddStringToObject(item, "shipperContactId", rail_waybill_dto->shipper_contact_id) == NULL) {
    goto fail; //String
    }
    }


    // rail_waybill_dto->consignee_contact_id
    if(rail_waybill_dto->consignee_contact_id) {
    if(cJSON_AddStringToObject(item, "consigneeContactId", rail_waybill_dto->consignee_contact_id) == NULL) {
    goto fail; //String
    }
    }


    // rail_waybill_dto->carrier_id
    if(rail_waybill_dto->carrier_id) {
    if(cJSON_AddStringToObject(item, "carrierId", rail_waybill_dto->carrier_id) == NULL) {
    goto fail; //String
    }
    }


    // rail_waybill_dto->rail_operator_name
    if(rail_waybill_dto->rail_operator_name) {
    if(cJSON_AddStringToObject(item, "railOperatorName", rail_waybill_dto->rail_operator_name) == NULL) {
    goto fail; //String
    }
    }


    // rail_waybill_dto->station_of_departure
    if(rail_waybill_dto->station_of_departure) {
    if(cJSON_AddStringToObject(item, "stationOfDeparture", rail_waybill_dto->station_of_departure) == NULL) {
    goto fail; //String
    }
    }


    // rail_waybill_dto->station_of_departure_code
    if(rail_waybill_dto->station_of_departure_code) {
    if(cJSON_AddStringToObject(item, "stationOfDepartureCode", rail_waybill_dto->station_of_departure_code) == NULL) {
    goto fail; //String
    }
    }


    // rail_waybill_dto->station_of_destination
    if(rail_waybill_dto->station_of_destination) {
    if(cJSON_AddStringToObject(item, "stationOfDestination", rail_waybill_dto->station_of_destination) == NULL) {
    goto fail; //String
    }
    }


    // rail_waybill_dto->station_of_destination_code
    if(rail_waybill_dto->station_of_destination_code) {
    if(cJSON_AddStringToObject(item, "stationOfDestinationCode", rail_waybill_dto->station_of_destination_code) == NULL) {
    goto fail; //String
    }
    }


    // rail_waybill_dto->prescribed_route
    if(rail_waybill_dto->prescribed_route) {
    if(cJSON_AddStringToObject(item, "prescribedRoute", rail_waybill_dto->prescribed_route) == NULL) {
    goto fail; //String
    }
    }


    // rail_waybill_dto->wagon_numbers
    if(rail_waybill_dto->wagon_numbers) {
    if(cJSON_AddStringToObject(item, "wagonNumbers", rail_waybill_dto->wagon_numbers) == NULL) {
    goto fail; //String
    }
    }


    // rail_waybill_dto->date_of_acceptance
    if(rail_waybill_dto->date_of_acceptance) {
    if(cJSON_AddStringToObject(item, "dateOfAcceptance", rail_waybill_dto->date_of_acceptance) == NULL) {
    goto fail; //Date-Time
    }
    }


    // rail_waybill_dto->date_of_delivery
    if(rail_waybill_dto->date_of_delivery) {
    if(cJSON_AddStringToObject(item, "dateOfDelivery", rail_waybill_dto->date_of_delivery) == NULL) {
    goto fail; //Date-Time
    }
    }


    // rail_waybill_dto->freight_terms
    if(rail_waybill_dto->freight_terms) {
    if(cJSON_AddStringToObject(item, "freightTerms", rail_waybill_dto->freight_terms) == NULL) {
    goto fail; //String
    }
    }


    // rail_waybill_dto->freight_amount
    if(rail_waybill_dto->freight_amount) {
    if(cJSON_AddNumberToObject(item, "freightAmount", rail_waybill_dto->freight_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // rail_waybill_dto->freight_currency_id
    if(rail_waybill_dto->freight_currency_id) {
    if(cJSON_AddStringToObject(item, "freightCurrencyId", rail_waybill_dto->freight_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // rail_waybill_dto->total_gross_weight_kg
    if(rail_waybill_dto->total_gross_weight_kg) {
    if(cJSON_AddNumberToObject(item, "totalGrossWeightKg", rail_waybill_dto->total_gross_weight_kg) == NULL) {
    goto fail; //Numeric
    }
    }


    // rail_waybill_dto->total_packages
    if(rail_waybill_dto->total_packages) {
    if(cJSON_AddNumberToObject(item, "totalPackages", rail_waybill_dto->total_packages) == NULL) {
    goto fail; //Numeric
    }
    }


    // rail_waybill_dto->total_volume_m3
    if(rail_waybill_dto->total_volume_m3) {
    if(cJSON_AddNumberToObject(item, "totalVolumeM3", rail_waybill_dto->total_volume_m3) == NULL) {
    goto fail; //Numeric
    }
    }


    // rail_waybill_dto->customs_formalities
    if(rail_waybill_dto->customs_formalities) {
    if(cJSON_AddStringToObject(item, "customsFormalities", rail_waybill_dto->customs_formalities) == NULL) {
    goto fail; //String
    }
    }


    // rail_waybill_dto->special_instructions
    if(rail_waybill_dto->special_instructions) {
    if(cJSON_AddStringToObject(item, "specialInstructions", rail_waybill_dto->special_instructions) == NULL) {
    goto fail; //String
    }
    }


    // rail_waybill_dto->remarks
    if(rail_waybill_dto->remarks) {
    if(cJSON_AddStringToObject(item, "remarks", rail_waybill_dto->remarks) == NULL) {
    goto fail; //String
    }
    }


    // rail_waybill_dto->sender_signed_date
    if(rail_waybill_dto->sender_signed_date) {
    if(cJSON_AddStringToObject(item, "senderSignedDate", rail_waybill_dto->sender_signed_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // rail_waybill_dto->carrier_signed_date
    if(rail_waybill_dto->carrier_signed_date) {
    if(cJSON_AddStringToObject(item, "carrierSignedDate", rail_waybill_dto->carrier_signed_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // rail_waybill_dto->shipment_id
    if(rail_waybill_dto->shipment_id) {
    if(cJSON_AddStringToObject(item, "shipmentId", rail_waybill_dto->shipment_id) == NULL) {
    goto fail; //String
    }
    }


    // rail_waybill_dto->tenant_id
    if(rail_waybill_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", rail_waybill_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // rail_waybill_dto->enrollment_id
    if(rail_waybill_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", rail_waybill_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // rail_waybill_dto->lines
    if(rail_waybill_dto->lines) {
    cJSON *lines = cJSON_AddArrayToObject(item, "lines");
    if(lines == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *linesListEntry;
    if (rail_waybill_dto->lines) {
    list_ForEach(linesListEntry, rail_waybill_dto->lines) {
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

rail_waybill_dto_t *rail_waybill_dto_parseFromJSON(cJSON *rail_waybill_dtoJSON){

    rail_waybill_dto_t *rail_waybill_dto_local_var = NULL;

    // define the local list for rail_waybill_dto->lines
    list_t *linesList = NULL;

    // rail_waybill_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(rail_waybill_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // rail_waybill_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(rail_waybill_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // rail_waybill_dto->document_number
    cJSON *document_number = cJSON_GetObjectItemCaseSensitive(rail_waybill_dtoJSON, "documentNumber");
    if (document_number) { 
    if(!cJSON_IsString(document_number) && !cJSON_IsNull(document_number))
    {
    goto end; //String
    }
    }

    // rail_waybill_dto->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(rail_waybill_dtoJSON, "status");
    if (status) { 
    if(!cJSON_IsString(status) && !cJSON_IsNull(status))
    {
    goto end; //String
    }
    }

    // rail_waybill_dto->shipper_contact_id
    cJSON *shipper_contact_id = cJSON_GetObjectItemCaseSensitive(rail_waybill_dtoJSON, "shipperContactId");
    if (shipper_contact_id) { 
    if(!cJSON_IsString(shipper_contact_id) && !cJSON_IsNull(shipper_contact_id))
    {
    goto end; //String
    }
    }

    // rail_waybill_dto->consignee_contact_id
    cJSON *consignee_contact_id = cJSON_GetObjectItemCaseSensitive(rail_waybill_dtoJSON, "consigneeContactId");
    if (consignee_contact_id) { 
    if(!cJSON_IsString(consignee_contact_id) && !cJSON_IsNull(consignee_contact_id))
    {
    goto end; //String
    }
    }

    // rail_waybill_dto->carrier_id
    cJSON *carrier_id = cJSON_GetObjectItemCaseSensitive(rail_waybill_dtoJSON, "carrierId");
    if (carrier_id) { 
    if(!cJSON_IsString(carrier_id) && !cJSON_IsNull(carrier_id))
    {
    goto end; //String
    }
    }

    // rail_waybill_dto->rail_operator_name
    cJSON *rail_operator_name = cJSON_GetObjectItemCaseSensitive(rail_waybill_dtoJSON, "railOperatorName");
    if (rail_operator_name) { 
    if(!cJSON_IsString(rail_operator_name) && !cJSON_IsNull(rail_operator_name))
    {
    goto end; //String
    }
    }

    // rail_waybill_dto->station_of_departure
    cJSON *station_of_departure = cJSON_GetObjectItemCaseSensitive(rail_waybill_dtoJSON, "stationOfDeparture");
    if (station_of_departure) { 
    if(!cJSON_IsString(station_of_departure) && !cJSON_IsNull(station_of_departure))
    {
    goto end; //String
    }
    }

    // rail_waybill_dto->station_of_departure_code
    cJSON *station_of_departure_code = cJSON_GetObjectItemCaseSensitive(rail_waybill_dtoJSON, "stationOfDepartureCode");
    if (station_of_departure_code) { 
    if(!cJSON_IsString(station_of_departure_code) && !cJSON_IsNull(station_of_departure_code))
    {
    goto end; //String
    }
    }

    // rail_waybill_dto->station_of_destination
    cJSON *station_of_destination = cJSON_GetObjectItemCaseSensitive(rail_waybill_dtoJSON, "stationOfDestination");
    if (station_of_destination) { 
    if(!cJSON_IsString(station_of_destination) && !cJSON_IsNull(station_of_destination))
    {
    goto end; //String
    }
    }

    // rail_waybill_dto->station_of_destination_code
    cJSON *station_of_destination_code = cJSON_GetObjectItemCaseSensitive(rail_waybill_dtoJSON, "stationOfDestinationCode");
    if (station_of_destination_code) { 
    if(!cJSON_IsString(station_of_destination_code) && !cJSON_IsNull(station_of_destination_code))
    {
    goto end; //String
    }
    }

    // rail_waybill_dto->prescribed_route
    cJSON *prescribed_route = cJSON_GetObjectItemCaseSensitive(rail_waybill_dtoJSON, "prescribedRoute");
    if (prescribed_route) { 
    if(!cJSON_IsString(prescribed_route) && !cJSON_IsNull(prescribed_route))
    {
    goto end; //String
    }
    }

    // rail_waybill_dto->wagon_numbers
    cJSON *wagon_numbers = cJSON_GetObjectItemCaseSensitive(rail_waybill_dtoJSON, "wagonNumbers");
    if (wagon_numbers) { 
    if(!cJSON_IsString(wagon_numbers) && !cJSON_IsNull(wagon_numbers))
    {
    goto end; //String
    }
    }

    // rail_waybill_dto->date_of_acceptance
    cJSON *date_of_acceptance = cJSON_GetObjectItemCaseSensitive(rail_waybill_dtoJSON, "dateOfAcceptance");
    if (date_of_acceptance) { 
    if(!cJSON_IsString(date_of_acceptance) && !cJSON_IsNull(date_of_acceptance))
    {
    goto end; //DateTime
    }
    }

    // rail_waybill_dto->date_of_delivery
    cJSON *date_of_delivery = cJSON_GetObjectItemCaseSensitive(rail_waybill_dtoJSON, "dateOfDelivery");
    if (date_of_delivery) { 
    if(!cJSON_IsString(date_of_delivery) && !cJSON_IsNull(date_of_delivery))
    {
    goto end; //DateTime
    }
    }

    // rail_waybill_dto->freight_terms
    cJSON *freight_terms = cJSON_GetObjectItemCaseSensitive(rail_waybill_dtoJSON, "freightTerms");
    if (freight_terms) { 
    if(!cJSON_IsString(freight_terms) && !cJSON_IsNull(freight_terms))
    {
    goto end; //String
    }
    }

    // rail_waybill_dto->freight_amount
    cJSON *freight_amount = cJSON_GetObjectItemCaseSensitive(rail_waybill_dtoJSON, "freightAmount");
    if (freight_amount) { 
    if(!cJSON_IsNumber(freight_amount))
    {
    goto end; //Numeric
    }
    }

    // rail_waybill_dto->freight_currency_id
    cJSON *freight_currency_id = cJSON_GetObjectItemCaseSensitive(rail_waybill_dtoJSON, "freightCurrencyId");
    if (freight_currency_id) { 
    if(!cJSON_IsString(freight_currency_id) && !cJSON_IsNull(freight_currency_id))
    {
    goto end; //String
    }
    }

    // rail_waybill_dto->total_gross_weight_kg
    cJSON *total_gross_weight_kg = cJSON_GetObjectItemCaseSensitive(rail_waybill_dtoJSON, "totalGrossWeightKg");
    if (total_gross_weight_kg) { 
    if(!cJSON_IsNumber(total_gross_weight_kg))
    {
    goto end; //Numeric
    }
    }

    // rail_waybill_dto->total_packages
    cJSON *total_packages = cJSON_GetObjectItemCaseSensitive(rail_waybill_dtoJSON, "totalPackages");
    if (total_packages) { 
    if(!cJSON_IsNumber(total_packages))
    {
    goto end; //Numeric
    }
    }

    // rail_waybill_dto->total_volume_m3
    cJSON *total_volume_m3 = cJSON_GetObjectItemCaseSensitive(rail_waybill_dtoJSON, "totalVolumeM3");
    if (total_volume_m3) { 
    if(!cJSON_IsNumber(total_volume_m3))
    {
    goto end; //Numeric
    }
    }

    // rail_waybill_dto->customs_formalities
    cJSON *customs_formalities = cJSON_GetObjectItemCaseSensitive(rail_waybill_dtoJSON, "customsFormalities");
    if (customs_formalities) { 
    if(!cJSON_IsString(customs_formalities) && !cJSON_IsNull(customs_formalities))
    {
    goto end; //String
    }
    }

    // rail_waybill_dto->special_instructions
    cJSON *special_instructions = cJSON_GetObjectItemCaseSensitive(rail_waybill_dtoJSON, "specialInstructions");
    if (special_instructions) { 
    if(!cJSON_IsString(special_instructions) && !cJSON_IsNull(special_instructions))
    {
    goto end; //String
    }
    }

    // rail_waybill_dto->remarks
    cJSON *remarks = cJSON_GetObjectItemCaseSensitive(rail_waybill_dtoJSON, "remarks");
    if (remarks) { 
    if(!cJSON_IsString(remarks) && !cJSON_IsNull(remarks))
    {
    goto end; //String
    }
    }

    // rail_waybill_dto->sender_signed_date
    cJSON *sender_signed_date = cJSON_GetObjectItemCaseSensitive(rail_waybill_dtoJSON, "senderSignedDate");
    if (sender_signed_date) { 
    if(!cJSON_IsString(sender_signed_date) && !cJSON_IsNull(sender_signed_date))
    {
    goto end; //DateTime
    }
    }

    // rail_waybill_dto->carrier_signed_date
    cJSON *carrier_signed_date = cJSON_GetObjectItemCaseSensitive(rail_waybill_dtoJSON, "carrierSignedDate");
    if (carrier_signed_date) { 
    if(!cJSON_IsString(carrier_signed_date) && !cJSON_IsNull(carrier_signed_date))
    {
    goto end; //DateTime
    }
    }

    // rail_waybill_dto->shipment_id
    cJSON *shipment_id = cJSON_GetObjectItemCaseSensitive(rail_waybill_dtoJSON, "shipmentId");
    if (shipment_id) { 
    if(!cJSON_IsString(shipment_id) && !cJSON_IsNull(shipment_id))
    {
    goto end; //String
    }
    }

    // rail_waybill_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(rail_waybill_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // rail_waybill_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(rail_waybill_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // rail_waybill_dto->lines
    cJSON *lines = cJSON_GetObjectItemCaseSensitive(rail_waybill_dtoJSON, "lines");
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


    rail_waybill_dto_local_var = rail_waybill_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        document_number && !cJSON_IsNull(document_number) ? strdup(document_number->valuestring) : NULL,
        status && !cJSON_IsNull(status) ? strdup(status->valuestring) : NULL,
        shipper_contact_id && !cJSON_IsNull(shipper_contact_id) ? strdup(shipper_contact_id->valuestring) : NULL,
        consignee_contact_id && !cJSON_IsNull(consignee_contact_id) ? strdup(consignee_contact_id->valuestring) : NULL,
        carrier_id && !cJSON_IsNull(carrier_id) ? strdup(carrier_id->valuestring) : NULL,
        rail_operator_name && !cJSON_IsNull(rail_operator_name) ? strdup(rail_operator_name->valuestring) : NULL,
        station_of_departure && !cJSON_IsNull(station_of_departure) ? strdup(station_of_departure->valuestring) : NULL,
        station_of_departure_code && !cJSON_IsNull(station_of_departure_code) ? strdup(station_of_departure_code->valuestring) : NULL,
        station_of_destination && !cJSON_IsNull(station_of_destination) ? strdup(station_of_destination->valuestring) : NULL,
        station_of_destination_code && !cJSON_IsNull(station_of_destination_code) ? strdup(station_of_destination_code->valuestring) : NULL,
        prescribed_route && !cJSON_IsNull(prescribed_route) ? strdup(prescribed_route->valuestring) : NULL,
        wagon_numbers && !cJSON_IsNull(wagon_numbers) ? strdup(wagon_numbers->valuestring) : NULL,
        date_of_acceptance && !cJSON_IsNull(date_of_acceptance) ? strdup(date_of_acceptance->valuestring) : NULL,
        date_of_delivery && !cJSON_IsNull(date_of_delivery) ? strdup(date_of_delivery->valuestring) : NULL,
        freight_terms && !cJSON_IsNull(freight_terms) ? strdup(freight_terms->valuestring) : NULL,
        freight_amount ? freight_amount->valuedouble : 0,
        freight_currency_id && !cJSON_IsNull(freight_currency_id) ? strdup(freight_currency_id->valuestring) : NULL,
        total_gross_weight_kg ? total_gross_weight_kg->valuedouble : 0,
        total_packages ? total_packages->valuedouble : 0,
        total_volume_m3 ? total_volume_m3->valuedouble : 0,
        customs_formalities && !cJSON_IsNull(customs_formalities) ? strdup(customs_formalities->valuestring) : NULL,
        special_instructions && !cJSON_IsNull(special_instructions) ? strdup(special_instructions->valuestring) : NULL,
        remarks && !cJSON_IsNull(remarks) ? strdup(remarks->valuestring) : NULL,
        sender_signed_date && !cJSON_IsNull(sender_signed_date) ? strdup(sender_signed_date->valuestring) : NULL,
        carrier_signed_date && !cJSON_IsNull(carrier_signed_date) ? strdup(carrier_signed_date->valuestring) : NULL,
        shipment_id && !cJSON_IsNull(shipment_id) ? strdup(shipment_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        lines ? linesList : NULL
        );

    return rail_waybill_dto_local_var;
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
