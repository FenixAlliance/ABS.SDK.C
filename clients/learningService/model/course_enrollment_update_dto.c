#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "course_enrollment_update_dto.h"



course_enrollment_update_dto_t *course_enrollment_update_dto_create(
    char *course_cohort_id,
    char *course_completion_certificate_id
    ) {
    course_enrollment_update_dto_t *course_enrollment_update_dto_local_var = malloc(sizeof(course_enrollment_update_dto_t));
    if (!course_enrollment_update_dto_local_var) {
        return NULL;
    }
    course_enrollment_update_dto_local_var->course_cohort_id = course_cohort_id;
    course_enrollment_update_dto_local_var->course_completion_certificate_id = course_completion_certificate_id;

    return course_enrollment_update_dto_local_var;
}


void course_enrollment_update_dto_free(course_enrollment_update_dto_t *course_enrollment_update_dto) {
    if(NULL == course_enrollment_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (course_enrollment_update_dto->course_cohort_id) {
        free(course_enrollment_update_dto->course_cohort_id);
        course_enrollment_update_dto->course_cohort_id = NULL;
    }
    if (course_enrollment_update_dto->course_completion_certificate_id) {
        free(course_enrollment_update_dto->course_completion_certificate_id);
        course_enrollment_update_dto->course_completion_certificate_id = NULL;
    }
    free(course_enrollment_update_dto);
}

cJSON *course_enrollment_update_dto_convertToJSON(course_enrollment_update_dto_t *course_enrollment_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // course_enrollment_update_dto->course_cohort_id
    if(course_enrollment_update_dto->course_cohort_id) {
    if(cJSON_AddStringToObject(item, "courseCohortId", course_enrollment_update_dto->course_cohort_id) == NULL) {
    goto fail; //String
    }
    }


    // course_enrollment_update_dto->course_completion_certificate_id
    if(course_enrollment_update_dto->course_completion_certificate_id) {
    if(cJSON_AddStringToObject(item, "courseCompletionCertificateId", course_enrollment_update_dto->course_completion_certificate_id) == NULL) {
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

course_enrollment_update_dto_t *course_enrollment_update_dto_parseFromJSON(cJSON *course_enrollment_update_dtoJSON){

    course_enrollment_update_dto_t *course_enrollment_update_dto_local_var = NULL;

    // course_enrollment_update_dto->course_cohort_id
    cJSON *course_cohort_id = cJSON_GetObjectItemCaseSensitive(course_enrollment_update_dtoJSON, "courseCohortId");
    if (course_cohort_id) { 
    if(!cJSON_IsString(course_cohort_id) && !cJSON_IsNull(course_cohort_id))
    {
    goto end; //String
    }
    }

    // course_enrollment_update_dto->course_completion_certificate_id
    cJSON *course_completion_certificate_id = cJSON_GetObjectItemCaseSensitive(course_enrollment_update_dtoJSON, "courseCompletionCertificateId");
    if (course_completion_certificate_id) { 
    if(!cJSON_IsString(course_completion_certificate_id) && !cJSON_IsNull(course_completion_certificate_id))
    {
    goto end; //String
    }
    }


    course_enrollment_update_dto_local_var = course_enrollment_update_dto_create (
        course_cohort_id && !cJSON_IsNull(course_cohort_id) ? strdup(course_cohort_id->valuestring) : NULL,
        course_completion_certificate_id && !cJSON_IsNull(course_completion_certificate_id) ? strdup(course_completion_certificate_id->valuestring) : NULL
        );

    return course_enrollment_update_dto_local_var;
end:
    return NULL;

}
