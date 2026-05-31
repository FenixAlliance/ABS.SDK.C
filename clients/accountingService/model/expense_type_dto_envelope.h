/*
 * expense_type_dto_envelope.h
 *
 * 
 */

#ifndef _expense_type_dto_envelope_H_
#define _expense_type_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct expense_type_dto_envelope_t expense_type_dto_envelope_t;

#include "expense_type_dto.h"



typedef struct expense_type_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct expense_type_dto_t *result; //model

} expense_type_dto_envelope_t;

expense_type_dto_envelope_t *expense_type_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    expense_type_dto_t *result
);

void expense_type_dto_envelope_free(expense_type_dto_envelope_t *expense_type_dto_envelope);

expense_type_dto_envelope_t *expense_type_dto_envelope_parseFromJSON(cJSON *expense_type_dto_envelopeJSON);

cJSON *expense_type_dto_envelope_convertToJSON(expense_type_dto_envelope_t *expense_type_dto_envelope);

#endif /* _expense_type_dto_envelope_H_ */

