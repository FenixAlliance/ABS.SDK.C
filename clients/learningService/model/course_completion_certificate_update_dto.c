#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "course_completion_certificate_update_dto.h"



course_completion_certificate_update_dto_t *course_completion_certificate_update_dto_create(
    char *student_profile_id,
    char *course_enrollment_id,
    char *course_completion_certificate_template_id,
    char *course_id
    ) {
    course_completion_certificate_update_dto_t *course_completion_certificate_update_dto_local_var = malloc(sizeof(course_completion_certificate_update_dto_t));
    if (!course_completion_certificate_update_dto_local_var) {
        return NULL;
    }
    course_completion_certificate_update_dto_local_var->student_profile_id = student_profile_id;
    course_completion_certificate_update_dto_local_var->course_enrollment_id = course_enrollment_id;
    course_completion_certificate_update_dto_local_var->course_completion_certificate_template_id = course_completion_certificate_template_id;
    course_completion_certificate_update_dto_local_var->course_id = course_id;

    return course_completion_certificate_update_dto_local_var;
}


void course_completion_certificate_update_dto_free(course_completion_certificate_update_dto_t *course_completion_certificate_update_dto) {
    if(NULL == course_completion_certificate_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (course_completion_certificate_update_dto->student_profile_id) {
        free(course_completion_certificate_update_dto->student_profile_id);
        course_completion_certificate_update_dto->student_profile_id = NULL;
    }
    if (course_completion_certificate_update_dto->course_enrollment_id) {
        free(course_completion_certificate_update_dto->course_enrollment_id);
        course_completion_certificate_update_dto->course_enrollment_id = NULL;
    }
    if (course_completion_certificate_update_dto->course_completion_certificate_template_id) {
        free(course_completion_certificate_update_dto->course_completion_certificate_template_id);
        course_completion_certificate_update_dto->course_completion_certificate_template_id = NULL;
    }
    if (course_completion_certificate_update_dto->course_id) {
        free(course_completion_certificate_update_dto->course_id);
        course_completion_certificate_update_dto->course_id = NULL;
    }
    free(course_completion_certificate_update_dto);
}

cJSON *course_completion_certificate_update_dto_convertToJSON(course_completion_certificate_update_dto_t *course_completion_certificate_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // course_completion_certificate_update_dto->student_profile_id
    if(course_completion_certificate_update_dto->student_profile_id) {
    if(cJSON_AddStringToObject(item, "studentProfileID", course_completion_certificate_update_dto->student_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // course_completion_certificate_update_dto->course_enrollment_id
    if(course_completion_certificate_update_dto->course_enrollment_id) {
    if(cJSON_AddStringToObject(item, "courseEnrollmentID", course_completion_certificate_update_dto->course_enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // course_completion_certificate_update_dto->course_completion_certificate_template_id
    if(course_completion_certificate_update_dto->course_completion_certificate_template_id) {
    if(cJSON_AddStringToObject(item, "courseCompletionCertificateTemplateID", course_completion_certificate_update_dto->course_completion_certificate_template_id) == NULL) {
    goto fail; //String
    }
    }


    // course_completion_certificate_update_dto->course_id
    if(course_completion_certificate_update_dto->course_id) {
    if(cJSON_AddStringToObject(item, "courseID", course_completion_certificate_update_dto->course_id) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

course_completion_certificate_update_dto_t *course_completion_certificate_update_dto_parseFromJSON(cJSON *course_completion_certificate_update_dtoJSON){

    course_completion_certificate_update_dto_t *course_completion_certificate_update_dto_local_var = NULL;

    // course_completion_certificate_update_dto->student_profile_id
    cJSON *student_profile_id = cJSON_GetObjectItemCaseSensitive(course_completion_certificate_update_dtoJSON, "studentProfileID");
    if (student_profile_id) { 
    if(!cJSON_IsString(student_profile_id) && !cJSON_IsNull(student_profile_id))
    {
    goto end; //String
    }
    }

    // course_completion_certificate_update_dto->course_enrollment_id
    cJSON *course_enrollment_id = cJSON_GetObjectItemCaseSensitive(course_completion_certificate_update_dtoJSON, "courseEnrollmentID");
    if (course_enrollment_id) { 
    if(!cJSON_IsString(course_enrollment_id) && !cJSON_IsNull(course_enrollment_id))
    {
    goto end; //String
    }
    }

    // course_completion_certificate_update_dto->course_completion_certificate_template_id
    cJSON *course_completion_certificate_template_id = cJSON_GetObjectItemCaseSensitive(course_completion_certificate_update_dtoJSON, "courseCompletionCertificateTemplateID");
    if (course_completion_certificate_template_id) { 
    if(!cJSON_IsString(course_completion_certificate_template_id) && !cJSON_IsNull(course_completion_certificate_template_id))
    {
    goto end; //String
    }
    }

    // course_completion_certificate_update_dto->course_id
    cJSON *course_id = cJSON_GetObjectItemCaseSensitive(course_completion_certificate_update_dtoJSON, "courseID");
    if (course_id) { 
    if(!cJSON_IsString(course_id) && !cJSON_IsNull(course_id))
    {
    goto end; //String
    }
    }


    course_completion_certificate_update_dto_local_var = course_completion_certificate_update_dto_create (
        student_profile_id && !cJSON_IsNull(student_profile_id) ? strdup(student_profile_id->valuestring) : NULL,
        course_enrollment_id && !cJSON_IsNull(course_enrollment_id) ? strdup(course_enrollment_id->valuestring) : NULL,
        course_completion_certificate_template_id && !cJSON_IsNull(course_completion_certificate_template_id) ? strdup(course_completion_certificate_template_id->valuestring) : NULL,
        course_id && !cJSON_IsNull(course_id) ? strdup(course_id->valuestring) : NULL
        );

    return course_completion_certificate_update_dto_local_var;
end:
    return NULL;

}
