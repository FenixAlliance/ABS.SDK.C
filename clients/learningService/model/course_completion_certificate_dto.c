#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "course_completion_certificate_dto.h"



course_completion_certificate_dto_t *course_completion_certificate_dto_create(
    char *id,
    char *timestamp,
    char *student_profile_id,
    char *course_enrollment_id,
    char *business_id,
    char *business_profile_record_id,
    char *course_completion_certificate_template_id,
    char *course_id,
    char *student_name,
    char *student_last_name,
    char *course_title,
    double total_effort_in_hours,
    char *instructor_name,
    char *instructor_last_name
    ) {
    course_completion_certificate_dto_t *course_completion_certificate_dto_local_var = malloc(sizeof(course_completion_certificate_dto_t));
    if (!course_completion_certificate_dto_local_var) {
        return NULL;
    }
    course_completion_certificate_dto_local_var->id = id;
    course_completion_certificate_dto_local_var->timestamp = timestamp;
    course_completion_certificate_dto_local_var->student_profile_id = student_profile_id;
    course_completion_certificate_dto_local_var->course_enrollment_id = course_enrollment_id;
    course_completion_certificate_dto_local_var->business_id = business_id;
    course_completion_certificate_dto_local_var->business_profile_record_id = business_profile_record_id;
    course_completion_certificate_dto_local_var->course_completion_certificate_template_id = course_completion_certificate_template_id;
    course_completion_certificate_dto_local_var->course_id = course_id;
    course_completion_certificate_dto_local_var->student_name = student_name;
    course_completion_certificate_dto_local_var->student_last_name = student_last_name;
    course_completion_certificate_dto_local_var->course_title = course_title;
    course_completion_certificate_dto_local_var->total_effort_in_hours = total_effort_in_hours;
    course_completion_certificate_dto_local_var->instructor_name = instructor_name;
    course_completion_certificate_dto_local_var->instructor_last_name = instructor_last_name;

    return course_completion_certificate_dto_local_var;
}


void course_completion_certificate_dto_free(course_completion_certificate_dto_t *course_completion_certificate_dto) {
    if(NULL == course_completion_certificate_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (course_completion_certificate_dto->id) {
        free(course_completion_certificate_dto->id);
        course_completion_certificate_dto->id = NULL;
    }
    if (course_completion_certificate_dto->timestamp) {
        free(course_completion_certificate_dto->timestamp);
        course_completion_certificate_dto->timestamp = NULL;
    }
    if (course_completion_certificate_dto->student_profile_id) {
        free(course_completion_certificate_dto->student_profile_id);
        course_completion_certificate_dto->student_profile_id = NULL;
    }
    if (course_completion_certificate_dto->course_enrollment_id) {
        free(course_completion_certificate_dto->course_enrollment_id);
        course_completion_certificate_dto->course_enrollment_id = NULL;
    }
    if (course_completion_certificate_dto->business_id) {
        free(course_completion_certificate_dto->business_id);
        course_completion_certificate_dto->business_id = NULL;
    }
    if (course_completion_certificate_dto->business_profile_record_id) {
        free(course_completion_certificate_dto->business_profile_record_id);
        course_completion_certificate_dto->business_profile_record_id = NULL;
    }
    if (course_completion_certificate_dto->course_completion_certificate_template_id) {
        free(course_completion_certificate_dto->course_completion_certificate_template_id);
        course_completion_certificate_dto->course_completion_certificate_template_id = NULL;
    }
    if (course_completion_certificate_dto->course_id) {
        free(course_completion_certificate_dto->course_id);
        course_completion_certificate_dto->course_id = NULL;
    }
    if (course_completion_certificate_dto->student_name) {
        free(course_completion_certificate_dto->student_name);
        course_completion_certificate_dto->student_name = NULL;
    }
    if (course_completion_certificate_dto->student_last_name) {
        free(course_completion_certificate_dto->student_last_name);
        course_completion_certificate_dto->student_last_name = NULL;
    }
    if (course_completion_certificate_dto->course_title) {
        free(course_completion_certificate_dto->course_title);
        course_completion_certificate_dto->course_title = NULL;
    }
    if (course_completion_certificate_dto->instructor_name) {
        free(course_completion_certificate_dto->instructor_name);
        course_completion_certificate_dto->instructor_name = NULL;
    }
    if (course_completion_certificate_dto->instructor_last_name) {
        free(course_completion_certificate_dto->instructor_last_name);
        course_completion_certificate_dto->instructor_last_name = NULL;
    }
    free(course_completion_certificate_dto);
}

cJSON *course_completion_certificate_dto_convertToJSON(course_completion_certificate_dto_t *course_completion_certificate_dto) {
    cJSON *item = cJSON_CreateObject();

    // course_completion_certificate_dto->id
    if(course_completion_certificate_dto->id) {
    if(cJSON_AddStringToObject(item, "id", course_completion_certificate_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // course_completion_certificate_dto->timestamp
    if(course_completion_certificate_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", course_completion_certificate_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_completion_certificate_dto->student_profile_id
    if(course_completion_certificate_dto->student_profile_id) {
    if(cJSON_AddStringToObject(item, "studentProfileID", course_completion_certificate_dto->student_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // course_completion_certificate_dto->course_enrollment_id
    if(course_completion_certificate_dto->course_enrollment_id) {
    if(cJSON_AddStringToObject(item, "courseEnrollmentID", course_completion_certificate_dto->course_enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // course_completion_certificate_dto->business_id
    if(course_completion_certificate_dto->business_id) {
    if(cJSON_AddStringToObject(item, "businessID", course_completion_certificate_dto->business_id) == NULL) {
    goto fail; //String
    }
    }


    // course_completion_certificate_dto->business_profile_record_id
    if(course_completion_certificate_dto->business_profile_record_id) {
    if(cJSON_AddStringToObject(item, "businessProfileRecordID", course_completion_certificate_dto->business_profile_record_id) == NULL) {
    goto fail; //String
    }
    }


    // course_completion_certificate_dto->course_completion_certificate_template_id
    if(course_completion_certificate_dto->course_completion_certificate_template_id) {
    if(cJSON_AddStringToObject(item, "courseCompletionCertificateTemplateID", course_completion_certificate_dto->course_completion_certificate_template_id) == NULL) {
    goto fail; //String
    }
    }


    // course_completion_certificate_dto->course_id
    if(course_completion_certificate_dto->course_id) {
    if(cJSON_AddStringToObject(item, "courseID", course_completion_certificate_dto->course_id) == NULL) {
    goto fail; //String
    }
    }


    // course_completion_certificate_dto->student_name
    if(course_completion_certificate_dto->student_name) {
    if(cJSON_AddStringToObject(item, "studentName", course_completion_certificate_dto->student_name) == NULL) {
    goto fail; //String
    }
    }


    // course_completion_certificate_dto->student_last_name
    if(course_completion_certificate_dto->student_last_name) {
    if(cJSON_AddStringToObject(item, "studentLastName", course_completion_certificate_dto->student_last_name) == NULL) {
    goto fail; //String
    }
    }


    // course_completion_certificate_dto->course_title
    if(course_completion_certificate_dto->course_title) {
    if(cJSON_AddStringToObject(item, "courseTitle", course_completion_certificate_dto->course_title) == NULL) {
    goto fail; //String
    }
    }


    // course_completion_certificate_dto->total_effort_in_hours
    if(course_completion_certificate_dto->total_effort_in_hours) {
    if(cJSON_AddNumberToObject(item, "totalEffortInHours", course_completion_certificate_dto->total_effort_in_hours) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_completion_certificate_dto->instructor_name
    if(course_completion_certificate_dto->instructor_name) {
    if(cJSON_AddStringToObject(item, "instructorName", course_completion_certificate_dto->instructor_name) == NULL) {
    goto fail; //String
    }
    }


    // course_completion_certificate_dto->instructor_last_name
    if(course_completion_certificate_dto->instructor_last_name) {
    if(cJSON_AddStringToObject(item, "instructorLastName", course_completion_certificate_dto->instructor_last_name) == NULL) {
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

course_completion_certificate_dto_t *course_completion_certificate_dto_parseFromJSON(cJSON *course_completion_certificate_dtoJSON){

    course_completion_certificate_dto_t *course_completion_certificate_dto_local_var = NULL;

    // course_completion_certificate_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(course_completion_certificate_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // course_completion_certificate_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(course_completion_certificate_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // course_completion_certificate_dto->student_profile_id
    cJSON *student_profile_id = cJSON_GetObjectItemCaseSensitive(course_completion_certificate_dtoJSON, "studentProfileID");
    if (student_profile_id) { 
    if(!cJSON_IsString(student_profile_id) && !cJSON_IsNull(student_profile_id))
    {
    goto end; //String
    }
    }

    // course_completion_certificate_dto->course_enrollment_id
    cJSON *course_enrollment_id = cJSON_GetObjectItemCaseSensitive(course_completion_certificate_dtoJSON, "courseEnrollmentID");
    if (course_enrollment_id) { 
    if(!cJSON_IsString(course_enrollment_id) && !cJSON_IsNull(course_enrollment_id))
    {
    goto end; //String
    }
    }

    // course_completion_certificate_dto->business_id
    cJSON *business_id = cJSON_GetObjectItemCaseSensitive(course_completion_certificate_dtoJSON, "businessID");
    if (business_id) { 
    if(!cJSON_IsString(business_id) && !cJSON_IsNull(business_id))
    {
    goto end; //String
    }
    }

    // course_completion_certificate_dto->business_profile_record_id
    cJSON *business_profile_record_id = cJSON_GetObjectItemCaseSensitive(course_completion_certificate_dtoJSON, "businessProfileRecordID");
    if (business_profile_record_id) { 
    if(!cJSON_IsString(business_profile_record_id) && !cJSON_IsNull(business_profile_record_id))
    {
    goto end; //String
    }
    }

    // course_completion_certificate_dto->course_completion_certificate_template_id
    cJSON *course_completion_certificate_template_id = cJSON_GetObjectItemCaseSensitive(course_completion_certificate_dtoJSON, "courseCompletionCertificateTemplateID");
    if (course_completion_certificate_template_id) { 
    if(!cJSON_IsString(course_completion_certificate_template_id) && !cJSON_IsNull(course_completion_certificate_template_id))
    {
    goto end; //String
    }
    }

    // course_completion_certificate_dto->course_id
    cJSON *course_id = cJSON_GetObjectItemCaseSensitive(course_completion_certificate_dtoJSON, "courseID");
    if (course_id) { 
    if(!cJSON_IsString(course_id) && !cJSON_IsNull(course_id))
    {
    goto end; //String
    }
    }

    // course_completion_certificate_dto->student_name
    cJSON *student_name = cJSON_GetObjectItemCaseSensitive(course_completion_certificate_dtoJSON, "studentName");
    if (student_name) { 
    if(!cJSON_IsString(student_name) && !cJSON_IsNull(student_name))
    {
    goto end; //String
    }
    }

    // course_completion_certificate_dto->student_last_name
    cJSON *student_last_name = cJSON_GetObjectItemCaseSensitive(course_completion_certificate_dtoJSON, "studentLastName");
    if (student_last_name) { 
    if(!cJSON_IsString(student_last_name) && !cJSON_IsNull(student_last_name))
    {
    goto end; //String
    }
    }

    // course_completion_certificate_dto->course_title
    cJSON *course_title = cJSON_GetObjectItemCaseSensitive(course_completion_certificate_dtoJSON, "courseTitle");
    if (course_title) { 
    if(!cJSON_IsString(course_title) && !cJSON_IsNull(course_title))
    {
    goto end; //String
    }
    }

    // course_completion_certificate_dto->total_effort_in_hours
    cJSON *total_effort_in_hours = cJSON_GetObjectItemCaseSensitive(course_completion_certificate_dtoJSON, "totalEffortInHours");
    if (total_effort_in_hours) { 
    if(!cJSON_IsNumber(total_effort_in_hours))
    {
    goto end; //Numeric
    }
    }

    // course_completion_certificate_dto->instructor_name
    cJSON *instructor_name = cJSON_GetObjectItemCaseSensitive(course_completion_certificate_dtoJSON, "instructorName");
    if (instructor_name) { 
    if(!cJSON_IsString(instructor_name) && !cJSON_IsNull(instructor_name))
    {
    goto end; //String
    }
    }

    // course_completion_certificate_dto->instructor_last_name
    cJSON *instructor_last_name = cJSON_GetObjectItemCaseSensitive(course_completion_certificate_dtoJSON, "instructorLastName");
    if (instructor_last_name) { 
    if(!cJSON_IsString(instructor_last_name) && !cJSON_IsNull(instructor_last_name))
    {
    goto end; //String
    }
    }


    course_completion_certificate_dto_local_var = course_completion_certificate_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        student_profile_id && !cJSON_IsNull(student_profile_id) ? strdup(student_profile_id->valuestring) : NULL,
        course_enrollment_id && !cJSON_IsNull(course_enrollment_id) ? strdup(course_enrollment_id->valuestring) : NULL,
        business_id && !cJSON_IsNull(business_id) ? strdup(business_id->valuestring) : NULL,
        business_profile_record_id && !cJSON_IsNull(business_profile_record_id) ? strdup(business_profile_record_id->valuestring) : NULL,
        course_completion_certificate_template_id && !cJSON_IsNull(course_completion_certificate_template_id) ? strdup(course_completion_certificate_template_id->valuestring) : NULL,
        course_id && !cJSON_IsNull(course_id) ? strdup(course_id->valuestring) : NULL,
        student_name && !cJSON_IsNull(student_name) ? strdup(student_name->valuestring) : NULL,
        student_last_name && !cJSON_IsNull(student_last_name) ? strdup(student_last_name->valuestring) : NULL,
        course_title && !cJSON_IsNull(course_title) ? strdup(course_title->valuestring) : NULL,
        total_effort_in_hours ? total_effort_in_hours->valuedouble : 0,
        instructor_name && !cJSON_IsNull(instructor_name) ? strdup(instructor_name->valuestring) : NULL,
        instructor_last_name && !cJSON_IsNull(instructor_last_name) ? strdup(instructor_last_name->valuestring) : NULL
        );

    return course_completion_certificate_dto_local_var;
end:
    return NULL;

}
