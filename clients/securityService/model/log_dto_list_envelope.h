/*
 * log_dto_list_envelope.h
 *
 * 
 */

#ifndef _log_dto_list_envelope_H_
#define _log_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct log_dto_list_envelope_t log_dto_list_envelope_t;

#include "log_dto.h"



typedef struct log_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} log_dto_list_envelope_t;

log_dto_list_envelope_t *log_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void log_dto_list_envelope_free(log_dto_list_envelope_t *log_dto_list_envelope);

log_dto_list_envelope_t *log_dto_list_envelope_parseFromJSON(cJSON *log_dto_list_envelopeJSON);

cJSON *log_dto_list_envelope_convertToJSON(log_dto_list_envelope_t *log_dto_list_envelope);

#endif /* _log_dto_list_envelope_H_ */

