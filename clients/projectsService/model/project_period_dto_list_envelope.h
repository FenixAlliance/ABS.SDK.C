/*
 * project_period_dto_list_envelope.h
 *
 * 
 */

#ifndef _project_period_dto_list_envelope_H_
#define _project_period_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct project_period_dto_list_envelope_t project_period_dto_list_envelope_t;

#include "project_period_dto.h"



typedef struct project_period_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} project_period_dto_list_envelope_t;

project_period_dto_list_envelope_t *project_period_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void project_period_dto_list_envelope_free(project_period_dto_list_envelope_t *project_period_dto_list_envelope);

project_period_dto_list_envelope_t *project_period_dto_list_envelope_parseFromJSON(cJSON *project_period_dto_list_envelopeJSON);

cJSON *project_period_dto_list_envelope_convertToJSON(project_period_dto_list_envelope_t *project_period_dto_list_envelope);

#endif /* _project_period_dto_list_envelope_H_ */

