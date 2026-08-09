/*
 * capability_dto_list_envelope.h
 *
 * 
 */

#ifndef _capability_dto_list_envelope_H_
#define _capability_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct capability_dto_list_envelope_t capability_dto_list_envelope_t;

#include "capability_dto.h"



typedef struct capability_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    int http_status; //numeric
    char *error_code; // string
    list_t* validation_details; //map
    char *activity_id; // string
    list_t *result; //nonprimitive container

} capability_dto_list_envelope_t;

capability_dto_list_envelope_t *capability_dto_list_envelope_create(
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

void capability_dto_list_envelope_free(capability_dto_list_envelope_t *capability_dto_list_envelope);

capability_dto_list_envelope_t *capability_dto_list_envelope_parseFromJSON(cJSON *capability_dto_list_envelopeJSON);

cJSON *capability_dto_list_envelope_convertToJSON(capability_dto_list_envelope_t *capability_dto_list_envelope);

#endif /* _capability_dto_list_envelope_H_ */

