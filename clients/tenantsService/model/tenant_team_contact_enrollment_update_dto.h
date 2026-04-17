/*
 * tenant_team_contact_enrollment_update_dto.h
 *
 * 
 */

#ifndef _tenant_team_contact_enrollment_update_dto_H_
#define _tenant_team_contact_enrollment_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct tenant_team_contact_enrollment_update_dto_t tenant_team_contact_enrollment_update_dto_t;




typedef struct tenant_team_contact_enrollment_update_dto_t {
    char *business_team_id; // string
    char *contact_id; // string

} tenant_team_contact_enrollment_update_dto_t;

tenant_team_contact_enrollment_update_dto_t *tenant_team_contact_enrollment_update_dto_create(
    char *business_team_id,
    char *contact_id
);

void tenant_team_contact_enrollment_update_dto_free(tenant_team_contact_enrollment_update_dto_t *tenant_team_contact_enrollment_update_dto);

tenant_team_contact_enrollment_update_dto_t *tenant_team_contact_enrollment_update_dto_parseFromJSON(cJSON *tenant_team_contact_enrollment_update_dtoJSON);

cJSON *tenant_team_contact_enrollment_update_dto_convertToJSON(tenant_team_contact_enrollment_update_dto_t *tenant_team_contact_enrollment_update_dto);

#endif /* _tenant_team_contact_enrollment_update_dto_H_ */

