/*
 * tenant_enrollment_dto.h
 *
 * 
 */

#ifndef _tenant_enrollment_dto_H_
#define _tenant_enrollment_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct tenant_enrollment_dto_t tenant_enrollment_dto_t;




typedef struct tenant_enrollment_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *tenant_id; // string
    char *user_id; // string
    int is_root; //boolean
    int is_owner; //boolean
    int is_admin; //boolean
    int is_disabled; //boolean

} tenant_enrollment_dto_t;

tenant_enrollment_dto_t *tenant_enrollment_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *user_id,
    int is_root,
    int is_owner,
    int is_admin,
    int is_disabled
);

void tenant_enrollment_dto_free(tenant_enrollment_dto_t *tenant_enrollment_dto);

tenant_enrollment_dto_t *tenant_enrollment_dto_parseFromJSON(cJSON *tenant_enrollment_dtoJSON);

cJSON *tenant_enrollment_dto_convertToJSON(tenant_enrollment_dto_t *tenant_enrollment_dto);

#endif /* _tenant_enrollment_dto_H_ */

