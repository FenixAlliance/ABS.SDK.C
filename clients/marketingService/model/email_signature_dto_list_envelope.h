/*
 * email_signature_dto_list_envelope.h
 *
 * 
 */

#ifndef _email_signature_dto_list_envelope_H_
#define _email_signature_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct email_signature_dto_list_envelope_t email_signature_dto_list_envelope_t;

#include "email_signature_dto.h"



typedef struct email_signature_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} email_signature_dto_list_envelope_t;

email_signature_dto_list_envelope_t *email_signature_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void email_signature_dto_list_envelope_free(email_signature_dto_list_envelope_t *email_signature_dto_list_envelope);

email_signature_dto_list_envelope_t *email_signature_dto_list_envelope_parseFromJSON(cJSON *email_signature_dto_list_envelopeJSON);

cJSON *email_signature_dto_list_envelope_convertToJSON(email_signature_dto_list_envelope_t *email_signature_dto_list_envelope);

#endif /* _email_signature_dto_list_envelope_H_ */

