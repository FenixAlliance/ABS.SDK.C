/*
 * suite_license_dto.h
 *
 * 
 */

#ifndef _suite_license_dto_H_
#define _suite_license_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct suite_license_dto_t suite_license_dto_t;




typedef struct suite_license_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *tenant_id; // string
    char *license_string; // string
    char *enrollment_id; // string
    char *expiration_date; //date time
    int available_seats; //numeric
    int total_seats; //numeric

} suite_license_dto_t;

suite_license_dto_t *suite_license_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *license_string,
    char *enrollment_id,
    char *expiration_date,
    int available_seats,
    int total_seats
);

void suite_license_dto_free(suite_license_dto_t *suite_license_dto);

suite_license_dto_t *suite_license_dto_parseFromJSON(cJSON *suite_license_dtoJSON);

cJSON *suite_license_dto_convertToJSON(suite_license_dto_t *suite_license_dto);

#endif /* _suite_license_dto_H_ */

