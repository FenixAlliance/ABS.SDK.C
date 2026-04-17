/*
 * accounting_period_update_dto.h
 *
 * 
 */

#ifndef _accounting_period_update_dto_H_
#define _accounting_period_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct accounting_period_update_dto_t accounting_period_update_dto_t;




typedef struct accounting_period_update_dto_t {
    char *name; // string
    char *date_start; //date time
    char *date_end; //date time

} accounting_period_update_dto_t;

accounting_period_update_dto_t *accounting_period_update_dto_create(
    char *name,
    char *date_start,
    char *date_end
);

void accounting_period_update_dto_free(accounting_period_update_dto_t *accounting_period_update_dto);

accounting_period_update_dto_t *accounting_period_update_dto_parseFromJSON(cJSON *accounting_period_update_dtoJSON);

cJSON *accounting_period_update_dto_convertToJSON(accounting_period_update_dto_t *accounting_period_update_dto);

#endif /* _accounting_period_update_dto_H_ */

