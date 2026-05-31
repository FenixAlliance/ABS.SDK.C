/*
 * employee_appraisal_session_create_dto.h
 *
 * 
 */

#ifndef _employee_appraisal_session_create_dto_H_
#define _employee_appraisal_session_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct employee_appraisal_session_create_dto_t employee_appraisal_session_create_dto_t;




typedef struct employee_appraisal_session_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *employee_profile_id; // string
    char *appraisal_workflow_id; // string
    char *appraisal_stage_id; // string

} employee_appraisal_session_create_dto_t;

employee_appraisal_session_create_dto_t *employee_appraisal_session_create_dto_create(
    char *id,
    char *timestamp,
    char *employee_profile_id,
    char *appraisal_workflow_id,
    char *appraisal_stage_id
);

void employee_appraisal_session_create_dto_free(employee_appraisal_session_create_dto_t *employee_appraisal_session_create_dto);

employee_appraisal_session_create_dto_t *employee_appraisal_session_create_dto_parseFromJSON(cJSON *employee_appraisal_session_create_dtoJSON);

cJSON *employee_appraisal_session_create_dto_convertToJSON(employee_appraisal_session_create_dto_t *employee_appraisal_session_create_dto);

#endif /* _employee_appraisal_session_create_dto_H_ */

