/*
 * timezone_dto.h
 *
 * 
 */

#ifndef _timezone_dto_H_
#define _timezone_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct timezone_dto_t timezone_dto_t;




typedef struct timezone_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *utc_offset; // string
    char *display_name; // string

} timezone_dto_t;

timezone_dto_t *timezone_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *utc_offset,
    char *display_name
);

void timezone_dto_free(timezone_dto_t *timezone_dto);

timezone_dto_t *timezone_dto_parseFromJSON(cJSON *timezone_dtoJSON);

cJSON *timezone_dto_convertToJSON(timezone_dto_t *timezone_dto);

#endif /* _timezone_dto_H_ */

