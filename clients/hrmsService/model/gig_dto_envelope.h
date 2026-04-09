/*
 * gig_dto_envelope.h
 *
 * 
 */

#ifndef _gig_dto_envelope_H_
#define _gig_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct gig_dto_envelope_t gig_dto_envelope_t;

#include "gig_dto.h"



typedef struct gig_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct gig_dto_t *result; //model

} gig_dto_envelope_t;

gig_dto_envelope_t *gig_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    gig_dto_t *result
);

void gig_dto_envelope_free(gig_dto_envelope_t *gig_dto_envelope);

gig_dto_envelope_t *gig_dto_envelope_parseFromJSON(cJSON *gig_dto_envelopeJSON);

cJSON *gig_dto_envelope_convertToJSON(gig_dto_envelope_t *gig_dto_envelope);

#endif /* _gig_dto_envelope_H_ */

