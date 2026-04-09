/*
 * account_group_dto_envelope.h
 *
 * 
 */

#ifndef _account_group_dto_envelope_H_
#define _account_group_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct account_group_dto_envelope_t account_group_dto_envelope_t;

#include "account_group_dto.h"



typedef struct account_group_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct account_group_dto_t *result; //model

} account_group_dto_envelope_t;

account_group_dto_envelope_t *account_group_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    account_group_dto_t *result
);

void account_group_dto_envelope_free(account_group_dto_envelope_t *account_group_dto_envelope);

account_group_dto_envelope_t *account_group_dto_envelope_parseFromJSON(cJSON *account_group_dto_envelopeJSON);

cJSON *account_group_dto_envelope_convertToJSON(account_group_dto_envelope_t *account_group_dto_envelope);

#endif /* _account_group_dto_envelope_H_ */

