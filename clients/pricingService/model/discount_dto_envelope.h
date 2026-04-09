/*
 * discount_dto_envelope.h
 *
 * 
 */

#ifndef _discount_dto_envelope_H_
#define _discount_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct discount_dto_envelope_t discount_dto_envelope_t;

#include "discount_dto.h"



typedef struct discount_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct discount_dto_t *result; //model

} discount_dto_envelope_t;

discount_dto_envelope_t *discount_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    discount_dto_t *result
);

void discount_dto_envelope_free(discount_dto_envelope_t *discount_dto_envelope);

discount_dto_envelope_t *discount_dto_envelope_parseFromJSON(cJSON *discount_dto_envelopeJSON);

cJSON *discount_dto_envelope_convertToJSON(discount_dto_envelope_t *discount_dto_envelope);

#endif /* _discount_dto_envelope_H_ */

