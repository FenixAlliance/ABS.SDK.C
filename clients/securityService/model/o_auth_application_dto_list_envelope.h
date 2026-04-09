/*
 * o_auth_application_dto_list_envelope.h
 *
 * 
 */

#ifndef _o_auth_application_dto_list_envelope_H_
#define _o_auth_application_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct o_auth_application_dto_list_envelope_t o_auth_application_dto_list_envelope_t;

#include "o_auth_application_dto.h"



typedef struct o_auth_application_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} o_auth_application_dto_list_envelope_t;

o_auth_application_dto_list_envelope_t *o_auth_application_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void o_auth_application_dto_list_envelope_free(o_auth_application_dto_list_envelope_t *o_auth_application_dto_list_envelope);

o_auth_application_dto_list_envelope_t *o_auth_application_dto_list_envelope_parseFromJSON(cJSON *o_auth_application_dto_list_envelopeJSON);

cJSON *o_auth_application_dto_list_envelope_convertToJSON(o_auth_application_dto_list_envelope_t *o_auth_application_dto_list_envelope);

#endif /* _o_auth_application_dto_list_envelope_H_ */

