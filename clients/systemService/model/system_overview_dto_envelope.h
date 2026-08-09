/*
 * system_overview_dto_envelope.h
 *
 * 
 */

#ifndef _system_overview_dto_envelope_H_
#define _system_overview_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct system_overview_dto_envelope_t system_overview_dto_envelope_t;

#include "system_overview_dto.h"



typedef struct system_overview_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    int http_status; //numeric
    char *error_code; // string
    list_t* validation_details; //map
    char *activity_id; // string
    struct system_overview_dto_t *result; //model

} system_overview_dto_envelope_t;

system_overview_dto_envelope_t *system_overview_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    int http_status,
    char *error_code,
    list_t* validation_details,
    char *activity_id,
    system_overview_dto_t *result
);

void system_overview_dto_envelope_free(system_overview_dto_envelope_t *system_overview_dto_envelope);

system_overview_dto_envelope_t *system_overview_dto_envelope_parseFromJSON(cJSON *system_overview_dto_envelopeJSON);

cJSON *system_overview_dto_envelope_convertToJSON(system_overview_dto_envelope_t *system_overview_dto_envelope);

#endif /* _system_overview_dto_envelope_H_ */

