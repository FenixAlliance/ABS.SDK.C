/*
 * extended_tenant_enrollment_dto.h
 *
 * 
 */

#ifndef _extended_tenant_enrollment_dto_H_
#define _extended_tenant_enrollment_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct extended_tenant_enrollment_dto_t extended_tenant_enrollment_dto_t;

#include "tenant_dto.h"
#include "user_dto.h"



typedef struct extended_tenant_enrollment_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *tenant_id; // string
    char *user_id; // string
    int is_root; //boolean
    int is_owner; //boolean
    int is_admin; //boolean
    int is_disabled; //boolean
    struct tenant_dto_t *tenant; //model
    struct user_dto_t *user; //model

} extended_tenant_enrollment_dto_t;

extended_tenant_enrollment_dto_t *extended_tenant_enrollment_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *user_id,
    int is_root,
    int is_owner,
    int is_admin,
    int is_disabled,
    tenant_dto_t *tenant,
    user_dto_t *user
);

void extended_tenant_enrollment_dto_free(extended_tenant_enrollment_dto_t *extended_tenant_enrollment_dto);

extended_tenant_enrollment_dto_t *extended_tenant_enrollment_dto_parseFromJSON(cJSON *extended_tenant_enrollment_dtoJSON);

cJSON *extended_tenant_enrollment_dto_convertToJSON(extended_tenant_enrollment_dto_t *extended_tenant_enrollment_dto);

#endif /* _extended_tenant_enrollment_dto_H_ */

