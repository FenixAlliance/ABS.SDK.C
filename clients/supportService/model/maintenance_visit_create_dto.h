/*
 * maintenance_visit_create_dto.h
 *
 * 
 */

#ifndef _maintenance_visit_create_dto_H_
#define _maintenance_visit_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct maintenance_visit_create_dto_t maintenance_visit_create_dto_t;




typedef struct maintenance_visit_create_dto_t {
    char *id; // string
    char *timestamp; //date time

} maintenance_visit_create_dto_t;

maintenance_visit_create_dto_t *maintenance_visit_create_dto_create(
    char *id,
    char *timestamp
);

void maintenance_visit_create_dto_free(maintenance_visit_create_dto_t *maintenance_visit_create_dto);

maintenance_visit_create_dto_t *maintenance_visit_create_dto_parseFromJSON(cJSON *maintenance_visit_create_dtoJSON);

cJSON *maintenance_visit_create_dto_convertToJSON(maintenance_visit_create_dto_t *maintenance_visit_create_dto);

#endif /* _maintenance_visit_create_dto_H_ */

