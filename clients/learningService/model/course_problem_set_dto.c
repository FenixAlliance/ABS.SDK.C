#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "course_problem_set_dto.h"



course_problem_set_dto_t *course_problem_set_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    double overall_score,
    char *course_id,
    char *course_unit_id,
    char *release_date_time,
    char *tenant_id
    ) {
    course_problem_set_dto_t *course_problem_set_dto_local_var = malloc(sizeof(course_problem_set_dto_t));
    if (!course_problem_set_dto_local_var) {
        return NULL;
    }
    course_problem_set_dto_local_var->id = id;
    course_problem_set_dto_local_var->timestamp = timestamp;
    course_problem_set_dto_local_var->title = title;
    course_problem_set_dto_local_var->description = description;
    course_problem_set_dto_local_var->overall_score = overall_score;
    course_problem_set_dto_local_var->course_id = course_id;
    course_problem_set_dto_local_var->course_unit_id = course_unit_id;
    course_problem_set_dto_local_var->release_date_time = release_date_time;
    course_problem_set_dto_local_var->tenant_id = tenant_id;

    return course_problem_set_dto_local_var;
}


void course_problem_set_dto_free(course_problem_set_dto_t *course_problem_set_dto) {
    if(NULL == course_problem_set_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (course_problem_set_dto->id) {
        free(course_problem_set_dto->id);
        course_problem_set_dto->id = NULL;
    }
    if (course_problem_set_dto->timestamp) {
        free(course_problem_set_dto->timestamp);
        course_problem_set_dto->timestamp = NULL;
    }
    if (course_problem_set_dto->title) {
        free(course_problem_set_dto->title);
        course_problem_set_dto->title = NULL;
    }
    if (course_problem_set_dto->description) {
        free(course_problem_set_dto->description);
        course_problem_set_dto->description = NULL;
    }
    if (course_problem_set_dto->course_id) {
        free(course_problem_set_dto->course_id);
        course_problem_set_dto->course_id = NULL;
    }
    if (course_problem_set_dto->course_unit_id) {
        free(course_problem_set_dto->course_unit_id);
        course_problem_set_dto->course_unit_id = NULL;
    }
    if (course_problem_set_dto->release_date_time) {
        free(course_problem_set_dto->release_date_time);
        course_problem_set_dto->release_date_time = NULL;
    }
    if (course_problem_set_dto->tenant_id) {
        free(course_problem_set_dto->tenant_id);
        course_problem_set_dto->tenant_id = NULL;
    }
    free(course_problem_set_dto);
}

cJSON *course_problem_set_dto_convertToJSON(course_problem_set_dto_t *course_problem_set_dto) {
    cJSON *item = cJSON_CreateObject();

    // course_problem_set_dto->id
    if(course_problem_set_dto->id) {
    if(cJSON_AddStringToObject(item, "id", course_problem_set_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // course_problem_set_dto->timestamp
    if(course_problem_set_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", course_problem_set_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_problem_set_dto->title
    if(course_problem_set_dto->title) {
    if(cJSON_AddStringToObject(item, "title", course_problem_set_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // course_problem_set_dto->description
    if(course_problem_set_dto->description) {
    if(cJSON_AddStringToObject(item, "description", course_problem_set_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // course_problem_set_dto->overall_score
    if(course_problem_set_dto->overall_score) {
    if(cJSON_AddNumberToObject(item, "overallScore", course_problem_set_dto->overall_score) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_problem_set_dto->course_id
    if(course_problem_set_dto->course_id) {
    if(cJSON_AddStringToObject(item, "courseID", course_problem_set_dto->course_id) == NULL) {
    goto fail; //String
    }
    }


    // course_problem_set_dto->course_unit_id
    if(course_problem_set_dto->course_unit_id) {
    if(cJSON_AddStringToObject(item, "courseUnitID", course_problem_set_dto->course_unit_id) == NULL) {
    goto fail; //String
    }
    }


    // course_problem_set_dto->release_date_time
    if(course_problem_set_dto->release_date_time) {
    if(cJSON_AddStringToObject(item, "releaseDateTime", course_problem_set_dto->release_date_time) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_problem_set_dto->tenant_id
    if(course_problem_set_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", course_problem_set_dto->tenant_id) == NULL) {
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

course_problem_set_dto_t *course_problem_set_dto_parseFromJSON(cJSON *course_problem_set_dtoJSON){

    course_problem_set_dto_t *course_problem_set_dto_local_var = NULL;

    // course_problem_set_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(course_problem_set_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // course_problem_set_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(course_problem_set_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // course_problem_set_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(course_problem_set_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // course_problem_set_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(course_problem_set_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // course_problem_set_dto->overall_score
    cJSON *overall_score = cJSON_GetObjectItemCaseSensitive(course_problem_set_dtoJSON, "overallScore");
    if (overall_score) { 
    if(!cJSON_IsNumber(overall_score))
    {
    goto end; //Numeric
    }
    }

    // course_problem_set_dto->course_id
    cJSON *course_id = cJSON_GetObjectItemCaseSensitive(course_problem_set_dtoJSON, "courseID");
    if (course_id) { 
    if(!cJSON_IsString(course_id) && !cJSON_IsNull(course_id))
    {
    goto end; //String
    }
    }

    // course_problem_set_dto->course_unit_id
    cJSON *course_unit_id = cJSON_GetObjectItemCaseSensitive(course_problem_set_dtoJSON, "courseUnitID");
    if (course_unit_id) { 
    if(!cJSON_IsString(course_unit_id) && !cJSON_IsNull(course_unit_id))
    {
    goto end; //String
    }
    }

    // course_problem_set_dto->release_date_time
    cJSON *release_date_time = cJSON_GetObjectItemCaseSensitive(course_problem_set_dtoJSON, "releaseDateTime");
    if (release_date_time) { 
    if(!cJSON_IsString(release_date_time) && !cJSON_IsNull(release_date_time))
    {
    goto end; //DateTime
    }
    }

    // course_problem_set_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(course_problem_set_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }


    course_problem_set_dto_local_var = course_problem_set_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        overall_score ? overall_score->valuedouble : 0,
        course_id && !cJSON_IsNull(course_id) ? strdup(course_id->valuestring) : NULL,
        course_unit_id && !cJSON_IsNull(course_unit_id) ? strdup(course_unit_id->valuestring) : NULL,
        release_date_time && !cJSON_IsNull(release_date_time) ? strdup(release_date_time->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL
        );

    return course_problem_set_dto_local_var;
end:
    return NULL;

}
