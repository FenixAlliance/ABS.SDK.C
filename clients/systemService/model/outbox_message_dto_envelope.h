/*
 * outbox_message_dto_envelope.h
 *
 * 
 */

#ifndef _outbox_message_dto_envelope_H_
#define _outbox_message_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct outbox_message_dto_envelope_t outbox_message_dto_envelope_t;

#include "outbox_message_dto.h"



typedef struct outbox_message_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    int http_status; //numeric
    char *error_code; // string
    list_t* validation_details; //map
    char *activity_id; // string
    struct outbox_message_dto_t *result; //model

} outbox_message_dto_envelope_t;

outbox_message_dto_envelope_t *outbox_message_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    int http_status,
    char *error_code,
    list_t* validation_details,
    char *activity_id,
    outbox_message_dto_t *result
);

void outbox_message_dto_envelope_free(outbox_message_dto_envelope_t *outbox_message_dto_envelope);

outbox_message_dto_envelope_t *outbox_message_dto_envelope_parseFromJSON(cJSON *outbox_message_dto_envelopeJSON);

cJSON *outbox_message_dto_envelope_convertToJSON(outbox_message_dto_envelope_t *outbox_message_dto_envelope);

#endif /* _outbox_message_dto_envelope_H_ */

