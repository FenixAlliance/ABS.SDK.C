/*
 * tenant_department_dto.h
 *
 * 
 */

#ifndef _tenant_department_dto_H_
#define _tenant_department_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct tenant_department_dto_t tenant_department_dto_t;




typedef struct tenant_department_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *business_id; // string
    char *business_profile_record_id; // string
    char *name; // string
    char *description; // string
    int disabled; //boolean
    char *organization_profile_id; // string
    char *parent_department_id; // string

} tenant_department_dto_t;

tenant_department_dto_t *tenant_department_dto_create(
    char *id,
    char *timestamp,
    char *business_id,
    char *business_profile_record_id,
    char *name,
    char *description,
    int disabled,
    char *organization_profile_id,
    char *parent_department_id
);

void tenant_department_dto_free(tenant_department_dto_t *tenant_department_dto);

tenant_department_dto_t *tenant_department_dto_parseFromJSON(cJSON *tenant_department_dtoJSON);

cJSON *tenant_department_dto_convertToJSON(tenant_department_dto_t *tenant_department_dto);

#endif /* _tenant_department_dto_H_ */

