/*
 * refund_request_dto_list_envelope.h
 *
 * 
 */

#ifndef _refund_request_dto_list_envelope_H_
#define _refund_request_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct refund_request_dto_list_envelope_t refund_request_dto_list_envelope_t;

#include "refund_request_dto.h"



typedef struct refund_request_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} refund_request_dto_list_envelope_t;

refund_request_dto_list_envelope_t *refund_request_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void refund_request_dto_list_envelope_free(refund_request_dto_list_envelope_t *refund_request_dto_list_envelope);

refund_request_dto_list_envelope_t *refund_request_dto_list_envelope_parseFromJSON(cJSON *refund_request_dto_list_envelopeJSON);

cJSON *refund_request_dto_list_envelope_convertToJSON(refund_request_dto_list_envelope_t *refund_request_dto_list_envelope);

#endif /* _refund_request_dto_list_envelope_H_ */

