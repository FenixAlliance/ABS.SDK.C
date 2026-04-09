/*
 * job_offer_dto_envelope.h
 *
 * 
 */

#ifndef _job_offer_dto_envelope_H_
#define _job_offer_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct job_offer_dto_envelope_t job_offer_dto_envelope_t;

#include "job_offer_dto.h"



typedef struct job_offer_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct job_offer_dto_t *result; //model

} job_offer_dto_envelope_t;

job_offer_dto_envelope_t *job_offer_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    job_offer_dto_t *result
);

void job_offer_dto_envelope_free(job_offer_dto_envelope_t *job_offer_dto_envelope);

job_offer_dto_envelope_t *job_offer_dto_envelope_parseFromJSON(cJSON *job_offer_dto_envelopeJSON);

cJSON *job_offer_dto_envelope_convertToJSON(job_offer_dto_envelope_t *job_offer_dto_envelope);

#endif /* _job_offer_dto_envelope_H_ */

