/*
 * production_plan_update_dto.h
 *
 * 
 */

#ifndef _production_plan_update_dto_H_
#define _production_plan_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct production_plan_update_dto_t production_plan_update_dto_t;




typedef struct production_plan_update_dto_t {
    char *title; // string
    char *description; // string

} production_plan_update_dto_t;

production_plan_update_dto_t *production_plan_update_dto_create(
    char *title,
    char *description
);

void production_plan_update_dto_free(production_plan_update_dto_t *production_plan_update_dto);

production_plan_update_dto_t *production_plan_update_dto_parseFromJSON(cJSON *production_plan_update_dtoJSON);

cJSON *production_plan_update_dto_convertToJSON(production_plan_update_dto_t *production_plan_update_dto);

#endif /* _production_plan_update_dto_H_ */

