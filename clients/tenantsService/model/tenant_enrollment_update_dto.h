/*
 * tenant_enrollment_update_dto.h
 *
 * 
 */

#ifndef _tenant_enrollment_update_dto_H_
#define _tenant_enrollment_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct tenant_enrollment_update_dto_t tenant_enrollment_update_dto_t;




typedef struct tenant_enrollment_update_dto_t {
    int is_admin; //boolean
    int is_disabled; //boolean

} tenant_enrollment_update_dto_t;

tenant_enrollment_update_dto_t *tenant_enrollment_update_dto_create(
    int is_admin,
    int is_disabled
);

void tenant_enrollment_update_dto_free(tenant_enrollment_update_dto_t *tenant_enrollment_update_dto);

tenant_enrollment_update_dto_t *tenant_enrollment_update_dto_parseFromJSON(cJSON *tenant_enrollment_update_dtoJSON);

cJSON *tenant_enrollment_update_dto_convertToJSON(tenant_enrollment_update_dto_t *tenant_enrollment_update_dto);

#endif /* _tenant_enrollment_update_dto_H_ */

