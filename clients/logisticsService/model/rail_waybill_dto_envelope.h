/*
 * rail_waybill_dto_envelope.h
 *
 * 
 */

#ifndef _rail_waybill_dto_envelope_H_
#define _rail_waybill_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct rail_waybill_dto_envelope_t rail_waybill_dto_envelope_t;

#include "rail_waybill_dto.h"



typedef struct rail_waybill_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    int http_status; //numeric
    char *error_code; // string
    list_t* validation_details; //map
    char *activity_id; // string
    struct rail_waybill_dto_t *result; //model

} rail_waybill_dto_envelope_t;

rail_waybill_dto_envelope_t *rail_waybill_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    int http_status,
    char *error_code,
    list_t* validation_details,
    char *activity_id,
    rail_waybill_dto_t *result
);

void rail_waybill_dto_envelope_free(rail_waybill_dto_envelope_t *rail_waybill_dto_envelope);

rail_waybill_dto_envelope_t *rail_waybill_dto_envelope_parseFromJSON(cJSON *rail_waybill_dto_envelopeJSON);

cJSON *rail_waybill_dto_envelope_convertToJSON(rail_waybill_dto_envelope_t *rail_waybill_dto_envelope);

#endif /* _rail_waybill_dto_envelope_H_ */

