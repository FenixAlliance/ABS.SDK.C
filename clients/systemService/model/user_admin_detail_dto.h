/*
 * user_admin_detail_dto.h
 *
 * 
 */

#ifndef _user_admin_detail_dto_H_
#define _user_admin_detail_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct user_admin_detail_dto_t user_admin_detail_dto_t;

#include "security_permission_dto.h"
#include "security_role_dto.h"
#include "tenant_enrollment_dto.h"
#include "user_external_login_dto.h"
#include "user_order_summary_dto.h"



typedef struct user_admin_detail_dto_t {
    list_t *orders; //nonprimitive container
    list_t *logins; //nonprimitive container
    struct tenant_enrollment_dto_t *enrollment; //model
    list_t *granted_roles; //nonprimitive container
    list_t *granted_permissions; //nonprimitive container
    list_t *role_catalog; //nonprimitive container
    list_t *permission_catalog; //nonprimitive container

} user_admin_detail_dto_t;

user_admin_detail_dto_t *user_admin_detail_dto_create(
    list_t *orders,
    list_t *logins,
    tenant_enrollment_dto_t *enrollment,
    list_t *granted_roles,
    list_t *granted_permissions,
    list_t *role_catalog,
    list_t *permission_catalog
);

void user_admin_detail_dto_free(user_admin_detail_dto_t *user_admin_detail_dto);

user_admin_detail_dto_t *user_admin_detail_dto_parseFromJSON(cJSON *user_admin_detail_dtoJSON);

cJSON *user_admin_detail_dto_convertToJSON(user_admin_detail_dto_t *user_admin_detail_dto);

#endif /* _user_admin_detail_dto_H_ */

