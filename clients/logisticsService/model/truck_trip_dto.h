/*
 * truck_trip_dto.h
 *
 * 
 */

#ifndef _truck_trip_dto_H_
#define _truck_trip_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct truck_trip_dto_t truck_trip_dto_t;




typedef struct truck_trip_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *trip_number; // string
    char *truck_trip_status; // string
    char *container_number; // string
    char *seal_number; // string
    char *departure_time; //date time
    char *arrival_time; //date time
    char *actual_departure_time; //date time
    char *actual_arrival_time; //date time
    double distance_km; //numeric
    char *notes; // string
    char *truck_id; // string
    char *origin_port_id; // string
    char *origin_location_id; // string
    char *destination_port_id; // string
    char *destination_location_id; // string
    char *shipment_id; // string
    char *bill_of_lading_id; // string
    char *tenant_id; // string
    char *enrollment_id; // string

} truck_trip_dto_t;

truck_trip_dto_t *truck_trip_dto_create(
    char *id,
    char *timestamp,
    char *trip_number,
    char *truck_trip_status,
    char *container_number,
    char *seal_number,
    char *departure_time,
    char *arrival_time,
    char *actual_departure_time,
    char *actual_arrival_time,
    double distance_km,
    char *notes,
    char *truck_id,
    char *origin_port_id,
    char *origin_location_id,
    char *destination_port_id,
    char *destination_location_id,
    char *shipment_id,
    char *bill_of_lading_id,
    char *tenant_id,
    char *enrollment_id
);

void truck_trip_dto_free(truck_trip_dto_t *truck_trip_dto);

truck_trip_dto_t *truck_trip_dto_parseFromJSON(cJSON *truck_trip_dtoJSON);

cJSON *truck_trip_dto_convertToJSON(truck_trip_dto_t *truck_trip_dto);

#endif /* _truck_trip_dto_H_ */

