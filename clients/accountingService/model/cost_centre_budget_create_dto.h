/*
 * cost_centre_budget_create_dto.h
 *
 * 
 */

#ifndef _cost_centre_budget_create_dto_H_
#define _cost_centre_budget_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cost_centre_budget_create_dto_t cost_centre_budget_create_dto_t;




typedef struct cost_centre_budget_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *fiscal_year_id; // string
    char *cost_centre_id; // string

} cost_centre_budget_create_dto_t;

cost_centre_budget_create_dto_t *cost_centre_budget_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *fiscal_year_id,
    char *cost_centre_id
);

void cost_centre_budget_create_dto_free(cost_centre_budget_create_dto_t *cost_centre_budget_create_dto);

cost_centre_budget_create_dto_t *cost_centre_budget_create_dto_parseFromJSON(cJSON *cost_centre_budget_create_dtoJSON);

cJSON *cost_centre_budget_create_dto_convertToJSON(cost_centre_budget_create_dto_t *cost_centre_budget_create_dto);

#endif /* _cost_centre_budget_create_dto_H_ */

