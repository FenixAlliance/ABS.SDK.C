/*
 * financial_book_dto_envelope.h
 *
 * 
 */

#ifndef _financial_book_dto_envelope_H_
#define _financial_book_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct financial_book_dto_envelope_t financial_book_dto_envelope_t;

#include "financial_book_dto.h"



typedef struct financial_book_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct financial_book_dto_t *result; //model

} financial_book_dto_envelope_t;

financial_book_dto_envelope_t *financial_book_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    financial_book_dto_t *result
);

void financial_book_dto_envelope_free(financial_book_dto_envelope_t *financial_book_dto_envelope);

financial_book_dto_envelope_t *financial_book_dto_envelope_parseFromJSON(cJSON *financial_book_dto_envelopeJSON);

cJSON *financial_book_dto_envelope_convertToJSON(financial_book_dto_envelope_t *financial_book_dto_envelope);

#endif /* _financial_book_dto_envelope_H_ */

