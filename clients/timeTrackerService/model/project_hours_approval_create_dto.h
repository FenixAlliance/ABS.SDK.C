/*
 * project_hours_approval_create_dto.h
 *
 * 
 */

#ifndef _project_hours_approval_create_dto_H_
#define _project_hours_approval_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct project_hours_approval_create_dto_t project_hours_approval_create_dto_t;




typedef struct project_hours_approval_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *requester_contact_id; // string
    char *approver_contact_id; // string
    char *project_period_id; // string
    char *comments; // string

} project_hours_approval_create_dto_t;

project_hours_approval_create_dto_t *project_hours_approval_create_dto_create(
    char *id,
    char *timestamp,
    char *requester_contact_id,
    char *approver_contact_id,
    char *project_period_id,
    char *comments
);

void project_hours_approval_create_dto_free(project_hours_approval_create_dto_t *project_hours_approval_create_dto);

project_hours_approval_create_dto_t *project_hours_approval_create_dto_parseFromJSON(cJSON *project_hours_approval_create_dtoJSON);

cJSON *project_hours_approval_create_dto_convertToJSON(project_hours_approval_create_dto_t *project_hours_approval_create_dto);

#endif /* _project_hours_approval_create_dto_H_ */

