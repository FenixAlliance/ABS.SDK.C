/*
 * commission_dto_envelope.h
 *
 * 
 */

#ifndef _commission_dto_envelope_H_
#define _commission_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct commission_dto_envelope_t commission_dto_envelope_t;

#include "commission_dto.h"



typedef struct commission_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct commission_dto_t *result; //model

} commission_dto_envelope_t;

commission_dto_envelope_t *commission_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    commission_dto_t *result
);

void commission_dto_envelope_free(commission_dto_envelope_t *commission_dto_envelope);

commission_dto_envelope_t *commission_dto_envelope_parseFromJSON(cJSON *commission_dto_envelopeJSON);

cJSON *commission_dto_envelope_convertToJSON(commission_dto_envelope_t *commission_dto_envelope);

#endif /* _commission_dto_envelope_H_ */

