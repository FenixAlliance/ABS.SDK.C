/*
 * shipping_class_dto_envelope.h
 *
 * 
 */

#ifndef _shipping_class_dto_envelope_H_
#define _shipping_class_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct shipping_class_dto_envelope_t shipping_class_dto_envelope_t;

#include "shipping_class_dto.h"



typedef struct shipping_class_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct shipping_class_dto_t *result; //model

} shipping_class_dto_envelope_t;

shipping_class_dto_envelope_t *shipping_class_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    shipping_class_dto_t *result
);

void shipping_class_dto_envelope_free(shipping_class_dto_envelope_t *shipping_class_dto_envelope);

shipping_class_dto_envelope_t *shipping_class_dto_envelope_parseFromJSON(cJSON *shipping_class_dto_envelopeJSON);

cJSON *shipping_class_dto_envelope_convertToJSON(shipping_class_dto_envelope_t *shipping_class_dto_envelope);

#endif /* _shipping_class_dto_envelope_H_ */

