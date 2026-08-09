/*
 * shipping_courier_dto_envelope.h
 *
 * 
 */

#ifndef _shipping_courier_dto_envelope_H_
#define _shipping_courier_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct shipping_courier_dto_envelope_t shipping_courier_dto_envelope_t;

#include "shipping_courier_dto.h"



typedef struct shipping_courier_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    int http_status; //numeric
    char *error_code; // string
    list_t* validation_details; //map
    char *activity_id; // string
    struct shipping_courier_dto_t *result; //model

} shipping_courier_dto_envelope_t;

shipping_courier_dto_envelope_t *shipping_courier_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    int http_status,
    char *error_code,
    list_t* validation_details,
    char *activity_id,
    shipping_courier_dto_t *result
);

void shipping_courier_dto_envelope_free(shipping_courier_dto_envelope_t *shipping_courier_dto_envelope);

shipping_courier_dto_envelope_t *shipping_courier_dto_envelope_parseFromJSON(cJSON *shipping_courier_dto_envelopeJSON);

cJSON *shipping_courier_dto_envelope_convertToJSON(shipping_courier_dto_envelope_t *shipping_courier_dto_envelope);

#endif /* _shipping_courier_dto_envelope_H_ */

