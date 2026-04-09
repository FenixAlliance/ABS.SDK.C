#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "course_cohort_dto.h"



course_cohort_dto_t *course_cohort_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *start_date_time,
    char *end_date_time,
    char *expected_start_date_time,
    char *expected_end_date_time,
    char *course_id,
    char *tenant_id
    ) {
    course_cohort_dto_t *course_cohort_dto_local_var = malloc(sizeof(course_cohort_dto_t));
    if (!course_cohort_dto_local_var) {
        return NULL;
    }
    course_cohort_dto_local_var->id = id;
    course_cohort_dto_local_var->timestamp = timestamp;
    course_cohort_dto_local_var->name = name;
    course_cohort_dto_local_var->start_date_time = start_date_time;
    course_cohort_dto_local_var->end_date_time = end_date_time;
    course_cohort_dto_local_var->expected_start_date_time = expected_start_date_time;
    course_cohort_dto_local_var->expected_end_date_time = expected_end_date_time;
    course_cohort_dto_local_var->course_id = course_id;
    course_cohort_dto_local_var->tenant_id = tenant_id;

    return course_cohort_dto_local_var;
}


void course_cohort_dto_free(course_cohort_dto_t *course_cohort_dto) {
    if(NULL == course_cohort_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (course_cohort_dto->id) {
        free(course_cohort_dto->id);
        course_cohort_dto->id = NULL;
    }
    if (course_cohort_dto->timestamp) {
        free(course_cohort_dto->timestamp);
        course_cohort_dto->timestamp = NULL;
    }
    if (course_cohort_dto->name) {
        free(course_cohort_dto->name);
        course_cohort_dto->name = NULL;
    }
    if (course_cohort_dto->start_date_time) {
        free(course_cohort_dto->start_date_time);
        course_cohort_dto->start_date_time = NULL;
    }
    if (course_cohort_dto->end_date_time) {
        free(course_cohort_dto->end_date_time);
        course_cohort_dto->end_date_time = NULL;
    }
    if (course_cohort_dto->expected_start_date_time) {
        free(course_cohort_dto->expected_start_date_time);
        course_cohort_dto->expected_start_date_time = NULL;
    }
    if (course_cohort_dto->expected_end_date_time) {
        free(course_cohort_dto->expected_end_date_time);
        course_cohort_dto->expected_end_date_time = NULL;
    }
    if (course_cohort_dto->course_id) {
        free(course_cohort_dto->course_id);
        course_cohort_dto->course_id = NULL;
    }
    if (course_cohort_dto->tenant_id) {
        free(course_cohort_dto->tenant_id);
        course_cohort_dto->tenant_id = NULL;
    }
    free(course_cohort_dto);
}

cJSON *course_cohort_dto_convertToJSON(course_cohort_dto_t *course_cohort_dto) {
    cJSON *item = cJSON_CreateObject();

    // course_cohort_dto->id
    if(course_cohort_dto->id) {
    if(cJSON_AddStringToObject(item, "id", course_cohort_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // course_cohort_dto->timestamp
    if(course_cohort_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", course_cohort_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_cohort_dto->name
    if(course_cohort_dto->name) {
    if(cJSON_AddStringToObject(item, "name", course_cohort_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // course_cohort_dto->start_date_time
    if(course_cohort_dto->start_date_time) {
    if(cJSON_AddStringToObject(item, "startDateTime", course_cohort_dto->start_date_time) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_cohort_dto->end_date_time
    if(course_cohort_dto->end_date_time) {
    if(cJSON_AddStringToObject(item, "endDateTime", course_cohort_dto->end_date_time) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_cohort_dto->expected_start_date_time
    if(course_cohort_dto->expected_start_date_time) {
    if(cJSON_AddStringToObject(item, "expectedStartDateTime", course_cohort_dto->expected_start_date_time) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_cohort_dto->expected_end_date_time
    if(course_cohort_dto->expected_end_date_time) {
    if(cJSON_AddStringToObject(item, "expectedEndDateTime", course_cohort_dto->expected_end_date_time) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_cohort_dto->course_id
    if(course_cohort_dto->course_id) {
    if(cJSON_AddStringToObject(item, "courseID", course_cohort_dto->course_id) == NULL) {
    goto fail; //String
    }
    }


    // course_cohort_dto->tenant_id
    if(course_cohort_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", course_cohort_dto->tenant_id) == NULL) {
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

course_cohort_dto_t *course_cohort_dto_parseFromJSON(cJSON *course_cohort_dtoJSON){

    course_cohort_dto_t *course_cohort_dto_local_var = NULL;

    // course_cohort_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(course_cohort_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // course_cohort_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(course_cohort_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // course_cohort_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(course_cohort_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // course_cohort_dto->start_date_time
    cJSON *start_date_time = cJSON_GetObjectItemCaseSensitive(course_cohort_dtoJSON, "startDateTime");
    if (start_date_time) { 
    if(!cJSON_IsString(start_date_time) && !cJSON_IsNull(start_date_time))
    {
    goto end; //DateTime
    }
    }

    // course_cohort_dto->end_date_time
    cJSON *end_date_time = cJSON_GetObjectItemCaseSensitive(course_cohort_dtoJSON, "endDateTime");
    if (end_date_time) { 
    if(!cJSON_IsString(end_date_time) && !cJSON_IsNull(end_date_time))
    {
    goto end; //DateTime
    }
    }

    // course_cohort_dto->expected_start_date_time
    cJSON *expected_start_date_time = cJSON_GetObjectItemCaseSensitive(course_cohort_dtoJSON, "expectedStartDateTime");
    if (expected_start_date_time) { 
    if(!cJSON_IsString(expected_start_date_time) && !cJSON_IsNull(expected_start_date_time))
    {
    goto end; //DateTime
    }
    }

    // course_cohort_dto->expected_end_date_time
    cJSON *expected_end_date_time = cJSON_GetObjectItemCaseSensitive(course_cohort_dtoJSON, "expectedEndDateTime");
    if (expected_end_date_time) { 
    if(!cJSON_IsString(expected_end_date_time) && !cJSON_IsNull(expected_end_date_time))
    {
    goto end; //DateTime
    }
    }

    // course_cohort_dto->course_id
    cJSON *course_id = cJSON_GetObjectItemCaseSensitive(course_cohort_dtoJSON, "courseID");
    if (course_id) { 
    if(!cJSON_IsString(course_id) && !cJSON_IsNull(course_id))
    {
    goto end; //String
    }
    }

    // course_cohort_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(course_cohort_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }


    course_cohort_dto_local_var = course_cohort_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        start_date_time && !cJSON_IsNull(start_date_time) ? strdup(start_date_time->valuestring) : NULL,
        end_date_time && !cJSON_IsNull(end_date_time) ? strdup(end_date_time->valuestring) : NULL,
        expected_start_date_time && !cJSON_IsNull(expected_start_date_time) ? strdup(expected_start_date_time->valuestring) : NULL,
        expected_end_date_time && !cJSON_IsNull(expected_end_date_time) ? strdup(expected_end_date_time->valuestring) : NULL,
        course_id && !cJSON_IsNull(course_id) ? strdup(course_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL
        );

    return course_cohort_dto_local_var;
end:
    return NULL;

}
