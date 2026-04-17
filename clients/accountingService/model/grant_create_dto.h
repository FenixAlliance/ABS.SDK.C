/*
 * grant_create_dto.h
 *
 * 
 */

#ifndef _grant_create_dto_H_
#define _grant_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct grant_create_dto_t grant_create_dto_t;




typedef struct grant_create_dto_t {
    char *id; // string
    char *timestamp; //date time

} grant_create_dto_t;

grant_create_dto_t *grant_create_dto_create(
    char *id,
    char *timestamp
);

void grant_create_dto_free(grant_create_dto_t *grant_create_dto);

grant_create_dto_t *grant_create_dto_parseFromJSON(cJSON *grant_create_dtoJSON);

cJSON *grant_create_dto_convertToJSON(grant_create_dto_t *grant_create_dto);

#endif /* _grant_create_dto_H_ */

