/*
 * location_dto_envelope.h
 *
 * 
 */

#ifndef _location_dto_envelope_H_
#define _location_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct location_dto_envelope_t location_dto_envelope_t;

#include "location_dto.h"



typedef struct location_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct location_dto_t *result; //model

} location_dto_envelope_t;

location_dto_envelope_t *location_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    location_dto_t *result
);

void location_dto_envelope_free(location_dto_envelope_t *location_dto_envelope);

location_dto_envelope_t *location_dto_envelope_parseFromJSON(cJSON *location_dto_envelopeJSON);

cJSON *location_dto_envelope_convertToJSON(location_dto_envelope_t *location_dto_envelope);

#endif /* _location_dto_envelope_H_ */

