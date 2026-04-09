/*
 * simple_tenant_enrollment_dto.h
 *
 * 
 */

#ifndef _simple_tenant_enrollment_dto_H_
#define _simple_tenant_enrollment_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct simple_tenant_enrollment_dto_t simple_tenant_enrollment_dto_t;




typedef struct simple_tenant_enrollment_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *tenant_id; // string
    char *user_id; // string

} simple_tenant_enrollment_dto_t;

simple_tenant_enrollment_dto_t *simple_tenant_enrollment_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *user_id
);

void simple_tenant_enrollment_dto_free(simple_tenant_enrollment_dto_t *simple_tenant_enrollment_dto);

simple_tenant_enrollment_dto_t *simple_tenant_enrollment_dto_parseFromJSON(cJSON *simple_tenant_enrollment_dtoJSON);

cJSON *simple_tenant_enrollment_dto_convertToJSON(simple_tenant_enrollment_dto_t *simple_tenant_enrollment_dto);

#endif /* _simple_tenant_enrollment_dto_H_ */

