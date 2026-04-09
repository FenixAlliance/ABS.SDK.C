/*
 * city_dto_list_envelope.h
 *
 * 
 */

#ifndef _city_dto_list_envelope_H_
#define _city_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct city_dto_list_envelope_t city_dto_list_envelope_t;

#include "city_dto.h"



typedef struct city_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} city_dto_list_envelope_t;

city_dto_list_envelope_t *city_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void city_dto_list_envelope_free(city_dto_list_envelope_t *city_dto_list_envelope);

city_dto_list_envelope_t *city_dto_list_envelope_parseFromJSON(cJSON *city_dto_list_envelopeJSON);

cJSON *city_dto_list_envelope_convertToJSON(city_dto_list_envelope_t *city_dto_list_envelope);

#endif /* _city_dto_list_envelope_H_ */

