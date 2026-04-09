/*
 * price_list_dto_envelope.h
 *
 * 
 */

#ifndef _price_list_dto_envelope_H_
#define _price_list_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct price_list_dto_envelope_t price_list_dto_envelope_t;

#include "price_list_dto.h"



typedef struct price_list_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct price_list_dto_t *result; //model

} price_list_dto_envelope_t;

price_list_dto_envelope_t *price_list_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    price_list_dto_t *result
);

void price_list_dto_envelope_free(price_list_dto_envelope_t *price_list_dto_envelope);

price_list_dto_envelope_t *price_list_dto_envelope_parseFromJSON(cJSON *price_list_dto_envelopeJSON);

cJSON *price_list_dto_envelope_convertToJSON(price_list_dto_envelope_t *price_list_dto_envelope);

#endif /* _price_list_dto_envelope_H_ */

