/*
 * point_of_sale_dto_envelope.h
 *
 * 
 */

#ifndef _point_of_sale_dto_envelope_H_
#define _point_of_sale_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct point_of_sale_dto_envelope_t point_of_sale_dto_envelope_t;

#include "point_of_sale_dto.h"



typedef struct point_of_sale_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct point_of_sale_dto_t *result; //model

} point_of_sale_dto_envelope_t;

point_of_sale_dto_envelope_t *point_of_sale_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    point_of_sale_dto_t *result
);

void point_of_sale_dto_envelope_free(point_of_sale_dto_envelope_t *point_of_sale_dto_envelope);

point_of_sale_dto_envelope_t *point_of_sale_dto_envelope_parseFromJSON(cJSON *point_of_sale_dto_envelopeJSON);

cJSON *point_of_sale_dto_envelope_convertToJSON(point_of_sale_dto_envelope_t *point_of_sale_dto_envelope);

#endif /* _point_of_sale_dto_envelope_H_ */

