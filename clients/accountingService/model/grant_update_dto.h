/*
 * grant_update_dto.h
 *
 * 
 */

#ifndef _grant_update_dto_H_
#define _grant_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct grant_update_dto_t grant_update_dto_t;




typedef struct grant_update_dto_t {
    char *tenant_id; // string
    char *enrollment_id; // string

} grant_update_dto_t;

grant_update_dto_t *grant_update_dto_create(
    char *tenant_id,
    char *enrollment_id
);

void grant_update_dto_free(grant_update_dto_t *grant_update_dto);

grant_update_dto_t *grant_update_dto_parseFromJSON(cJSON *grant_update_dtoJSON);

cJSON *grant_update_dto_convertToJSON(grant_update_dto_t *grant_update_dto);

#endif /* _grant_update_dto_H_ */

