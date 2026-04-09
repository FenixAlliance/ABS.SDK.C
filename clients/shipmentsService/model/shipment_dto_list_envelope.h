/*
 * shipment_dto_list_envelope.h
 *
 * 
 */

#ifndef _shipment_dto_list_envelope_H_
#define _shipment_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct shipment_dto_list_envelope_t shipment_dto_list_envelope_t;

#include "shipment_dto.h"



typedef struct shipment_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} shipment_dto_list_envelope_t;

shipment_dto_list_envelope_t *shipment_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void shipment_dto_list_envelope_free(shipment_dto_list_envelope_t *shipment_dto_list_envelope);

shipment_dto_list_envelope_t *shipment_dto_list_envelope_parseFromJSON(cJSON *shipment_dto_list_envelopeJSON);

cJSON *shipment_dto_list_envelope_convertToJSON(shipment_dto_list_envelope_t *shipment_dto_list_envelope);

#endif /* _shipment_dto_list_envelope_H_ */

