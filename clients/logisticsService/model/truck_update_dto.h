/*
 * truck_update_dto.h
 *
 * 
 */

#ifndef _truck_update_dto_H_
#define _truck_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct truck_update_dto_t truck_update_dto_t;




typedef struct truck_update_dto_t {
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

} truck_update_dto_t;

truck_update_dto_t *truck_update_dto_create(
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
    char *shipping_courier_id
);

void truck_update_dto_free(truck_update_dto_t *truck_update_dto);

truck_update_dto_t *truck_update_dto_parseFromJSON(cJSON *truck_update_dtoJSON);

cJSON *truck_update_dto_convertToJSON(truck_update_dto_t *truck_update_dto);

#endif /* _truck_update_dto_H_ */

