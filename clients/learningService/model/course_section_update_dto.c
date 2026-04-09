#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "course_section_update_dto.h"



course_section_update_dto_t *course_section_update_dto_create(
    char *name,
    char *icon,
    char *description,
    char *release_date_time,
    int hide_from_students
    ) {
    course_section_update_dto_t *course_section_update_dto_local_var = malloc(sizeof(course_section_update_dto_t));
    if (!course_section_update_dto_local_var) {
        return NULL;
    }
    course_section_update_dto_local_var->name = name;
    course_section_update_dto_local_var->icon = icon;
    course_section_update_dto_local_var->description = description;
    course_section_update_dto_local_var->release_date_time = release_date_time;
    course_section_update_dto_local_var->hide_from_students = hide_from_students;

    return course_section_update_dto_local_var;
}


void course_section_update_dto_free(course_section_update_dto_t *course_section_update_dto) {
    if(NULL == course_section_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (course_section_update_dto->name) {
        free(course_section_update_dto->name);
        course_section_update_dto->name = NULL;
    }
    if (course_section_update_dto->icon) {
        free(course_section_update_dto->icon);
        course_section_update_dto->icon = NULL;
    }
    if (course_section_update_dto->description) {
        free(course_section_update_dto->description);
        course_section_update_dto->description = NULL;
    }
    if (course_section_update_dto->release_date_time) {
        free(course_section_update_dto->release_date_time);
        course_section_update_dto->release_date_time = NULL;
    }
    free(course_section_update_dto);
}

cJSON *course_section_update_dto_convertToJSON(course_section_update_dto_t *course_section_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // course_section_update_dto->name
    if(course_section_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", course_section_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // course_section_update_dto->icon
    if(course_section_update_dto->icon) {
    if(cJSON_AddStringToObject(item, "icon", course_section_update_dto->icon) == NULL) {
    goto fail; //String
    }
    }


    // course_section_update_dto->description
    if(course_section_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", course_section_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // course_section_update_dto->release_date_time
    if(course_section_update_dto->release_date_time) {
    if(cJSON_AddStringToObject(item, "releaseDateTime", course_section_update_dto->release_date_time) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_section_update_dto->hide_from_students
    if(course_section_update_dto->hide_from_students) {
    if(cJSON_AddBoolToObject(item, "hideFromStudents", course_section_update_dto->hide_from_students) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

course_section_update_dto_t *course_section_update_dto_parseFromJSON(cJSON *course_section_update_dtoJSON){

    course_section_update_dto_t *course_section_update_dto_local_var = NULL;

    // course_section_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(course_section_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // course_section_update_dto->icon
    cJSON *icon = cJSON_GetObjectItemCaseSensitive(course_section_update_dtoJSON, "icon");
    if (icon) { 
    if(!cJSON_IsString(icon) && !cJSON_IsNull(icon))
    {
    goto end; //String
    }
    }

    // course_section_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(course_section_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // course_section_update_dto->release_date_time
    cJSON *release_date_time = cJSON_GetObjectItemCaseSensitive(course_section_update_dtoJSON, "releaseDateTime");
    if (release_date_time) { 
    if(!cJSON_IsString(release_date_time) && !cJSON_IsNull(release_date_time))
    {
    goto end; //DateTime
    }
    }

    // course_section_update_dto->hide_from_students
    cJSON *hide_from_students = cJSON_GetObjectItemCaseSensitive(course_section_update_dtoJSON, "hideFromStudents");
    if (hide_from_students) { 
    if(!cJSON_IsBool(hide_from_students))
    {
    goto end; //Bool
    }
    }


    course_section_update_dto_local_var = course_section_update_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        icon && !cJSON_IsNull(icon) ? strdup(icon->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        release_date_time && !cJSON_IsNull(release_date_time) ? strdup(release_date_time->valuestring) : NULL,
        hide_from_students ? hide_from_students->valueint : 0
        );

    return course_section_update_dto_local_var;
end:
    return NULL;

}
