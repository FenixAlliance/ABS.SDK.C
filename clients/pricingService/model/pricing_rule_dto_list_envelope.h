/*
 * pricing_rule_dto_list_envelope.h
 *
 * 
 */

#ifndef _pricing_rule_dto_list_envelope_H_
#define _pricing_rule_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct pricing_rule_dto_list_envelope_t pricing_rule_dto_list_envelope_t;

#include "pricing_rule_dto.h"



typedef struct pricing_rule_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} pricing_rule_dto_list_envelope_t;

pricing_rule_dto_list_envelope_t *pricing_rule_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void pricing_rule_dto_list_envelope_free(pricing_rule_dto_list_envelope_t *pricing_rule_dto_list_envelope);

pricing_rule_dto_list_envelope_t *pricing_rule_dto_list_envelope_parseFromJSON(cJSON *pricing_rule_dto_list_envelopeJSON);

cJSON *pricing_rule_dto_list_envelope_convertToJSON(pricing_rule_dto_list_envelope_t *pricing_rule_dto_list_envelope);

#endif /* _pricing_rule_dto_list_envelope_H_ */

