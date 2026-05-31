/*
 * marketing_area_create_dto.h
 *
 * 
 */

#ifndef _marketing_area_create_dto_H_
#define _marketing_area_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct marketing_area_create_dto_t marketing_area_create_dto_t;




typedef struct marketing_area_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *description; // string

} marketing_area_create_dto_t;

marketing_area_create_dto_t *marketing_area_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description
);

void marketing_area_create_dto_free(marketing_area_create_dto_t *marketing_area_create_dto);

marketing_area_create_dto_t *marketing_area_create_dto_parseFromJSON(cJSON *marketing_area_create_dtoJSON);

cJSON *marketing_area_create_dto_convertToJSON(marketing_area_create_dto_t *marketing_area_create_dto);

#endif /* _marketing_area_create_dto_H_ */

