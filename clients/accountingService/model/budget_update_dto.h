/*
 * budget_update_dto.h
 *
 * 
 */

#ifndef _budget_update_dto_H_
#define _budget_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct budget_update_dto_t budget_update_dto_t;




typedef struct budget_update_dto_t {
    char *name; // string
    char *fiscal_year_id; // string

} budget_update_dto_t;

budget_update_dto_t *budget_update_dto_create(
    char *name,
    char *fiscal_year_id
);

void budget_update_dto_free(budget_update_dto_t *budget_update_dto);

budget_update_dto_t *budget_update_dto_parseFromJSON(cJSON *budget_update_dtoJSON);

cJSON *budget_update_dto_convertToJSON(budget_update_dto_t *budget_update_dto);

#endif /* _budget_update_dto_H_ */

