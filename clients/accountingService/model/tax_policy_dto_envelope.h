/*
 * tax_policy_dto_envelope.h
 *
 * 
 */

#ifndef _tax_policy_dto_envelope_H_
#define _tax_policy_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct tax_policy_dto_envelope_t tax_policy_dto_envelope_t;

#include "tax_policy_dto.h"



typedef struct tax_policy_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct tax_policy_dto_t *result; //model

} tax_policy_dto_envelope_t;

tax_policy_dto_envelope_t *tax_policy_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    tax_policy_dto_t *result
);

void tax_policy_dto_envelope_free(tax_policy_dto_envelope_t *tax_policy_dto_envelope);

tax_policy_dto_envelope_t *tax_policy_dto_envelope_parseFromJSON(cJSON *tax_policy_dto_envelopeJSON);

cJSON *tax_policy_dto_envelope_convertToJSON(tax_policy_dto_envelope_t *tax_policy_dto_envelope);

#endif /* _tax_policy_dto_envelope_H_ */

