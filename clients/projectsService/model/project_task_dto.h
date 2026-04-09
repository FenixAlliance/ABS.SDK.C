/*
 * project_task_dto.h
 *
 * 
 */

#ifndef _project_task_dto_H_
#define _project_task_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct project_task_dto_t project_task_dto_t;




typedef struct project_task_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *start_date; //date time
    char *due_line; //date time
    char *project_id; // string
    char *project_task_bucket_id; // string

} project_task_dto_t;

project_task_dto_t *project_task_dto_create(
    char *id,
    char *timestamp,
    char *start_date,
    char *due_line,
    char *project_id,
    char *project_task_bucket_id
);

void project_task_dto_free(project_task_dto_t *project_task_dto);

project_task_dto_t *project_task_dto_parseFromJSON(cJSON *project_task_dtoJSON);

cJSON *project_task_dto_convertToJSON(project_task_dto_t *project_task_dto);

#endif /* _project_task_dto_H_ */

