/*
 * grant_dto_envelope.h
 *
 * 
 */

#ifndef _grant_dto_envelope_H_
#define _grant_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct grant_dto_envelope_t grant_dto_envelope_t;

#include "grant_dto.h"



typedef struct grant_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct grant_dto_t *result; //model

} grant_dto_envelope_t;

grant_dto_envelope_t *grant_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    grant_dto_t *result
);

void grant_dto_envelope_free(grant_dto_envelope_t *grant_dto_envelope);

grant_dto_envelope_t *grant_dto_envelope_parseFromJSON(cJSON *grant_dto_envelopeJSON);

cJSON *grant_dto_envelope_convertToJSON(grant_dto_envelope_t *grant_dto_envelope);

#endif /* _grant_dto_envelope_H_ */

