/*
 * workstation_dto.h
 *
 * 
 */

#ifndef _workstation_dto_H_
#define _workstation_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct workstation_dto_t workstation_dto_t;




typedef struct workstation_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *code; // string
    char *type; // string
    char *description; // string
    char *location_id; // string
    char *tenant_id; // string

} workstation_dto_t;

workstation_dto_t *workstation_dto_create(
    char *id,
    char *timestamp,
    char *code,
    char *type,
    char *description,
    char *location_id,
    char *tenant_id
);

void workstation_dto_free(workstation_dto_t *workstation_dto);

workstation_dto_t *workstation_dto_parseFromJSON(cJSON *workstation_dtoJSON);

cJSON *workstation_dto_convertToJSON(workstation_dto_t *workstation_dto);

#endif /* _workstation_dto_H_ */

