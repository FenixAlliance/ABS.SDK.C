/*
 * quote_dto_envelope.h
 *
 * 
 */

#ifndef _quote_dto_envelope_H_
#define _quote_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct quote_dto_envelope_t quote_dto_envelope_t;

#include "quote_dto.h"



typedef struct quote_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct quote_dto_t *result; //model

} quote_dto_envelope_t;

quote_dto_envelope_t *quote_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    quote_dto_t *result
);

void quote_dto_envelope_free(quote_dto_envelope_t *quote_dto_envelope);

quote_dto_envelope_t *quote_dto_envelope_parseFromJSON(cJSON *quote_dto_envelopeJSON);

cJSON *quote_dto_envelope_convertToJSON(quote_dto_envelope_t *quote_dto_envelope);

#endif /* _quote_dto_envelope_H_ */

