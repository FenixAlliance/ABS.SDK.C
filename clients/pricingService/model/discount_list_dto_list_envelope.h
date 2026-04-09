/*
 * discount_list_dto_list_envelope.h
 *
 * 
 */

#ifndef _discount_list_dto_list_envelope_H_
#define _discount_list_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct discount_list_dto_list_envelope_t discount_list_dto_list_envelope_t;

#include "discount_list_dto.h"



typedef struct discount_list_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} discount_list_dto_list_envelope_t;

discount_list_dto_list_envelope_t *discount_list_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void discount_list_dto_list_envelope_free(discount_list_dto_list_envelope_t *discount_list_dto_list_envelope);

discount_list_dto_list_envelope_t *discount_list_dto_list_envelope_parseFromJSON(cJSON *discount_list_dto_list_envelopeJSON);

cJSON *discount_list_dto_list_envelope_convertToJSON(discount_list_dto_list_envelope_t *discount_list_dto_list_envelope);

#endif /* _discount_list_dto_list_envelope_H_ */

