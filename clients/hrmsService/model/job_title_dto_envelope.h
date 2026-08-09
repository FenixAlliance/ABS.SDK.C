/*
 * job_title_dto_envelope.h
 *
 * 
 */

#ifndef _job_title_dto_envelope_H_
#define _job_title_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct job_title_dto_envelope_t job_title_dto_envelope_t;

#include "job_title_dto.h"



typedef struct job_title_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    int http_status; //numeric
    char *error_code; // string
    list_t* validation_details; //map
    char *activity_id; // string
    struct job_title_dto_t *result; //model

} job_title_dto_envelope_t;

job_title_dto_envelope_t *job_title_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    int http_status,
    char *error_code,
    list_t* validation_details,
    char *activity_id,
    job_title_dto_t *result
);

void job_title_dto_envelope_free(job_title_dto_envelope_t *job_title_dto_envelope);

job_title_dto_envelope_t *job_title_dto_envelope_parseFromJSON(cJSON *job_title_dto_envelopeJSON);

cJSON *job_title_dto_envelope_convertToJSON(job_title_dto_envelope_t *job_title_dto_envelope);

#endif /* _job_title_dto_envelope_H_ */

