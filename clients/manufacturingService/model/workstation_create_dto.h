/*
 * workstation_create_dto.h
 *
 * 
 */

#ifndef _workstation_create_dto_H_
#define _workstation_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct workstation_create_dto_t workstation_create_dto_t;




typedef struct workstation_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *code; // string
    char *type; // string
    char *description; // string
    char *location_id; // string

} workstation_create_dto_t;

workstation_create_dto_t *workstation_create_dto_create(
    char *id,
    char *timestamp,
    char *code,
    char *type,
    char *description,
    char *location_id
);

void workstation_create_dto_free(workstation_create_dto_t *workstation_create_dto);

workstation_create_dto_t *workstation_create_dto_parseFromJSON(cJSON *workstation_create_dtoJSON);

cJSON *workstation_create_dto_convertToJSON(workstation_create_dto_t *workstation_create_dto);

#endif /* _workstation_create_dto_H_ */

