/*
 * deal_unit_flow_stage_create_dto.h
 *
 * 
 */

#ifndef _deal_unit_flow_stage_create_dto_H_
#define _deal_unit_flow_stage_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct deal_unit_flow_stage_create_dto_t deal_unit_flow_stage_create_dto_t;




typedef struct deal_unit_flow_stage_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    int order; //numeric
    char *name; // string
    char *deal_unit_flow_id; // string
    char *tenant_id; // string
    char *description; // string
    char *enrollment_id; // string
    char *parent_business_process_stage_id; // string

} deal_unit_flow_stage_create_dto_t;

deal_unit_flow_stage_create_dto_t *deal_unit_flow_stage_create_dto_create(
    char *id,
    char *timestamp,
    int order,
    char *name,
    char *deal_unit_flow_id,
    char *tenant_id,
    char *description,
    char *enrollment_id,
    char *parent_business_process_stage_id
);

void deal_unit_flow_stage_create_dto_free(deal_unit_flow_stage_create_dto_t *deal_unit_flow_stage_create_dto);

deal_unit_flow_stage_create_dto_t *deal_unit_flow_stage_create_dto_parseFromJSON(cJSON *deal_unit_flow_stage_create_dtoJSON);

cJSON *deal_unit_flow_stage_create_dto_convertToJSON(deal_unit_flow_stage_create_dto_t *deal_unit_flow_stage_create_dto);

#endif /* _deal_unit_flow_stage_create_dto_H_ */

