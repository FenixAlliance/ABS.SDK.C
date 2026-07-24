/*
 * workstation_update_dto.h
 *
 * 
 */

#ifndef _workstation_update_dto_H_
#define _workstation_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct workstation_update_dto_t workstation_update_dto_t;




typedef struct workstation_update_dto_t {
    char *code; // string
    char *type; // string
    char *description; // string
    char *location_id; // string

} workstation_update_dto_t;

workstation_update_dto_t *workstation_update_dto_create(
    char *code,
    char *type,
    char *description,
    char *location_id
);

void workstation_update_dto_free(workstation_update_dto_t *workstation_update_dto);

workstation_update_dto_t *workstation_update_dto_parseFromJSON(cJSON *workstation_update_dtoJSON);

cJSON *workstation_update_dto_convertToJSON(workstation_update_dto_t *workstation_update_dto);

#endif /* _workstation_update_dto_H_ */

