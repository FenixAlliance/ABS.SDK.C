#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "course_team_membership_update_dto.h"


char* course_team_membership_update_dto_course_team_membership_type_ToString(learningservice_course_team_membership_update_dto_COURSETEAMMEMBERSHIPTYPE_e course_team_membership_type) {
    char* course_team_membership_typeArray[] =  { "NULL", "Admin", "Staff" };
    return course_team_membership_typeArray[course_team_membership_type];
}

learningservice_course_team_membership_update_dto_COURSETEAMMEMBERSHIPTYPE_e course_team_membership_update_dto_course_team_membership_type_FromString(char* course_team_membership_type){
    int stringToReturn = 0;
    char *course_team_membership_typeArray[] =  { "NULL", "Admin", "Staff" };
    size_t sizeofArray = sizeof(course_team_membership_typeArray) / sizeof(course_team_membership_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(course_team_membership_type, course_team_membership_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

course_team_membership_update_dto_t *course_team_membership_update_dto_create(
    char *instructor_profile_id,
    learningservice_course_team_membership_update_dto_COURSETEAMMEMBERSHIPTYPE_e course_team_membership_type
    ) {
    course_team_membership_update_dto_t *course_team_membership_update_dto_local_var = malloc(sizeof(course_team_membership_update_dto_t));
    if (!course_team_membership_update_dto_local_var) {
        return NULL;
    }
    course_team_membership_update_dto_local_var->instructor_profile_id = instructor_profile_id;
    course_team_membership_update_dto_local_var->course_team_membership_type = course_team_membership_type;

    return course_team_membership_update_dto_local_var;
}


void course_team_membership_update_dto_free(course_team_membership_update_dto_t *course_team_membership_update_dto) {
    if(NULL == course_team_membership_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (course_team_membership_update_dto->instructor_profile_id) {
        free(course_team_membership_update_dto->instructor_profile_id);
        course_team_membership_update_dto->instructor_profile_id = NULL;
    }
    free(course_team_membership_update_dto);
}

cJSON *course_team_membership_update_dto_convertToJSON(course_team_membership_update_dto_t *course_team_membership_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // course_team_membership_update_dto->instructor_profile_id
    if(course_team_membership_update_dto->instructor_profile_id) {
    if(cJSON_AddStringToObject(item, "instructorProfileID", course_team_membership_update_dto->instructor_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // course_team_membership_update_dto->course_team_membership_type
    if(course_team_membership_update_dto->course_team_membership_type != learningservice_course_team_membership_update_dto_COURSETEAMMEMBERSHIPTYPE_NULL) {
    if(cJSON_AddStringToObject(item, "courseTeamMembershipType", course_team_membership_typecourse_team_membership_update_dto_ToString(course_team_membership_update_dto->course_team_membership_type)) == NULL)
    {
    goto fail; //Enum
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

course_team_membership_update_dto_t *course_team_membership_update_dto_parseFromJSON(cJSON *course_team_membership_update_dtoJSON){

    course_team_membership_update_dto_t *course_team_membership_update_dto_local_var = NULL;

    // course_team_membership_update_dto->instructor_profile_id
    cJSON *instructor_profile_id = cJSON_GetObjectItemCaseSensitive(course_team_membership_update_dtoJSON, "instructorProfileID");
    if (instructor_profile_id) { 
    if(!cJSON_IsString(instructor_profile_id) && !cJSON_IsNull(instructor_profile_id))
    {
    goto end; //String
    }
    }

    // course_team_membership_update_dto->course_team_membership_type
    cJSON *course_team_membership_type = cJSON_GetObjectItemCaseSensitive(course_team_membership_update_dtoJSON, "courseTeamMembershipType");
    learningservice_course_team_membership_update_dto_COURSETEAMMEMBERSHIPTYPE_e course_team_membership_typeVariable;
    if (course_team_membership_type) { 
    if(!cJSON_IsString(course_team_membership_type))
    {
    goto end; //Enum
    }
    course_team_membership_typeVariable = course_team_membership_update_dto_course_team_membership_type_FromString(course_team_membership_type->valuestring);
    }


    course_team_membership_update_dto_local_var = course_team_membership_update_dto_create (
        instructor_profile_id && !cJSON_IsNull(instructor_profile_id) ? strdup(instructor_profile_id->valuestring) : NULL,
        course_team_membership_type ? course_team_membership_typeVariable : learningservice_course_team_membership_update_dto_COURSETEAMMEMBERSHIPTYPE_NULL
        );

    return course_team_membership_update_dto_local_var;
end:
    return NULL;

}
