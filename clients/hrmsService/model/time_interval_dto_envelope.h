/*
 * time_interval_dto_envelope.h
 *
 * 
 */

#ifndef _time_interval_dto_envelope_H_
#define _time_interval_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct time_interval_dto_envelope_t time_interval_dto_envelope_t;

#include "time_interval_dto.h"



typedef struct time_interval_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct time_interval_dto_t *result; //model

} time_interval_dto_envelope_t;

time_interval_dto_envelope_t *time_interval_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    time_interval_dto_t *result
);

void time_interval_dto_envelope_free(time_interval_dto_envelope_t *time_interval_dto_envelope);

time_interval_dto_envelope_t *time_interval_dto_envelope_parseFromJSON(cJSON *time_interval_dto_envelopeJSON);

cJSON *time_interval_dto_envelope_convertToJSON(time_interval_dto_envelope_t *time_interval_dto_envelope);

#endif /* _time_interval_dto_envelope_H_ */

