/*
 * localization_string_dto_envelope.h
 *
 * 
 */

#ifndef _localization_string_dto_envelope_H_
#define _localization_string_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct localization_string_dto_envelope_t localization_string_dto_envelope_t;

#include "localization_string_dto.h"



typedef struct localization_string_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct localization_string_dto_t *result; //model

} localization_string_dto_envelope_t;

localization_string_dto_envelope_t *localization_string_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    localization_string_dto_t *result
);

void localization_string_dto_envelope_free(localization_string_dto_envelope_t *localization_string_dto_envelope);

localization_string_dto_envelope_t *localization_string_dto_envelope_parseFromJSON(cJSON *localization_string_dto_envelopeJSON);

cJSON *localization_string_dto_envelope_convertToJSON(localization_string_dto_envelope_t *localization_string_dto_envelope);

#endif /* _localization_string_dto_envelope_H_ */

