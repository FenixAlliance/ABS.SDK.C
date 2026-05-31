/*
 * employee_appraisal_session_update_dto.h
 *
 * 
 */

#ifndef _employee_appraisal_session_update_dto_H_
#define _employee_appraisal_session_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct employee_appraisal_session_update_dto_t employee_appraisal_session_update_dto_t;




typedef struct employee_appraisal_session_update_dto_t {
    char *employee_profile_id; // string
    char *appraisal_workflow_id; // string
    char *appraisal_stage_id; // string

} employee_appraisal_session_update_dto_t;

employee_appraisal_session_update_dto_t *employee_appraisal_session_update_dto_create(
    char *employee_profile_id,
    char *appraisal_workflow_id,
    char *appraisal_stage_id
);

void employee_appraisal_session_update_dto_free(employee_appraisal_session_update_dto_t *employee_appraisal_session_update_dto);

employee_appraisal_session_update_dto_t *employee_appraisal_session_update_dto_parseFromJSON(cJSON *employee_appraisal_session_update_dtoJSON);

cJSON *employee_appraisal_session_update_dto_convertToJSON(employee_appraisal_session_update_dto_t *employee_appraisal_session_update_dto);

#endif /* _employee_appraisal_session_update_dto_H_ */

