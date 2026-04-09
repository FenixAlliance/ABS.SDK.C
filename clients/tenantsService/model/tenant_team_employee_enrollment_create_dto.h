/*
 * tenant_team_employee_enrollment_create_dto.h
 *
 * 
 */

#ifndef _tenant_team_employee_enrollment_create_dto_H_
#define _tenant_team_employee_enrollment_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct tenant_team_employee_enrollment_create_dto_t tenant_team_employee_enrollment_create_dto_t;




typedef struct tenant_team_employee_enrollment_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *business_id; // string
    char *business_profile_record_id; // string
    char *business_team_id; // string
    char *employee_profile_id; // string

} tenant_team_employee_enrollment_create_dto_t;

tenant_team_employee_enrollment_create_dto_t *tenant_team_employee_enrollment_create_dto_create(
    char *id,
    char *timestamp,
    char *business_id,
    char *business_profile_record_id,
    char *business_team_id,
    char *employee_profile_id
);

void tenant_team_employee_enrollment_create_dto_free(tenant_team_employee_enrollment_create_dto_t *tenant_team_employee_enrollment_create_dto);

tenant_team_employee_enrollment_create_dto_t *tenant_team_employee_enrollment_create_dto_parseFromJSON(cJSON *tenant_team_employee_enrollment_create_dtoJSON);

cJSON *tenant_team_employee_enrollment_create_dto_convertToJSON(tenant_team_employee_enrollment_create_dto_t *tenant_team_employee_enrollment_create_dto);

#endif /* _tenant_team_employee_enrollment_create_dto_H_ */

