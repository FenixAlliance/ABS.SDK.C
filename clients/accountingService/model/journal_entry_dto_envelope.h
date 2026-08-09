/*
 * journal_entry_dto_envelope.h
 *
 * 
 */

#ifndef _journal_entry_dto_envelope_H_
#define _journal_entry_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct journal_entry_dto_envelope_t journal_entry_dto_envelope_t;

#include "journal_entry_dto.h"



typedef struct journal_entry_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    int http_status; //numeric
    char *error_code; // string
    list_t* validation_details; //map
    char *activity_id; // string
    struct journal_entry_dto_t *result; //model

} journal_entry_dto_envelope_t;

journal_entry_dto_envelope_t *journal_entry_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    int http_status,
    char *error_code,
    list_t* validation_details,
    char *activity_id,
    journal_entry_dto_t *result
);

void journal_entry_dto_envelope_free(journal_entry_dto_envelope_t *journal_entry_dto_envelope);

journal_entry_dto_envelope_t *journal_entry_dto_envelope_parseFromJSON(cJSON *journal_entry_dto_envelopeJSON);

cJSON *journal_entry_dto_envelope_convertToJSON(journal_entry_dto_envelope_t *journal_entry_dto_envelope);

#endif /* _journal_entry_dto_envelope_H_ */

