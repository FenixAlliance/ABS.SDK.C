/*
 * deal_unit_flow_update_dto.h
 *
 * 
 */

#ifndef _deal_unit_flow_update_dto_H_
#define _deal_unit_flow_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct deal_unit_flow_update_dto_t deal_unit_flow_update_dto_t;




typedef struct deal_unit_flow_update_dto_t {
    char *name; // string
    char *description; // string
    char *parent_business_process_id; // string
    char *tenant_id; // string
    char *tenant_enrollment_id; // string

} deal_unit_flow_update_dto_t;

deal_unit_flow_update_dto_t *deal_unit_flow_update_dto_create(
    char *name,
    char *description,
    char *parent_business_process_id,
    char *tenant_id,
    char *tenant_enrollment_id
);

void deal_unit_flow_update_dto_free(deal_unit_flow_update_dto_t *deal_unit_flow_update_dto);

deal_unit_flow_update_dto_t *deal_unit_flow_update_dto_parseFromJSON(cJSON *deal_unit_flow_update_dtoJSON);

cJSON *deal_unit_flow_update_dto_convertToJSON(deal_unit_flow_update_dto_t *deal_unit_flow_update_dto);

#endif /* _deal_unit_flow_update_dto_H_ */

