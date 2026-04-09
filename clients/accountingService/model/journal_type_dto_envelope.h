/*
 * journal_type_dto_envelope.h
 *
 * 
 */

#ifndef _journal_type_dto_envelope_H_
#define _journal_type_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct journal_type_dto_envelope_t journal_type_dto_envelope_t;

#include "journal_type_dto.h"



typedef struct journal_type_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct journal_type_dto_t *result; //model

} journal_type_dto_envelope_t;

journal_type_dto_envelope_t *journal_type_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    journal_type_dto_t *result
);

void journal_type_dto_envelope_free(journal_type_dto_envelope_t *journal_type_dto_envelope);

journal_type_dto_envelope_t *journal_type_dto_envelope_parseFromJSON(cJSON *journal_type_dto_envelopeJSON);

cJSON *journal_type_dto_envelope_convertToJSON(journal_type_dto_envelope_t *journal_type_dto_envelope);

#endif /* _journal_type_dto_envelope_H_ */

