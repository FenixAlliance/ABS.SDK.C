/*
 * invoice_adjustment_dto_envelope.h
 *
 * 
 */

#ifndef _invoice_adjustment_dto_envelope_H_
#define _invoice_adjustment_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct invoice_adjustment_dto_envelope_t invoice_adjustment_dto_envelope_t;

#include "invoice_adjustment_dto.h"



typedef struct invoice_adjustment_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct invoice_adjustment_dto_t *result; //model

} invoice_adjustment_dto_envelope_t;

invoice_adjustment_dto_envelope_t *invoice_adjustment_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    invoice_adjustment_dto_t *result
);

void invoice_adjustment_dto_envelope_free(invoice_adjustment_dto_envelope_t *invoice_adjustment_dto_envelope);

invoice_adjustment_dto_envelope_t *invoice_adjustment_dto_envelope_parseFromJSON(cJSON *invoice_adjustment_dto_envelopeJSON);

cJSON *invoice_adjustment_dto_envelope_convertToJSON(invoice_adjustment_dto_envelope_t *invoice_adjustment_dto_envelope);

#endif /* _invoice_adjustment_dto_envelope_H_ */

