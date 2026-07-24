/*
 * license_type_create_dto.h
 *
 * 
 */

#ifndef _license_type_create_dto_H_
#define _license_type_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct license_type_create_dto_t license_type_create_dto_t;




typedef struct license_type_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *description; // string
    int allow_trials; //boolean
    int is_perpetual_license; //boolean
    int max_license_usages; //numeric
    int trial_license_relative_expiration_in_days; //numeric
    int standard_license_relative_expiration_in_days; //numeric
    char *licensing_certificate_id; // string

} license_type_create_dto_t;

license_type_create_dto_t *license_type_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    int allow_trials,
    int is_perpetual_license,
    int max_license_usages,
    int trial_license_relative_expiration_in_days,
    int standard_license_relative_expiration_in_days,
    char *licensing_certificate_id
);

void license_type_create_dto_free(license_type_create_dto_t *license_type_create_dto);

license_type_create_dto_t *license_type_create_dto_parseFromJSON(cJSON *license_type_create_dtoJSON);

cJSON *license_type_create_dto_convertToJSON(license_type_create_dto_t *license_type_create_dto);

#endif /* _license_type_create_dto_H_ */

