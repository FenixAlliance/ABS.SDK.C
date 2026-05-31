/*
 * truck_dto.h
 *
 * 
 */

#ifndef _truck_dto_H_
#define _truck_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct truck_dto_t truck_dto_t;




typedef struct truck_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *plate_number; // string
    char *name; // string
    char *truck_type; // string
    double max_payload_kg; //numeric
    int teu_capacity; //numeric
    char *driver_name; // string
    char *driver_phone; // string
    char *driver_license_number; // string
    int is_active; //boolean
    int is_refrigerated; //boolean
    char *shipping_courier_id; // string
    char *tenant_id; // string
    char *enrollment_id; // string

} truck_dto_t;

truck_dto_t *truck_dto_create(
    char *id,
    char *timestamp,
    char *plate_number,
    char *name,
    char *truck_type,
    double max_payload_kg,
    int teu_capacity,
    char *driver_name,
    char *driver_phone,
    char *driver_license_number,
    int is_active,
    int is_refrigerated,
    char *shipping_courier_id,
    char *tenant_id,
    char *enrollment_id
);

void truck_dto_free(truck_dto_t *truck_dto);

truck_dto_t *truck_dto_parseFromJSON(cJSON *truck_dtoJSON);

cJSON *truck_dto_convertToJSON(truck_dto_t *truck_dto);

#endif /* _truck_dto_H_ */

