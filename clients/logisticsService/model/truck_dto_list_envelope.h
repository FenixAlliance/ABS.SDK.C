/*
 * truck_dto_list_envelope.h
 *
 * 
 */

#ifndef _truck_dto_list_envelope_H_
#define _truck_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct truck_dto_list_envelope_t truck_dto_list_envelope_t;

#include "truck_dto.h"



typedef struct truck_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} truck_dto_list_envelope_t;

truck_dto_list_envelope_t *truck_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void truck_dto_list_envelope_free(truck_dto_list_envelope_t *truck_dto_list_envelope);

truck_dto_list_envelope_t *truck_dto_list_envelope_parseFromJSON(cJSON *truck_dto_list_envelopeJSON);

cJSON *truck_dto_list_envelope_convertToJSON(truck_dto_list_envelope_t *truck_dto_list_envelope);

#endif /* _truck_dto_list_envelope_H_ */

