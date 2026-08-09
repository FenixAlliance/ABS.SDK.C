/*
 * average_dto_envelope.h
 *
 * 
 */

#ifndef _average_dto_envelope_H_
#define _average_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct average_dto_envelope_t average_dto_envelope_t;

#include "average_dto.h"



typedef struct average_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    int http_status; //numeric
    char *error_code; // string
    list_t* validation_details; //map
    char *activity_id; // string
    struct average_dto_t *result; //model

} average_dto_envelope_t;

average_dto_envelope_t *average_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    int http_status,
    char *error_code,
    list_t* validation_details,
    char *activity_id,
    average_dto_t *result
);

void average_dto_envelope_free(average_dto_envelope_t *average_dto_envelope);

average_dto_envelope_t *average_dto_envelope_parseFromJSON(cJSON *average_dto_envelopeJSON);

cJSON *average_dto_envelope_convertToJSON(average_dto_envelope_t *average_dto_envelope);

#endif /* _average_dto_envelope_H_ */

