/*
 * inquiry_request_dto_list_envelope.h
 *
 * 
 */

#ifndef _inquiry_request_dto_list_envelope_H_
#define _inquiry_request_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inquiry_request_dto_list_envelope_t inquiry_request_dto_list_envelope_t;

#include "inquiry_request_dto.h"



typedef struct inquiry_request_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} inquiry_request_dto_list_envelope_t;

inquiry_request_dto_list_envelope_t *inquiry_request_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void inquiry_request_dto_list_envelope_free(inquiry_request_dto_list_envelope_t *inquiry_request_dto_list_envelope);

inquiry_request_dto_list_envelope_t *inquiry_request_dto_list_envelope_parseFromJSON(cJSON *inquiry_request_dto_list_envelopeJSON);

cJSON *inquiry_request_dto_list_envelope_convertToJSON(inquiry_request_dto_list_envelope_t *inquiry_request_dto_list_envelope);

#endif /* _inquiry_request_dto_list_envelope_H_ */

