/*
 * timezone_dto_envelope.h
 *
 * 
 */

#ifndef _timezone_dto_envelope_H_
#define _timezone_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct timezone_dto_envelope_t timezone_dto_envelope_t;

#include "timezone_dto.h"



typedef struct timezone_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct timezone_dto_t *result; //model

} timezone_dto_envelope_t;

timezone_dto_envelope_t *timezone_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    timezone_dto_t *result
);

void timezone_dto_envelope_free(timezone_dto_envelope_t *timezone_dto_envelope);

timezone_dto_envelope_t *timezone_dto_envelope_parseFromJSON(cJSON *timezone_dto_envelopeJSON);

cJSON *timezone_dto_envelope_convertToJSON(timezone_dto_envelope_t *timezone_dto_envelope);

#endif /* _timezone_dto_envelope_H_ */

