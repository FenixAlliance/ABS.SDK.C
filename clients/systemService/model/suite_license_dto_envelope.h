/*
 * suite_license_dto_envelope.h
 *
 * 
 */

#ifndef _suite_license_dto_envelope_H_
#define _suite_license_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct suite_license_dto_envelope_t suite_license_dto_envelope_t;

#include "suite_license_dto.h"



typedef struct suite_license_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct suite_license_dto_t *result; //model

} suite_license_dto_envelope_t;

suite_license_dto_envelope_t *suite_license_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    suite_license_dto_t *result
);

void suite_license_dto_envelope_free(suite_license_dto_envelope_t *suite_license_dto_envelope);

suite_license_dto_envelope_t *suite_license_dto_envelope_parseFromJSON(cJSON *suite_license_dto_envelopeJSON);

cJSON *suite_license_dto_envelope_convertToJSON(suite_license_dto_envelope_t *suite_license_dto_envelope);

#endif /* _suite_license_dto_envelope_H_ */

