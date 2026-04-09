/*
 * accounting_period_create_dto.h
 *
 * 
 */

#ifndef _accounting_period_create_dto_H_
#define _accounting_period_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct accounting_period_create_dto_t accounting_period_create_dto_t;




typedef struct accounting_period_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *tenant_id; // string
    char *enrollment_id; // string
    char *date_start; //date time
    char *date_end; //date time

} accounting_period_create_dto_t;

accounting_period_create_dto_t *accounting_period_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *tenant_id,
    char *enrollment_id,
    char *date_start,
    char *date_end
);

void accounting_period_create_dto_free(accounting_period_create_dto_t *accounting_period_create_dto);

accounting_period_create_dto_t *accounting_period_create_dto_parseFromJSON(cJSON *accounting_period_create_dtoJSON);

cJSON *accounting_period_create_dto_convertToJSON(accounting_period_create_dto_t *accounting_period_create_dto);

#endif /* _accounting_period_create_dto_H_ */

