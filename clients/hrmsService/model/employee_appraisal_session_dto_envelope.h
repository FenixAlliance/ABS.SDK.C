/*
 * employee_appraisal_session_dto_envelope.h
 *
 * 
 */

#ifndef _employee_appraisal_session_dto_envelope_H_
#define _employee_appraisal_session_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct employee_appraisal_session_dto_envelope_t employee_appraisal_session_dto_envelope_t;

#include "employee_appraisal_session_dto.h"



typedef struct employee_appraisal_session_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    int http_status; //numeric
    char *error_code; // string
    list_t* validation_details; //map
    char *activity_id; // string
    struct employee_appraisal_session_dto_t *result; //model

} employee_appraisal_session_dto_envelope_t;

employee_appraisal_session_dto_envelope_t *employee_appraisal_session_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    int http_status,
    char *error_code,
    list_t* validation_details,
    char *activity_id,
    employee_appraisal_session_dto_t *result
);

void employee_appraisal_session_dto_envelope_free(employee_appraisal_session_dto_envelope_t *employee_appraisal_session_dto_envelope);

employee_appraisal_session_dto_envelope_t *employee_appraisal_session_dto_envelope_parseFromJSON(cJSON *employee_appraisal_session_dto_envelopeJSON);

cJSON *employee_appraisal_session_dto_envelope_convertToJSON(employee_appraisal_session_dto_envelope_t *employee_appraisal_session_dto_envelope);

#endif /* _employee_appraisal_session_dto_envelope_H_ */

