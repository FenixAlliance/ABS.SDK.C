/*
 * license_create_dto.h
 *
 * 
 */

#ifndef _license_create_dto_H_
#define _license_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct license_create_dto_t license_create_dto_t;




typedef struct license_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *description; // string
    char *code; // string
    char *license_type_id; // string

} license_create_dto_t;

license_create_dto_t *license_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *code,
    char *license_type_id
);

void license_create_dto_free(license_create_dto_t *license_create_dto);

license_create_dto_t *license_create_dto_parseFromJSON(cJSON *license_create_dtoJSON);

cJSON *license_create_dto_convertToJSON(license_create_dto_t *license_create_dto);

#endif /* _license_create_dto_H_ */

