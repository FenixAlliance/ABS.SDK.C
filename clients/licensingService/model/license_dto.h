/*
 * license_dto.h
 *
 * 
 */

#ifndef _license_dto_H_
#define _license_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct license_dto_t license_dto_t;




typedef struct license_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *description; // string
    char *code; // string
    char *license_type_id; // string
    char *tenant_id; // string
    char *enrollment_id; // string

} license_dto_t;

license_dto_t *license_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *code,
    char *license_type_id,
    char *tenant_id,
    char *enrollment_id
);

void license_dto_free(license_dto_t *license_dto);

license_dto_t *license_dto_parseFromJSON(cJSON *license_dtoJSON);

cJSON *license_dto_convertToJSON(license_dto_t *license_dto);

#endif /* _license_dto_H_ */

