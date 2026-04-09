/*
 * security_role_update_dto.h
 *
 * 
 */

#ifndef _security_role_update_dto_H_
#define _security_role_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct security_role_update_dto_t security_role_update_dto_t;




typedef struct security_role_update_dto_t {
    char *name; // string
    char *description; // string

} security_role_update_dto_t;

security_role_update_dto_t *security_role_update_dto_create(
    char *name,
    char *description
);

void security_role_update_dto_free(security_role_update_dto_t *security_role_update_dto);

security_role_update_dto_t *security_role_update_dto_parseFromJSON(cJSON *security_role_update_dtoJSON);

cJSON *security_role_update_dto_convertToJSON(security_role_update_dto_t *security_role_update_dto);

#endif /* _security_role_update_dto_H_ */

