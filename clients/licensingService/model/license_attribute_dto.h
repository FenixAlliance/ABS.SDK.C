/*
 * license_attribute_dto.h
 *
 * 
 */

#ifndef _license_attribute_dto_H_
#define _license_attribute_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct license_attribute_dto_t license_attribute_dto_t;




typedef struct license_attribute_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *code; // string
    char *name; // string
    char *description; // string
    char *license_type_id; // string
    char *tenant_id; // string
    char *enrollment_id; // string

} license_attribute_dto_t;

license_attribute_dto_t *license_attribute_dto_create(
    char *id,
    char *timestamp,
    char *code,
    char *name,
    char *description,
    char *license_type_id,
    char *tenant_id,
    char *enrollment_id
);

void license_attribute_dto_free(license_attribute_dto_t *license_attribute_dto);

license_attribute_dto_t *license_attribute_dto_parseFromJSON(cJSON *license_attribute_dtoJSON);

cJSON *license_attribute_dto_convertToJSON(license_attribute_dto_t *license_attribute_dto);

#endif /* _license_attribute_dto_H_ */

