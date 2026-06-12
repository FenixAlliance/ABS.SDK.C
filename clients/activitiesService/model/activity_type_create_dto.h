/*
 * activity_type_create_dto.h
 *
 * 
 */

#ifndef _activity_type_create_dto_H_
#define _activity_type_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct activity_type_create_dto_t activity_type_create_dto_t;




typedef struct activity_type_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string

} activity_type_create_dto_t;

activity_type_create_dto_t *activity_type_create_dto_create(
    char *id,
    char *timestamp,
    char *name
);

void activity_type_create_dto_free(activity_type_create_dto_t *activity_type_create_dto);

activity_type_create_dto_t *activity_type_create_dto_parseFromJSON(cJSON *activity_type_create_dtoJSON);

cJSON *activity_type_create_dto_convertToJSON(activity_type_create_dto_t *activity_type_create_dto);

#endif /* _activity_type_create_dto_H_ */

