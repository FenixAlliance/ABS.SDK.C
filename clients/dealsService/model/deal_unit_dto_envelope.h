/*
 * deal_unit_dto_envelope.h
 *
 * 
 */

#ifndef _deal_unit_dto_envelope_H_
#define _deal_unit_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct deal_unit_dto_envelope_t deal_unit_dto_envelope_t;

#include "deal_unit_dto.h"



typedef struct deal_unit_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct deal_unit_dto_t *result; //model

} deal_unit_dto_envelope_t;

deal_unit_dto_envelope_t *deal_unit_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    deal_unit_dto_t *result
);

void deal_unit_dto_envelope_free(deal_unit_dto_envelope_t *deal_unit_dto_envelope);

deal_unit_dto_envelope_t *deal_unit_dto_envelope_parseFromJSON(cJSON *deal_unit_dto_envelopeJSON);

cJSON *deal_unit_dto_envelope_convertToJSON(deal_unit_dto_envelope_t *deal_unit_dto_envelope);

#endif /* _deal_unit_dto_envelope_H_ */

