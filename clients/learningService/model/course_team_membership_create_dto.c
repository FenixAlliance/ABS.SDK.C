#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "course_team_membership_create_dto.h"


char* course_team_membership_create_dto_course_team_membership_type_ToString(learningservice_course_team_membership_create_dto_COURSETEAMMEMBERSHIPTYPE_e course_team_membership_type) {
    char* course_team_membership_typeArray[] =  { "NULL", "Admin", "Staff" };
    return course_team_membership_typeArray[course_team_membership_type];
}

learningservice_course_team_membership_create_dto_COURSETEAMMEMBERSHIPTYPE_e course_team_membership_create_dto_course_team_membership_type_FromString(char* course_team_membership_type){
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

course_team_membership_create_dto_t *course_team_membership_create_dto_create(
    char *id,
    char *timestamp,
    char *course_id,
    char *instructor_profile_id,
    learningservice_course_team_membership_create_dto_COURSETEAMMEMBERSHIPTYPE_e course_team_membership_type
    ) {
    course_team_membership_create_dto_t *course_team_membership_create_dto_local_var = malloc(sizeof(course_team_membership_create_dto_t));
    if (!course_team_membership_create_dto_local_var) {
        return NULL;
    }
    course_team_membership_create_dto_local_var->id = id;
    course_team_membership_create_dto_local_var->timestamp = timestamp;
    course_team_membership_create_dto_local_var->course_id = course_id;
    course_team_membership_create_dto_local_var->instructor_profile_id = instructor_profile_id;
    course_team_membership_create_dto_local_var->course_team_membership_type = course_team_membership_type;

    return course_team_membership_create_dto_local_var;
}


void course_team_membership_create_dto_free(course_team_membership_create_dto_t *course_team_membership_create_dto) {
    if(NULL == course_team_membership_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (course_team_membership_create_dto->id) {
        free(course_team_membership_create_dto->id);
        course_team_membership_create_dto->id = NULL;
    }
    if (course_team_membership_create_dto->timestamp) {
        free(course_team_membership_create_dto->timestamp);
        course_team_membership_create_dto->timestamp = NULL;
    }
    if (course_team_membership_create_dto->course_id) {
        free(course_team_membership_create_dto->course_id);
        course_team_membership_create_dto->course_id = NULL;
    }
    if (course_team_membership_create_dto->instructor_profile_id) {
        free(course_team_membership_create_dto->instructor_profile_id);
        course_team_membership_create_dto->instructor_profile_id = NULL;
    }
    free(course_team_membership_create_dto);
}

cJSON *course_team_membership_create_dto_convertToJSON(course_team_membership_create_dto_t *course_team_membership_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // course_team_membership_create_dto->id
    if(course_team_membership_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", course_team_membership_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // course_team_membership_create_dto->timestamp
    if(course_team_membership_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", course_team_membership_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_team_membership_create_dto->course_id
    if (!course_team_membership_create_dto->course_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "courseId", course_team_membership_create_dto->course_id) == NULL) {
    goto fail; //String
    }


    // course_team_membership_create_dto->instructor_profile_id
    if (!course_team_membership_create_dto->instructor_profile_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "instructorProfileId", course_team_membership_create_dto->instructor_profile_id) == NULL) {
    goto fail; //String
    }


    // course_team_membership_create_dto->course_team_membership_type
    if(course_team_membership_create_dto->course_team_membership_type != learningservice_course_team_membership_create_dto_COURSETEAMMEMBERSHIPTYPE_NULL) {
    if(cJSON_AddStringToObject(item, "courseTeamMembershipType", course_team_membership_typecourse_team_membership_create_dto_ToString(course_team_membership_create_dto->course_team_membership_type)) == NULL)
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

course_team_membership_create_dto_t *course_team_membership_create_dto_parseFromJSON(cJSON *course_team_membership_create_dtoJSON){

    course_team_membership_create_dto_t *course_team_membership_create_dto_local_var = NULL;

    // course_team_membership_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(course_team_membership_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // course_team_membership_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(course_team_membership_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // course_team_membership_create_dto->course_id
    cJSON *course_id = cJSON_GetObjectItemCaseSensitive(course_team_membership_create_dtoJSON, "courseId");
    if (!course_id) {
        goto end;
    }

    
    if(!cJSON_IsString(course_id))
    {
    goto end; //String
    }

    // course_team_membership_create_dto->instructor_profile_id
    cJSON *instructor_profile_id = cJSON_GetObjectItemCaseSensitive(course_team_membership_create_dtoJSON, "instructorProfileId");
    if (!instructor_profile_id) {
        goto end;
    }

    
    if(!cJSON_IsString(instructor_profile_id))
    {
    goto end; //String
    }

    // course_team_membership_create_dto->course_team_membership_type
    cJSON *course_team_membership_type = cJSON_GetObjectItemCaseSensitive(course_team_membership_create_dtoJSON, "courseTeamMembershipType");
    learningservice_course_team_membership_create_dto_COURSETEAMMEMBERSHIPTYPE_e course_team_membership_typeVariable;
    if (course_team_membership_type) { 
    if(!cJSON_IsString(course_team_membership_type))
    {
    goto end; //Enum
    }
    course_team_membership_typeVariable = course_team_membership_create_dto_course_team_membership_type_FromString(course_team_membership_type->valuestring);
    }


    course_team_membership_create_dto_local_var = course_team_membership_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(course_id->valuestring),
        strdup(instructor_profile_id->valuestring),
        course_team_membership_type ? course_team_membership_typeVariable : learningservice_course_team_membership_create_dto_COURSETEAMMEMBERSHIPTYPE_NULL
        );

    return course_team_membership_create_dto_local_var;
end:
    return NULL;

}
