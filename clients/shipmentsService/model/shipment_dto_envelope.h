/*
 * shipment_dto_envelope.h
 *
 * 
 */

#ifndef _shipment_dto_envelope_H_
#define _shipment_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct shipment_dto_envelope_t shipment_dto_envelope_t;

#include "shipment_dto.h"



typedef struct shipment_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct shipment_dto_t *result; //model

} shipment_dto_envelope_t;

shipment_dto_envelope_t *shipment_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    shipment_dto_t *result
);

void shipment_dto_envelope_free(shipment_dto_envelope_t *shipment_dto_envelope);

shipment_dto_envelope_t *shipment_dto_envelope_parseFromJSON(cJSON *shipment_dto_envelopeJSON);

cJSON *shipment_dto_envelope_convertToJSON(shipment_dto_envelope_t *shipment_dto_envelope);

#endif /* _shipment_dto_envelope_H_ */

