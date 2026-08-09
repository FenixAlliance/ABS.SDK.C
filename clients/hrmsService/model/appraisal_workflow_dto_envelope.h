/*
 * appraisal_workflow_dto_envelope.h
 *
 * 
 */

#ifndef _appraisal_workflow_dto_envelope_H_
#define _appraisal_workflow_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct appraisal_workflow_dto_envelope_t appraisal_workflow_dto_envelope_t;

#include "appraisal_workflow_dto.h"



typedef struct appraisal_workflow_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    int http_status; //numeric
    char *error_code; // string
    list_t* validation_details; //map
    char *activity_id; // string
    struct appraisal_workflow_dto_t *result; //model

} appraisal_workflow_dto_envelope_t;

appraisal_workflow_dto_envelope_t *appraisal_workflow_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    int http_status,
    char *error_code,
    list_t* validation_details,
    char *activity_id,
    appraisal_workflow_dto_t *result
);

void appraisal_workflow_dto_envelope_free(appraisal_workflow_dto_envelope_t *appraisal_workflow_dto_envelope);

appraisal_workflow_dto_envelope_t *appraisal_workflow_dto_envelope_parseFromJSON(cJSON *appraisal_workflow_dto_envelopeJSON);

cJSON *appraisal_workflow_dto_envelope_convertToJSON(appraisal_workflow_dto_envelope_t *appraisal_workflow_dto_envelope);

#endif /* _appraisal_workflow_dto_envelope_H_ */

