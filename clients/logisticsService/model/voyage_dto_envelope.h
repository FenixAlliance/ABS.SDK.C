/*
 * voyage_dto_envelope.h
 *
 * 
 */

#ifndef _voyage_dto_envelope_H_
#define _voyage_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct voyage_dto_envelope_t voyage_dto_envelope_t;

#include "voyage_dto.h"



typedef struct voyage_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    int http_status; //numeric
    char *error_code; // string
    list_t* validation_details; //map
    char *activity_id; // string
    struct voyage_dto_t *result; //model

} voyage_dto_envelope_t;

voyage_dto_envelope_t *voyage_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    int http_status,
    char *error_code,
    list_t* validation_details,
    char *activity_id,
    voyage_dto_t *result
);

void voyage_dto_envelope_free(voyage_dto_envelope_t *voyage_dto_envelope);

voyage_dto_envelope_t *voyage_dto_envelope_parseFromJSON(cJSON *voyage_dto_envelopeJSON);

cJSON *voyage_dto_envelope_convertToJSON(voyage_dto_envelope_t *voyage_dto_envelope);

#endif /* _voyage_dto_envelope_H_ */

