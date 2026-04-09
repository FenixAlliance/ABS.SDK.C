/*
 * security_permission_create_dto.h
 *
 * 
 */

#ifndef _security_permission_create_dto_H_
#define _security_permission_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct security_permission_create_dto_t security_permission_create_dto_t;




typedef struct security_permission_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *tenant_id; // string
    char *description; // string

} security_permission_create_dto_t;

security_permission_create_dto_t *security_permission_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *tenant_id,
    char *description
);

void security_permission_create_dto_free(security_permission_create_dto_t *security_permission_create_dto);

security_permission_create_dto_t *security_permission_create_dto_parseFromJSON(cJSON *security_permission_create_dtoJSON);

cJSON *security_permission_create_dto_convertToJSON(security_permission_create_dto_t *security_permission_create_dto);

#endif /* _security_permission_create_dto_H_ */

