/*
 * truck_trip_dto_list_envelope.h
 *
 * 
 */

#ifndef _truck_trip_dto_list_envelope_H_
#define _truck_trip_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct truck_trip_dto_list_envelope_t truck_trip_dto_list_envelope_t;

#include "truck_trip_dto.h"



typedef struct truck_trip_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    int http_status; //numeric
    char *error_code; // string
    list_t* validation_details; //map
    char *activity_id; // string
    list_t *result; //nonprimitive container

} truck_trip_dto_list_envelope_t;

truck_trip_dto_list_envelope_t *truck_trip_dto_list_envelope_create(
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

void truck_trip_dto_list_envelope_free(truck_trip_dto_list_envelope_t *truck_trip_dto_list_envelope);

truck_trip_dto_list_envelope_t *truck_trip_dto_list_envelope_parseFromJSON(cJSON *truck_trip_dto_list_envelopeJSON);

cJSON *truck_trip_dto_list_envelope_convertToJSON(truck_trip_dto_list_envelope_t *truck_trip_dto_list_envelope);

#endif /* _truck_trip_dto_list_envelope_H_ */

