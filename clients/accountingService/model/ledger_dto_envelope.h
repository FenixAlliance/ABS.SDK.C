/*
 * ledger_dto_envelope.h
 *
 * 
 */

#ifndef _ledger_dto_envelope_H_
#define _ledger_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ledger_dto_envelope_t ledger_dto_envelope_t;

#include "ledger_dto.h"



typedef struct ledger_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct ledger_dto_t *result; //model

} ledger_dto_envelope_t;

ledger_dto_envelope_t *ledger_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    ledger_dto_t *result
);

void ledger_dto_envelope_free(ledger_dto_envelope_t *ledger_dto_envelope);

ledger_dto_envelope_t *ledger_dto_envelope_parseFromJSON(cJSON *ledger_dto_envelopeJSON);

cJSON *ledger_dto_envelope_convertToJSON(ledger_dto_envelope_t *ledger_dto_envelope);

#endif /* _ledger_dto_envelope_H_ */

