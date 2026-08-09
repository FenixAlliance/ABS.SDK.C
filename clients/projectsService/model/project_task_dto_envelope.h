/*
 * project_task_dto_envelope.h
 *
 * 
 */

#ifndef _project_task_dto_envelope_H_
#define _project_task_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct project_task_dto_envelope_t project_task_dto_envelope_t;

#include "project_task_dto.h"



typedef struct project_task_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    int http_status; //numeric
    char *error_code; // string
    list_t* validation_details; //map
    char *activity_id; // string
    struct project_task_dto_t *result; //model

} project_task_dto_envelope_t;

project_task_dto_envelope_t *project_task_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    int http_status,
    char *error_code,
    list_t* validation_details,
    char *activity_id,
    project_task_dto_t *result
);

void project_task_dto_envelope_free(project_task_dto_envelope_t *project_task_dto_envelope);

project_task_dto_envelope_t *project_task_dto_envelope_parseFromJSON(cJSON *project_task_dto_envelopeJSON);

cJSON *project_task_dto_envelope_convertToJSON(project_task_dto_envelope_t *project_task_dto_envelope);

#endif /* _project_task_dto_envelope_H_ */

