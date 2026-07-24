/*
 * project_hours_approval_approver_update_dto.h
 *
 * 
 */

#ifndef _project_hours_approval_approver_update_dto_H_
#define _project_hours_approval_approver_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct project_hours_approval_approver_update_dto_t project_hours_approval_approver_update_dto_t;




typedef struct project_hours_approval_approver_update_dto_t {
    char *approver_contact_id; // string

} project_hours_approval_approver_update_dto_t;

project_hours_approval_approver_update_dto_t *project_hours_approval_approver_update_dto_create(
    char *approver_contact_id
);

void project_hours_approval_approver_update_dto_free(project_hours_approval_approver_update_dto_t *project_hours_approval_approver_update_dto);

project_hours_approval_approver_update_dto_t *project_hours_approval_approver_update_dto_parseFromJSON(cJSON *project_hours_approval_approver_update_dtoJSON);

cJSON *project_hours_approval_approver_update_dto_convertToJSON(project_hours_approval_approver_update_dto_t *project_hours_approval_approver_update_dto);

#endif /* _project_hours_approval_approver_update_dto_H_ */

