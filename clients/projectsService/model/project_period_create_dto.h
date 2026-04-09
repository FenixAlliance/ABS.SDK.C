/*
 * project_period_create_dto.h
 *
 * 
 */

#ifndef _project_period_create_dto_H_
#define _project_period_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct project_period_create_dto_t project_period_create_dto_t;




typedef struct project_period_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *period_start_date; //date time
    char *period_end_date; //date time
    char *project_id; // string

} project_period_create_dto_t;

project_period_create_dto_t *project_period_create_dto_create(
    char *id,
    char *timestamp,
    char *period_start_date,
    char *period_end_date,
    char *project_id
);

void project_period_create_dto_free(project_period_create_dto_t *project_period_create_dto);

project_period_create_dto_t *project_period_create_dto_parseFromJSON(cJSON *project_period_create_dtoJSON);

cJSON *project_period_create_dto_convertToJSON(project_period_create_dto_t *project_period_create_dto);

#endif /* _project_period_create_dto_H_ */

