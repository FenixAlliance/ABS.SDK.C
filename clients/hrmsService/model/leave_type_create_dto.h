/*
 * leave_type_create_dto.h
 *
 * 
 */

#ifndef _leave_type_create_dto_H_
#define _leave_type_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct leave_type_create_dto_t leave_type_create_dto_t;




typedef struct leave_type_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *description; // string

} leave_type_create_dto_t;

leave_type_create_dto_t *leave_type_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description
);

void leave_type_create_dto_free(leave_type_create_dto_t *leave_type_create_dto);

leave_type_create_dto_t *leave_type_create_dto_parseFromJSON(cJSON *leave_type_create_dtoJSON);

cJSON *leave_type_create_dto_convertToJSON(leave_type_create_dto_t *leave_type_create_dto);

#endif /* _leave_type_create_dto_H_ */

