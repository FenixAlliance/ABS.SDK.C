/*
 * production_plan_dto.h
 *
 * 
 */

#ifndef _production_plan_dto_H_
#define _production_plan_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct production_plan_dto_t production_plan_dto_t;




typedef struct production_plan_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *description; // string
    char *tenant_id; // string

} production_plan_dto_t;

production_plan_dto_t *production_plan_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *tenant_id
);

void production_plan_dto_free(production_plan_dto_t *production_plan_dto);

production_plan_dto_t *production_plan_dto_parseFromJSON(cJSON *production_plan_dtoJSON);

cJSON *production_plan_dto_convertToJSON(production_plan_dto_t *production_plan_dto);

#endif /* _production_plan_dto_H_ */

