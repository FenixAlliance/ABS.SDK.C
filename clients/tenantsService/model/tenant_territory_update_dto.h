/*
 * tenant_territory_update_dto.h
 *
 * 
 */

#ifndef _tenant_territory_update_dto_H_
#define _tenant_territory_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct tenant_territory_update_dto_t tenant_territory_update_dto_t;




typedef struct tenant_territory_update_dto_t {
    char *name; // string
    char *description; // string

} tenant_territory_update_dto_t;

tenant_territory_update_dto_t *tenant_territory_update_dto_create(
    char *name,
    char *description
);

void tenant_territory_update_dto_free(tenant_territory_update_dto_t *tenant_territory_update_dto);

tenant_territory_update_dto_t *tenant_territory_update_dto_parseFromJSON(cJSON *tenant_territory_update_dtoJSON);

cJSON *tenant_territory_update_dto_convertToJSON(tenant_territory_update_dto_t *tenant_territory_update_dto);

#endif /* _tenant_territory_update_dto_H_ */

