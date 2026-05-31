/*
 * truck_driver_update_dto.h
 *
 * 
 */

#ifndef _truck_driver_update_dto_H_
#define _truck_driver_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct truck_driver_update_dto_t truck_driver_update_dto_t;




typedef struct truck_driver_update_dto_t {
    char *name; // string
    char *license_number; // string
    char *license_class; // string
    char *phone; // string
    char *email; // string
    char *contact_id; // string
    char *shipping_courier_id; // string
    int adr_certified; //boolean
    char *license_expiry_date; //date time
    char *medical_exam_expiry_date; //date time
    char *national_id_number; // string
    char *notes; // string

} truck_driver_update_dto_t;

truck_driver_update_dto_t *truck_driver_update_dto_create(
    char *name,
    char *license_number,
    char *license_class,
    char *phone,
    char *email,
    char *contact_id,
    char *shipping_courier_id,
    int adr_certified,
    char *license_expiry_date,
    char *medical_exam_expiry_date,
    char *national_id_number,
    char *notes
);

void truck_driver_update_dto_free(truck_driver_update_dto_t *truck_driver_update_dto);

truck_driver_update_dto_t *truck_driver_update_dto_parseFromJSON(cJSON *truck_driver_update_dtoJSON);

cJSON *truck_driver_update_dto_convertToJSON(truck_driver_update_dto_t *truck_driver_update_dto);

#endif /* _truck_driver_update_dto_H_ */

