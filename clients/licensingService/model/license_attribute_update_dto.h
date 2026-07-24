/*
 * license_attribute_update_dto.h
 *
 * 
 */

#ifndef _license_attribute_update_dto_H_
#define _license_attribute_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct license_attribute_update_dto_t license_attribute_update_dto_t;




typedef struct license_attribute_update_dto_t {
    char *code; // string
    char *name; // string
    char *description; // string
    char *license_type_id; // string

} license_attribute_update_dto_t;

license_attribute_update_dto_t *license_attribute_update_dto_create(
    char *code,
    char *name,
    char *description,
    char *license_type_id
);

void license_attribute_update_dto_free(license_attribute_update_dto_t *license_attribute_update_dto);

license_attribute_update_dto_t *license_attribute_update_dto_parseFromJSON(cJSON *license_attribute_update_dtoJSON);

cJSON *license_attribute_update_dto_convertToJSON(license_attribute_update_dto_t *license_attribute_update_dto);

#endif /* _license_attribute_update_dto_H_ */

