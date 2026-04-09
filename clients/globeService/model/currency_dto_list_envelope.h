/*
 * currency_dto_list_envelope.h
 *
 * 
 */

#ifndef _currency_dto_list_envelope_H_
#define _currency_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct currency_dto_list_envelope_t currency_dto_list_envelope_t;

#include "currency_dto.h"



typedef struct currency_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} currency_dto_list_envelope_t;

currency_dto_list_envelope_t *currency_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void currency_dto_list_envelope_free(currency_dto_list_envelope_t *currency_dto_list_envelope);

currency_dto_list_envelope_t *currency_dto_list_envelope_parseFromJSON(cJSON *currency_dto_list_envelopeJSON);

cJSON *currency_dto_list_envelope_convertToJSON(currency_dto_list_envelope_t *currency_dto_list_envelope);

#endif /* _currency_dto_list_envelope_H_ */

