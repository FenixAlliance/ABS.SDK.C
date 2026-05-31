/*
 * airway_bill_dto_envelope.h
 *
 * 
 */

#ifndef _airway_bill_dto_envelope_H_
#define _airway_bill_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct airway_bill_dto_envelope_t airway_bill_dto_envelope_t;

#include "airway_bill_dto.h"



typedef struct airway_bill_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct airway_bill_dto_t *result; //model

} airway_bill_dto_envelope_t;

airway_bill_dto_envelope_t *airway_bill_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    airway_bill_dto_t *result
);

void airway_bill_dto_envelope_free(airway_bill_dto_envelope_t *airway_bill_dto_envelope);

airway_bill_dto_envelope_t *airway_bill_dto_envelope_parseFromJSON(cJSON *airway_bill_dto_envelopeJSON);

cJSON *airway_bill_dto_envelope_convertToJSON(airway_bill_dto_envelope_t *airway_bill_dto_envelope);

#endif /* _airway_bill_dto_envelope_H_ */

