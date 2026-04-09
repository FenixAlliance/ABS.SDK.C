#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "course_assignment_update_dto.h"



course_assignment_update_dto_t *course_assignment_update_dto_create(
    char *title,
    char *description,
    char *instructions,
    double points,
    char *course_unit_id,
    char *course_cohort_id,
    char *course_assignment_type_id,
    char *due_date_time,
    int asign_to_all_cohorts,
    char *resources
    ) {
    course_assignment_update_dto_t *course_assignment_update_dto_local_var = malloc(sizeof(course_assignment_update_dto_t));
    if (!course_assignment_update_dto_local_var) {
        return NULL;
    }
    course_assignment_update_dto_local_var->title = title;
    course_assignment_update_dto_local_var->description = description;
    course_assignment_update_dto_local_var->instructions = instructions;
    course_assignment_update_dto_local_var->points = points;
    course_assignment_update_dto_local_var->course_unit_id = course_unit_id;
    course_assignment_update_dto_local_var->course_cohort_id = course_cohort_id;
    course_assignment_update_dto_local_var->course_assignment_type_id = course_assignment_type_id;
    course_assignment_update_dto_local_var->due_date_time = due_date_time;
    course_assignment_update_dto_local_var->asign_to_all_cohorts = asign_to_all_cohorts;
    course_assignment_update_dto_local_var->resources = resources;

    return course_assignment_update_dto_local_var;
}


void course_assignment_update_dto_free(course_assignment_update_dto_t *course_assignment_update_dto) {
    if(NULL == course_assignment_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (course_assignment_update_dto->title) {
        free(course_assignment_update_dto->title);
        course_assignment_update_dto->title = NULL;
    }
    if (course_assignment_update_dto->description) {
        free(course_assignment_update_dto->description);
        course_assignment_update_dto->description = NULL;
    }
    if (course_assignment_update_dto->instructions) {
        free(course_assignment_update_dto->instructions);
        course_assignment_update_dto->instructions = NULL;
    }
    if (course_assignment_update_dto->course_unit_id) {
        free(course_assignment_update_dto->course_unit_id);
        course_assignment_update_dto->course_unit_id = NULL;
    }
    if (course_assignment_update_dto->course_cohort_id) {
        free(course_assignment_update_dto->course_cohort_id);
        course_assignment_update_dto->course_cohort_id = NULL;
    }
    if (course_assignment_update_dto->course_assignment_type_id) {
        free(course_assignment_update_dto->course_assignment_type_id);
        course_assignment_update_dto->course_assignment_type_id = NULL;
    }
    if (course_assignment_update_dto->due_date_time) {
        free(course_assignment_update_dto->due_date_time);
        course_assignment_update_dto->due_date_time = NULL;
    }
    if (course_assignment_update_dto->resources) {
        free(course_assignment_update_dto->resources);
        course_assignment_update_dto->resources = NULL;
    }
    free(course_assignment_update_dto);
}

cJSON *course_assignment_update_dto_convertToJSON(course_assignment_update_dto_t *course_assignment_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // course_assignment_update_dto->title
    if(course_assignment_update_dto->title) {
    if(cJSON_AddStringToObject(item, "title", course_assignment_update_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // course_assignment_update_dto->description
    if(course_assignment_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", course_assignment_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // course_assignment_update_dto->instructions
    if(course_assignment_update_dto->instructions) {
    if(cJSON_AddStringToObject(item, "instructions", course_assignment_update_dto->instructions) == NULL) {
    goto fail; //String
    }
    }


    // course_assignment_update_dto->points
    if(course_assignment_update_dto->points) {
    if(cJSON_AddNumberToObject(item, "points", course_assignment_update_dto->points) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_assignment_update_dto->course_unit_id
    if(course_assignment_update_dto->course_unit_id) {
    if(cJSON_AddStringToObject(item, "courseUnitID", course_assignment_update_dto->course_unit_id) == NULL) {
    goto fail; //String
    }
    }


    // course_assignment_update_dto->course_cohort_id
    if(course_assignment_update_dto->course_cohort_id) {
    if(cJSON_AddStringToObject(item, "courseCohortID", course_assignment_update_dto->course_cohort_id) == NULL) {
    goto fail; //String
    }
    }


    // course_assignment_update_dto->course_assignment_type_id
    if(course_assignment_update_dto->course_assignment_type_id) {
    if(cJSON_AddStringToObject(item, "courseAssignmentTypeID", course_assignment_update_dto->course_assignment_type_id) == NULL) {
    goto fail; //String
    }
    }


    // course_assignment_update_dto->due_date_time
    if(course_assignment_update_dto->due_date_time) {
    if(cJSON_AddStringToObject(item, "dueDateTime", course_assignment_update_dto->due_date_time) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_assignment_update_dto->asign_to_all_cohorts
    if(course_assignment_update_dto->asign_to_all_cohorts) {
    if(cJSON_AddBoolToObject(item, "asignToAllCohorts", course_assignment_update_dto->asign_to_all_cohorts) == NULL) {
    goto fail; //Bool
    }
    }


    // course_assignment_update_dto->resources
    if(course_assignment_update_dto->resources) {
    if(cJSON_AddStringToObject(item, "resources", course_assignment_update_dto->resources) == NULL) {
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

course_assignment_update_dto_t *course_assignment_update_dto_parseFromJSON(cJSON *course_assignment_update_dtoJSON){

    course_assignment_update_dto_t *course_assignment_update_dto_local_var = NULL;

    // course_assignment_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(course_assignment_update_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // course_assignment_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(course_assignment_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // course_assignment_update_dto->instructions
    cJSON *instructions = cJSON_GetObjectItemCaseSensitive(course_assignment_update_dtoJSON, "instructions");
    if (instructions) { 
    if(!cJSON_IsString(instructions) && !cJSON_IsNull(instructions))
    {
    goto end; //String
    }
    }

    // course_assignment_update_dto->points
    cJSON *points = cJSON_GetObjectItemCaseSensitive(course_assignment_update_dtoJSON, "points");
    if (points) { 
    if(!cJSON_IsNumber(points))
    {
    goto end; //Numeric
    }
    }

    // course_assignment_update_dto->course_unit_id
    cJSON *course_unit_id = cJSON_GetObjectItemCaseSensitive(course_assignment_update_dtoJSON, "courseUnitID");
    if (course_unit_id) { 
    if(!cJSON_IsString(course_unit_id) && !cJSON_IsNull(course_unit_id))
    {
    goto end; //String
    }
    }

    // course_assignment_update_dto->course_cohort_id
    cJSON *course_cohort_id = cJSON_GetObjectItemCaseSensitive(course_assignment_update_dtoJSON, "courseCohortID");
    if (course_cohort_id) { 
    if(!cJSON_IsString(course_cohort_id) && !cJSON_IsNull(course_cohort_id))
    {
    goto end; //String
    }
    }

    // course_assignment_update_dto->course_assignment_type_id
    cJSON *course_assignment_type_id = cJSON_GetObjectItemCaseSensitive(course_assignment_update_dtoJSON, "courseAssignmentTypeID");
    if (course_assignment_type_id) { 
    if(!cJSON_IsString(course_assignment_type_id) && !cJSON_IsNull(course_assignment_type_id))
    {
    goto end; //String
    }
    }

    // course_assignment_update_dto->due_date_time
    cJSON *due_date_time = cJSON_GetObjectItemCaseSensitive(course_assignment_update_dtoJSON, "dueDateTime");
    if (due_date_time) { 
    if(!cJSON_IsString(due_date_time) && !cJSON_IsNull(due_date_time))
    {
    goto end; //DateTime
    }
    }

    // course_assignment_update_dto->asign_to_all_cohorts
    cJSON *asign_to_all_cohorts = cJSON_GetObjectItemCaseSensitive(course_assignment_update_dtoJSON, "asignToAllCohorts");
    if (asign_to_all_cohorts) { 
    if(!cJSON_IsBool(asign_to_all_cohorts))
    {
    goto end; //Bool
    }
    }

    // course_assignment_update_dto->resources
    cJSON *resources = cJSON_GetObjectItemCaseSensitive(course_assignment_update_dtoJSON, "resources");
    if (resources) { 
    if(!cJSON_IsString(resources) && !cJSON_IsNull(resources))
    {
    goto end; //String
    }
    }


    course_assignment_update_dto_local_var = course_assignment_update_dto_create (
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        instructions && !cJSON_IsNull(instructions) ? strdup(instructions->valuestring) : NULL,
        points ? points->valuedouble : 0,
        course_unit_id && !cJSON_IsNull(course_unit_id) ? strdup(course_unit_id->valuestring) : NULL,
        course_cohort_id && !cJSON_IsNull(course_cohort_id) ? strdup(course_cohort_id->valuestring) : NULL,
        course_assignment_type_id && !cJSON_IsNull(course_assignment_type_id) ? strdup(course_assignment_type_id->valuestring) : NULL,
        due_date_time && !cJSON_IsNull(due_date_time) ? strdup(due_date_time->valuestring) : NULL,
        asign_to_all_cohorts ? asign_to_all_cohorts->valueint : 0,
        resources && !cJSON_IsNull(resources) ? strdup(resources->valuestring) : NULL
        );

    return course_assignment_update_dto_local_var;
end:
    return NULL;

}
