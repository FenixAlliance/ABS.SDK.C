/*
 * expense_claim_dto_list_envelope.h
 *
 * 
 */

#ifndef _expense_claim_dto_list_envelope_H_
#define _expense_claim_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct expense_claim_dto_list_envelope_t expense_claim_dto_list_envelope_t;

#include "expense_claim_dto.h"



typedef struct expense_claim_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} expense_claim_dto_list_envelope_t;

expense_claim_dto_list_envelope_t *expense_claim_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void expense_claim_dto_list_envelope_free(expense_claim_dto_list_envelope_t *expense_claim_dto_list_envelope);

expense_claim_dto_list_envelope_t *expense_claim_dto_list_envelope_parseFromJSON(cJSON *expense_claim_dto_list_envelopeJSON);

cJSON *expense_claim_dto_list_envelope_convertToJSON(expense_claim_dto_list_envelope_t *expense_claim_dto_list_envelope);

#endif /* _expense_claim_dto_list_envelope_H_ */

