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
    char *tenant_id
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
    course_assignment_dto_local_var->tenant_id = tenant_id;

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
    if (course_assignment_dto->tenant_id) {
        free(course_assignment_dto->tenant_id);
        course_assignment_dto->tenant_id = NULL;
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
    if(cJSON_AddStringToObject(item, "courseID", course_assignment_dto->course_id) == NULL) {
    goto fail; //String
    }
    }


    // course_assignment_dto->course_unit_id
    if(course_assignment_dto->course_unit_id) {
    if(cJSON_AddStringToObject(item, "courseUnitID", course_assignment_dto->course_unit_id) == NULL) {
    goto fail; //String
    }
    }


    // course_assignment_dto->course_section_id
    if(course_assignment_dto->course_section_id) {
    if(cJSON_AddStringToObject(item, "courseSectionID", course_assignment_dto->course_section_id) == NULL) {
    goto fail; //String
    }
    }


    // course_assignment_dto->tenant_id
    if(course_assignment_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", course_assignment_dto->tenant_id) == NULL) {
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
    cJSON *course_id = cJSON_GetObjectItemCaseSensitive(course_assignment_dtoJSON, "courseID");
    if (course_id) { 
    if(!cJSON_IsString(course_id) && !cJSON_IsNull(course_id))
    {
    goto end; //String
    }
    }

    // course_assignment_dto->course_unit_id
    cJSON *course_unit_id = cJSON_GetObjectItemCaseSensitive(course_assignment_dtoJSON, "courseUnitID");
    if (course_unit_id) { 
    if(!cJSON_IsString(course_unit_id) && !cJSON_IsNull(course_unit_id))
    {
    goto end; //String
    }
    }

    // course_assignment_dto->course_section_id
    cJSON *course_section_id = cJSON_GetObjectItemCaseSensitive(course_assignment_dtoJSON, "courseSectionID");
    if (course_section_id) { 
    if(!cJSON_IsString(course_section_id) && !cJSON_IsNull(course_section_id))
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
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL
        );

    return course_assignment_dto_local_var;
end:
    return NULL;

}
