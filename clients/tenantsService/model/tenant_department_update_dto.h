/*
 * tenant_department_update_dto.h
 *
 * 
 */

#ifndef _tenant_department_update_dto_H_
#define _tenant_department_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct tenant_department_update_dto_t tenant_department_update_dto_t;




typedef struct tenant_department_update_dto_t {
    char *name; // string
    char *description; // string
    int disabled; //boolean
    char *business_profile_record_id; // string
    char *organization_profile_id; // string
    char *parent_department_id; // string

} tenant_department_update_dto_t;

tenant_department_update_dto_t *tenant_department_update_dto_create(
    char *name,
    char *description,
    int disabled,
    char *business_profile_record_id,
    char *organization_profile_id,
    char *parent_department_id
);

void tenant_department_update_dto_free(tenant_department_update_dto_t *tenant_department_update_dto);

tenant_department_update_dto_t *tenant_department_update_dto_parseFromJSON(cJSON *tenant_department_update_dtoJSON);

cJSON *tenant_department_update_dto_convertToJSON(tenant_department_update_dto_t *tenant_department_update_dto);

#endif /* _tenant_department_update_dto_H_ */

