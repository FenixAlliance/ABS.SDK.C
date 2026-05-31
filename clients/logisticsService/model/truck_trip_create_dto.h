/*
 * truck_trip_create_dto.h
 *
 * 
 */

#ifndef _truck_trip_create_dto_H_
#define _truck_trip_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct truck_trip_create_dto_t truck_trip_create_dto_t;




typedef struct truck_trip_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *trip_number; // string
    char *container_number; // string
    char *seal_number; // string
    char *departure_time; //date time
    char *arrival_time; //date time
    double distance_km; //numeric
    char *notes; // string
    char *origin_port_id; // string
    char *origin_location_id; // string
    char *destination_port_id; // string
    char *destination_location_id; // string
    char *shipment_id; // string
    char *bill_of_lading_id; // string

} truck_trip_create_dto_t;

truck_trip_create_dto_t *truck_trip_create_dto_create(
    char *id,
    char *timestamp,
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
);

void truck_trip_create_dto_free(truck_trip_create_dto_t *truck_trip_create_dto);

truck_trip_create_dto_t *truck_trip_create_dto_parseFromJSON(cJSON *truck_trip_create_dtoJSON);

cJSON *truck_trip_create_dto_convertToJSON(truck_trip_create_dto_t *truck_trip_create_dto);

#endif /* _truck_trip_create_dto_H_ */

