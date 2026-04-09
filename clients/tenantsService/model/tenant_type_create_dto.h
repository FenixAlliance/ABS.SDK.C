/*
 * tenant_type_create_dto.h
 *
 * 
 */

#ifndef _tenant_type_create_dto_H_
#define _tenant_type_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct tenant_type_create_dto_t tenant_type_create_dto_t;




typedef struct tenant_type_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *description; // string

} tenant_type_create_dto_t;

tenant_type_create_dto_t *tenant_type_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description
);

void tenant_type_create_dto_free(tenant_type_create_dto_t *tenant_type_create_dto);

tenant_type_create_dto_t *tenant_type_create_dto_parseFromJSON(cJSON *tenant_type_create_dtoJSON);

cJSON *tenant_type_create_dto_convertToJSON(tenant_type_create_dto_t *tenant_type_create_dto);

#endif /* _tenant_type_create_dto_H_ */

