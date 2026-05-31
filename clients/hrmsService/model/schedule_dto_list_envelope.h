/*
 * schedule_dto_list_envelope.h
 *
 * 
 */

#ifndef _schedule_dto_list_envelope_H_
#define _schedule_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct schedule_dto_list_envelope_t schedule_dto_list_envelope_t;

#include "schedule_dto.h"



typedef struct schedule_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} schedule_dto_list_envelope_t;

schedule_dto_list_envelope_t *schedule_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void schedule_dto_list_envelope_free(schedule_dto_list_envelope_t *schedule_dto_list_envelope);

schedule_dto_list_envelope_t *schedule_dto_list_envelope_parseFromJSON(cJSON *schedule_dto_list_envelopeJSON);

cJSON *schedule_dto_list_envelope_convertToJSON(schedule_dto_list_envelope_t *schedule_dto_list_envelope);

#endif /* _schedule_dto_list_envelope_H_ */

