/*
 * security_role_dto.h
 *
 * 
 */

#ifndef _security_role_dto_H_
#define _security_role_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct security_role_dto_t security_role_dto_t;




typedef struct security_role_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *tenant_id; // string
    char *description; // string
    int is_system_role; //boolean

} security_role_dto_t;

security_role_dto_t *security_role_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *tenant_id,
    char *description,
    int is_system_role
);

void security_role_dto_free(security_role_dto_t *security_role_dto);

security_role_dto_t *security_role_dto_parseFromJSON(cJSON *security_role_dtoJSON);

cJSON *security_role_dto_convertToJSON(security_role_dto_t *security_role_dto);

#endif /* _security_role_dto_H_ */

