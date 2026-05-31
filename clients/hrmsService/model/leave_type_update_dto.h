/*
 * leave_type_update_dto.h
 *
 * 
 */

#ifndef _leave_type_update_dto_H_
#define _leave_type_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct leave_type_update_dto_t leave_type_update_dto_t;




typedef struct leave_type_update_dto_t {
    char *title; // string
    char *description; // string

} leave_type_update_dto_t;

leave_type_update_dto_t *leave_type_update_dto_create(
    char *title,
    char *description
);

void leave_type_update_dto_free(leave_type_update_dto_t *leave_type_update_dto);

leave_type_update_dto_t *leave_type_update_dto_parseFromJSON(cJSON *leave_type_update_dtoJSON);

cJSON *leave_type_update_dto_convertToJSON(leave_type_update_dto_t *leave_type_update_dto);

#endif /* _leave_type_update_dto_H_ */

