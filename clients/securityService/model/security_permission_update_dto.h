/*
 * security_permission_update_dto.h
 *
 * 
 */

#ifndef _security_permission_update_dto_H_
#define _security_permission_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct security_permission_update_dto_t security_permission_update_dto_t;




typedef struct security_permission_update_dto_t {
    char *name; // string
    char *description; // string

} security_permission_update_dto_t;

security_permission_update_dto_t *security_permission_update_dto_create(
    char *name,
    char *description
);

void security_permission_update_dto_free(security_permission_update_dto_t *security_permission_update_dto);

security_permission_update_dto_t *security_permission_update_dto_parseFromJSON(cJSON *security_permission_update_dtoJSON);

cJSON *security_permission_update_dto_convertToJSON(security_permission_update_dto_t *security_permission_update_dto);

#endif /* _security_permission_update_dto_H_ */

