/*
 * extended_deal_unit_dto_envelope.h
 *
 * 
 */

#ifndef _extended_deal_unit_dto_envelope_H_
#define _extended_deal_unit_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct extended_deal_unit_dto_envelope_t extended_deal_unit_dto_envelope_t;

#include "extended_deal_unit_dto.h"



typedef struct extended_deal_unit_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct extended_deal_unit_dto_t *result; //model

} extended_deal_unit_dto_envelope_t;

extended_deal_unit_dto_envelope_t *extended_deal_unit_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    extended_deal_unit_dto_t *result
);

void extended_deal_unit_dto_envelope_free(extended_deal_unit_dto_envelope_t *extended_deal_unit_dto_envelope);

extended_deal_unit_dto_envelope_t *extended_deal_unit_dto_envelope_parseFromJSON(cJSON *extended_deal_unit_dto_envelopeJSON);

cJSON *extended_deal_unit_dto_envelope_convertToJSON(extended_deal_unit_dto_envelope_t *extended_deal_unit_dto_envelope);

#endif /* _extended_deal_unit_dto_envelope_H_ */

