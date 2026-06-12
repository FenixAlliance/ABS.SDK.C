/*
 * activity_type_update_dto.h
 *
 * 
 */

#ifndef _activity_type_update_dto_H_
#define _activity_type_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct activity_type_update_dto_t activity_type_update_dto_t;




typedef struct activity_type_update_dto_t {
    char *name; // string

} activity_type_update_dto_t;

activity_type_update_dto_t *activity_type_update_dto_create(
    char *name
);

void activity_type_update_dto_free(activity_type_update_dto_t *activity_type_update_dto);

activity_type_update_dto_t *activity_type_update_dto_parseFromJSON(cJSON *activity_type_update_dtoJSON);

cJSON *activity_type_update_dto_convertToJSON(activity_type_update_dto_t *activity_type_update_dto);

#endif /* _activity_type_update_dto_H_ */

