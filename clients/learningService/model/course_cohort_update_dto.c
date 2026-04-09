#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "course_cohort_update_dto.h"



course_cohort_update_dto_t *course_cohort_update_dto_create(
    char *name,
    char *start_date_time,
    char *end_date_time,
    char *expected_start_date_time,
    char *expected_end_date_time
    ) {
    course_cohort_update_dto_t *course_cohort_update_dto_local_var = malloc(sizeof(course_cohort_update_dto_t));
    if (!course_cohort_update_dto_local_var) {
        return NULL;
    }
    course_cohort_update_dto_local_var->name = name;
    course_cohort_update_dto_local_var->start_date_time = start_date_time;
    course_cohort_update_dto_local_var->end_date_time = end_date_time;
    course_cohort_update_dto_local_var->expected_start_date_time = expected_start_date_time;
    course_cohort_update_dto_local_var->expected_end_date_time = expected_end_date_time;

    return course_cohort_update_dto_local_var;
}


void course_cohort_update_dto_free(course_cohort_update_dto_t *course_cohort_update_dto) {
    if(NULL == course_cohort_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (course_cohort_update_dto->name) {
        free(course_cohort_update_dto->name);
        course_cohort_update_dto->name = NULL;
    }
    if (course_cohort_update_dto->start_date_time) {
        free(course_cohort_update_dto->start_date_time);
        course_cohort_update_dto->start_date_time = NULL;
    }
    if (course_cohort_update_dto->end_date_time) {
        free(course_cohort_update_dto->end_date_time);
        course_cohort_update_dto->end_date_time = NULL;
    }
    if (course_cohort_update_dto->expected_start_date_time) {
        free(course_cohort_update_dto->expected_start_date_time);
        course_cohort_update_dto->expected_start_date_time = NULL;
    }
    if (course_cohort_update_dto->expected_end_date_time) {
        free(course_cohort_update_dto->expected_end_date_time);
        course_cohort_update_dto->expected_end_date_time = NULL;
    }
    free(course_cohort_update_dto);
}

cJSON *course_cohort_update_dto_convertToJSON(course_cohort_update_dto_t *course_cohort_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // course_cohort_update_dto->name
    if(course_cohort_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", course_cohort_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // course_cohort_update_dto->start_date_time
    if(course_cohort_update_dto->start_date_time) {
    if(cJSON_AddStringToObject(item, "startDateTime", course_cohort_update_dto->start_date_time) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_cohort_update_dto->end_date_time
    if(course_cohort_update_dto->end_date_time) {
    if(cJSON_AddStringToObject(item, "endDateTime", course_cohort_update_dto->end_date_time) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_cohort_update_dto->expected_start_date_time
    if(course_cohort_update_dto->expected_start_date_time) {
    if(cJSON_AddStringToObject(item, "expectedStartDateTime", course_cohort_update_dto->expected_start_date_time) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_cohort_update_dto->expected_end_date_time
    if(course_cohort_update_dto->expected_end_date_time) {
    if(cJSON_AddStringToObject(item, "expectedEndDateTime", course_cohort_update_dto->expected_end_date_time) == NULL) {
    goto fail; //Date-Time
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

course_cohort_update_dto_t *course_cohort_update_dto_parseFromJSON(cJSON *course_cohort_update_dtoJSON){

    course_cohort_update_dto_t *course_cohort_update_dto_local_var = NULL;

    // course_cohort_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(course_cohort_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // course_cohort_update_dto->start_date_time
    cJSON *start_date_time = cJSON_GetObjectItemCaseSensitive(course_cohort_update_dtoJSON, "startDateTime");
    if (start_date_time) { 
    if(!cJSON_IsString(start_date_time) && !cJSON_IsNull(start_date_time))
    {
    goto end; //DateTime
    }
    }

    // course_cohort_update_dto->end_date_time
    cJSON *end_date_time = cJSON_GetObjectItemCaseSensitive(course_cohort_update_dtoJSON, "endDateTime");
    if (end_date_time) { 
    if(!cJSON_IsString(end_date_time) && !cJSON_IsNull(end_date_time))
    {
    goto end; //DateTime
    }
    }

    // course_cohort_update_dto->expected_start_date_time
    cJSON *expected_start_date_time = cJSON_GetObjectItemCaseSensitive(course_cohort_update_dtoJSON, "expectedStartDateTime");
    if (expected_start_date_time) { 
    if(!cJSON_IsString(expected_start_date_time) && !cJSON_IsNull(expected_start_date_time))
    {
    goto end; //DateTime
    }
    }

    // course_cohort_update_dto->expected_end_date_time
    cJSON *expected_end_date_time = cJSON_GetObjectItemCaseSensitive(course_cohort_update_dtoJSON, "expectedEndDateTime");
    if (expected_end_date_time) { 
    if(!cJSON_IsString(expected_end_date_time) && !cJSON_IsNull(expected_end_date_time))
    {
    goto end; //DateTime
    }
    }


    course_cohort_update_dto_local_var = course_cohort_update_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        start_date_time && !cJSON_IsNull(start_date_time) ? strdup(start_date_time->valuestring) : NULL,
        end_date_time && !cJSON_IsNull(end_date_time) ? strdup(end_date_time->valuestring) : NULL,
        expected_start_date_time && !cJSON_IsNull(expected_start_date_time) ? strdup(expected_start_date_time->valuestring) : NULL,
        expected_end_date_time && !cJSON_IsNull(expected_end_date_time) ? strdup(expected_end_date_time->valuestring) : NULL
        );

    return course_cohort_update_dto_local_var;
end:
    return NULL;

}
