/*
 * cost_centre_budget_update_dto.h
 *
 * 
 */

#ifndef _cost_centre_budget_update_dto_H_
#define _cost_centre_budget_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cost_centre_budget_update_dto_t cost_centre_budget_update_dto_t;




typedef struct cost_centre_budget_update_dto_t {
    char *name; // string
    char *fiscal_year_id; // string
    char *cost_centre_id; // string

} cost_centre_budget_update_dto_t;

cost_centre_budget_update_dto_t *cost_centre_budget_update_dto_create(
    char *name,
    char *fiscal_year_id,
    char *cost_centre_id
);

void cost_centre_budget_update_dto_free(cost_centre_budget_update_dto_t *cost_centre_budget_update_dto);

cost_centre_budget_update_dto_t *cost_centre_budget_update_dto_parseFromJSON(cJSON *cost_centre_budget_update_dtoJSON);

cJSON *cost_centre_budget_update_dto_convertToJSON(cost_centre_budget_update_dto_t *cost_centre_budget_update_dto);

#endif /* _cost_centre_budget_update_dto_H_ */

