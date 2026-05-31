/*
 * course_team_membership_create_dto.h
 *
 * 
 */

#ifndef _course_team_membership_create_dto_H_
#define _course_team_membership_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct course_team_membership_create_dto_t course_team_membership_create_dto_t;


// Enum COURSETEAMMEMBERSHIPTYPE for course_team_membership_create_dto

typedef enum  { learningservice_course_team_membership_create_dto_COURSETEAMMEMBERSHIPTYPE_NULL = 0, learningservice_course_team_membership_create_dto_COURSETEAMMEMBERSHIPTYPE_Admin, learningservice_course_team_membership_create_dto_COURSETEAMMEMBERSHIPTYPE_Staff } learningservice_course_team_membership_create_dto_COURSETEAMMEMBERSHIPTYPE_e;

char* course_team_membership_create_dto_course_team_membership_type_ToString(learningservice_course_team_membership_create_dto_COURSETEAMMEMBERSHIPTYPE_e course_team_membership_type);

learningservice_course_team_membership_create_dto_COURSETEAMMEMBERSHIPTYPE_e course_team_membership_create_dto_course_team_membership_type_FromString(char* course_team_membership_type);



typedef struct course_team_membership_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *course_id; // string
    char *instructor_profile_id; // string
    learningservice_course_team_membership_create_dto_COURSETEAMMEMBERSHIPTYPE_e course_team_membership_type; //enum

} course_team_membership_create_dto_t;

course_team_membership_create_dto_t *course_team_membership_create_dto_create(
    char *id,
    char *timestamp,
    char *course_id,
    char *instructor_profile_id,
    learningservice_course_team_membership_create_dto_COURSETEAMMEMBERSHIPTYPE_e course_team_membership_type
);

void course_team_membership_create_dto_free(course_team_membership_create_dto_t *course_team_membership_create_dto);

course_team_membership_create_dto_t *course_team_membership_create_dto_parseFromJSON(cJSON *course_team_membership_create_dtoJSON);

cJSON *course_team_membership_create_dto_convertToJSON(course_team_membership_create_dto_t *course_team_membership_create_dto);

#endif /* _course_team_membership_create_dto_H_ */

