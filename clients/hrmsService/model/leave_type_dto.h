/*
 * leave_type_dto.h
 *
 * 
 */

#ifndef _leave_type_dto_H_
#define _leave_type_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct leave_type_dto_t leave_type_dto_t;




typedef struct leave_type_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *description; // string
    char *tenant_id; // string

} leave_type_dto_t;

leave_type_dto_t *leave_type_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *tenant_id
);

void leave_type_dto_free(leave_type_dto_t *leave_type_dto);

leave_type_dto_t *leave_type_dto_parseFromJSON(cJSON *leave_type_dtoJSON);

cJSON *leave_type_dto_convertToJSON(leave_type_dto_t *leave_type_dto);

#endif /* _leave_type_dto_H_ */

