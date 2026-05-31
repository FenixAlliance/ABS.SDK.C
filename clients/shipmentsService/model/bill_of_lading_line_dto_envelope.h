/*
 * bill_of_lading_line_dto_envelope.h
 *
 * 
 */

#ifndef _bill_of_lading_line_dto_envelope_H_
#define _bill_of_lading_line_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct bill_of_lading_line_dto_envelope_t bill_of_lading_line_dto_envelope_t;

#include "bill_of_lading_line_dto.h"



typedef struct bill_of_lading_line_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct bill_of_lading_line_dto_t *result; //model

} bill_of_lading_line_dto_envelope_t;

bill_of_lading_line_dto_envelope_t *bill_of_lading_line_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    bill_of_lading_line_dto_t *result
);

void bill_of_lading_line_dto_envelope_free(bill_of_lading_line_dto_envelope_t *bill_of_lading_line_dto_envelope);

bill_of_lading_line_dto_envelope_t *bill_of_lading_line_dto_envelope_parseFromJSON(cJSON *bill_of_lading_line_dto_envelopeJSON);

cJSON *bill_of_lading_line_dto_envelope_convertToJSON(bill_of_lading_line_dto_envelope_t *bill_of_lading_line_dto_envelope);

#endif /* _bill_of_lading_line_dto_envelope_H_ */

