/*
 * task_category_create_dto.h
 *
 * 
 */

#ifndef _task_category_create_dto_H_
#define _task_category_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct task_category_create_dto_t task_category_create_dto_t;




typedef struct task_category_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string

} task_category_create_dto_t;

task_category_create_dto_t *task_category_create_dto_create(
    char *id,
    char *timestamp,
    char *title
);

void task_category_create_dto_free(task_category_create_dto_t *task_category_create_dto);

task_category_create_dto_t *task_category_create_dto_parseFromJSON(cJSON *task_category_create_dtoJSON);

cJSON *task_category_create_dto_convertToJSON(task_category_create_dto_t *task_category_create_dto);

#endif /* _task_category_create_dto_H_ */

