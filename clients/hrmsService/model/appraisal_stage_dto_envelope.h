/*
 * appraisal_stage_dto_envelope.h
 *
 * 
 */

#ifndef _appraisal_stage_dto_envelope_H_
#define _appraisal_stage_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct appraisal_stage_dto_envelope_t appraisal_stage_dto_envelope_t;

#include "appraisal_stage_dto.h"



typedef struct appraisal_stage_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct appraisal_stage_dto_t *result; //model

} appraisal_stage_dto_envelope_t;

appraisal_stage_dto_envelope_t *appraisal_stage_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    appraisal_stage_dto_t *result
);

void appraisal_stage_dto_envelope_free(appraisal_stage_dto_envelope_t *appraisal_stage_dto_envelope);

appraisal_stage_dto_envelope_t *appraisal_stage_dto_envelope_parseFromJSON(cJSON *appraisal_stage_dto_envelopeJSON);

cJSON *appraisal_stage_dto_envelope_convertToJSON(appraisal_stage_dto_envelope_t *appraisal_stage_dto_envelope);

#endif /* _appraisal_stage_dto_envelope_H_ */

