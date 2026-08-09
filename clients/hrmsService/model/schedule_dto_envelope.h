/*
 * schedule_dto_envelope.h
 *
 * 
 */

#ifndef _schedule_dto_envelope_H_
#define _schedule_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct schedule_dto_envelope_t schedule_dto_envelope_t;

#include "schedule_dto.h"



typedef struct schedule_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    int http_status; //numeric
    char *error_code; // string
    list_t* validation_details; //map
    char *activity_id; // string
    struct schedule_dto_t *result; //model

} schedule_dto_envelope_t;

schedule_dto_envelope_t *schedule_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    int http_status,
    char *error_code,
    list_t* validation_details,
    char *activity_id,
    schedule_dto_t *result
);

void schedule_dto_envelope_free(schedule_dto_envelope_t *schedule_dto_envelope);

schedule_dto_envelope_t *schedule_dto_envelope_parseFromJSON(cJSON *schedule_dto_envelopeJSON);

cJSON *schedule_dto_envelope_convertToJSON(schedule_dto_envelope_t *schedule_dto_envelope);

#endif /* _schedule_dto_envelope_H_ */

