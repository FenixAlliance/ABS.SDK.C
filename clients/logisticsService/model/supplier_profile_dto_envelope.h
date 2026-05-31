/*
 * supplier_profile_dto_envelope.h
 *
 * 
 */

#ifndef _supplier_profile_dto_envelope_H_
#define _supplier_profile_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct supplier_profile_dto_envelope_t supplier_profile_dto_envelope_t;

#include "supplier_profile_dto.h"



typedef struct supplier_profile_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct supplier_profile_dto_t *result; //model

} supplier_profile_dto_envelope_t;

supplier_profile_dto_envelope_t *supplier_profile_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    supplier_profile_dto_t *result
);

void supplier_profile_dto_envelope_free(supplier_profile_dto_envelope_t *supplier_profile_dto_envelope);

supplier_profile_dto_envelope_t *supplier_profile_dto_envelope_parseFromJSON(cJSON *supplier_profile_dto_envelopeJSON);

cJSON *supplier_profile_dto_envelope_convertToJSON(supplier_profile_dto_envelope_t *supplier_profile_dto_envelope);

#endif /* _supplier_profile_dto_envelope_H_ */

