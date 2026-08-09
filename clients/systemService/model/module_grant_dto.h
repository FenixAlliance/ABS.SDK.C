/*
 * module_grant_dto.h
 *
 * 
 */

#ifndef _module_grant_dto_H_
#define _module_grant_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct module_grant_dto_t module_grant_dto_t;




typedef struct module_grant_dto_t {
    char *module; // string
    char *expires_at; //date time
    char *granted_at_utc; //date time
    char *granted_by; // string
    char *note; // string

} module_grant_dto_t;

module_grant_dto_t *module_grant_dto_create(
    char *module,
    char *expires_at,
    char *granted_at_utc,
    char *granted_by,
    char *note
);

void module_grant_dto_free(module_grant_dto_t *module_grant_dto);

module_grant_dto_t *module_grant_dto_parseFromJSON(cJSON *module_grant_dtoJSON);

cJSON *module_grant_dto_convertToJSON(module_grant_dto_t *module_grant_dto);

#endif /* _module_grant_dto_H_ */

