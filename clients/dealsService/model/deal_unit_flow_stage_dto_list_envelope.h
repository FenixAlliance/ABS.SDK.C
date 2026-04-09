/*
 * deal_unit_flow_stage_dto_list_envelope.h
 *
 * 
 */

#ifndef _deal_unit_flow_stage_dto_list_envelope_H_
#define _deal_unit_flow_stage_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct deal_unit_flow_stage_dto_list_envelope_t deal_unit_flow_stage_dto_list_envelope_t;

#include "deal_unit_flow_stage_dto.h"



typedef struct deal_unit_flow_stage_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} deal_unit_flow_stage_dto_list_envelope_t;

deal_unit_flow_stage_dto_list_envelope_t *deal_unit_flow_stage_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void deal_unit_flow_stage_dto_list_envelope_free(deal_unit_flow_stage_dto_list_envelope_t *deal_unit_flow_stage_dto_list_envelope);

deal_unit_flow_stage_dto_list_envelope_t *deal_unit_flow_stage_dto_list_envelope_parseFromJSON(cJSON *deal_unit_flow_stage_dto_list_envelopeJSON);

cJSON *deal_unit_flow_stage_dto_list_envelope_convertToJSON(deal_unit_flow_stage_dto_list_envelope_t *deal_unit_flow_stage_dto_list_envelope);

#endif /* _deal_unit_flow_stage_dto_list_envelope_H_ */

