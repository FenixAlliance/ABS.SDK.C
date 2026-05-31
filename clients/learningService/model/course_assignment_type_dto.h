/*
 * course_assignment_type_dto.h
 *
 * 
 */

#ifndef _course_assignment_type_dto_H_
#define _course_assignment_type_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct course_assignment_type_dto_t course_assignment_type_dto_t;




typedef struct course_assignment_type_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *abbreviation; // string
    double weight; //numeric
    int quantity; //numeric
    int excluded; //numeric
    char *course_id; // string
    char *tenant_id; // string

} course_assignment_type_dto_t;

course_assignment_type_dto_t *course_assignment_type_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *abbreviation,
    double weight,
    int quantity,
    int excluded,
    char *course_id,
    char *tenant_id
);

void course_assignment_type_dto_free(course_assignment_type_dto_t *course_assignment_type_dto);

course_assignment_type_dto_t *course_assignment_type_dto_parseFromJSON(cJSON *course_assignment_type_dtoJSON);

cJSON *course_assignment_type_dto_convertToJSON(course_assignment_type_dto_t *course_assignment_type_dto);

#endif /* _course_assignment_type_dto_H_ */

