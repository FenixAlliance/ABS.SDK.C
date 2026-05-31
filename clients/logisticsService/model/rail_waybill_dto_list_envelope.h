/*
 * rail_waybill_dto_list_envelope.h
 *
 * 
 */

#ifndef _rail_waybill_dto_list_envelope_H_
#define _rail_waybill_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct rail_waybill_dto_list_envelope_t rail_waybill_dto_list_envelope_t;

#include "rail_waybill_dto.h"



typedef struct rail_waybill_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} rail_waybill_dto_list_envelope_t;

rail_waybill_dto_list_envelope_t *rail_waybill_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void rail_waybill_dto_list_envelope_free(rail_waybill_dto_list_envelope_t *rail_waybill_dto_list_envelope);

rail_waybill_dto_list_envelope_t *rail_waybill_dto_list_envelope_parseFromJSON(cJSON *rail_waybill_dto_list_envelopeJSON);

cJSON *rail_waybill_dto_list_envelope_convertToJSON(rail_waybill_dto_list_envelope_t *rail_waybill_dto_list_envelope);

#endif /* _rail_waybill_dto_list_envelope_H_ */

