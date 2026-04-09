/*
 * applied_tax_policy_record_dto_envelope.h
 *
 * 
 */

#ifndef _applied_tax_policy_record_dto_envelope_H_
#define _applied_tax_policy_record_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct applied_tax_policy_record_dto_envelope_t applied_tax_policy_record_dto_envelope_t;

#include "applied_tax_policy_record_dto.h"



typedef struct applied_tax_policy_record_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct applied_tax_policy_record_dto_t *result; //model

} applied_tax_policy_record_dto_envelope_t;

applied_tax_policy_record_dto_envelope_t *applied_tax_policy_record_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    applied_tax_policy_record_dto_t *result
);

void applied_tax_policy_record_dto_envelope_free(applied_tax_policy_record_dto_envelope_t *applied_tax_policy_record_dto_envelope);

applied_tax_policy_record_dto_envelope_t *applied_tax_policy_record_dto_envelope_parseFromJSON(cJSON *applied_tax_policy_record_dto_envelopeJSON);

cJSON *applied_tax_policy_record_dto_envelope_convertToJSON(applied_tax_policy_record_dto_envelope_t *applied_tax_policy_record_dto_envelope);

#endif /* _applied_tax_policy_record_dto_envelope_H_ */

