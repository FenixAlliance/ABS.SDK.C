/*
 * country_dto_envelope.h
 *
 * 
 */

#ifndef _country_dto_envelope_H_
#define _country_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct country_dto_envelope_t country_dto_envelope_t;

#include "country_dto.h"



typedef struct country_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct country_dto_t *result; //model

} country_dto_envelope_t;

country_dto_envelope_t *country_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    country_dto_t *result
);

void country_dto_envelope_free(country_dto_envelope_t *country_dto_envelope);

country_dto_envelope_t *country_dto_envelope_parseFromJSON(cJSON *country_dto_envelopeJSON);

cJSON *country_dto_envelope_convertToJSON(country_dto_envelope_t *country_dto_envelope);

#endif /* _country_dto_envelope_H_ */

