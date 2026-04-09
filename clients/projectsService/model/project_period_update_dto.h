/*
 * project_period_update_dto.h
 *
 * 
 */

#ifndef _project_period_update_dto_H_
#define _project_period_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct project_period_update_dto_t project_period_update_dto_t;




typedef struct project_period_update_dto_t {
    char *period_start_date; //date time
    char *period_end_date; //date time

} project_period_update_dto_t;

project_period_update_dto_t *project_period_update_dto_create(
    char *period_start_date,
    char *period_end_date
);

void project_period_update_dto_free(project_period_update_dto_t *project_period_update_dto);

project_period_update_dto_t *project_period_update_dto_parseFromJSON(cJSON *project_period_update_dtoJSON);

cJSON *project_period_update_dto_convertToJSON(project_period_update_dto_t *project_period_update_dto);

#endif /* _project_period_update_dto_H_ */

