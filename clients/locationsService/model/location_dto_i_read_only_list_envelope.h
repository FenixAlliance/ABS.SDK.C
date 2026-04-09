/*
 * location_dto_i_read_only_list_envelope.h
 *
 * 
 */

#ifndef _location_dto_i_read_only_list_envelope_H_
#define _location_dto_i_read_only_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct location_dto_i_read_only_list_envelope_t location_dto_i_read_only_list_envelope_t;

#include "location_dto.h"



typedef struct location_dto_i_read_only_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} location_dto_i_read_only_list_envelope_t;

location_dto_i_read_only_list_envelope_t *location_dto_i_read_only_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void location_dto_i_read_only_list_envelope_free(location_dto_i_read_only_list_envelope_t *location_dto_i_read_only_list_envelope);

location_dto_i_read_only_list_envelope_t *location_dto_i_read_only_list_envelope_parseFromJSON(cJSON *location_dto_i_read_only_list_envelopeJSON);

cJSON *location_dto_i_read_only_list_envelope_convertToJSON(location_dto_i_read_only_list_envelope_t *location_dto_i_read_only_list_envelope);

#endif /* _location_dto_i_read_only_list_envelope_H_ */

