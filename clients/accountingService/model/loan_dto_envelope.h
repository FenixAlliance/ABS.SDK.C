/*
 * loan_dto_envelope.h
 *
 * 
 */

#ifndef _loan_dto_envelope_H_
#define _loan_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct loan_dto_envelope_t loan_dto_envelope_t;

#include "loan_dto.h"



typedef struct loan_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct loan_dto_t *result; //model

} loan_dto_envelope_t;

loan_dto_envelope_t *loan_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    loan_dto_t *result
);

void loan_dto_envelope_free(loan_dto_envelope_t *loan_dto_envelope);

loan_dto_envelope_t *loan_dto_envelope_parseFromJSON(cJSON *loan_dto_envelopeJSON);

cJSON *loan_dto_envelope_convertToJSON(loan_dto_envelope_t *loan_dto_envelope);

#endif /* _loan_dto_envelope_H_ */

