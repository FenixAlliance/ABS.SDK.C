#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "course_assignment_dto.h"



course_assignment_dto_t *course_assignment_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *instructions,
    double points,
    char *due_date_time,
    char *course_id,
    char *course_unit_id,
    char *course_section_id,
    char *course_cohort_id,
    char *course_assignment_type_id,
    int asign_to_all_cohorts,
    char *resources,
    char *tenant_id,
    char *enrollment_id
    ) {
    course_assignment_dto_t *course_assignment_dto_local_var = malloc(sizeof(course_assignment_dto_t));
    if (!course_assignment_dto_local_var) {
        return NULL;
    }
    course_assignment_dto_local_var->id = id;
    course_assignment_dto_local_var->timestamp = timestamp;
    course_assignment_dto_local_var->title = title;
    course_assignment_dto_local_var->description = description;
    course_assignment_dto_local_var->instructions = instructions;
    course_assignment_dto_local_var->points = points;
    course_assignment_dto_local_var->due_date_time = due_date_time;
    course_assignment_dto_local_var->course_id = course_id;
    course_assignment_dto_local_var->course_unit_id = course_unit_id;
    course_assignment_dto_local_var->course_section_id = course_section_id;
    course_assignment_dto_local_var->course_cohort_id = course_cohort_id;
    course_assignment_dto_local_var->course_assignment_type_id = course_assignment_type_id;
    course_assignment_dto_local_var->asign_to_all_cohorts = asign_to_all_cohorts;
    course_assignment_dto_local_var->resources = resources;
    course_assignment_dto_local_var->tenant_id = tenant_id;
    course_assignment_dto_local_var->enrollment_id = enrollment_id;

    return course_assignment_dto_local_var;
}


void course_assignment_dto_free(course_assignment_dto_t *course_assignment_dto) {
    if(NULL == course_assignment_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (course_assignment_dto->id) {
        free(course_assignment_dto->id);
        course_assignment_dto->id = NULL;
    }
    if (course_assignment_dto->timestamp) {
        free(course_assignment_dto->timestamp);
        course_assignment_dto->timestamp = NULL;
    }
    if (course_assignment_dto->title) {
        free(course_assignment_dto->title);
        course_assignment_dto->title = NULL;
    }
    if (course_assignment_dto->description) {
        free(course_assignment_dto->description);
        course_assignment_dto->description = NULL;
    }
    if (course_assignment_dto->instructions) {
        free(course_assignment_dto->instructions);
        course_assignment_dto->instructions = NULL;
    }
    if (course_assignment_dto->due_date_time) {
        free(course_assignment_dto->due_date_time);
        course_assignment_dto->due_date_time = NULL;
    }
    if (course_assignment_dto->course_id) {
        free(course_assignment_dto->course_id);
        course_assignment_dto->course_id = NULL;
    }
    if (course_assignment_dto->course_unit_id) {
        free(course_assignment_dto->course_unit_id);
        course_assignment_dto->course_unit_id = NULL;
    }
    if (course_assignment_dto->course_section_id) {
        free(course_assignment_dto->course_section_id);
        course_assignment_dto->course_section_id = NULL;
    }
    if (course_assignment_dto->course_cohort_id) {
        free(course_assignment_dto->course_cohort_id);
        course_assignment_dto->course_cohort_id = NULL;
    }
    if (course_assignment_dto->course_assignment_type_id) {
        free(course_assignment_dto->course_assignment_type_id);
        course_assignment_dto->course_assignment_type_id = NULL;
    }
    if (course_assignment_dto->resources) {
        free(course_assignment_dto->resources);
        course_assignment_dto->resources = NULL;
    }
    if (course_assignment_dto->tenant_id) {
        free(course_assignment_dto->tenant_id);
        course_assignment_dto->tenant_id = NULL;
    }
    if (course_assignment_dto->enrollment_id) {
        free(course_assignment_dto->enrollment_id);
        course_assignment_dto->enrollment_id = NULL;
    }
    free(course_assignment_dto);
}

cJSON *course_assignment_dto_convertToJSON(course_assignment_dto_t *course_assignment_dto) {
    cJSON *item = cJSON_CreateObject();

    // course_assignment_dto->id
    if(course_assignment_dto->id) {
    if(cJSON_AddStringToObject(item, "id", course_assignment_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // course_assignment_dto->timestamp
    if(course_assignment_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", course_assignment_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_assignment_dto->title
    if(course_assignment_dto->title) {
    if(cJSON_AddStringToObject(item, "title", course_assignment_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // course_assignment_dto->description
    if(course_assignment_dto->description) {
    if(cJSON_AddStringToObject(item, "description", course_assignment_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // course_assignment_dto->instructions
    if(course_assignment_dto->instructions) {
    if(cJSON_AddStringToObject(item, "instructions", course_assignment_dto->instructions) == NULL) {
    goto fail; //String
    }
    }


    // course_assignment_dto->points
    if(course_assignment_dto->points) {
    if(cJSON_AddNumberToObject(item, "points", course_assignment_dto->points) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_assignment_dto->due_date_time
    if(course_assignment_dto->due_date_time) {
    if(cJSON_AddStringToObject(item, "dueDateTime", course_assignment_dto->due_date_time) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_assignment_dto->course_id
    if(course_assignment_dto->course_id) {
    if(cJSON_AddStringToObject(item, "courseId", course_assignment_dto->course_id) == NULL) {
    goto fail; //String
    }
    }


    // course_assignment_dto->course_unit_id
    if(course_assignment_dto->course_unit_id) {
    if(cJSON_AddStringToObject(item, "courseUnitId", course_assignment_dto->course_unit_id) == NULL) {
    goto fail; //String
    }
    }


    // course_assignment_dto->course_section_id
    if(course_assignment_dto->course_section_id) {
    if(cJSON_AddStringToObject(item, "courseSectionId", course_assignment_dto->course_section_id) == NULL) {
    goto fail; //String
    }
    }


    // course_assignment_dto->course_cohort_id
    if(course_assignment_dto->course_cohort_id) {
    if(cJSON_AddStringToObject(item, "courseCohortId", course_assignment_dto->course_cohort_id) == NULL) {
    goto fail; //String
    }
    }


    // course_assignment_dto->course_assignment_type_id
    if(course_assignment_dto->course_assignment_type_id) {
    if(cJSON_AddStringToObject(item, "courseAssignmentTypeId", course_assignment_dto->course_assignment_type_id) == NULL) {
    goto fail; //String
    }
    }


    // course_assignment_dto->asign_to_all_cohorts
    if(course_assignment_dto->asign_to_all_cohorts) {
    if(cJSON_AddBoolToObject(item, "asignToAllCohorts", course_assignment_dto->asign_to_all_cohorts) == NULL) {
    goto fail; //Bool
    }
    }


    // course_assignment_dto->resources
    if(course_assignment_dto->resources) {
    if(cJSON_AddStringToObject(item, "resources", course_assignment_dto->resources) == NULL) {
    goto fail; //String
    }
    }


    // course_assignment_dto->tenant_id
    if(course_assignment_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", course_assignment_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // course_assignment_dto->enrollment_id
    if(course_assignment_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", course_assignment_dto->enrollment_id) == NULL) {
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

course_assignment_dto_t *course_assignment_dto_parseFromJSON(cJSON *course_assignment_dtoJSON){

    course_assignment_dto_t *course_assignment_dto_local_var = NULL;

    // course_assignment_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(course_assignment_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // course_assignment_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(course_assignment_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // course_assignment_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(course_assignment_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // course_assignment_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(course_assignment_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // course_assignment_dto->instructions
    cJSON *instructions = cJSON_GetObjectItemCaseSensitive(course_assignment_dtoJSON, "instructions");
    if (instructions) { 
    if(!cJSON_IsString(instructions) && !cJSON_IsNull(instructions))
    {
    goto end; //String
    }
    }

    // course_assignment_dto->points
    cJSON *points = cJSON_GetObjectItemCaseSensitive(course_assignment_dtoJSON, "points");
    if (points) { 
    if(!cJSON_IsNumber(points))
    {
    goto end; //Numeric
    }
    }

    // course_assignment_dto->due_date_time
    cJSON *due_date_time = cJSON_GetObjectItemCaseSensitive(course_assignment_dtoJSON, "dueDateTime");
    if (due_date_time) { 
    if(!cJSON_IsString(due_date_time) && !cJSON_IsNull(due_date_time))
    {
    goto end; //DateTime
    }
    }

    // course_assignment_dto->course_id
    cJSON *course_id = cJSON_GetObjectItemCaseSensitive(course_assignment_dtoJSON, "courseId");
    if (course_id) { 
    if(!cJSON_IsString(course_id) && !cJSON_IsNull(course_id))
    {
    goto end; //String
    }
    }

    // course_assignment_dto->course_unit_id
    cJSON *course_unit_id = cJSON_GetObjectItemCaseSensitive(course_assignment_dtoJSON, "courseUnitId");
    if (course_unit_id) { 
    if(!cJSON_IsString(course_unit_id) && !cJSON_IsNull(course_unit_id))
    {
    goto end; //String
    }
    }

    // course_assignment_dto->course_section_id
    cJSON *course_section_id = cJSON_GetObjectItemCaseSensitive(course_assignment_dtoJSON, "courseSectionId");
    if (course_section_id) { 
    if(!cJSON_IsString(course_section_id) && !cJSON_IsNull(course_section_id))
    {
    goto end; //String
    }
    }

    // course_assignment_dto->course_cohort_id
    cJSON *course_cohort_id = cJSON_GetObjectItemCaseSensitive(course_assignment_dtoJSON, "courseCohortId");
    if (course_cohort_id) { 
    if(!cJSON_IsString(course_cohort_id) && !cJSON_IsNull(course_cohort_id))
    {
    goto end; //String
    }
    }

    // course_assignment_dto->course_assignment_type_id
    cJSON *course_assignment_type_id = cJSON_GetObjectItemCaseSensitive(course_assignment_dtoJSON, "courseAssignmentTypeId");
    if (course_assignment_type_id) { 
    if(!cJSON_IsString(course_assignment_type_id) && !cJSON_IsNull(course_assignment_type_id))
    {
    goto end; //String
    }
    }

    // course_assignment_dto->asign_to_all_cohorts
    cJSON *asign_to_all_cohorts = cJSON_GetObjectItemCaseSensitive(course_assignment_dtoJSON, "asignToAllCohorts");
    if (asign_to_all_cohorts) { 
    if(!cJSON_IsBool(asign_to_all_cohorts))
    {
    goto end; //Bool
    }
    }

    // course_assignment_dto->resources
    cJSON *resources = cJSON_GetObjectItemCaseSensitive(course_assignment_dtoJSON, "resources");
    if (resources) { 
    if(!cJSON_IsString(resources) && !cJSON_IsNull(resources))
    {
    goto end; //String
    }
    }

    // course_assignment_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(course_assignment_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // course_assignment_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(course_assignment_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    course_assignment_dto_local_var = course_assignment_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        instructions && !cJSON_IsNull(instructions) ? strdup(instructions->valuestring) : NULL,
        points ? points->valuedouble : 0,
        due_date_time && !cJSON_IsNull(due_date_time) ? strdup(due_date_time->valuestring) : NULL,
        course_id && !cJSON_IsNull(course_id) ? strdup(course_id->valuestring) : NULL,
        course_unit_id && !cJSON_IsNull(course_unit_id) ? strdup(course_unit_id->valuestring) : NULL,
        course_section_id && !cJSON_IsNull(course_section_id) ? strdup(course_section_id->valuestring) : NULL,
        course_cohort_id && !cJSON_IsNull(course_cohort_id) ? strdup(course_cohort_id->valuestring) : NULL,
        course_assignment_type_id && !cJSON_IsNull(course_assignment_type_id) ? strdup(course_assignment_type_id->valuestring) : NULL,
        asign_to_all_cohorts ? asign_to_all_cohorts->valueint : 0,
        resources && !cJSON_IsNull(resources) ? strdup(resources->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return course_assignment_dto_local_var;
end:
    return NULL;

}
