/*
 * cart_dto_envelope.h
 *
 * 
 */

#ifndef _cart_dto_envelope_H_
#define _cart_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cart_dto_envelope_t cart_dto_envelope_t;

#include "cart_dto.h"



typedef struct cart_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct cart_dto_t *result; //model

} cart_dto_envelope_t;

cart_dto_envelope_t *cart_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    cart_dto_t *result
);

void cart_dto_envelope_free(cart_dto_envelope_t *cart_dto_envelope);

cart_dto_envelope_t *cart_dto_envelope_parseFromJSON(cJSON *cart_dto_envelopeJSON);

cJSON *cart_dto_envelope_convertToJSON(cart_dto_envelope_t *cart_dto_envelope);

#endif /* _cart_dto_envelope_H_ */

