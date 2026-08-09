/*
 * leave_application_dto_envelope.h
 *
 * 
 */

#ifndef _leave_application_dto_envelope_H_
#define _leave_application_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct leave_application_dto_envelope_t leave_application_dto_envelope_t;

#include "leave_application_dto.h"



typedef struct leave_application_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    int http_status; //numeric
    char *error_code; // string
    list_t* validation_details; //map
    char *activity_id; // string
    struct leave_application_dto_t *result; //model

} leave_application_dto_envelope_t;

leave_application_dto_envelope_t *leave_application_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    int http_status,
    char *error_code,
    list_t* validation_details,
    char *activity_id,
    leave_application_dto_t *result
);

void leave_application_dto_envelope_free(leave_application_dto_envelope_t *leave_application_dto_envelope);

leave_application_dto_envelope_t *leave_application_dto_envelope_parseFromJSON(cJSON *leave_application_dto_envelopeJSON);

cJSON *leave_application_dto_envelope_convertToJSON(leave_application_dto_envelope_t *leave_application_dto_envelope);

#endif /* _leave_application_dto_envelope_H_ */

