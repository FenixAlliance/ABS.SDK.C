#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "course_enrollment_create_dto.h"



course_enrollment_create_dto_t *course_enrollment_create_dto_create(
    char *id,
    char *timestamp,
    char *course_id,
    char *course_cohort_id,
    char *student_profile_id,
    char *course_completion_certificate_id
    ) {
    course_enrollment_create_dto_t *course_enrollment_create_dto_local_var = malloc(sizeof(course_enrollment_create_dto_t));
    if (!course_enrollment_create_dto_local_var) {
        return NULL;
    }
    course_enrollment_create_dto_local_var->id = id;
    course_enrollment_create_dto_local_var->timestamp = timestamp;
    course_enrollment_create_dto_local_var->course_id = course_id;
    course_enrollment_create_dto_local_var->course_cohort_id = course_cohort_id;
    course_enrollment_create_dto_local_var->student_profile_id = student_profile_id;
    course_enrollment_create_dto_local_var->course_completion_certificate_id = course_completion_certificate_id;

    return course_enrollment_create_dto_local_var;
}


void course_enrollment_create_dto_free(course_enrollment_create_dto_t *course_enrollment_create_dto) {
    if(NULL == course_enrollment_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (course_enrollment_create_dto->id) {
        free(course_enrollment_create_dto->id);
        course_enrollment_create_dto->id = NULL;
    }
    if (course_enrollment_create_dto->timestamp) {
        free(course_enrollment_create_dto->timestamp);
        course_enrollment_create_dto->timestamp = NULL;
    }
    if (course_enrollment_create_dto->course_id) {
        free(course_enrollment_create_dto->course_id);
        course_enrollment_create_dto->course_id = NULL;
    }
    if (course_enrollment_create_dto->course_cohort_id) {
        free(course_enrollment_create_dto->course_cohort_id);
        course_enrollment_create_dto->course_cohort_id = NULL;
    }
    if (course_enrollment_create_dto->student_profile_id) {
        free(course_enrollment_create_dto->student_profile_id);
        course_enrollment_create_dto->student_profile_id = NULL;
    }
    if (course_enrollment_create_dto->course_completion_certificate_id) {
        free(course_enrollment_create_dto->course_completion_certificate_id);
        course_enrollment_create_dto->course_completion_certificate_id = NULL;
    }
    free(course_enrollment_create_dto);
}

cJSON *course_enrollment_create_dto_convertToJSON(course_enrollment_create_dto_t *course_enrollment_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // course_enrollment_create_dto->id
    if(course_enrollment_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", course_enrollment_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // course_enrollment_create_dto->timestamp
    if(course_enrollment_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", course_enrollment_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_enrollment_create_dto->course_id
    if(course_enrollment_create_dto->course_id) {
    if(cJSON_AddStringToObject(item, "courseID", course_enrollment_create_dto->course_id) == NULL) {
    goto fail; //String
    }
    }


    // course_enrollment_create_dto->course_cohort_id
    if(course_enrollment_create_dto->course_cohort_id) {
    if(cJSON_AddStringToObject(item, "courseCohortID", course_enrollment_create_dto->course_cohort_id) == NULL) {
    goto fail; //String
    }
    }


    // course_enrollment_create_dto->student_profile_id
    if(course_enrollment_create_dto->student_profile_id) {
    if(cJSON_AddStringToObject(item, "studentProfileID", course_enrollment_create_dto->student_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // course_enrollment_create_dto->course_completion_certificate_id
    if(course_enrollment_create_dto->course_completion_certificate_id) {
    if(cJSON_AddStringToObject(item, "courseCompletionCertificateID", course_enrollment_create_dto->course_completion_certificate_id) == NULL) {
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

course_enrollment_create_dto_t *course_enrollment_create_dto_parseFromJSON(cJSON *course_enrollment_create_dtoJSON){

    course_enrollment_create_dto_t *course_enrollment_create_dto_local_var = NULL;

    // course_enrollment_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(course_enrollment_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // course_enrollment_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(course_enrollment_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // course_enrollment_create_dto->course_id
    cJSON *course_id = cJSON_GetObjectItemCaseSensitive(course_enrollment_create_dtoJSON, "courseID");
    if (course_id) { 
    if(!cJSON_IsString(course_id) && !cJSON_IsNull(course_id))
    {
    goto end; //String
    }
    }

    // course_enrollment_create_dto->course_cohort_id
    cJSON *course_cohort_id = cJSON_GetObjectItemCaseSensitive(course_enrollment_create_dtoJSON, "courseCohortID");
    if (course_cohort_id) { 
    if(!cJSON_IsString(course_cohort_id) && !cJSON_IsNull(course_cohort_id))
    {
    goto end; //String
    }
    }

    // course_enrollment_create_dto->student_profile_id
    cJSON *student_profile_id = cJSON_GetObjectItemCaseSensitive(course_enrollment_create_dtoJSON, "studentProfileID");
    if (student_profile_id) { 
    if(!cJSON_IsString(student_profile_id) && !cJSON_IsNull(student_profile_id))
    {
    goto end; //String
    }
    }

    // course_enrollment_create_dto->course_completion_certificate_id
    cJSON *course_completion_certificate_id = cJSON_GetObjectItemCaseSensitive(course_enrollment_create_dtoJSON, "courseCompletionCertificateID");
    if (course_completion_certificate_id) { 
    if(!cJSON_IsString(course_completion_certificate_id) && !cJSON_IsNull(course_completion_certificate_id))
    {
    goto end; //String
    }
    }


    course_enrollment_create_dto_local_var = course_enrollment_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        course_id && !cJSON_IsNull(course_id) ? strdup(course_id->valuestring) : NULL,
        course_cohort_id && !cJSON_IsNull(course_cohort_id) ? strdup(course_cohort_id->valuestring) : NULL,
        student_profile_id && !cJSON_IsNull(student_profile_id) ? strdup(student_profile_id->valuestring) : NULL,
        course_completion_certificate_id && !cJSON_IsNull(course_completion_certificate_id) ? strdup(course_completion_certificate_id->valuestring) : NULL
        );

    return course_enrollment_create_dto_local_var;
end:
    return NULL;

}
