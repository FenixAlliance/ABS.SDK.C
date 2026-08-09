/*
 * return_request_dto_list_envelope.h
 *
 * 
 */

#ifndef _return_request_dto_list_envelope_H_
#define _return_request_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct return_request_dto_list_envelope_t return_request_dto_list_envelope_t;

#include "return_request_dto.h"



typedef struct return_request_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    int http_status; //numeric
    char *error_code; // string
    list_t* validation_details; //map
    char *activity_id; // string
    list_t *result; //nonprimitive container

} return_request_dto_list_envelope_t;

return_request_dto_list_envelope_t *return_request_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    int http_status,
    char *error_code,
    list_t* validation_details,
    char *activity_id,
    list_t *result
);

void return_request_dto_list_envelope_free(return_request_dto_list_envelope_t *return_request_dto_list_envelope);

return_request_dto_list_envelope_t *return_request_dto_list_envelope_parseFromJSON(cJSON *return_request_dto_list_envelopeJSON);

cJSON *return_request_dto_list_envelope_convertToJSON(return_request_dto_list_envelope_t *return_request_dto_list_envelope);

#endif /* _return_request_dto_list_envelope_H_ */

