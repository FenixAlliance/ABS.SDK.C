/*
 * deal_unit_flow_stage_update_dto.h
 *
 * 
 */

#ifndef _deal_unit_flow_stage_update_dto_H_
#define _deal_unit_flow_stage_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct deal_unit_flow_stage_update_dto_t deal_unit_flow_stage_update_dto_t;




typedef struct deal_unit_flow_stage_update_dto_t {
    int order; //numeric
    char *name; // string
    char *description; // string
    char *enrollment_id; // string
    char *deal_unit_flow_id; // string
    char *parent_business_process_stage_id; // string

} deal_unit_flow_stage_update_dto_t;

deal_unit_flow_stage_update_dto_t *deal_unit_flow_stage_update_dto_create(
    int order,
    char *name,
    char *description,
    char *enrollment_id,
    char *deal_unit_flow_id,
    char *parent_business_process_stage_id
);

void deal_unit_flow_stage_update_dto_free(deal_unit_flow_stage_update_dto_t *deal_unit_flow_stage_update_dto);

deal_unit_flow_stage_update_dto_t *deal_unit_flow_stage_update_dto_parseFromJSON(cJSON *deal_unit_flow_stage_update_dtoJSON);

cJSON *deal_unit_flow_stage_update_dto_convertToJSON(deal_unit_flow_stage_update_dto_t *deal_unit_flow_stage_update_dto);

#endif /* _deal_unit_flow_stage_update_dto_H_ */

