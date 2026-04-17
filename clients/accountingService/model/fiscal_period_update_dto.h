/*
 * fiscal_period_update_dto.h
 *
 * 
 */

#ifndef _fiscal_period_update_dto_H_
#define _fiscal_period_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct fiscal_period_update_dto_t fiscal_period_update_dto_t;




typedef struct fiscal_period_update_dto_t {
    char *name; // string
    char *from_date; //date time
    char *to_date; //date time
    char *fiscal_year_id; // string

} fiscal_period_update_dto_t;

fiscal_period_update_dto_t *fiscal_period_update_dto_create(
    char *name,
    char *from_date,
    char *to_date,
    char *fiscal_year_id
);

void fiscal_period_update_dto_free(fiscal_period_update_dto_t *fiscal_period_update_dto);

fiscal_period_update_dto_t *fiscal_period_update_dto_parseFromJSON(cJSON *fiscal_period_update_dtoJSON);

cJSON *fiscal_period_update_dto_convertToJSON(fiscal_period_update_dto_t *fiscal_period_update_dto);

#endif /* _fiscal_period_update_dto_H_ */

