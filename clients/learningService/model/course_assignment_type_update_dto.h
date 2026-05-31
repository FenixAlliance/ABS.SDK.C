/*
 * course_assignment_type_update_dto.h
 *
 * 
 */

#ifndef _course_assignment_type_update_dto_H_
#define _course_assignment_type_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct course_assignment_type_update_dto_t course_assignment_type_update_dto_t;




typedef struct course_assignment_type_update_dto_t {
    char *name; // string
    char *abbreviation; // string
    double weight; //numeric
    int quantity; //numeric
    int excluded; //numeric

} course_assignment_type_update_dto_t;

course_assignment_type_update_dto_t *course_assignment_type_update_dto_create(
    char *name,
    char *abbreviation,
    double weight,
    int quantity,
    int excluded
);

void course_assignment_type_update_dto_free(course_assignment_type_update_dto_t *course_assignment_type_update_dto);

course_assignment_type_update_dto_t *course_assignment_type_update_dto_parseFromJSON(cJSON *course_assignment_type_update_dtoJSON);

cJSON *course_assignment_type_update_dto_convertToJSON(course_assignment_type_update_dto_t *course_assignment_type_update_dto);

#endif /* _course_assignment_type_update_dto_H_ */

