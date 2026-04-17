#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "course_assignment_create_dto.h"



course_assignment_create_dto_t *course_assignment_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *instructions,
    double points,
    char *course_id,
    char *course_unit_id,
    char *course_cohort_id,
    char *course_assignment_type_id,
    char *due_date_time,
    int asign_to_all_cohorts,
    char *resources
    ) {
    course_assignment_create_dto_t *course_assignment_create_dto_local_var = malloc(sizeof(course_assignment_create_dto_t));
    if (!course_assignment_create_dto_local_var) {
        return NULL;
    }
    course_assignment_create_dto_local_var->id = id;
    course_assignment_create_dto_local_var->timestamp = timestamp;
    course_assignment_create_dto_local_var->title = title;
    course_assignment_create_dto_local_var->description = description;
    course_assignment_create_dto_local_var->instructions = instructions;
    course_assignment_create_dto_local_var->points = points;
    course_assignment_create_dto_local_var->course_id = course_id;
    course_assignment_create_dto_local_var->course_unit_id = course_unit_id;
    course_assignment_create_dto_local_var->course_cohort_id = course_cohort_id;
    course_assignment_create_dto_local_var->course_assignment_type_id = course_assignment_type_id;
    course_assignment_create_dto_local_var->due_date_time = due_date_time;
    course_assignment_create_dto_local_var->asign_to_all_cohorts = asign_to_all_cohorts;
    course_assignment_create_dto_local_var->resources = resources;

    return course_assignment_create_dto_local_var;
}


void course_assignment_create_dto_free(course_assignment_create_dto_t *course_assignment_create_dto) {
    if(NULL == course_assignment_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (course_assignment_create_dto->id) {
        free(course_assignment_create_dto->id);
        course_assignment_create_dto->id = NULL;
    }
    if (course_assignment_create_dto->timestamp) {
        free(course_assignment_create_dto->timestamp);
        course_assignment_create_dto->timestamp = NULL;
    }
    if (course_assignment_create_dto->title) {
        free(course_assignment_create_dto->title);
        course_assignment_create_dto->title = NULL;
    }
    if (course_assignment_create_dto->description) {
        free(course_assignment_create_dto->description);
        course_assignment_create_dto->description = NULL;
    }
    if (course_assignment_create_dto->instructions) {
        free(course_assignment_create_dto->instructions);
        course_assignment_create_dto->instructions = NULL;
    }
    if (course_assignment_create_dto->course_id) {
        free(course_assignment_create_dto->course_id);
        course_assignment_create_dto->course_id = NULL;
    }
    if (course_assignment_create_dto->course_unit_id) {
        free(course_assignment_create_dto->course_unit_id);
        course_assignment_create_dto->course_unit_id = NULL;
    }
    if (course_assignment_create_dto->course_cohort_id) {
        free(course_assignment_create_dto->course_cohort_id);
        course_assignment_create_dto->course_cohort_id = NULL;
    }
    if (course_assignment_create_dto->course_assignment_type_id) {
        free(course_assignment_create_dto->course_assignment_type_id);
        course_assignment_create_dto->course_assignment_type_id = NULL;
    }
    if (course_assignment_create_dto->due_date_time) {
        free(course_assignment_create_dto->due_date_time);
        course_assignment_create_dto->due_date_time = NULL;
    }
    if (course_assignment_create_dto->resources) {
        free(course_assignment_create_dto->resources);
        course_assignment_create_dto->resources = NULL;
    }
    free(course_assignment_create_dto);
}

cJSON *course_assignment_create_dto_convertToJSON(course_assignment_create_dto_t *course_assignment_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // course_assignment_create_dto->id
    if(course_assignment_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", course_assignment_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // course_assignment_create_dto->timestamp
    if(course_assignment_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", course_assignment_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_assignment_create_dto->title
    if (!course_assignment_create_dto->title) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "title", course_assignment_create_dto->title) == NULL) {
    goto fail; //String
    }


    // course_assignment_create_dto->description
    if(course_assignment_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", course_assignment_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // course_assignment_create_dto->instructions
    if(course_assignment_create_dto->instructions) {
    if(cJSON_AddStringToObject(item, "instructions", course_assignment_create_dto->instructions) == NULL) {
    goto fail; //String
    }
    }


    // course_assignment_create_dto->points
    if(course_assignment_create_dto->points) {
    if(cJSON_AddNumberToObject(item, "points", course_assignment_create_dto->points) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_assignment_create_dto->course_id
    if (!course_assignment_create_dto->course_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "courseID", course_assignment_create_dto->course_id) == NULL) {
    goto fail; //String
    }


    // course_assignment_create_dto->course_unit_id
    if(course_assignment_create_dto->course_unit_id) {
    if(cJSON_AddStringToObject(item, "courseUnitID", course_assignment_create_dto->course_unit_id) == NULL) {
    goto fail; //String
    }
    }


    // course_assignment_create_dto->course_cohort_id
    if(course_assignment_create_dto->course_cohort_id) {
    if(cJSON_AddStringToObject(item, "courseCohortID", course_assignment_create_dto->course_cohort_id) == NULL) {
    goto fail; //String
    }
    }


    // course_assignment_create_dto->course_assignment_type_id
    if(course_assignment_create_dto->course_assignment_type_id) {
    if(cJSON_AddStringToObject(item, "courseAssignmentTypeID", course_assignment_create_dto->course_assignment_type_id) == NULL) {
    goto fail; //String
    }
    }


    // course_assignment_create_dto->due_date_time
    if(course_assignment_create_dto->due_date_time) {
    if(cJSON_AddStringToObject(item, "dueDateTime", course_assignment_create_dto->due_date_time) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_assignment_create_dto->asign_to_all_cohorts
    if(course_assignment_create_dto->asign_to_all_cohorts) {
    if(cJSON_AddBoolToObject(item, "asignToAllCohorts", course_assignment_create_dto->asign_to_all_cohorts) == NULL) {
    goto fail; //Bool
    }
    }


    // course_assignment_create_dto->resources
    if(course_assignment_create_dto->resources) {
    if(cJSON_AddStringToObject(item, "resources", course_assignment_create_dto->resources) == NULL) {
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

course_assignment_create_dto_t *course_assignment_create_dto_parseFromJSON(cJSON *course_assignment_create_dtoJSON){

    course_assignment_create_dto_t *course_assignment_create_dto_local_var = NULL;

    // course_assignment_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(course_assignment_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // course_assignment_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(course_assignment_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // course_assignment_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(course_assignment_create_dtoJSON, "title");
    if (!title) {
        goto end;
    }

    
    if(!cJSON_IsString(title))
    {
    goto end; //String
    }

    // course_assignment_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(course_assignment_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // course_assignment_create_dto->instructions
    cJSON *instructions = cJSON_GetObjectItemCaseSensitive(course_assignment_create_dtoJSON, "instructions");
    if (instructions) { 
    if(!cJSON_IsString(instructions) && !cJSON_IsNull(instructions))
    {
    goto end; //String
    }
    }

    // course_assignment_create_dto->points
    cJSON *points = cJSON_GetObjectItemCaseSensitive(course_assignment_create_dtoJSON, "points");
    if (points) { 
    if(!cJSON_IsNumber(points))
    {
    goto end; //Numeric
    }
    }

    // course_assignment_create_dto->course_id
    cJSON *course_id = cJSON_GetObjectItemCaseSensitive(course_assignment_create_dtoJSON, "courseID");
    if (!course_id) {
        goto end;
    }

    
    if(!cJSON_IsString(course_id))
    {
    goto end; //String
    }

    // course_assignment_create_dto->course_unit_id
    cJSON *course_unit_id = cJSON_GetObjectItemCaseSensitive(course_assignment_create_dtoJSON, "courseUnitID");
    if (course_unit_id) { 
    if(!cJSON_IsString(course_unit_id) && !cJSON_IsNull(course_unit_id))
    {
    goto end; //String
    }
    }

    // course_assignment_create_dto->course_cohort_id
    cJSON *course_cohort_id = cJSON_GetObjectItemCaseSensitive(course_assignment_create_dtoJSON, "courseCohortID");
    if (course_cohort_id) { 
    if(!cJSON_IsString(course_cohort_id) && !cJSON_IsNull(course_cohort_id))
    {
    goto end; //String
    }
    }

    // course_assignment_create_dto->course_assignment_type_id
    cJSON *course_assignment_type_id = cJSON_GetObjectItemCaseSensitive(course_assignment_create_dtoJSON, "courseAssignmentTypeID");
    if (course_assignment_type_id) { 
    if(!cJSON_IsString(course_assignment_type_id) && !cJSON_IsNull(course_assignment_type_id))
    {
    goto end; //String
    }
    }

    // course_assignment_create_dto->due_date_time
    cJSON *due_date_time = cJSON_GetObjectItemCaseSensitive(course_assignment_create_dtoJSON, "dueDateTime");
    if (due_date_time) { 
    if(!cJSON_IsString(due_date_time) && !cJSON_IsNull(due_date_time))
    {
    goto end; //DateTime
    }
    }

    // course_assignment_create_dto->asign_to_all_cohorts
    cJSON *asign_to_all_cohorts = cJSON_GetObjectItemCaseSensitive(course_assignment_create_dtoJSON, "asignToAllCohorts");
    if (asign_to_all_cohorts) { 
    if(!cJSON_IsBool(asign_to_all_cohorts))
    {
    goto end; //Bool
    }
    }

    // course_assignment_create_dto->resources
    cJSON *resources = cJSON_GetObjectItemCaseSensitive(course_assignment_create_dtoJSON, "resources");
    if (resources) { 
    if(!cJSON_IsString(resources) && !cJSON_IsNull(resources))
    {
    goto end; //String
    }
    }


    course_assignment_create_dto_local_var = course_assignment_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(title->valuestring),
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        instructions && !cJSON_IsNull(instructions) ? strdup(instructions->valuestring) : NULL,
        points ? points->valuedouble : 0,
        strdup(course_id->valuestring),
        course_unit_id && !cJSON_IsNull(course_unit_id) ? strdup(course_unit_id->valuestring) : NULL,
        course_cohort_id && !cJSON_IsNull(course_cohort_id) ? strdup(course_cohort_id->valuestring) : NULL,
        course_assignment_type_id && !cJSON_IsNull(course_assignment_type_id) ? strdup(course_assignment_type_id->valuestring) : NULL,
        due_date_time && !cJSON_IsNull(due_date_time) ? strdup(due_date_time->valuestring) : NULL,
        asign_to_all_cohorts ? asign_to_all_cohorts->valueint : 0,
        resources && !cJSON_IsNull(resources) ? strdup(resources->valuestring) : NULL
        );

    return course_assignment_create_dto_local_var;
end:
    return NULL;

}
