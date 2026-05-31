/*
 * shipping_zone_dto_list_envelope.h
 *
 * 
 */

#ifndef _shipping_zone_dto_list_envelope_H_
#define _shipping_zone_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct shipping_zone_dto_list_envelope_t shipping_zone_dto_list_envelope_t;

#include "shipping_zone_dto.h"



typedef struct shipping_zone_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} shipping_zone_dto_list_envelope_t;

shipping_zone_dto_list_envelope_t *shipping_zone_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void shipping_zone_dto_list_envelope_free(shipping_zone_dto_list_envelope_t *shipping_zone_dto_list_envelope);

shipping_zone_dto_list_envelope_t *shipping_zone_dto_list_envelope_parseFromJSON(cJSON *shipping_zone_dto_list_envelopeJSON);

cJSON *shipping_zone_dto_list_envelope_convertToJSON(shipping_zone_dto_list_envelope_t *shipping_zone_dto_list_envelope);

#endif /* _shipping_zone_dto_list_envelope_H_ */

