/*
 * activity_type_dto.h
 *
 * 
 */

#ifndef _activity_type_dto_H_
#define _activity_type_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct activity_type_dto_t activity_type_dto_t;




typedef struct activity_type_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *tenant_id; // string
    char *enrollment_id; // string
    int activity_records_count; //numeric

} activity_type_dto_t;

activity_type_dto_t *activity_type_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *tenant_id,
    char *enrollment_id,
    int activity_records_count
);

void activity_type_dto_free(activity_type_dto_t *activity_type_dto);

activity_type_dto_t *activity_type_dto_parseFromJSON(cJSON *activity_type_dtoJSON);

cJSON *activity_type_dto_convertToJSON(activity_type_dto_t *activity_type_dto);

#endif /* _activity_type_dto_H_ */

