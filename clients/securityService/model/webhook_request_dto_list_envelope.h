/*
 * webhook_request_dto_list_envelope.h
 *
 * 
 */

#ifndef _webhook_request_dto_list_envelope_H_
#define _webhook_request_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_request_dto_list_envelope_t webhook_request_dto_list_envelope_t;

#include "webhook_request_dto.h"



typedef struct webhook_request_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} webhook_request_dto_list_envelope_t;

webhook_request_dto_list_envelope_t *webhook_request_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void webhook_request_dto_list_envelope_free(webhook_request_dto_list_envelope_t *webhook_request_dto_list_envelope);

webhook_request_dto_list_envelope_t *webhook_request_dto_list_envelope_parseFromJSON(cJSON *webhook_request_dto_list_envelopeJSON);

cJSON *webhook_request_dto_list_envelope_convertToJSON(webhook_request_dto_list_envelope_t *webhook_request_dto_list_envelope);

#endif /* _webhook_request_dto_list_envelope_H_ */

