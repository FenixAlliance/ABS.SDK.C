/*
 * project_dto_envelope.h
 *
 * 
 */

#ifndef _project_dto_envelope_H_
#define _project_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct project_dto_envelope_t project_dto_envelope_t;

#include "project_dto.h"



typedef struct project_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct project_dto_t *result; //model

} project_dto_envelope_t;

project_dto_envelope_t *project_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    project_dto_t *result
);

void project_dto_envelope_free(project_dto_envelope_t *project_dto_envelope);

project_dto_envelope_t *project_dto_envelope_parseFromJSON(cJSON *project_dto_envelopeJSON);

cJSON *project_dto_envelope_convertToJSON(project_dto_envelope_t *project_dto_envelope);

#endif /* _project_dto_envelope_H_ */

