/*
 * timezone_dto_list_envelope.h
 *
 * 
 */

#ifndef _timezone_dto_list_envelope_H_
#define _timezone_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct timezone_dto_list_envelope_t timezone_dto_list_envelope_t;

#include "timezone_dto.h"



typedef struct timezone_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} timezone_dto_list_envelope_t;

timezone_dto_list_envelope_t *timezone_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void timezone_dto_list_envelope_free(timezone_dto_list_envelope_t *timezone_dto_list_envelope);

timezone_dto_list_envelope_t *timezone_dto_list_envelope_parseFromJSON(cJSON *timezone_dto_list_envelopeJSON);

cJSON *timezone_dto_list_envelope_convertToJSON(timezone_dto_list_envelope_t *timezone_dto_list_envelope);

#endif /* _timezone_dto_list_envelope_H_ */

