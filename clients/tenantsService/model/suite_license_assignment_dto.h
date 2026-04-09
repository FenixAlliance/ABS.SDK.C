/*
 * suite_license_assignment_dto.h
 *
 * 
 */

#ifndef _suite_license_assignment_dto_H_
#define _suite_license_assignment_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct suite_license_assignment_dto_t suite_license_assignment_dto_t;




typedef struct suite_license_assignment_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    int assigned; //boolean
    char *enrollment_id; // string
    char *suite_license_id; // string
    char *expiration_date; //date time
    int available_seats; //numeric
    int total_seats; //numeric

} suite_license_assignment_dto_t;

suite_license_assignment_dto_t *suite_license_assignment_dto_create(
    char *id,
    char *timestamp,
    char *name,
    int assigned,
    char *enrollment_id,
    char *suite_license_id,
    char *expiration_date,
    int available_seats,
    int total_seats
);

void suite_license_assignment_dto_free(suite_license_assignment_dto_t *suite_license_assignment_dto);

suite_license_assignment_dto_t *suite_license_assignment_dto_parseFromJSON(cJSON *suite_license_assignment_dtoJSON);

cJSON *suite_license_assignment_dto_convertToJSON(suite_license_assignment_dto_t *suite_license_assignment_dto);

#endif /* _suite_license_assignment_dto_H_ */

