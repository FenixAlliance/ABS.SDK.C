/*
 * shift_dto_envelope.h
 *
 * 
 */

#ifndef _shift_dto_envelope_H_
#define _shift_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct shift_dto_envelope_t shift_dto_envelope_t;

#include "shift_dto.h"



typedef struct shift_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct shift_dto_t *result; //model

} shift_dto_envelope_t;

shift_dto_envelope_t *shift_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    shift_dto_t *result
);

void shift_dto_envelope_free(shift_dto_envelope_t *shift_dto_envelope);

shift_dto_envelope_t *shift_dto_envelope_parseFromJSON(cJSON *shift_dto_envelopeJSON);

cJSON *shift_dto_envelope_convertToJSON(shift_dto_envelope_t *shift_dto_envelope);

#endif /* _shift_dto_envelope_H_ */

