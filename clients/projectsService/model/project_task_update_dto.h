/*
 * project_task_update_dto.h
 *
 * 
 */

#ifndef _project_task_update_dto_H_
#define _project_task_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct project_task_update_dto_t project_task_update_dto_t;




typedef struct project_task_update_dto_t {
    char *start_date; //date time
    char *due_line; //date time

} project_task_update_dto_t;

project_task_update_dto_t *project_task_update_dto_create(
    char *start_date,
    char *due_line
);

void project_task_update_dto_free(project_task_update_dto_t *project_task_update_dto);

project_task_update_dto_t *project_task_update_dto_parseFromJSON(cJSON *project_task_update_dtoJSON);

cJSON *project_task_update_dto_convertToJSON(project_task_update_dto_t *project_task_update_dto);

#endif /* _project_task_update_dto_H_ */

