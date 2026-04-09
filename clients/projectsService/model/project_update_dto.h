/*
 * project_update_dto.h
 *
 * 
 */

#ifndef _project_update_dto_H_
#define _project_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct project_update_dto_t project_update_dto_t;




typedef struct project_update_dto_t {
    char *title; // string
    char *description; // string
    char *project_start_date; //date time
    char *project_end_date; //date time

} project_update_dto_t;

project_update_dto_t *project_update_dto_create(
    char *title,
    char *description,
    char *project_start_date,
    char *project_end_date
);

void project_update_dto_free(project_update_dto_t *project_update_dto);

project_update_dto_t *project_update_dto_parseFromJSON(cJSON *project_update_dtoJSON);

cJSON *project_update_dto_convertToJSON(project_update_dto_t *project_update_dto);

#endif /* _project_update_dto_H_ */

