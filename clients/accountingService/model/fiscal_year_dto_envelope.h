/*
 * fiscal_year_dto_envelope.h
 *
 * 
 */

#ifndef _fiscal_year_dto_envelope_H_
#define _fiscal_year_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct fiscal_year_dto_envelope_t fiscal_year_dto_envelope_t;

#include "fiscal_year_dto.h"



typedef struct fiscal_year_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct fiscal_year_dto_t *result; //model

} fiscal_year_dto_envelope_t;

fiscal_year_dto_envelope_t *fiscal_year_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    fiscal_year_dto_t *result
);

void fiscal_year_dto_envelope_free(fiscal_year_dto_envelope_t *fiscal_year_dto_envelope);

fiscal_year_dto_envelope_t *fiscal_year_dto_envelope_parseFromJSON(cJSON *fiscal_year_dto_envelopeJSON);

cJSON *fiscal_year_dto_envelope_convertToJSON(fiscal_year_dto_envelope_t *fiscal_year_dto_envelope);

#endif /* _fiscal_year_dto_envelope_H_ */

