/*
 * support_request_dto_envelope.h
 *
 * 
 */

#ifndef _support_request_dto_envelope_H_
#define _support_request_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct support_request_dto_envelope_t support_request_dto_envelope_t;

#include "support_request_dto.h"



typedef struct support_request_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct support_request_dto_t *result; //model

} support_request_dto_envelope_t;

support_request_dto_envelope_t *support_request_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    support_request_dto_t *result
);

void support_request_dto_envelope_free(support_request_dto_envelope_t *support_request_dto_envelope);

support_request_dto_envelope_t *support_request_dto_envelope_parseFromJSON(cJSON *support_request_dto_envelopeJSON);

cJSON *support_request_dto_envelope_convertToJSON(support_request_dto_envelope_t *support_request_dto_envelope);

#endif /* _support_request_dto_envelope_H_ */

