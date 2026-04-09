/*
 * invoice_dto_list_envelope.h
 *
 * 
 */

#ifndef _invoice_dto_list_envelope_H_
#define _invoice_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct invoice_dto_list_envelope_t invoice_dto_list_envelope_t;

#include "invoice_dto.h"



typedef struct invoice_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} invoice_dto_list_envelope_t;

invoice_dto_list_envelope_t *invoice_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void invoice_dto_list_envelope_free(invoice_dto_list_envelope_t *invoice_dto_list_envelope);

invoice_dto_list_envelope_t *invoice_dto_list_envelope_parseFromJSON(cJSON *invoice_dto_list_envelopeJSON);

cJSON *invoice_dto_list_envelope_convertToJSON(invoice_dto_list_envelope_t *invoice_dto_list_envelope);

#endif /* _invoice_dto_list_envelope_H_ */

