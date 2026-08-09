/*
 * refund_request_dto_envelope.h
 *
 * 
 */

#ifndef _refund_request_dto_envelope_H_
#define _refund_request_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct refund_request_dto_envelope_t refund_request_dto_envelope_t;

#include "refund_request_dto.h"



typedef struct refund_request_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    int http_status; //numeric
    char *error_code; // string
    list_t* validation_details; //map
    char *activity_id; // string
    struct refund_request_dto_t *result; //model

} refund_request_dto_envelope_t;

refund_request_dto_envelope_t *refund_request_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    int http_status,
    char *error_code,
    list_t* validation_details,
    char *activity_id,
    refund_request_dto_t *result
);

void refund_request_dto_envelope_free(refund_request_dto_envelope_t *refund_request_dto_envelope);

refund_request_dto_envelope_t *refund_request_dto_envelope_parseFromJSON(cJSON *refund_request_dto_envelopeJSON);

cJSON *refund_request_dto_envelope_convertToJSON(refund_request_dto_envelope_t *refund_request_dto_envelope);

#endif /* _refund_request_dto_envelope_H_ */

