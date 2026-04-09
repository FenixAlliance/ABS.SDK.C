/*
 * budget_dto.h
 *
 * 
 */

#ifndef _budget_dto_H_
#define _budget_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct budget_dto_t budget_dto_t;




typedef struct budget_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *tenant_id; // string
    char *fiscal_year_id; // string

} budget_dto_t;

budget_dto_t *budget_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *tenant_id,
    char *fiscal_year_id
);

void budget_dto_free(budget_dto_t *budget_dto);

budget_dto_t *budget_dto_parseFromJSON(cJSON *budget_dtoJSON);

cJSON *budget_dto_convertToJSON(budget_dto_t *budget_dto);

#endif /* _budget_dto_H_ */

