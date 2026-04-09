#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "course_unit_dto.h"



course_unit_dto_t *course_unit_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *release_date_time,
    char *content,
    char *course_id,
    char *course_section_id,
    char *tenant_id,
    list_t *course_handouts,
    list_t *course_assignments,
    list_t *course_components
    ) {
    course_unit_dto_t *course_unit_dto_local_var = malloc(sizeof(course_unit_dto_t));
    if (!course_unit_dto_local_var) {
        return NULL;
    }
    course_unit_dto_local_var->id = id;
    course_unit_dto_local_var->timestamp = timestamp;
    course_unit_dto_local_var->title = title;
    course_unit_dto_local_var->description = description;
    course_unit_dto_local_var->release_date_time = release_date_time;
    course_unit_dto_local_var->content = content;
    course_unit_dto_local_var->course_id = course_id;
    course_unit_dto_local_var->course_section_id = course_section_id;
    course_unit_dto_local_var->tenant_id = tenant_id;
    course_unit_dto_local_var->course_handouts = course_handouts;
    course_unit_dto_local_var->course_assignments = course_assignments;
    course_unit_dto_local_var->course_components = course_components;

    return course_unit_dto_local_var;
}


void course_unit_dto_free(course_unit_dto_t *course_unit_dto) {
    if(NULL == course_unit_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (course_unit_dto->id) {
        free(course_unit_dto->id);
        course_unit_dto->id = NULL;
    }
    if (course_unit_dto->timestamp) {
        free(course_unit_dto->timestamp);
        course_unit_dto->timestamp = NULL;
    }
    if (course_unit_dto->title) {
        free(course_unit_dto->title);
        course_unit_dto->title = NULL;
    }
    if (course_unit_dto->description) {
        free(course_unit_dto->description);
        course_unit_dto->description = NULL;
    }
    if (course_unit_dto->release_date_time) {
        free(course_unit_dto->release_date_time);
        course_unit_dto->release_date_time = NULL;
    }
    if (course_unit_dto->content) {
        free(course_unit_dto->content);
        course_unit_dto->content = NULL;
    }
    if (course_unit_dto->course_id) {
        free(course_unit_dto->course_id);
        course_unit_dto->course_id = NULL;
    }
    if (course_unit_dto->course_section_id) {
        free(course_unit_dto->course_section_id);
        course_unit_dto->course_section_id = NULL;
    }
    if (course_unit_dto->tenant_id) {
        free(course_unit_dto->tenant_id);
        course_unit_dto->tenant_id = NULL;
    }
    if (course_unit_dto->course_handouts) {
        list_ForEach(listEntry, course_unit_dto->course_handouts) {
            course_handout_dto_free(listEntry->data);
        }
        list_freeList(course_unit_dto->course_handouts);
        course_unit_dto->course_handouts = NULL;
    }
    if (course_unit_dto->course_assignments) {
        list_ForEach(listEntry, course_unit_dto->course_assignments) {
            course_assignment_dto_free(listEntry->data);
        }
        list_freeList(course_unit_dto->course_assignments);
        course_unit_dto->course_assignments = NULL;
    }
    if (course_unit_dto->course_components) {
        list_ForEach(listEntry, course_unit_dto->course_components) {
            course_unit_component_dto_free(listEntry->data);
        }
        list_freeList(course_unit_dto->course_components);
        course_unit_dto->course_components = NULL;
    }
    free(course_unit_dto);
}

cJSON *course_unit_dto_convertToJSON(course_unit_dto_t *course_unit_dto) {
    cJSON *item = cJSON_CreateObject();

    // course_unit_dto->id
    if(course_unit_dto->id) {
    if(cJSON_AddStringToObject(item, "id", course_unit_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // course_unit_dto->timestamp
    if(course_unit_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", course_unit_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_unit_dto->title
    if(course_unit_dto->title) {
    if(cJSON_AddStringToObject(item, "title", course_unit_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // course_unit_dto->description
    if(course_unit_dto->description) {
    if(cJSON_AddStringToObject(item, "description", course_unit_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // course_unit_dto->release_date_time
    if(course_unit_dto->release_date_time) {
    if(cJSON_AddStringToObject(item, "releaseDateTime", course_unit_dto->release_date_time) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_unit_dto->content
    if(course_unit_dto->content) {
    if(cJSON_AddStringToObject(item, "content", course_unit_dto->content) == NULL) {
    goto fail; //String
    }
    }


    // course_unit_dto->course_id
    if(course_unit_dto->course_id) {
    if(cJSON_AddStringToObject(item, "courseID", course_unit_dto->course_id) == NULL) {
    goto fail; //String
    }
    }


    // course_unit_dto->course_section_id
    if(course_unit_dto->course_section_id) {
    if(cJSON_AddStringToObject(item, "courseSectionID", course_unit_dto->course_section_id) == NULL) {
    goto fail; //String
    }
    }


    // course_unit_dto->tenant_id
    if(course_unit_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", course_unit_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // course_unit_dto->course_handouts
    if(course_unit_dto->course_handouts) {
    cJSON *course_handouts = cJSON_AddArrayToObject(item, "courseHandouts");
    if(course_handouts == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *course_handoutsListEntry;
    if (course_unit_dto->course_handouts) {
    list_ForEach(course_handoutsListEntry, course_unit_dto->course_handouts) {
    cJSON *itemLocal = course_handout_dto_convertToJSON(course_handoutsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(course_handouts, itemLocal);
    }
    }
    }


    // course_unit_dto->course_assignments
    if(course_unit_dto->course_assignments) {
    cJSON *course_assignments = cJSON_AddArrayToObject(item, "courseAssignments");
    if(course_assignments == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *course_assignmentsListEntry;
    if (course_unit_dto->course_assignments) {
    list_ForEach(course_assignmentsListEntry, course_unit_dto->course_assignments) {
    cJSON *itemLocal = course_assignment_dto_convertToJSON(course_assignmentsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(course_assignments, itemLocal);
    }
    }
    }


    // course_unit_dto->course_components
    if(course_unit_dto->course_components) {
    cJSON *course_components = cJSON_AddArrayToObject(item, "courseComponents");
    if(course_components == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *course_componentsListEntry;
    if (course_unit_dto->course_components) {
    list_ForEach(course_componentsListEntry, course_unit_dto->course_components) {
    cJSON *itemLocal = course_unit_component_dto_convertToJSON(course_componentsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(course_components, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

course_unit_dto_t *course_unit_dto_parseFromJSON(cJSON *course_unit_dtoJSON){

    course_unit_dto_t *course_unit_dto_local_var = NULL;

    // define the local list for course_unit_dto->course_handouts
    list_t *course_handoutsList = NULL;

    // define the local list for course_unit_dto->course_assignments
    list_t *course_assignmentsList = NULL;

    // define the local list for course_unit_dto->course_components
    list_t *course_componentsList = NULL;

    // course_unit_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(course_unit_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // course_unit_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(course_unit_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // course_unit_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(course_unit_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // course_unit_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(course_unit_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // course_unit_dto->release_date_time
    cJSON *release_date_time = cJSON_GetObjectItemCaseSensitive(course_unit_dtoJSON, "releaseDateTime");
    if (release_date_time) { 
    if(!cJSON_IsString(release_date_time) && !cJSON_IsNull(release_date_time))
    {
    goto end; //DateTime
    }
    }

    // course_unit_dto->content
    cJSON *content = cJSON_GetObjectItemCaseSensitive(course_unit_dtoJSON, "content");
    if (content) { 
    if(!cJSON_IsString(content) && !cJSON_IsNull(content))
    {
    goto end; //String
    }
    }

    // course_unit_dto->course_id
    cJSON *course_id = cJSON_GetObjectItemCaseSensitive(course_unit_dtoJSON, "courseID");
    if (course_id) { 
    if(!cJSON_IsString(course_id) && !cJSON_IsNull(course_id))
    {
    goto end; //String
    }
    }

    // course_unit_dto->course_section_id
    cJSON *course_section_id = cJSON_GetObjectItemCaseSensitive(course_unit_dtoJSON, "courseSectionID");
    if (course_section_id) { 
    if(!cJSON_IsString(course_section_id) && !cJSON_IsNull(course_section_id))
    {
    goto end; //String
    }
    }

    // course_unit_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(course_unit_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // course_unit_dto->course_handouts
    cJSON *course_handouts = cJSON_GetObjectItemCaseSensitive(course_unit_dtoJSON, "courseHandouts");
    if (course_handouts) { 
    cJSON *course_handouts_local_nonprimitive = NULL;
    if(!cJSON_IsArray(course_handouts)){
        goto end; //nonprimitive container
    }

    course_handoutsList = list_createList();

    cJSON_ArrayForEach(course_handouts_local_nonprimitive,course_handouts )
    {
        if(!cJSON_IsObject(course_handouts_local_nonprimitive)){
            goto end;
        }
        course_handout_dto_t *course_handoutsItem = course_handout_dto_parseFromJSON(course_handouts_local_nonprimitive);

        list_addElement(course_handoutsList, course_handoutsItem);
    }
    }

    // course_unit_dto->course_assignments
    cJSON *course_assignments = cJSON_GetObjectItemCaseSensitive(course_unit_dtoJSON, "courseAssignments");
    if (course_assignments) { 
    cJSON *course_assignments_local_nonprimitive = NULL;
    if(!cJSON_IsArray(course_assignments)){
        goto end; //nonprimitive container
    }

    course_assignmentsList = list_createList();

    cJSON_ArrayForEach(course_assignments_local_nonprimitive,course_assignments )
    {
        if(!cJSON_IsObject(course_assignments_local_nonprimitive)){
            goto end;
        }
        course_assignment_dto_t *course_assignmentsItem = course_assignment_dto_parseFromJSON(course_assignments_local_nonprimitive);

        list_addElement(course_assignmentsList, course_assignmentsItem);
    }
    }

    // course_unit_dto->course_components
    cJSON *course_components = cJSON_GetObjectItemCaseSensitive(course_unit_dtoJSON, "courseComponents");
    if (course_components) { 
    cJSON *course_components_local_nonprimitive = NULL;
    if(!cJSON_IsArray(course_components)){
        goto end; //nonprimitive container
    }

    course_componentsList = list_createList();

    cJSON_ArrayForEach(course_components_local_nonprimitive,course_components )
    {
        if(!cJSON_IsObject(course_components_local_nonprimitive)){
            goto end;
        }
        course_unit_component_dto_t *course_componentsItem = course_unit_component_dto_parseFromJSON(course_components_local_nonprimitive);

        list_addElement(course_componentsList, course_componentsItem);
    }
    }


    course_unit_dto_local_var = course_unit_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        release_date_time && !cJSON_IsNull(release_date_time) ? strdup(release_date_time->valuestring) : NULL,
        content && !cJSON_IsNull(content) ? strdup(content->valuestring) : NULL,
        course_id && !cJSON_IsNull(course_id) ? strdup(course_id->valuestring) : NULL,
        course_section_id && !cJSON_IsNull(course_section_id) ? strdup(course_section_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        course_handouts ? course_handoutsList : NULL,
        course_assignments ? course_assignmentsList : NULL,
        course_components ? course_componentsList : NULL
        );

    return course_unit_dto_local_var;
end:
    if (course_handoutsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, course_handoutsList) {
            course_handout_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(course_handoutsList);
        course_handoutsList = NULL;
    }
    if (course_assignmentsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, course_assignmentsList) {
            course_assignment_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(course_assignmentsList);
        course_assignmentsList = NULL;
    }
    if (course_componentsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, course_componentsList) {
            course_unit_component_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(course_componentsList);
        course_componentsList = NULL;
    }
    return NULL;

}
