/*
 * project_time_log_dto_envelope.h
 *
 * 
 */

#ifndef _project_time_log_dto_envelope_H_
#define _project_time_log_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct project_time_log_dto_envelope_t project_time_log_dto_envelope_t;

#include "project_time_log_dto.h"



typedef struct project_time_log_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct project_time_log_dto_t *result; //model

} project_time_log_dto_envelope_t;

project_time_log_dto_envelope_t *project_time_log_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    project_time_log_dto_t *result
);

void project_time_log_dto_envelope_free(project_time_log_dto_envelope_t *project_time_log_dto_envelope);

project_time_log_dto_envelope_t *project_time_log_dto_envelope_parseFromJSON(cJSON *project_time_log_dto_envelopeJSON);

cJSON *project_time_log_dto_envelope_convertToJSON(project_time_log_dto_envelope_t *project_time_log_dto_envelope);

#endif /* _project_time_log_dto_envelope_H_ */

