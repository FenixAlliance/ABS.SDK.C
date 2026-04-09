/*
 * transaction_category_dto_envelope.h
 *
 * 
 */

#ifndef _transaction_category_dto_envelope_H_
#define _transaction_category_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct transaction_category_dto_envelope_t transaction_category_dto_envelope_t;

#include "transaction_category_dto.h"



typedef struct transaction_category_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct transaction_category_dto_t *result; //model

} transaction_category_dto_envelope_t;

transaction_category_dto_envelope_t *transaction_category_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    transaction_category_dto_t *result
);

void transaction_category_dto_envelope_free(transaction_category_dto_envelope_t *transaction_category_dto_envelope);

transaction_category_dto_envelope_t *transaction_category_dto_envelope_parseFromJSON(cJSON *transaction_category_dto_envelopeJSON);

cJSON *transaction_category_dto_envelope_convertToJSON(transaction_category_dto_envelope_t *transaction_category_dto_envelope);

#endif /* _transaction_category_dto_envelope_H_ */

