/*
 * task_type_dto.h
 *
 * 
 */

#ifndef _task_type_dto_H_
#define _task_type_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct task_type_dto_t task_type_dto_t;




typedef struct task_type_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *task_category_id; // string
    int display_in_time_tracker; //boolean
    int requires_description; //boolean

} task_type_dto_t;

task_type_dto_t *task_type_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *task_category_id,
    int display_in_time_tracker,
    int requires_description
);

void task_type_dto_free(task_type_dto_t *task_type_dto);

task_type_dto_t *task_type_dto_parseFromJSON(cJSON *task_type_dtoJSON);

cJSON *task_type_dto_convertToJSON(task_type_dto_t *task_type_dto);

#endif /* _task_type_dto_H_ */

