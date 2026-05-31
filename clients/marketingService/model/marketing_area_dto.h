/*
 * marketing_area_dto.h
 *
 * 
 */

#ifndef _marketing_area_dto_H_
#define _marketing_area_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct marketing_area_dto_t marketing_area_dto_t;




typedef struct marketing_area_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *tenant_id; // string
    char *enrollment_id; // string
    char *name; // string
    char *description; // string

} marketing_area_dto_t;

marketing_area_dto_t *marketing_area_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *enrollment_id,
    char *name,
    char *description
);

void marketing_area_dto_free(marketing_area_dto_t *marketing_area_dto);

marketing_area_dto_t *marketing_area_dto_parseFromJSON(cJSON *marketing_area_dtoJSON);

cJSON *marketing_area_dto_convertToJSON(marketing_area_dto_t *marketing_area_dto);

#endif /* _marketing_area_dto_H_ */

