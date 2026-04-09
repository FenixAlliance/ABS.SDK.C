/*
 * security_permission_dto.h
 *
 * 
 */

#ifndef _security_permission_dto_H_
#define _security_permission_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct security_permission_dto_t security_permission_dto_t;




typedef struct security_permission_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *tenant_id; // string
    char *description; // string
    int is_system_permission; //boolean

} security_permission_dto_t;

security_permission_dto_t *security_permission_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *tenant_id,
    char *description,
    int is_system_permission
);

void security_permission_dto_free(security_permission_dto_t *security_permission_dto);

security_permission_dto_t *security_permission_dto_parseFromJSON(cJSON *security_permission_dtoJSON);

cJSON *security_permission_dto_convertToJSON(security_permission_dto_t *security_permission_dto);

#endif /* _security_permission_dto_H_ */

