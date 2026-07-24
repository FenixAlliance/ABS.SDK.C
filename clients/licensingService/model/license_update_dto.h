/*
 * license_update_dto.h
 *
 * 
 */

#ifndef _license_update_dto_H_
#define _license_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct license_update_dto_t license_update_dto_t;




typedef struct license_update_dto_t {
    char *title; // string
    char *description; // string
    char *code; // string
    char *license_type_id; // string

} license_update_dto_t;

license_update_dto_t *license_update_dto_create(
    char *title,
    char *description,
    char *code,
    char *license_type_id
);

void license_update_dto_free(license_update_dto_t *license_update_dto);

license_update_dto_t *license_update_dto_parseFromJSON(cJSON *license_update_dtoJSON);

cJSON *license_update_dto_convertToJSON(license_update_dto_t *license_update_dto);

#endif /* _license_update_dto_H_ */

