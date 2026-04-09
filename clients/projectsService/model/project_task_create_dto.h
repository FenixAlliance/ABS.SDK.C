/*
 * project_task_create_dto.h
 *
 * 
 */

#ifndef _project_task_create_dto_H_
#define _project_task_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct project_task_create_dto_t project_task_create_dto_t;




typedef struct project_task_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *description; // string
    char *start_date; //date time
    char *due_line; //date time
    char *project_id; // string

} project_task_create_dto_t;

project_task_create_dto_t *project_task_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *start_date,
    char *due_line,
    char *project_id
);

void project_task_create_dto_free(project_task_create_dto_t *project_task_create_dto);

project_task_create_dto_t *project_task_create_dto_parseFromJSON(cJSON *project_task_create_dtoJSON);

cJSON *project_task_create_dto_convertToJSON(project_task_create_dto_t *project_task_create_dto);

#endif /* _project_task_create_dto_H_ */

