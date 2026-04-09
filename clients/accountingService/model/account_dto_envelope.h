/*
 * account_dto_envelope.h
 *
 * 
 */

#ifndef _account_dto_envelope_H_
#define _account_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct account_dto_envelope_t account_dto_envelope_t;

#include "account_dto.h"



typedef struct account_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct account_dto_t *result; //model

} account_dto_envelope_t;

account_dto_envelope_t *account_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    account_dto_t *result
);

void account_dto_envelope_free(account_dto_envelope_t *account_dto_envelope);

account_dto_envelope_t *account_dto_envelope_parseFromJSON(cJSON *account_dto_envelopeJSON);

cJSON *account_dto_envelope_convertToJSON(account_dto_envelope_t *account_dto_envelope);

#endif /* _account_dto_envelope_H_ */

