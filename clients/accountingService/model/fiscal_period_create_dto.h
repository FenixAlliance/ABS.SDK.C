/*
 * fiscal_period_create_dto.h
 *
 * 
 */

#ifndef _fiscal_period_create_dto_H_
#define _fiscal_period_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct fiscal_period_create_dto_t fiscal_period_create_dto_t;




typedef struct fiscal_period_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *from_date; //date time
    char *to_date; //date time
    char *tenant_id; // string
    char *enrollment_id; // string
    char *fiscal_year_id; // string

} fiscal_period_create_dto_t;

fiscal_period_create_dto_t *fiscal_period_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *from_date,
    char *to_date,
    char *tenant_id,
    char *enrollment_id,
    char *fiscal_year_id
);

void fiscal_period_create_dto_free(fiscal_period_create_dto_t *fiscal_period_create_dto);

fiscal_period_create_dto_t *fiscal_period_create_dto_parseFromJSON(cJSON *fiscal_period_create_dtoJSON);

cJSON *fiscal_period_create_dto_convertToJSON(fiscal_period_create_dto_t *fiscal_period_create_dto);

#endif /* _fiscal_period_create_dto_H_ */

