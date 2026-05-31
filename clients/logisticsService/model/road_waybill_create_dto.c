#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "road_waybill_create_dto.h"



road_waybill_create_dto_t *road_waybill_create_dto_create(
    char *id,
    char *timestamp,
    char *document_number,
    char *road_waybill_type,
    char *shipper_contact_id,
    char *consignee_contact_id,
    char *carrier_id,
    char *successive_carriers,
    char *truck_id,
    char *truck_driver_id,
    char *vehicle_registration,
    char *trailer_registration,
    char *place_of_taking_over,
    char *place_of_taking_over_port_id,
    char *place_of_delivery,
    char *place_of_delivery_port_id,
    char *date_of_taking_over,
    char *freight_terms,
    double freight_amount,
    char *freight_currency_id,
    double total_gross_weight_kg,
    int total_packages,
    double total_volume_m3,
    int adr_dangerous_goods,
    char *special_instructions,
    char *remarks,
    char *shipment_id,
    char *truck_trip_id
    ) {
    road_waybill_create_dto_t *road_waybill_create_dto_local_var = malloc(sizeof(road_waybill_create_dto_t));
    if (!road_waybill_create_dto_local_var) {
        return NULL;
    }
    road_waybill_create_dto_local_var->id = id;
    road_waybill_create_dto_local_var->timestamp = timestamp;
    road_waybill_create_dto_local_var->document_number = document_number;
    road_waybill_create_dto_local_var->road_waybill_type = road_waybill_type;
    road_waybill_create_dto_local_var->shipper_contact_id = shipper_contact_id;
    road_waybill_create_dto_local_var->consignee_contact_id = consignee_contact_id;
    road_waybill_create_dto_local_var->carrier_id = carrier_id;
    road_waybill_create_dto_local_var->successive_carriers = successive_carriers;
    road_waybill_create_dto_local_var->truck_id = truck_id;
    road_waybill_create_dto_local_var->truck_driver_id = truck_driver_id;
    road_waybill_create_dto_local_var->vehicle_registration = vehicle_registration;
    road_waybill_create_dto_local_var->trailer_registration = trailer_registration;
    road_waybill_create_dto_local_var->place_of_taking_over = place_of_taking_over;
    road_waybill_create_dto_local_var->place_of_taking_over_port_id = place_of_taking_over_port_id;
    road_waybill_create_dto_local_var->place_of_delivery = place_of_delivery;
    road_waybill_create_dto_local_var->place_of_delivery_port_id = place_of_delivery_port_id;
    road_waybill_create_dto_local_var->date_of_taking_over = date_of_taking_over;
    road_waybill_create_dto_local_var->freight_terms = freight_terms;
    road_waybill_create_dto_local_var->freight_amount = freight_amount;
    road_waybill_create_dto_local_var->freight_currency_id = freight_currency_id;
    road_waybill_create_dto_local_var->total_gross_weight_kg = total_gross_weight_kg;
    road_waybill_create_dto_local_var->total_packages = total_packages;
    road_waybill_create_dto_local_var->total_volume_m3 = total_volume_m3;
    road_waybill_create_dto_local_var->adr_dangerous_goods = adr_dangerous_goods;
    road_waybill_create_dto_local_var->special_instructions = special_instructions;
    road_waybill_create_dto_local_var->remarks = remarks;
    road_waybill_create_dto_local_var->shipment_id = shipment_id;
    road_waybill_create_dto_local_var->truck_trip_id = truck_trip_id;

    return road_waybill_create_dto_local_var;
}


void road_waybill_create_dto_free(road_waybill_create_dto_t *road_waybill_create_dto) {
    if(NULL == road_waybill_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (road_waybill_create_dto->id) {
        free(road_waybill_create_dto->id);
        road_waybill_create_dto->id = NULL;
    }
    if (road_waybill_create_dto->timestamp) {
        free(road_waybill_create_dto->timestamp);
        road_waybill_create_dto->timestamp = NULL;
    }
    if (road_waybill_create_dto->document_number) {
        free(road_waybill_create_dto->document_number);
        road_waybill_create_dto->document_number = NULL;
    }
    if (road_waybill_create_dto->road_waybill_type) {
        free(road_waybill_create_dto->road_waybill_type);
        road_waybill_create_dto->road_waybill_type = NULL;
    }
    if (road_waybill_create_dto->shipper_contact_id) {
        free(road_waybill_create_dto->shipper_contact_id);
        road_waybill_create_dto->shipper_contact_id = NULL;
    }
    if (road_waybill_create_dto->consignee_contact_id) {
        free(road_waybill_create_dto->consignee_contact_id);
        road_waybill_create_dto->consignee_contact_id = NULL;
    }
    if (road_waybill_create_dto->carrier_id) {
        free(road_waybill_create_dto->carrier_id);
        road_waybill_create_dto->carrier_id = NULL;
    }
    if (road_waybill_create_dto->successive_carriers) {
        free(road_waybill_create_dto->successive_carriers);
        road_waybill_create_dto->successive_carriers = NULL;
    }
    if (road_waybill_create_dto->truck_id) {
        free(road_waybill_create_dto->truck_id);
        road_waybill_create_dto->truck_id = NULL;
    }
    if (road_waybill_create_dto->truck_driver_id) {
        free(road_waybill_create_dto->truck_driver_id);
        road_waybill_create_dto->truck_driver_id = NULL;
    }
    if (road_waybill_create_dto->vehicle_registration) {
        free(road_waybill_create_dto->vehicle_registration);
        road_waybill_create_dto->vehicle_registration = NULL;
    }
    if (road_waybill_create_dto->trailer_registration) {
        free(road_waybill_create_dto->trailer_registration);
        road_waybill_create_dto->trailer_registration = NULL;
    }
    if (road_waybill_create_dto->place_of_taking_over) {
        free(road_waybill_create_dto->place_of_taking_over);
        road_waybill_create_dto->place_of_taking_over = NULL;
    }
    if (road_waybill_create_dto->place_of_taking_over_port_id) {
        free(road_waybill_create_dto->place_of_taking_over_port_id);
        road_waybill_create_dto->place_of_taking_over_port_id = NULL;
    }
    if (road_waybill_create_dto->place_of_delivery) {
        free(road_waybill_create_dto->place_of_delivery);
        road_waybill_create_dto->place_of_delivery = NULL;
    }
    if (road_waybill_create_dto->place_of_delivery_port_id) {
        free(road_waybill_create_dto->place_of_delivery_port_id);
        road_waybill_create_dto->place_of_delivery_port_id = NULL;
    }
    if (road_waybill_create_dto->date_of_taking_over) {
        free(road_waybill_create_dto->date_of_taking_over);
        road_waybill_create_dto->date_of_taking_over = NULL;
    }
    if (road_waybill_create_dto->freight_terms) {
        free(road_waybill_create_dto->freight_terms);
        road_waybill_create_dto->freight_terms = NULL;
    }
    if (road_waybill_create_dto->freight_currency_id) {
        free(road_waybill_create_dto->freight_currency_id);
        road_waybill_create_dto->freight_currency_id = NULL;
    }
    if (road_waybill_create_dto->special_instructions) {
        free(road_waybill_create_dto->special_instructions);
        road_waybill_create_dto->special_instructions = NULL;
    }
    if (road_waybill_create_dto->remarks) {
        free(road_waybill_create_dto->remarks);
        road_waybill_create_dto->remarks = NULL;
    }
    if (road_waybill_create_dto->shipment_id) {
        free(road_waybill_create_dto->shipment_id);
        road_waybill_create_dto->shipment_id = NULL;
    }
    if (road_waybill_create_dto->truck_trip_id) {
        free(road_waybill_create_dto->truck_trip_id);
        road_waybill_create_dto->truck_trip_id = NULL;
    }
    free(road_waybill_create_dto);
}

cJSON *road_waybill_create_dto_convertToJSON(road_waybill_create_dto_t *road_waybill_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // road_waybill_create_dto->id
    if(road_waybill_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", road_waybill_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // road_waybill_create_dto->timestamp
    if(road_waybill_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", road_waybill_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // road_waybill_create_dto->document_number
    if(road_waybill_create_dto->document_number) {
    if(cJSON_AddStringToObject(item, "documentNumber", road_waybill_create_dto->document_number) == NULL) {
    goto fail; //String
    }
    }


    // road_waybill_create_dto->road_waybill_type
    if(road_waybill_create_dto->road_waybill_type) {
    if(cJSON_AddStringToObject(item, "roadWaybillType", road_waybill_create_dto->road_waybill_type) == NULL) {
    goto fail; //String
    }
    }


    // road_waybill_create_dto->shipper_contact_id
    if(road_waybill_create_dto->shipper_contact_id) {
    if(cJSON_AddStringToObject(item, "shipperContactId", road_waybill_create_dto->shipper_contact_id) == NULL) {
    goto fail; //String
    }
    }


    // road_waybill_create_dto->consignee_contact_id
    if(road_waybill_create_dto->consignee_contact_id) {
    if(cJSON_AddStringToObject(item, "consigneeContactId", road_waybill_create_dto->consignee_contact_id) == NULL) {
    goto fail; //String
    }
    }


    // road_waybill_create_dto->carrier_id
    if(road_waybill_create_dto->carrier_id) {
    if(cJSON_AddStringToObject(item, "carrierId", road_waybill_create_dto->carrier_id) == NULL) {
    goto fail; //String
    }
    }


    // road_waybill_create_dto->successive_carriers
    if(road_waybill_create_dto->successive_carriers) {
    if(cJSON_AddStringToObject(item, "successiveCarriers", road_waybill_create_dto->successive_carriers) == NULL) {
    goto fail; //String
    }
    }


    // road_waybill_create_dto->truck_id
    if(road_waybill_create_dto->truck_id) {
    if(cJSON_AddStringToObject(item, "truckId", road_waybill_create_dto->truck_id) == NULL) {
    goto fail; //String
    }
    }


    // road_waybill_create_dto->truck_driver_id
    if(road_waybill_create_dto->truck_driver_id) {
    if(cJSON_AddStringToObject(item, "truckDriverId", road_waybill_create_dto->truck_driver_id) == NULL) {
    goto fail; //String
    }
    }


    // road_waybill_create_dto->vehicle_registration
    if(road_waybill_create_dto->vehicle_registration) {
    if(cJSON_AddStringToObject(item, "vehicleRegistration", road_waybill_create_dto->vehicle_registration) == NULL) {
    goto fail; //String
    }
    }


    // road_waybill_create_dto->trailer_registration
    if(road_waybill_create_dto->trailer_registration) {
    if(cJSON_AddStringToObject(item, "trailerRegistration", road_waybill_create_dto->trailer_registration) == NULL) {
    goto fail; //String
    }
    }


    // road_waybill_create_dto->place_of_taking_over
    if(road_waybill_create_dto->place_of_taking_over) {
    if(cJSON_AddStringToObject(item, "placeOfTakingOver", road_waybill_create_dto->place_of_taking_over) == NULL) {
    goto fail; //String
    }
    }


    // road_waybill_create_dto->place_of_taking_over_port_id
    if(road_waybill_create_dto->place_of_taking_over_port_id) {
    if(cJSON_AddStringToObject(item, "placeOfTakingOverPortId", road_waybill_create_dto->place_of_taking_over_port_id) == NULL) {
    goto fail; //String
    }
    }


    // road_waybill_create_dto->place_of_delivery
    if(road_waybill_create_dto->place_of_delivery) {
    if(cJSON_AddStringToObject(item, "placeOfDelivery", road_waybill_create_dto->place_of_delivery) == NULL) {
    goto fail; //String
    }
    }


    // road_waybill_create_dto->place_of_delivery_port_id
    if(road_waybill_create_dto->place_of_delivery_port_id) {
    if(cJSON_AddStringToObject(item, "placeOfDeliveryPortId", road_waybill_create_dto->place_of_delivery_port_id) == NULL) {
    goto fail; //String
    }
    }


    // road_waybill_create_dto->date_of_taking_over
    if(road_waybill_create_dto->date_of_taking_over) {
    if(cJSON_AddStringToObject(item, "dateOfTakingOver", road_waybill_create_dto->date_of_taking_over) == NULL) {
    goto fail; //Date-Time
    }
    }


    // road_waybill_create_dto->freight_terms
    if(road_waybill_create_dto->freight_terms) {
    if(cJSON_AddStringToObject(item, "freightTerms", road_waybill_create_dto->freight_terms) == NULL) {
    goto fail; //String
    }
    }


    // road_waybill_create_dto->freight_amount
    if(road_waybill_create_dto->freight_amount) {
    if(cJSON_AddNumberToObject(item, "freightAmount", road_waybill_create_dto->freight_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // road_waybill_create_dto->freight_currency_id
    if(road_waybill_create_dto->freight_currency_id) {
    if(cJSON_AddStringToObject(item, "freightCurrencyId", road_waybill_create_dto->freight_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // road_waybill_create_dto->total_gross_weight_kg
    if(road_waybill_create_dto->total_gross_weight_kg) {
    if(cJSON_AddNumberToObject(item, "totalGrossWeightKg", road_waybill_create_dto->total_gross_weight_kg) == NULL) {
    goto fail; //Numeric
    }
    }


    // road_waybill_create_dto->total_packages
    if(road_waybill_create_dto->total_packages) {
    if(cJSON_AddNumberToObject(item, "totalPackages", road_waybill_create_dto->total_packages) == NULL) {
    goto fail; //Numeric
    }
    }


    // road_waybill_create_dto->total_volume_m3
    if(road_waybill_create_dto->total_volume_m3) {
    if(cJSON_AddNumberToObject(item, "totalVolumeM3", road_waybill_create_dto->total_volume_m3) == NULL) {
    goto fail; //Numeric
    }
    }


    // road_waybill_create_dto->adr_dangerous_goods
    if(road_waybill_create_dto->adr_dangerous_goods) {
    if(cJSON_AddBoolToObject(item, "adrDangerousGoods", road_waybill_create_dto->adr_dangerous_goods) == NULL) {
    goto fail; //Bool
    }
    }


    // road_waybill_create_dto->special_instructions
    if(road_waybill_create_dto->special_instructions) {
    if(cJSON_AddStringToObject(item, "specialInstructions", road_waybill_create_dto->special_instructions) == NULL) {
    goto fail; //String
    }
    }


    // road_waybill_create_dto->remarks
    if(road_waybill_create_dto->remarks) {
    if(cJSON_AddStringToObject(item, "remarks", road_waybill_create_dto->remarks) == NULL) {
    goto fail; //String
    }
    }


    // road_waybill_create_dto->shipment_id
    if(road_waybill_create_dto->shipment_id) {
    if(cJSON_AddStringToObject(item, "shipmentId", road_waybill_create_dto->shipment_id) == NULL) {
    goto fail; //String
    }
    }


    // road_waybill_create_dto->truck_trip_id
    if(road_waybill_create_dto->truck_trip_id) {
    if(cJSON_AddStringToObject(item, "truckTripId", road_waybill_create_dto->truck_trip_id) == NULL) {
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

road_waybill_create_dto_t *road_waybill_create_dto_parseFromJSON(cJSON *road_waybill_create_dtoJSON){

    road_waybill_create_dto_t *road_waybill_create_dto_local_var = NULL;

    // road_waybill_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(road_waybill_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // road_waybill_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(road_waybill_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // road_waybill_create_dto->document_number
    cJSON *document_number = cJSON_GetObjectItemCaseSensitive(road_waybill_create_dtoJSON, "documentNumber");
    if (document_number) { 
    if(!cJSON_IsString(document_number) && !cJSON_IsNull(document_number))
    {
    goto end; //String
    }
    }

    // road_waybill_create_dto->road_waybill_type
    cJSON *road_waybill_type = cJSON_GetObjectItemCaseSensitive(road_waybill_create_dtoJSON, "roadWaybillType");
    if (road_waybill_type) { 
    if(!cJSON_IsString(road_waybill_type) && !cJSON_IsNull(road_waybill_type))
    {
    goto end; //String
    }
    }

    // road_waybill_create_dto->shipper_contact_id
    cJSON *shipper_contact_id = cJSON_GetObjectItemCaseSensitive(road_waybill_create_dtoJSON, "shipperContactId");
    if (shipper_contact_id) { 
    if(!cJSON_IsString(shipper_contact_id) && !cJSON_IsNull(shipper_contact_id))
    {
    goto end; //String
    }
    }

    // road_waybill_create_dto->consignee_contact_id
    cJSON *consignee_contact_id = cJSON_GetObjectItemCaseSensitive(road_waybill_create_dtoJSON, "consigneeContactId");
    if (consignee_contact_id) { 
    if(!cJSON_IsString(consignee_contact_id) && !cJSON_IsNull(consignee_contact_id))
    {
    goto end; //String
    }
    }

    // road_waybill_create_dto->carrier_id
    cJSON *carrier_id = cJSON_GetObjectItemCaseSensitive(road_waybill_create_dtoJSON, "carrierId");
    if (carrier_id) { 
    if(!cJSON_IsString(carrier_id) && !cJSON_IsNull(carrier_id))
    {
    goto end; //String
    }
    }

    // road_waybill_create_dto->successive_carriers
    cJSON *successive_carriers = cJSON_GetObjectItemCaseSensitive(road_waybill_create_dtoJSON, "successiveCarriers");
    if (successive_carriers) { 
    if(!cJSON_IsString(successive_carriers) && !cJSON_IsNull(successive_carriers))
    {
    goto end; //String
    }
    }

    // road_waybill_create_dto->truck_id
    cJSON *truck_id = cJSON_GetObjectItemCaseSensitive(road_waybill_create_dtoJSON, "truckId");
    if (truck_id) { 
    if(!cJSON_IsString(truck_id) && !cJSON_IsNull(truck_id))
    {
    goto end; //String
    }
    }

    // road_waybill_create_dto->truck_driver_id
    cJSON *truck_driver_id = cJSON_GetObjectItemCaseSensitive(road_waybill_create_dtoJSON, "truckDriverId");
    if (truck_driver_id) { 
    if(!cJSON_IsString(truck_driver_id) && !cJSON_IsNull(truck_driver_id))
    {
    goto end; //String
    }
    }

    // road_waybill_create_dto->vehicle_registration
    cJSON *vehicle_registration = cJSON_GetObjectItemCaseSensitive(road_waybill_create_dtoJSON, "vehicleRegistration");
    if (vehicle_registration) { 
    if(!cJSON_IsString(vehicle_registration) && !cJSON_IsNull(vehicle_registration))
    {
    goto end; //String
    }
    }

    // road_waybill_create_dto->trailer_registration
    cJSON *trailer_registration = cJSON_GetObjectItemCaseSensitive(road_waybill_create_dtoJSON, "trailerRegistration");
    if (trailer_registration) { 
    if(!cJSON_IsString(trailer_registration) && !cJSON_IsNull(trailer_registration))
    {
    goto end; //String
    }
    }

    // road_waybill_create_dto->place_of_taking_over
    cJSON *place_of_taking_over = cJSON_GetObjectItemCaseSensitive(road_waybill_create_dtoJSON, "placeOfTakingOver");
    if (place_of_taking_over) { 
    if(!cJSON_IsString(place_of_taking_over) && !cJSON_IsNull(place_of_taking_over))
    {
    goto end; //String
    }
    }

    // road_waybill_create_dto->place_of_taking_over_port_id
    cJSON *place_of_taking_over_port_id = cJSON_GetObjectItemCaseSensitive(road_waybill_create_dtoJSON, "placeOfTakingOverPortId");
    if (place_of_taking_over_port_id) { 
    if(!cJSON_IsString(place_of_taking_over_port_id) && !cJSON_IsNull(place_of_taking_over_port_id))
    {
    goto end; //String
    }
    }

    // road_waybill_create_dto->place_of_delivery
    cJSON *place_of_delivery = cJSON_GetObjectItemCaseSensitive(road_waybill_create_dtoJSON, "placeOfDelivery");
    if (place_of_delivery) { 
    if(!cJSON_IsString(place_of_delivery) && !cJSON_IsNull(place_of_delivery))
    {
    goto end; //String
    }
    }

    // road_waybill_create_dto->place_of_delivery_port_id
    cJSON *place_of_delivery_port_id = cJSON_GetObjectItemCaseSensitive(road_waybill_create_dtoJSON, "placeOfDeliveryPortId");
    if (place_of_delivery_port_id) { 
    if(!cJSON_IsString(place_of_delivery_port_id) && !cJSON_IsNull(place_of_delivery_port_id))
    {
    goto end; //String
    }
    }

    // road_waybill_create_dto->date_of_taking_over
    cJSON *date_of_taking_over = cJSON_GetObjectItemCaseSensitive(road_waybill_create_dtoJSON, "dateOfTakingOver");
    if (date_of_taking_over) { 
    if(!cJSON_IsString(date_of_taking_over) && !cJSON_IsNull(date_of_taking_over))
    {
    goto end; //DateTime
    }
    }

    // road_waybill_create_dto->freight_terms
    cJSON *freight_terms = cJSON_GetObjectItemCaseSensitive(road_waybill_create_dtoJSON, "freightTerms");
    if (freight_terms) { 
    if(!cJSON_IsString(freight_terms) && !cJSON_IsNull(freight_terms))
    {
    goto end; //String
    }
    }

    // road_waybill_create_dto->freight_amount
    cJSON *freight_amount = cJSON_GetObjectItemCaseSensitive(road_waybill_create_dtoJSON, "freightAmount");
    if (freight_amount) { 
    if(!cJSON_IsNumber(freight_amount))
    {
    goto end; //Numeric
    }
    }

    // road_waybill_create_dto->freight_currency_id
    cJSON *freight_currency_id = cJSON_GetObjectItemCaseSensitive(road_waybill_create_dtoJSON, "freightCurrencyId");
    if (freight_currency_id) { 
    if(!cJSON_IsString(freight_currency_id) && !cJSON_IsNull(freight_currency_id))
    {
    goto end; //String
    }
    }

    // road_waybill_create_dto->total_gross_weight_kg
    cJSON *total_gross_weight_kg = cJSON_GetObjectItemCaseSensitive(road_waybill_create_dtoJSON, "totalGrossWeightKg");
    if (total_gross_weight_kg) { 
    if(!cJSON_IsNumber(total_gross_weight_kg))
    {
    goto end; //Numeric
    }
    }

    // road_waybill_create_dto->total_packages
    cJSON *total_packages = cJSON_GetObjectItemCaseSensitive(road_waybill_create_dtoJSON, "totalPackages");
    if (total_packages) { 
    if(!cJSON_IsNumber(total_packages))
    {
    goto end; //Numeric
    }
    }

    // road_waybill_create_dto->total_volume_m3
    cJSON *total_volume_m3 = cJSON_GetObjectItemCaseSensitive(road_waybill_create_dtoJSON, "totalVolumeM3");
    if (total_volume_m3) { 
    if(!cJSON_IsNumber(total_volume_m3))
    {
    goto end; //Numeric
    }
    }

    // road_waybill_create_dto->adr_dangerous_goods
    cJSON *adr_dangerous_goods = cJSON_GetObjectItemCaseSensitive(road_waybill_create_dtoJSON, "adrDangerousGoods");
    if (adr_dangerous_goods) { 
    if(!cJSON_IsBool(adr_dangerous_goods))
    {
    goto end; //Bool
    }
    }

    // road_waybill_create_dto->special_instructions
    cJSON *special_instructions = cJSON_GetObjectItemCaseSensitive(road_waybill_create_dtoJSON, "specialInstructions");
    if (special_instructions) { 
    if(!cJSON_IsString(special_instructions) && !cJSON_IsNull(special_instructions))
    {
    goto end; //String
    }
    }

    // road_waybill_create_dto->remarks
    cJSON *remarks = cJSON_GetObjectItemCaseSensitive(road_waybill_create_dtoJSON, "remarks");
    if (remarks) { 
    if(!cJSON_IsString(remarks) && !cJSON_IsNull(remarks))
    {
    goto end; //String
    }
    }

    // road_waybill_create_dto->shipment_id
    cJSON *shipment_id = cJSON_GetObjectItemCaseSensitive(road_waybill_create_dtoJSON, "shipmentId");
    if (shipment_id) { 
    if(!cJSON_IsString(shipment_id) && !cJSON_IsNull(shipment_id))
    {
    goto end; //String
    }
    }

    // road_waybill_create_dto->truck_trip_id
    cJSON *truck_trip_id = cJSON_GetObjectItemCaseSensitive(road_waybill_create_dtoJSON, "truckTripId");
    if (truck_trip_id) { 
    if(!cJSON_IsString(truck_trip_id) && !cJSON_IsNull(truck_trip_id))
    {
    goto end; //String
    }
    }


    road_waybill_create_dto_local_var = road_waybill_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        document_number && !cJSON_IsNull(document_number) ? strdup(document_number->valuestring) : NULL,
        road_waybill_type && !cJSON_IsNull(road_waybill_type) ? strdup(road_waybill_type->valuestring) : NULL,
        shipper_contact_id && !cJSON_IsNull(shipper_contact_id) ? strdup(shipper_contact_id->valuestring) : NULL,
        consignee_contact_id && !cJSON_IsNull(consignee_contact_id) ? strdup(consignee_contact_id->valuestring) : NULL,
        carrier_id && !cJSON_IsNull(carrier_id) ? strdup(carrier_id->valuestring) : NULL,
        successive_carriers && !cJSON_IsNull(successive_carriers) ? strdup(successive_carriers->valuestring) : NULL,
        truck_id && !cJSON_IsNull(truck_id) ? strdup(truck_id->valuestring) : NULL,
        truck_driver_id && !cJSON_IsNull(truck_driver_id) ? strdup(truck_driver_id->valuestring) : NULL,
        vehicle_registration && !cJSON_IsNull(vehicle_registration) ? strdup(vehicle_registration->valuestring) : NULL,
        trailer_registration && !cJSON_IsNull(trailer_registration) ? strdup(trailer_registration->valuestring) : NULL,
        place_of_taking_over && !cJSON_IsNull(place_of_taking_over) ? strdup(place_of_taking_over->valuestring) : NULL,
        place_of_taking_over_port_id && !cJSON_IsNull(place_of_taking_over_port_id) ? strdup(place_of_taking_over_port_id->valuestring) : NULL,
        place_of_delivery && !cJSON_IsNull(place_of_delivery) ? strdup(place_of_delivery->valuestring) : NULL,
        place_of_delivery_port_id && !cJSON_IsNull(place_of_delivery_port_id) ? strdup(place_of_delivery_port_id->valuestring) : NULL,
        date_of_taking_over && !cJSON_IsNull(date_of_taking_over) ? strdup(date_of_taking_over->valuestring) : NULL,
        freight_terms && !cJSON_IsNull(freight_terms) ? strdup(freight_terms->valuestring) : NULL,
        freight_amount ? freight_amount->valuedouble : 0,
        freight_currency_id && !cJSON_IsNull(freight_currency_id) ? strdup(freight_currency_id->valuestring) : NULL,
        total_gross_weight_kg ? total_gross_weight_kg->valuedouble : 0,
        total_packages ? total_packages->valuedouble : 0,
        total_volume_m3 ? total_volume_m3->valuedouble : 0,
        adr_dangerous_goods ? adr_dangerous_goods->valueint : 0,
        special_instructions && !cJSON_IsNull(special_instructions) ? strdup(special_instructions->valuestring) : NULL,
        remarks && !cJSON_IsNull(remarks) ? strdup(remarks->valuestring) : NULL,
        shipment_id && !cJSON_IsNull(shipment_id) ? strdup(shipment_id->valuestring) : NULL,
        truck_trip_id && !cJSON_IsNull(truck_trip_id) ? strdup(truck_trip_id->valuestring) : NULL
        );

    return road_waybill_create_dto_local_var;
end:
    return NULL;

}
