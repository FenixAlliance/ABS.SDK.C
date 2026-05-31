#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "truck_trip_update_dto.h"



truck_trip_update_dto_t *truck_trip_update_dto_create(
    char *trip_number,
    char *container_number,
    char *seal_number,
    char *departure_time,
    char *arrival_time,
    double distance_km,
    char *notes,
    char *origin_port_id,
    char *origin_location_id,
    char *destination_port_id,
    char *destination_location_id,
    char *shipment_id,
    char *bill_of_lading_id
    ) {
    truck_trip_update_dto_t *truck_trip_update_dto_local_var = malloc(sizeof(truck_trip_update_dto_t));
    if (!truck_trip_update_dto_local_var) {
        return NULL;
    }
    truck_trip_update_dto_local_var->trip_number = trip_number;
    truck_trip_update_dto_local_var->container_number = container_number;
    truck_trip_update_dto_local_var->seal_number = seal_number;
    truck_trip_update_dto_local_var->departure_time = departure_time;
    truck_trip_update_dto_local_var->arrival_time = arrival_time;
    truck_trip_update_dto_local_var->distance_km = distance_km;
    truck_trip_update_dto_local_var->notes = notes;
    truck_trip_update_dto_local_var->origin_port_id = origin_port_id;
    truck_trip_update_dto_local_var->origin_location_id = origin_location_id;
    truck_trip_update_dto_local_var->destination_port_id = destination_port_id;
    truck_trip_update_dto_local_var->destination_location_id = destination_location_id;
    truck_trip_update_dto_local_var->shipment_id = shipment_id;
    truck_trip_update_dto_local_var->bill_of_lading_id = bill_of_lading_id;

    return truck_trip_update_dto_local_var;
}


void truck_trip_update_dto_free(truck_trip_update_dto_t *truck_trip_update_dto) {
    if(NULL == truck_trip_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (truck_trip_update_dto->trip_number) {
        free(truck_trip_update_dto->trip_number);
        truck_trip_update_dto->trip_number = NULL;
    }
    if (truck_trip_update_dto->container_number) {
        free(truck_trip_update_dto->container_number);
        truck_trip_update_dto->container_number = NULL;
    }
    if (truck_trip_update_dto->seal_number) {
        free(truck_trip_update_dto->seal_number);
        truck_trip_update_dto->seal_number = NULL;
    }
    if (truck_trip_update_dto->departure_time) {
        free(truck_trip_update_dto->departure_time);
        truck_trip_update_dto->departure_time = NULL;
    }
    if (truck_trip_update_dto->arrival_time) {
        free(truck_trip_update_dto->arrival_time);
        truck_trip_update_dto->arrival_time = NULL;
    }
    if (truck_trip_update_dto->notes) {
        free(truck_trip_update_dto->notes);
        truck_trip_update_dto->notes = NULL;
    }
    if (truck_trip_update_dto->origin_port_id) {
        free(truck_trip_update_dto->origin_port_id);
        truck_trip_update_dto->origin_port_id = NULL;
    }
    if (truck_trip_update_dto->origin_location_id) {
        free(truck_trip_update_dto->origin_location_id);
        truck_trip_update_dto->origin_location_id = NULL;
    }
    if (truck_trip_update_dto->destination_port_id) {
        free(truck_trip_update_dto->destination_port_id);
        truck_trip_update_dto->destination_port_id = NULL;
    }
    if (truck_trip_update_dto->destination_location_id) {
        free(truck_trip_update_dto->destination_location_id);
        truck_trip_update_dto->destination_location_id = NULL;
    }
    if (truck_trip_update_dto->shipment_id) {
        free(truck_trip_update_dto->shipment_id);
        truck_trip_update_dto->shipment_id = NULL;
    }
    if (truck_trip_update_dto->bill_of_lading_id) {
        free(truck_trip_update_dto->bill_of_lading_id);
        truck_trip_update_dto->bill_of_lading_id = NULL;
    }
    free(truck_trip_update_dto);
}

cJSON *truck_trip_update_dto_convertToJSON(truck_trip_update_dto_t *truck_trip_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // truck_trip_update_dto->trip_number
    if(truck_trip_update_dto->trip_number) {
    if(cJSON_AddStringToObject(item, "tripNumber", truck_trip_update_dto->trip_number) == NULL) {
    goto fail; //String
    }
    }


    // truck_trip_update_dto->container_number
    if(truck_trip_update_dto->container_number) {
    if(cJSON_AddStringToObject(item, "containerNumber", truck_trip_update_dto->container_number) == NULL) {
    goto fail; //String
    }
    }


    // truck_trip_update_dto->seal_number
    if(truck_trip_update_dto->seal_number) {
    if(cJSON_AddStringToObject(item, "sealNumber", truck_trip_update_dto->seal_number) == NULL) {
    goto fail; //String
    }
    }


    // truck_trip_update_dto->departure_time
    if(truck_trip_update_dto->departure_time) {
    if(cJSON_AddStringToObject(item, "departureTime", truck_trip_update_dto->departure_time) == NULL) {
    goto fail; //Date-Time
    }
    }


    // truck_trip_update_dto->arrival_time
    if(truck_trip_update_dto->arrival_time) {
    if(cJSON_AddStringToObject(item, "arrivalTime", truck_trip_update_dto->arrival_time) == NULL) {
    goto fail; //Date-Time
    }
    }


    // truck_trip_update_dto->distance_km
    if(truck_trip_update_dto->distance_km) {
    if(cJSON_AddNumberToObject(item, "distanceKm", truck_trip_update_dto->distance_km) == NULL) {
    goto fail; //Numeric
    }
    }


    // truck_trip_update_dto->notes
    if(truck_trip_update_dto->notes) {
    if(cJSON_AddStringToObject(item, "notes", truck_trip_update_dto->notes) == NULL) {
    goto fail; //String
    }
    }


    // truck_trip_update_dto->origin_port_id
    if(truck_trip_update_dto->origin_port_id) {
    if(cJSON_AddStringToObject(item, "originPortId", truck_trip_update_dto->origin_port_id) == NULL) {
    goto fail; //String
    }
    }


    // truck_trip_update_dto->origin_location_id
    if(truck_trip_update_dto->origin_location_id) {
    if(cJSON_AddStringToObject(item, "originLocationId", truck_trip_update_dto->origin_location_id) == NULL) {
    goto fail; //String
    }
    }


    // truck_trip_update_dto->destination_port_id
    if(truck_trip_update_dto->destination_port_id) {
    if(cJSON_AddStringToObject(item, "destinationPortId", truck_trip_update_dto->destination_port_id) == NULL) {
    goto fail; //String
    }
    }


    // truck_trip_update_dto->destination_location_id
    if(truck_trip_update_dto->destination_location_id) {
    if(cJSON_AddStringToObject(item, "destinationLocationId", truck_trip_update_dto->destination_location_id) == NULL) {
    goto fail; //String
    }
    }


    // truck_trip_update_dto->shipment_id
    if(truck_trip_update_dto->shipment_id) {
    if(cJSON_AddStringToObject(item, "shipmentId", truck_trip_update_dto->shipment_id) == NULL) {
    goto fail; //String
    }
    }


    // truck_trip_update_dto->bill_of_lading_id
    if(truck_trip_update_dto->bill_of_lading_id) {
    if(cJSON_AddStringToObject(item, "billOfLadingId", truck_trip_update_dto->bill_of_lading_id) == NULL) {
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

truck_trip_update_dto_t *truck_trip_update_dto_parseFromJSON(cJSON *truck_trip_update_dtoJSON){

    truck_trip_update_dto_t *truck_trip_update_dto_local_var = NULL;

    // truck_trip_update_dto->trip_number
    cJSON *trip_number = cJSON_GetObjectItemCaseSensitive(truck_trip_update_dtoJSON, "tripNumber");
    if (trip_number) { 
    if(!cJSON_IsString(trip_number) && !cJSON_IsNull(trip_number))
    {
    goto end; //String
    }
    }

    // truck_trip_update_dto->container_number
    cJSON *container_number = cJSON_GetObjectItemCaseSensitive(truck_trip_update_dtoJSON, "containerNumber");
    if (container_number) { 
    if(!cJSON_IsString(container_number) && !cJSON_IsNull(container_number))
    {
    goto end; //String
    }
    }

    // truck_trip_update_dto->seal_number
    cJSON *seal_number = cJSON_GetObjectItemCaseSensitive(truck_trip_update_dtoJSON, "sealNumber");
    if (seal_number) { 
    if(!cJSON_IsString(seal_number) && !cJSON_IsNull(seal_number))
    {
    goto end; //String
    }
    }

    // truck_trip_update_dto->departure_time
    cJSON *departure_time = cJSON_GetObjectItemCaseSensitive(truck_trip_update_dtoJSON, "departureTime");
    if (departure_time) { 
    if(!cJSON_IsString(departure_time) && !cJSON_IsNull(departure_time))
    {
    goto end; //DateTime
    }
    }

    // truck_trip_update_dto->arrival_time
    cJSON *arrival_time = cJSON_GetObjectItemCaseSensitive(truck_trip_update_dtoJSON, "arrivalTime");
    if (arrival_time) { 
    if(!cJSON_IsString(arrival_time) && !cJSON_IsNull(arrival_time))
    {
    goto end; //DateTime
    }
    }

    // truck_trip_update_dto->distance_km
    cJSON *distance_km = cJSON_GetObjectItemCaseSensitive(truck_trip_update_dtoJSON, "distanceKm");
    if (distance_km) { 
    if(!cJSON_IsNumber(distance_km))
    {
    goto end; //Numeric
    }
    }

    // truck_trip_update_dto->notes
    cJSON *notes = cJSON_GetObjectItemCaseSensitive(truck_trip_update_dtoJSON, "notes");
    if (notes) { 
    if(!cJSON_IsString(notes) && !cJSON_IsNull(notes))
    {
    goto end; //String
    }
    }

    // truck_trip_update_dto->origin_port_id
    cJSON *origin_port_id = cJSON_GetObjectItemCaseSensitive(truck_trip_update_dtoJSON, "originPortId");
    if (origin_port_id) { 
    if(!cJSON_IsString(origin_port_id) && !cJSON_IsNull(origin_port_id))
    {
    goto end; //String
    }
    }

    // truck_trip_update_dto->origin_location_id
    cJSON *origin_location_id = cJSON_GetObjectItemCaseSensitive(truck_trip_update_dtoJSON, "originLocationId");
    if (origin_location_id) { 
    if(!cJSON_IsString(origin_location_id) && !cJSON_IsNull(origin_location_id))
    {
    goto end; //String
    }
    }

    // truck_trip_update_dto->destination_port_id
    cJSON *destination_port_id = cJSON_GetObjectItemCaseSensitive(truck_trip_update_dtoJSON, "destinationPortId");
    if (destination_port_id) { 
    if(!cJSON_IsString(destination_port_id) && !cJSON_IsNull(destination_port_id))
    {
    goto end; //String
    }
    }

    // truck_trip_update_dto->destination_location_id
    cJSON *destination_location_id = cJSON_GetObjectItemCaseSensitive(truck_trip_update_dtoJSON, "destinationLocationId");
    if (destination_location_id) { 
    if(!cJSON_IsString(destination_location_id) && !cJSON_IsNull(destination_location_id))
    {
    goto end; //String
    }
    }

    // truck_trip_update_dto->shipment_id
    cJSON *shipment_id = cJSON_GetObjectItemCaseSensitive(truck_trip_update_dtoJSON, "shipmentId");
    if (shipment_id) { 
    if(!cJSON_IsString(shipment_id) && !cJSON_IsNull(shipment_id))
    {
    goto end; //String
    }
    }

    // truck_trip_update_dto->bill_of_lading_id
    cJSON *bill_of_lading_id = cJSON_GetObjectItemCaseSensitive(truck_trip_update_dtoJSON, "billOfLadingId");
    if (bill_of_lading_id) { 
    if(!cJSON_IsString(bill_of_lading_id) && !cJSON_IsNull(bill_of_lading_id))
    {
    goto end; //String
    }
    }


    truck_trip_update_dto_local_var = truck_trip_update_dto_create (
        trip_number && !cJSON_IsNull(trip_number) ? strdup(trip_number->valuestring) : NULL,
        container_number && !cJSON_IsNull(container_number) ? strdup(container_number->valuestring) : NULL,
        seal_number && !cJSON_IsNull(seal_number) ? strdup(seal_number->valuestring) : NULL,
        departure_time && !cJSON_IsNull(departure_time) ? strdup(departure_time->valuestring) : NULL,
        arrival_time && !cJSON_IsNull(arrival_time) ? strdup(arrival_time->valuestring) : NULL,
        distance_km ? distance_km->valuedouble : 0,
        notes && !cJSON_IsNull(notes) ? strdup(notes->valuestring) : NULL,
        origin_port_id && !cJSON_IsNull(origin_port_id) ? strdup(origin_port_id->valuestring) : NULL,
        origin_location_id && !cJSON_IsNull(origin_location_id) ? strdup(origin_location_id->valuestring) : NULL,
        destination_port_id && !cJSON_IsNull(destination_port_id) ? strdup(destination_port_id->valuestring) : NULL,
        destination_location_id && !cJSON_IsNull(destination_location_id) ? strdup(destination_location_id->valuestring) : NULL,
        shipment_id && !cJSON_IsNull(shipment_id) ? strdup(shipment_id->valuestring) : NULL,
        bill_of_lading_id && !cJSON_IsNull(bill_of_lading_id) ? strdup(bill_of_lading_id->valuestring) : NULL
        );

    return truck_trip_update_dto_local_var;
end:
    return NULL;

}
