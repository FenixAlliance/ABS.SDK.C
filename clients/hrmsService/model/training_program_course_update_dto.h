/*
 * training_program_course_update_dto.h
 *
 * 
 */

#ifndef _training_program_course_update_dto_H_
#define _training_program_course_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct training_program_course_update_dto_t training_program_course_update_dto_t;




typedef struct training_program_course_update_dto_t {
    char *training_program_id; // string
    char *course_id; // string

} training_program_course_update_dto_t;

training_program_course_update_dto_t *training_program_course_update_dto_create(
    char *training_program_id,
    char *course_id
);

void training_program_course_update_dto_free(training_program_course_update_dto_t *training_program_course_update_dto);

training_program_course_update_dto_t *training_program_course_update_dto_parseFromJSON(cJSON *training_program_course_update_dtoJSON);

cJSON *training_program_course_update_dto_convertToJSON(training_program_course_update_dto_t *training_program_course_update_dto);

#endif /* _training_program_course_update_dto_H_ */

