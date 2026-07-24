/*
 * license_type_dto.h
 *
 * 
 */

#ifndef _license_type_dto_H_
#define _license_type_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct license_type_dto_t license_type_dto_t;




typedef struct license_type_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *name; // string
    char *description; // string
    int allow_trials; //boolean
    int is_perpetual_license; //boolean
    int max_license_usages; //numeric
    int trial_license_relative_expiration_in_days; //numeric
    int standard_license_relative_expiration_in_days; //numeric
    char *licensing_certificate_id; // string
    char *tenant_id; // string
    char *enrollment_id; // string

} license_type_dto_t;

license_type_dto_t *license_type_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *name,
    char *description,
    int allow_trials,
    int is_perpetual_license,
    int max_license_usages,
    int trial_license_relative_expiration_in_days,
    int standard_license_relative_expiration_in_days,
    char *licensing_certificate_id,
    char *tenant_id,
    char *enrollment_id
);

void license_type_dto_free(license_type_dto_t *license_type_dto);

license_type_dto_t *license_type_dto_parseFromJSON(cJSON *license_type_dtoJSON);

cJSON *license_type_dto_convertToJSON(license_type_dto_t *license_type_dto);

#endif /* _license_type_dto_H_ */

