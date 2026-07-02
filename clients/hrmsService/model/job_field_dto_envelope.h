/*
 * job_field_dto_envelope.h
 *
 * 
 */

#ifndef _job_field_dto_envelope_H_
#define _job_field_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct job_field_dto_envelope_t job_field_dto_envelope_t;

#include "job_field_dto.h"



typedef struct job_field_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct job_field_dto_t *result; //model

} job_field_dto_envelope_t;

job_field_dto_envelope_t *job_field_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    job_field_dto_t *result
);

void job_field_dto_envelope_free(job_field_dto_envelope_t *job_field_dto_envelope);

job_field_dto_envelope_t *job_field_dto_envelope_parseFromJSON(cJSON *job_field_dto_envelopeJSON);

cJSON *job_field_dto_envelope_convertToJSON(job_field_dto_envelope_t *job_field_dto_envelope);

#endif /* _job_field_dto_envelope_H_ */

