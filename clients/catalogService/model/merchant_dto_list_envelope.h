/*
 * merchant_dto_list_envelope.h
 *
 * 
 */

#ifndef _merchant_dto_list_envelope_H_
#define _merchant_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct merchant_dto_list_envelope_t merchant_dto_list_envelope_t;

#include "merchant_dto.h"



typedef struct merchant_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} merchant_dto_list_envelope_t;

merchant_dto_list_envelope_t *merchant_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void merchant_dto_list_envelope_free(merchant_dto_list_envelope_t *merchant_dto_list_envelope);

merchant_dto_list_envelope_t *merchant_dto_list_envelope_parseFromJSON(cJSON *merchant_dto_list_envelopeJSON);

cJSON *merchant_dto_list_envelope_convertToJSON(merchant_dto_list_envelope_t *merchant_dto_list_envelope);

#endif /* _merchant_dto_list_envelope_H_ */

