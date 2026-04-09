/*
 * tenant_unit_update_dto.h
 *
 * 
 */

#ifndef _tenant_unit_update_dto_H_
#define _tenant_unit_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct tenant_unit_update_dto_t tenant_unit_update_dto_t;




typedef struct tenant_unit_update_dto_t {
    char *name; // string
    char *description; // string
    int disabled; //boolean
    char *business_unit_qualified_name; // string
    char *country_id; // string
    char *organization_profile_id; // string
    char *parent_business_unit_id; // string

} tenant_unit_update_dto_t;

tenant_unit_update_dto_t *tenant_unit_update_dto_create(
    char *name,
    char *description,
    int disabled,
    char *business_unit_qualified_name,
    char *country_id,
    char *organization_profile_id,
    char *parent_business_unit_id
);

void tenant_unit_update_dto_free(tenant_unit_update_dto_t *tenant_unit_update_dto);

tenant_unit_update_dto_t *tenant_unit_update_dto_parseFromJSON(cJSON *tenant_unit_update_dtoJSON);

cJSON *tenant_unit_update_dto_convertToJSON(tenant_unit_update_dto_t *tenant_unit_update_dto);

#endif /* _tenant_unit_update_dto_H_ */

