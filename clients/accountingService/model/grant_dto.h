/*
 * grant_dto.h
 *
 * 
 */

#ifndef _grant_dto_H_
#define _grant_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct grant_dto_t grant_dto_t;




typedef struct grant_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *tenant_id; // string
    char *enrollment_id; // string

} grant_dto_t;

grant_dto_t *grant_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *enrollment_id
);

void grant_dto_free(grant_dto_t *grant_dto);

grant_dto_t *grant_dto_parseFromJSON(cJSON *grant_dtoJSON);

cJSON *grant_dto_convertToJSON(grant_dto_t *grant_dto);

#endif /* _grant_dto_H_ */

