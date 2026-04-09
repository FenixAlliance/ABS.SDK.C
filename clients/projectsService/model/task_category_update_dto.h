/*
 * task_category_update_dto.h
 *
 * 
 */

#ifndef _task_category_update_dto_H_
#define _task_category_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct task_category_update_dto_t task_category_update_dto_t;




typedef struct task_category_update_dto_t {
    char *title; // string

} task_category_update_dto_t;

task_category_update_dto_t *task_category_update_dto_create(
    char *title
);

void task_category_update_dto_free(task_category_update_dto_t *task_category_update_dto);

task_category_update_dto_t *task_category_update_dto_parseFromJSON(cJSON *task_category_update_dtoJSON);

cJSON *task_category_update_dto_convertToJSON(task_category_update_dto_t *task_category_update_dto);

#endif /* _task_category_update_dto_H_ */

