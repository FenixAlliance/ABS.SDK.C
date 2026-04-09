/*
 * bank_transaction_dto_envelope.h
 *
 * 
 */

#ifndef _bank_transaction_dto_envelope_H_
#define _bank_transaction_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct bank_transaction_dto_envelope_t bank_transaction_dto_envelope_t;

#include "bank_transaction_dto.h"



typedef struct bank_transaction_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct bank_transaction_dto_t *result; //model

} bank_transaction_dto_envelope_t;

bank_transaction_dto_envelope_t *bank_transaction_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    bank_transaction_dto_t *result
);

void bank_transaction_dto_envelope_free(bank_transaction_dto_envelope_t *bank_transaction_dto_envelope);

bank_transaction_dto_envelope_t *bank_transaction_dto_envelope_parseFromJSON(cJSON *bank_transaction_dto_envelopeJSON);

cJSON *bank_transaction_dto_envelope_convertToJSON(bank_transaction_dto_envelope_t *bank_transaction_dto_envelope);

#endif /* _bank_transaction_dto_envelope_H_ */

