/*
 * activity_type_dto_envelope.h
 *
 * 
 */

#ifndef _activity_type_dto_envelope_H_
#define _activity_type_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct activity_type_dto_envelope_t activity_type_dto_envelope_t;

#include "activity_type_dto.h"



typedef struct activity_type_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct activity_type_dto_t *result; //model

} activity_type_dto_envelope_t;

activity_type_dto_envelope_t *activity_type_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    activity_type_dto_t *result
);

void activity_type_dto_envelope_free(activity_type_dto_envelope_t *activity_type_dto_envelope);

activity_type_dto_envelope_t *activity_type_dto_envelope_parseFromJSON(cJSON *activity_type_dto_envelopeJSON);

cJSON *activity_type_dto_envelope_convertToJSON(activity_type_dto_envelope_t *activity_type_dto_envelope);

#endif /* _activity_type_dto_envelope_H_ */

