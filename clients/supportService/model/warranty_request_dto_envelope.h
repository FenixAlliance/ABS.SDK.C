/*
 * warranty_request_dto_envelope.h
 *
 * 
 */

#ifndef _warranty_request_dto_envelope_H_
#define _warranty_request_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct warranty_request_dto_envelope_t warranty_request_dto_envelope_t;

#include "warranty_request_dto.h"



typedef struct warranty_request_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct warranty_request_dto_t *result; //model

} warranty_request_dto_envelope_t;

warranty_request_dto_envelope_t *warranty_request_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    warranty_request_dto_t *result
);

void warranty_request_dto_envelope_free(warranty_request_dto_envelope_t *warranty_request_dto_envelope);

warranty_request_dto_envelope_t *warranty_request_dto_envelope_parseFromJSON(cJSON *warranty_request_dto_envelopeJSON);

cJSON *warranty_request_dto_envelope_convertToJSON(warranty_request_dto_envelope_t *warranty_request_dto_envelope);

#endif /* _warranty_request_dto_envelope_H_ */

