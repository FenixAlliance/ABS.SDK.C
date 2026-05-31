/*
 * truck_driver_dto.h
 *
 * 
 */

#ifndef _truck_driver_dto_H_
#define _truck_driver_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct truck_driver_dto_t truck_driver_dto_t;




typedef struct truck_driver_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *phone; // string
    char *email; // string
    char *national_id_number; // string
    char *license_number; // string
    char *license_class; // string
    char *license_expiry_date; //date time
    int adr_certified; //boolean
    char *adr_certificate_expiry_date; //date time
    char *medical_exam_expiry_date; //date time
    int is_active; //boolean
    char *notes; // string
    char *contact_id; // string
    char *shipping_courier_id; // string
    char *tenant_id; // string
    char *enrollment_id; // string

} truck_driver_dto_t;

truck_driver_dto_t *truck_driver_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *phone,
    char *email,
    char *national_id_number,
    char *license_number,
    char *license_class,
    char *license_expiry_date,
    int adr_certified,
    char *adr_certificate_expiry_date,
    char *medical_exam_expiry_date,
    int is_active,
    char *notes,
    char *contact_id,
    char *shipping_courier_id,
    char *tenant_id,
    char *enrollment_id
);

void truck_driver_dto_free(truck_driver_dto_t *truck_driver_dto);

truck_driver_dto_t *truck_driver_dto_parseFromJSON(cJSON *truck_driver_dtoJSON);

cJSON *truck_driver_dto_convertToJSON(truck_driver_dto_t *truck_driver_dto);

#endif /* _truck_driver_dto_H_ */

