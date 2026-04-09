/*
 * private_message_dto_list_envelope.h
 *
 * 
 */

#ifndef _private_message_dto_list_envelope_H_
#define _private_message_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct private_message_dto_list_envelope_t private_message_dto_list_envelope_t;

#include "private_message_dto.h"



typedef struct private_message_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} private_message_dto_list_envelope_t;

private_message_dto_list_envelope_t *private_message_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void private_message_dto_list_envelope_free(private_message_dto_list_envelope_t *private_message_dto_list_envelope);

private_message_dto_list_envelope_t *private_message_dto_list_envelope_parseFromJSON(cJSON *private_message_dto_list_envelopeJSON);

cJSON *private_message_dto_list_envelope_convertToJSON(private_message_dto_list_envelope_t *private_message_dto_list_envelope);

#endif /* _private_message_dto_list_envelope_H_ */

