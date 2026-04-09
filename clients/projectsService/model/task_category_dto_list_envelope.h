/*
 * task_category_dto_list_envelope.h
 *
 * 
 */

#ifndef _task_category_dto_list_envelope_H_
#define _task_category_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct task_category_dto_list_envelope_t task_category_dto_list_envelope_t;

#include "task_category_dto.h"



typedef struct task_category_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} task_category_dto_list_envelope_t;

task_category_dto_list_envelope_t *task_category_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void task_category_dto_list_envelope_free(task_category_dto_list_envelope_t *task_category_dto_list_envelope);

task_category_dto_list_envelope_t *task_category_dto_list_envelope_parseFromJSON(cJSON *task_category_dto_list_envelopeJSON);

cJSON *task_category_dto_list_envelope_convertToJSON(task_category_dto_list_envelope_t *task_category_dto_list_envelope);

#endif /* _task_category_dto_list_envelope_H_ */

