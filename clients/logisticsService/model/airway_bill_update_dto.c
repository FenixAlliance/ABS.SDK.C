#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "airway_bill_update_dto.h"



airway_bill_update_dto_t *airway_bill_update_dto_create(
    char *document_number,
    char *airway_bill_type,
    char *master_awb_number,
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
    char *shipment_id
    ) {
    airway_bill_update_dto_t *airway_bill_update_dto_local_var = malloc(sizeof(airway_bill_update_dto_t));
    if (!airway_bill_update_dto_local_var) {
        return NULL;
    }
    airway_bill_update_dto_local_var->document_number = document_number;
    airway_bill_update_dto_local_var->airway_bill_type = airway_bill_type;
    airway_bill_update_dto_local_var->master_awb_number = master_awb_number;
    airway_bill_update_dto_local_var->shipper_contact_id = shipper_contact_id;
    airway_bill_update_dto_local_var->consignee_contact_id = consignee_contact_id;
    airway_bill_update_dto_local_var->notify_party_contact_id = notify_party_contact_id;
    airway_bill_update_dto_local_var->carrier_id = carrier_id;
    airway_bill_update_dto_local_var->airline_code = airline_code;
    airway_bill_update_dto_local_var->flight_number = flight_number;
    airway_bill_update_dto_local_var->airport_of_departure_code = airport_of_departure_code;
    airway_bill_update_dto_local_var->airport_of_destination_code = airport_of_destination_code;
    airway_bill_update_dto_local_var->departure_date = departure_date;
    airway_bill_update_dto_local_var->arrival_date = arrival_date;
    airway_bill_update_dto_local_var->date_issued = date_issued;
    airway_bill_update_dto_local_var->freight_terms = freight_terms;
    airway_bill_update_dto_local_var->freight_amount = freight_amount;
    airway_bill_update_dto_local_var->freight_currency_id = freight_currency_id;
    airway_bill_update_dto_local_var->chargeable_weight_kg = chargeable_weight_kg;
    airway_bill_update_dto_local_var->total_gross_weight_kg = total_gross_weight_kg;
    airway_bill_update_dto_local_var->total_packages = total_packages;
    airway_bill_update_dto_local_var->total_volume_m3 = total_volume_m3;
    airway_bill_update_dto_local_var->declared_value_for_carriage = declared_value_for_carriage;
    airway_bill_update_dto_local_var->declared_value_for_customs = declared_value_for_customs;
    airway_bill_update_dto_local_var->insurance_amount = insurance_amount;
    airway_bill_update_dto_local_var->special_handling_codes = special_handling_codes;
    airway_bill_update_dto_local_var->special_instructions = special_instructions;
    airway_bill_update_dto_local_var->remarks = remarks;
    airway_bill_update_dto_local_var->shipment_id = shipment_id;

    return airway_bill_update_dto_local_var;
}


void airway_bill_update_dto_free(airway_bill_update_dto_t *airway_bill_update_dto) {
    if(NULL == airway_bill_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (airway_bill_update_dto->document_number) {
        free(airway_bill_update_dto->document_number);
        airway_bill_update_dto->document_number = NULL;
    }
    if (airway_bill_update_dto->airway_bill_type) {
        free(airway_bill_update_dto->airway_bill_type);
        airway_bill_update_dto->airway_bill_type = NULL;
    }
    if (airway_bill_update_dto->master_awb_number) {
        free(airway_bill_update_dto->master_awb_number);
        airway_bill_update_dto->master_awb_number = NULL;
    }
    if (airway_bill_update_dto->shipper_contact_id) {
        free(airway_bill_update_dto->shipper_contact_id);
        airway_bill_update_dto->shipper_contact_id = NULL;
    }
    if (airway_bill_update_dto->consignee_contact_id) {
        free(airway_bill_update_dto->consignee_contact_id);
        airway_bill_update_dto->consignee_contact_id = NULL;
    }
    if (airway_bill_update_dto->notify_party_contact_id) {
        free(airway_bill_update_dto->notify_party_contact_id);
        airway_bill_update_dto->notify_party_contact_id = NULL;
    }
    if (airway_bill_update_dto->carrier_id) {
        free(airway_bill_update_dto->carrier_id);
        airway_bill_update_dto->carrier_id = NULL;
    }
    if (airway_bill_update_dto->airline_code) {
        free(airway_bill_update_dto->airline_code);
        airway_bill_update_dto->airline_code = NULL;
    }
    if (airway_bill_update_dto->flight_number) {
        free(airway_bill_update_dto->flight_number);
        airway_bill_update_dto->flight_number = NULL;
    }
    if (airway_bill_update_dto->airport_of_departure_code) {
        free(airway_bill_update_dto->airport_of_departure_code);
        airway_bill_update_dto->airport_of_departure_code = NULL;
    }
    if (airway_bill_update_dto->airport_of_destination_code) {
        free(airway_bill_update_dto->airport_of_destination_code);
        airway_bill_update_dto->airport_of_destination_code = NULL;
    }
    if (airway_bill_update_dto->departure_date) {
        free(airway_bill_update_dto->departure_date);
        airway_bill_update_dto->departure_date = NULL;
    }
    if (airway_bill_update_dto->arrival_date) {
        free(airway_bill_update_dto->arrival_date);
        airway_bill_update_dto->arrival_date = NULL;
    }
    if (airway_bill_update_dto->date_issued) {
        free(airway_bill_update_dto->date_issued);
        airway_bill_update_dto->date_issued = NULL;
    }
    if (airway_bill_update_dto->freight_terms) {
        free(airway_bill_update_dto->freight_terms);
        airway_bill_update_dto->freight_terms = NULL;
    }
    if (airway_bill_update_dto->freight_currency_id) {
        free(airway_bill_update_dto->freight_currency_id);
        airway_bill_update_dto->freight_currency_id = NULL;
    }
    if (airway_bill_update_dto->special_handling_codes) {
        free(airway_bill_update_dto->special_handling_codes);
        airway_bill_update_dto->special_handling_codes = NULL;
    }
    if (airway_bill_update_dto->special_instructions) {
        free(airway_bill_update_dto->special_instructions);
        airway_bill_update_dto->special_instructions = NULL;
    }
    if (airway_bill_update_dto->remarks) {
        free(airway_bill_update_dto->remarks);
        airway_bill_update_dto->remarks = NULL;
    }
    if (airway_bill_update_dto->shipment_id) {
        free(airway_bill_update_dto->shipment_id);
        airway_bill_update_dto->shipment_id = NULL;
    }
    free(airway_bill_update_dto);
}

cJSON *airway_bill_update_dto_convertToJSON(airway_bill_update_dto_t *airway_bill_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // airway_bill_update_dto->document_number
    if(airway_bill_update_dto->document_number) {
    if(cJSON_AddStringToObject(item, "documentNumber", airway_bill_update_dto->document_number) == NULL) {
    goto fail; //String
    }
    }


    // airway_bill_update_dto->airway_bill_type
    if(airway_bill_update_dto->airway_bill_type) {
    if(cJSON_AddStringToObject(item, "airwayBillType", airway_bill_update_dto->airway_bill_type) == NULL) {
    goto fail; //String
    }
    }


    // airway_bill_update_dto->master_awb_number
    if(airway_bill_update_dto->master_awb_number) {
    if(cJSON_AddStringToObject(item, "masterAwbNumber", airway_bill_update_dto->master_awb_number) == NULL) {
    goto fail; //String
    }
    }


    // airway_bill_update_dto->shipper_contact_id
    if(airway_bill_update_dto->shipper_contact_id) {
    if(cJSON_AddStringToObject(item, "shipperContactId", airway_bill_update_dto->shipper_contact_id) == NULL) {
    goto fail; //String
    }
    }


    // airway_bill_update_dto->consignee_contact_id
    if(airway_bill_update_dto->consignee_contact_id) {
    if(cJSON_AddStringToObject(item, "consigneeContactId", airway_bill_update_dto->consignee_contact_id) == NULL) {
    goto fail; //String
    }
    }


    // airway_bill_update_dto->notify_party_contact_id
    if(airway_bill_update_dto->notify_party_contact_id) {
    if(cJSON_AddStringToObject(item, "notifyPartyContactId", airway_bill_update_dto->notify_party_contact_id) == NULL) {
    goto fail; //String
    }
    }


    // airway_bill_update_dto->carrier_id
    if(airway_bill_update_dto->carrier_id) {
    if(cJSON_AddStringToObject(item, "carrierId", airway_bill_update_dto->carrier_id) == NULL) {
    goto fail; //String
    }
    }


    // airway_bill_update_dto->airline_code
    if(airway_bill_update_dto->airline_code) {
    if(cJSON_AddStringToObject(item, "airlineCode", airway_bill_update_dto->airline_code) == NULL) {
    goto fail; //String
    }
    }


    // airway_bill_update_dto->flight_number
    if(airway_bill_update_dto->flight_number) {
    if(cJSON_AddStringToObject(item, "flightNumber", airway_bill_update_dto->flight_number) == NULL) {
    goto fail; //String
    }
    }


    // airway_bill_update_dto->airport_of_departure_code
    if(airway_bill_update_dto->airport_of_departure_code) {
    if(cJSON_AddStringToObject(item, "airportOfDepartureCode", airway_bill_update_dto->airport_of_departure_code) == NULL) {
    goto fail; //String
    }
    }


    // airway_bill_update_dto->airport_of_destination_code
    if(airway_bill_update_dto->airport_of_destination_code) {
    if(cJSON_AddStringToObject(item, "airportOfDestinationCode", airway_bill_update_dto->airport_of_destination_code) == NULL) {
    goto fail; //String
    }
    }


    // airway_bill_update_dto->departure_date
    if(airway_bill_update_dto->departure_date) {
    if(cJSON_AddStringToObject(item, "departureDate", airway_bill_update_dto->departure_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // airway_bill_update_dto->arrival_date
    if(airway_bill_update_dto->arrival_date) {
    if(cJSON_AddStringToObject(item, "arrivalDate", airway_bill_update_dto->arrival_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // airway_bill_update_dto->date_issued
    if(airway_bill_update_dto->date_issued) {
    if(cJSON_AddStringToObject(item, "dateIssued", airway_bill_update_dto->date_issued) == NULL) {
    goto fail; //Date-Time
    }
    }


    // airway_bill_update_dto->freight_terms
    if(airway_bill_update_dto->freight_terms) {
    if(cJSON_AddStringToObject(item, "freightTerms", airway_bill_update_dto->freight_terms) == NULL) {
    goto fail; //String
    }
    }


    // airway_bill_update_dto->freight_amount
    if(airway_bill_update_dto->freight_amount) {
    if(cJSON_AddNumberToObject(item, "freightAmount", airway_bill_update_dto->freight_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // airway_bill_update_dto->freight_currency_id
    if(airway_bill_update_dto->freight_currency_id) {
    if(cJSON_AddStringToObject(item, "freightCurrencyId", airway_bill_update_dto->freight_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // airway_bill_update_dto->chargeable_weight_kg
    if(airway_bill_update_dto->chargeable_weight_kg) {
    if(cJSON_AddNumberToObject(item, "chargeableWeightKg", airway_bill_update_dto->chargeable_weight_kg) == NULL) {
    goto fail; //Numeric
    }
    }


    // airway_bill_update_dto->total_gross_weight_kg
    if(airway_bill_update_dto->total_gross_weight_kg) {
    if(cJSON_AddNumberToObject(item, "totalGrossWeightKg", airway_bill_update_dto->total_gross_weight_kg) == NULL) {
    goto fail; //Numeric
    }
    }


    // airway_bill_update_dto->total_packages
    if(airway_bill_update_dto->total_packages) {
    if(cJSON_AddNumberToObject(item, "totalPackages", airway_bill_update_dto->total_packages) == NULL) {
    goto fail; //Numeric
    }
    }


    // airway_bill_update_dto->total_volume_m3
    if(airway_bill_update_dto->total_volume_m3) {
    if(cJSON_AddNumberToObject(item, "totalVolumeM3", airway_bill_update_dto->total_volume_m3) == NULL) {
    goto fail; //Numeric
    }
    }


    // airway_bill_update_dto->declared_value_for_carriage
    if(airway_bill_update_dto->declared_value_for_carriage) {
    if(cJSON_AddNumberToObject(item, "declaredValueForCarriage", airway_bill_update_dto->declared_value_for_carriage) == NULL) {
    goto fail; //Numeric
    }
    }


    // airway_bill_update_dto->declared_value_for_customs
    if(airway_bill_update_dto->declared_value_for_customs) {
    if(cJSON_AddNumberToObject(item, "declaredValueForCustoms", airway_bill_update_dto->declared_value_for_customs) == NULL) {
    goto fail; //Numeric
    }
    }


    // airway_bill_update_dto->insurance_amount
    if(airway_bill_update_dto->insurance_amount) {
    if(cJSON_AddNumberToObject(item, "insuranceAmount", airway_bill_update_dto->insurance_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // airway_bill_update_dto->special_handling_codes
    if(airway_bill_update_dto->special_handling_codes) {
    if(cJSON_AddStringToObject(item, "specialHandlingCodes", airway_bill_update_dto->special_handling_codes) == NULL) {
    goto fail; //String
    }
    }


    // airway_bill_update_dto->special_instructions
    if(airway_bill_update_dto->special_instructions) {
    if(cJSON_AddStringToObject(item, "specialInstructions", airway_bill_update_dto->special_instructions) == NULL) {
    goto fail; //String
    }
    }


    // airway_bill_update_dto->remarks
    if(airway_bill_update_dto->remarks) {
    if(cJSON_AddStringToObject(item, "remarks", airway_bill_update_dto->remarks) == NULL) {
    goto fail; //String
    }
    }


    // airway_bill_update_dto->shipment_id
    if(airway_bill_update_dto->shipment_id) {
    if(cJSON_AddStringToObject(item, "shipmentId", airway_bill_update_dto->shipment_id) == NULL) {
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

airway_bill_update_dto_t *airway_bill_update_dto_parseFromJSON(cJSON *airway_bill_update_dtoJSON){

    airway_bill_update_dto_t *airway_bill_update_dto_local_var = NULL;

    // airway_bill_update_dto->document_number
    cJSON *document_number = cJSON_GetObjectItemCaseSensitive(airway_bill_update_dtoJSON, "documentNumber");
    if (document_number) { 
    if(!cJSON_IsString(document_number) && !cJSON_IsNull(document_number))
    {
    goto end; //String
    }
    }

    // airway_bill_update_dto->airway_bill_type
    cJSON *airway_bill_type = cJSON_GetObjectItemCaseSensitive(airway_bill_update_dtoJSON, "airwayBillType");
    if (airway_bill_type) { 
    if(!cJSON_IsString(airway_bill_type) && !cJSON_IsNull(airway_bill_type))
    {
    goto end; //String
    }
    }

    // airway_bill_update_dto->master_awb_number
    cJSON *master_awb_number = cJSON_GetObjectItemCaseSensitive(airway_bill_update_dtoJSON, "masterAwbNumber");
    if (master_awb_number) { 
    if(!cJSON_IsString(master_awb_number) && !cJSON_IsNull(master_awb_number))
    {
    goto end; //String
    }
    }

    // airway_bill_update_dto->shipper_contact_id
    cJSON *shipper_contact_id = cJSON_GetObjectItemCaseSensitive(airway_bill_update_dtoJSON, "shipperContactId");
    if (shipper_contact_id) { 
    if(!cJSON_IsString(shipper_contact_id) && !cJSON_IsNull(shipper_contact_id))
    {
    goto end; //String
    }
    }

    // airway_bill_update_dto->consignee_contact_id
    cJSON *consignee_contact_id = cJSON_GetObjectItemCaseSensitive(airway_bill_update_dtoJSON, "consigneeContactId");
    if (consignee_contact_id) { 
    if(!cJSON_IsString(consignee_contact_id) && !cJSON_IsNull(consignee_contact_id))
    {
    goto end; //String
    }
    }

    // airway_bill_update_dto->notify_party_contact_id
    cJSON *notify_party_contact_id = cJSON_GetObjectItemCaseSensitive(airway_bill_update_dtoJSON, "notifyPartyContactId");
    if (notify_party_contact_id) { 
    if(!cJSON_IsString(notify_party_contact_id) && !cJSON_IsNull(notify_party_contact_id))
    {
    goto end; //String
    }
    }

    // airway_bill_update_dto->carrier_id
    cJSON *carrier_id = cJSON_GetObjectItemCaseSensitive(airway_bill_update_dtoJSON, "carrierId");
    if (carrier_id) { 
    if(!cJSON_IsString(carrier_id) && !cJSON_IsNull(carrier_id))
    {
    goto end; //String
    }
    }

    // airway_bill_update_dto->airline_code
    cJSON *airline_code = cJSON_GetObjectItemCaseSensitive(airway_bill_update_dtoJSON, "airlineCode");
    if (airline_code) { 
    if(!cJSON_IsString(airline_code) && !cJSON_IsNull(airline_code))
    {
    goto end; //String
    }
    }

    // airway_bill_update_dto->flight_number
    cJSON *flight_number = cJSON_GetObjectItemCaseSensitive(airway_bill_update_dtoJSON, "flightNumber");
    if (flight_number) { 
    if(!cJSON_IsString(flight_number) && !cJSON_IsNull(flight_number))
    {
    goto end; //String
    }
    }

    // airway_bill_update_dto->airport_of_departure_code
    cJSON *airport_of_departure_code = cJSON_GetObjectItemCaseSensitive(airway_bill_update_dtoJSON, "airportOfDepartureCode");
    if (airport_of_departure_code) { 
    if(!cJSON_IsString(airport_of_departure_code) && !cJSON_IsNull(airport_of_departure_code))
    {
    goto end; //String
    }
    }

    // airway_bill_update_dto->airport_of_destination_code
    cJSON *airport_of_destination_code = cJSON_GetObjectItemCaseSensitive(airway_bill_update_dtoJSON, "airportOfDestinationCode");
    if (airport_of_destination_code) { 
    if(!cJSON_IsString(airport_of_destination_code) && !cJSON_IsNull(airport_of_destination_code))
    {
    goto end; //String
    }
    }

    // airway_bill_update_dto->departure_date
    cJSON *departure_date = cJSON_GetObjectItemCaseSensitive(airway_bill_update_dtoJSON, "departureDate");
    if (departure_date) { 
    if(!cJSON_IsString(departure_date) && !cJSON_IsNull(departure_date))
    {
    goto end; //DateTime
    }
    }

    // airway_bill_update_dto->arrival_date
    cJSON *arrival_date = cJSON_GetObjectItemCaseSensitive(airway_bill_update_dtoJSON, "arrivalDate");
    if (arrival_date) { 
    if(!cJSON_IsString(arrival_date) && !cJSON_IsNull(arrival_date))
    {
    goto end; //DateTime
    }
    }

    // airway_bill_update_dto->date_issued
    cJSON *date_issued = cJSON_GetObjectItemCaseSensitive(airway_bill_update_dtoJSON, "dateIssued");
    if (date_issued) { 
    if(!cJSON_IsString(date_issued) && !cJSON_IsNull(date_issued))
    {
    goto end; //DateTime
    }
    }

    // airway_bill_update_dto->freight_terms
    cJSON *freight_terms = cJSON_GetObjectItemCaseSensitive(airway_bill_update_dtoJSON, "freightTerms");
    if (freight_terms) { 
    if(!cJSON_IsString(freight_terms) && !cJSON_IsNull(freight_terms))
    {
    goto end; //String
    }
    }

    // airway_bill_update_dto->freight_amount
    cJSON *freight_amount = cJSON_GetObjectItemCaseSensitive(airway_bill_update_dtoJSON, "freightAmount");
    if (freight_amount) { 
    if(!cJSON_IsNumber(freight_amount))
    {
    goto end; //Numeric
    }
    }

    // airway_bill_update_dto->freight_currency_id
    cJSON *freight_currency_id = cJSON_GetObjectItemCaseSensitive(airway_bill_update_dtoJSON, "freightCurrencyId");
    if (freight_currency_id) { 
    if(!cJSON_IsString(freight_currency_id) && !cJSON_IsNull(freight_currency_id))
    {
    goto end; //String
    }
    }

    // airway_bill_update_dto->chargeable_weight_kg
    cJSON *chargeable_weight_kg = cJSON_GetObjectItemCaseSensitive(airway_bill_update_dtoJSON, "chargeableWeightKg");
    if (chargeable_weight_kg) { 
    if(!cJSON_IsNumber(chargeable_weight_kg))
    {
    goto end; //Numeric
    }
    }

    // airway_bill_update_dto->total_gross_weight_kg
    cJSON *total_gross_weight_kg = cJSON_GetObjectItemCaseSensitive(airway_bill_update_dtoJSON, "totalGrossWeightKg");
    if (total_gross_weight_kg) { 
    if(!cJSON_IsNumber(total_gross_weight_kg))
    {
    goto end; //Numeric
    }
    }

    // airway_bill_update_dto->total_packages
    cJSON *total_packages = cJSON_GetObjectItemCaseSensitive(airway_bill_update_dtoJSON, "totalPackages");
    if (total_packages) { 
    if(!cJSON_IsNumber(total_packages))
    {
    goto end; //Numeric
    }
    }

    // airway_bill_update_dto->total_volume_m3
    cJSON *total_volume_m3 = cJSON_GetObjectItemCaseSensitive(airway_bill_update_dtoJSON, "totalVolumeM3");
    if (total_volume_m3) { 
    if(!cJSON_IsNumber(total_volume_m3))
    {
    goto end; //Numeric
    }
    }

    // airway_bill_update_dto->declared_value_for_carriage
    cJSON *declared_value_for_carriage = cJSON_GetObjectItemCaseSensitive(airway_bill_update_dtoJSON, "declaredValueForCarriage");
    if (declared_value_for_carriage) { 
    if(!cJSON_IsNumber(declared_value_for_carriage))
    {
    goto end; //Numeric
    }
    }

    // airway_bill_update_dto->declared_value_for_customs
    cJSON *declared_value_for_customs = cJSON_GetObjectItemCaseSensitive(airway_bill_update_dtoJSON, "declaredValueForCustoms");
    if (declared_value_for_customs) { 
    if(!cJSON_IsNumber(declared_value_for_customs))
    {
    goto end; //Numeric
    }
    }

    // airway_bill_update_dto->insurance_amount
    cJSON *insurance_amount = cJSON_GetObjectItemCaseSensitive(airway_bill_update_dtoJSON, "insuranceAmount");
    if (insurance_amount) { 
    if(!cJSON_IsNumber(insurance_amount))
    {
    goto end; //Numeric
    }
    }

    // airway_bill_update_dto->special_handling_codes
    cJSON *special_handling_codes = cJSON_GetObjectItemCaseSensitive(airway_bill_update_dtoJSON, "specialHandlingCodes");
    if (special_handling_codes) { 
    if(!cJSON_IsString(special_handling_codes) && !cJSON_IsNull(special_handling_codes))
    {
    goto end; //String
    }
    }

    // airway_bill_update_dto->special_instructions
    cJSON *special_instructions = cJSON_GetObjectItemCaseSensitive(airway_bill_update_dtoJSON, "specialInstructions");
    if (special_instructions) { 
    if(!cJSON_IsString(special_instructions) && !cJSON_IsNull(special_instructions))
    {
    goto end; //String
    }
    }

    // airway_bill_update_dto->remarks
    cJSON *remarks = cJSON_GetObjectItemCaseSensitive(airway_bill_update_dtoJSON, "remarks");
    if (remarks) { 
    if(!cJSON_IsString(remarks) && !cJSON_IsNull(remarks))
    {
    goto end; //String
    }
    }

    // airway_bill_update_dto->shipment_id
    cJSON *shipment_id = cJSON_GetObjectItemCaseSensitive(airway_bill_update_dtoJSON, "shipmentId");
    if (shipment_id) { 
    if(!cJSON_IsString(shipment_id) && !cJSON_IsNull(shipment_id))
    {
    goto end; //String
    }
    }


    airway_bill_update_dto_local_var = airway_bill_update_dto_create (
        document_number && !cJSON_IsNull(document_number) ? strdup(document_number->valuestring) : NULL,
        airway_bill_type && !cJSON_IsNull(airway_bill_type) ? strdup(airway_bill_type->valuestring) : NULL,
        master_awb_number && !cJSON_IsNull(master_awb_number) ? strdup(master_awb_number->valuestring) : NULL,
        shipper_contact_id && !cJSON_IsNull(shipper_contact_id) ? strdup(shipper_contact_id->valuestring) : NULL,
        consignee_contact_id && !cJSON_IsNull(consignee_contact_id) ? strdup(consignee_contact_id->valuestring) : NULL,
        notify_party_contact_id && !cJSON_IsNull(notify_party_contact_id) ? strdup(notify_party_contact_id->valuestring) : NULL,
        carrier_id && !cJSON_IsNull(carrier_id) ? strdup(carrier_id->valuestring) : NULL,
        airline_code && !cJSON_IsNull(airline_code) ? strdup(airline_code->valuestring) : NULL,
        flight_number && !cJSON_IsNull(flight_number) ? strdup(flight_number->valuestring) : NULL,
        airport_of_departure_code && !cJSON_IsNull(airport_of_departure_code) ? strdup(airport_of_departure_code->valuestring) : NULL,
        airport_of_destination_code && !cJSON_IsNull(airport_of_destination_code) ? strdup(airport_of_destination_code->valuestring) : NULL,
        departure_date && !cJSON_IsNull(departure_date) ? strdup(departure_date->valuestring) : NULL,
        arrival_date && !cJSON_IsNull(arrival_date) ? strdup(arrival_date->valuestring) : NULL,
        date_issued && !cJSON_IsNull(date_issued) ? strdup(date_issued->valuestring) : NULL,
        freight_terms && !cJSON_IsNull(freight_terms) ? strdup(freight_terms->valuestring) : NULL,
        freight_amount ? freight_amount->valuedouble : 0,
        freight_currency_id && !cJSON_IsNull(freight_currency_id) ? strdup(freight_currency_id->valuestring) : NULL,
        chargeable_weight_kg ? chargeable_weight_kg->valuedouble : 0,
        total_gross_weight_kg ? total_gross_weight_kg->valuedouble : 0,
        total_packages ? total_packages->valuedouble : 0,
        total_volume_m3 ? total_volume_m3->valuedouble : 0,
        declared_value_for_carriage ? declared_value_for_carriage->valuedouble : 0,
        declared_value_for_customs ? declared_value_for_customs->valuedouble : 0,
        insurance_amount ? insurance_amount->valuedouble : 0,
        special_handling_codes && !cJSON_IsNull(special_handling_codes) ? strdup(special_handling_codes->valuestring) : NULL,
        special_instructions && !cJSON_IsNull(special_instructions) ? strdup(special_instructions->valuestring) : NULL,
        remarks && !cJSON_IsNull(remarks) ? strdup(remarks->valuestring) : NULL,
        shipment_id && !cJSON_IsNull(shipment_id) ? strdup(shipment_id->valuestring) : NULL
        );

    return airway_bill_update_dto_local_var;
end:
    return NULL;

}
