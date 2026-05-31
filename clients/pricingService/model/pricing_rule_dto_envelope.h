/*
 * pricing_rule_dto_envelope.h
 *
 * 
 */

#ifndef _pricing_rule_dto_envelope_H_
#define _pricing_rule_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct pricing_rule_dto_envelope_t pricing_rule_dto_envelope_t;

#include "pricing_rule_dto.h"



typedef struct pricing_rule_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct pricing_rule_dto_t *result; //model

} pricing_rule_dto_envelope_t;

pricing_rule_dto_envelope_t *pricing_rule_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    pricing_rule_dto_t *result
);

void pricing_rule_dto_envelope_free(pricing_rule_dto_envelope_t *pricing_rule_dto_envelope);

pricing_rule_dto_envelope_t *pricing_rule_dto_envelope_parseFromJSON(cJSON *pricing_rule_dto_envelopeJSON);

cJSON *pricing_rule_dto_envelope_convertToJSON(pricing_rule_dto_envelope_t *pricing_rule_dto_envelope);

#endif /* _pricing_rule_dto_envelope_H_ */

