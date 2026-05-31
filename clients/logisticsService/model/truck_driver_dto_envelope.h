/*
 * truck_driver_dto_envelope.h
 *
 * 
 */

#ifndef _truck_driver_dto_envelope_H_
#define _truck_driver_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct truck_driver_dto_envelope_t truck_driver_dto_envelope_t;

#include "truck_driver_dto.h"



typedef struct truck_driver_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct truck_driver_dto_t *result; //model

} truck_driver_dto_envelope_t;

truck_driver_dto_envelope_t *truck_driver_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    truck_driver_dto_t *result
);

void truck_driver_dto_envelope_free(truck_driver_dto_envelope_t *truck_driver_dto_envelope);

truck_driver_dto_envelope_t *truck_driver_dto_envelope_parseFromJSON(cJSON *truck_driver_dto_envelopeJSON);

cJSON *truck_driver_dto_envelope_convertToJSON(truck_driver_dto_envelope_t *truck_driver_dto_envelope);

#endif /* _truck_driver_dto_envelope_H_ */

