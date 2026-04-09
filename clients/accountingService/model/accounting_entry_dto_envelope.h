/*
 * accounting_entry_dto_envelope.h
 *
 * 
 */

#ifndef _accounting_entry_dto_envelope_H_
#define _accounting_entry_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct accounting_entry_dto_envelope_t accounting_entry_dto_envelope_t;

#include "accounting_entry_dto.h"



typedef struct accounting_entry_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct accounting_entry_dto_t *result; //model

} accounting_entry_dto_envelope_t;

accounting_entry_dto_envelope_t *accounting_entry_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    accounting_entry_dto_t *result
);

void accounting_entry_dto_envelope_free(accounting_entry_dto_envelope_t *accounting_entry_dto_envelope);

accounting_entry_dto_envelope_t *accounting_entry_dto_envelope_parseFromJSON(cJSON *accounting_entry_dto_envelopeJSON);

cJSON *accounting_entry_dto_envelope_convertToJSON(accounting_entry_dto_envelope_t *accounting_entry_dto_envelope);

#endif /* _accounting_entry_dto_envelope_H_ */

