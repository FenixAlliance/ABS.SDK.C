#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "course_completion_certificate_create_dto.h"



course_completion_certificate_create_dto_t *course_completion_certificate_create_dto_create(
    char *id,
    char *timestamp,
    char *student_profile_id,
    char *course_enrollment_id,
    char *course_completion_certificate_template_id,
    char *course_id
    ) {
    course_completion_certificate_create_dto_t *course_completion_certificate_create_dto_local_var = malloc(sizeof(course_completion_certificate_create_dto_t));
    if (!course_completion_certificate_create_dto_local_var) {
        return NULL;
    }
    course_completion_certificate_create_dto_local_var->id = id;
    course_completion_certificate_create_dto_local_var->timestamp = timestamp;
    course_completion_certificate_create_dto_local_var->student_profile_id = student_profile_id;
    course_completion_certificate_create_dto_local_var->course_enrollment_id = course_enrollment_id;
    course_completion_certificate_create_dto_local_var->course_completion_certificate_template_id = course_completion_certificate_template_id;
    course_completion_certificate_create_dto_local_var->course_id = course_id;

    return course_completion_certificate_create_dto_local_var;
}


void course_completion_certificate_create_dto_free(course_completion_certificate_create_dto_t *course_completion_certificate_create_dto) {
    if(NULL == course_completion_certificate_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (course_completion_certificate_create_dto->id) {
        free(course_completion_certificate_create_dto->id);
        course_completion_certificate_create_dto->id = NULL;
    }
    if (course_completion_certificate_create_dto->timestamp) {
        free(course_completion_certificate_create_dto->timestamp);
        course_completion_certificate_create_dto->timestamp = NULL;
    }
    if (course_completion_certificate_create_dto->student_profile_id) {
        free(course_completion_certificate_create_dto->student_profile_id);
        course_completion_certificate_create_dto->student_profile_id = NULL;
    }
    if (course_completion_certificate_create_dto->course_enrollment_id) {
        free(course_completion_certificate_create_dto->course_enrollment_id);
        course_completion_certificate_create_dto->course_enrollment_id = NULL;
    }
    if (course_completion_certificate_create_dto->course_completion_certificate_template_id) {
        free(course_completion_certificate_create_dto->course_completion_certificate_template_id);
        course_completion_certificate_create_dto->course_completion_certificate_template_id = NULL;
    }
    if (course_completion_certificate_create_dto->course_id) {
        free(course_completion_certificate_create_dto->course_id);
        course_completion_certificate_create_dto->course_id = NULL;
    }
    free(course_completion_certificate_create_dto);
}

cJSON *course_completion_certificate_create_dto_convertToJSON(course_completion_certificate_create_dto_t *course_completion_certificate_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // course_completion_certificate_create_dto->id
    if(course_completion_certificate_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", course_completion_certificate_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // course_completion_certificate_create_dto->timestamp
    if(course_completion_certificate_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", course_completion_certificate_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_completion_certificate_create_dto->student_profile_id
    if (!course_completion_certificate_create_dto->student_profile_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "studentProfileID", course_completion_certificate_create_dto->student_profile_id) == NULL) {
    goto fail; //String
    }


    // course_completion_certificate_create_dto->course_enrollment_id
    if (!course_completion_certificate_create_dto->course_enrollment_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "courseEnrollmentID", course_completion_certificate_create_dto->course_enrollment_id) == NULL) {
    goto fail; //String
    }


    // course_completion_certificate_create_dto->course_completion_certificate_template_id
    if(course_completion_certificate_create_dto->course_completion_certificate_template_id) {
    if(cJSON_AddStringToObject(item, "courseCompletionCertificateTemplateID", course_completion_certificate_create_dto->course_completion_certificate_template_id) == NULL) {
    goto fail; //String
    }
    }


    // course_completion_certificate_create_dto->course_id
    if(course_completion_certificate_create_dto->course_id) {
    if(cJSON_AddStringToObject(item, "courseID", course_completion_certificate_create_dto->course_id) == NULL) {
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

course_completion_certificate_create_dto_t *course_completion_certificate_create_dto_parseFromJSON(cJSON *course_completion_certificate_create_dtoJSON){

    course_completion_certificate_create_dto_t *course_completion_certificate_create_dto_local_var = NULL;

    // course_completion_certificate_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(course_completion_certificate_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // course_completion_certificate_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(course_completion_certificate_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // course_completion_certificate_create_dto->student_profile_id
    cJSON *student_profile_id = cJSON_GetObjectItemCaseSensitive(course_completion_certificate_create_dtoJSON, "studentProfileID");
    if (!student_profile_id) {
        goto end;
    }

    
    if(!cJSON_IsString(student_profile_id))
    {
    goto end; //String
    }

    // course_completion_certificate_create_dto->course_enrollment_id
    cJSON *course_enrollment_id = cJSON_GetObjectItemCaseSensitive(course_completion_certificate_create_dtoJSON, "courseEnrollmentID");
    if (!course_enrollment_id) {
        goto end;
    }

    
    if(!cJSON_IsString(course_enrollment_id))
    {
    goto end; //String
    }

    // course_completion_certificate_create_dto->course_completion_certificate_template_id
    cJSON *course_completion_certificate_template_id = cJSON_GetObjectItemCaseSensitive(course_completion_certificate_create_dtoJSON, "courseCompletionCertificateTemplateID");
    if (course_completion_certificate_template_id) { 
    if(!cJSON_IsString(course_completion_certificate_template_id) && !cJSON_IsNull(course_completion_certificate_template_id))
    {
    goto end; //String
    }
    }

    // course_completion_certificate_create_dto->course_id
    cJSON *course_id = cJSON_GetObjectItemCaseSensitive(course_completion_certificate_create_dtoJSON, "courseID");
    if (course_id) { 
    if(!cJSON_IsString(course_id) && !cJSON_IsNull(course_id))
    {
    goto end; //String
    }
    }


    course_completion_certificate_create_dto_local_var = course_completion_certificate_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(student_profile_id->valuestring),
        strdup(course_enrollment_id->valuestring),
        course_completion_certificate_template_id && !cJSON_IsNull(course_completion_certificate_template_id) ? strdup(course_completion_certificate_template_id->valuestring) : NULL,
        course_id && !cJSON_IsNull(course_id) ? strdup(course_id->valuestring) : NULL
        );

    return course_completion_certificate_create_dto_local_var;
end:
    return NULL;

}
