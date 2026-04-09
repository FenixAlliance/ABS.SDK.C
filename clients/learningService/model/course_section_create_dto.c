#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "course_section_create_dto.h"



course_section_create_dto_t *course_section_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *icon,
    char *description,
    char *course_id,
    char *business_id,
    char *release_date_time,
    int hide_from_students
    ) {
    course_section_create_dto_t *course_section_create_dto_local_var = malloc(sizeof(course_section_create_dto_t));
    if (!course_section_create_dto_local_var) {
        return NULL;
    }
    course_section_create_dto_local_var->id = id;
    course_section_create_dto_local_var->timestamp = timestamp;
    course_section_create_dto_local_var->name = name;
    course_section_create_dto_local_var->icon = icon;
    course_section_create_dto_local_var->description = description;
    course_section_create_dto_local_var->course_id = course_id;
    course_section_create_dto_local_var->business_id = business_id;
    course_section_create_dto_local_var->release_date_time = release_date_time;
    course_section_create_dto_local_var->hide_from_students = hide_from_students;

    return course_section_create_dto_local_var;
}


void course_section_create_dto_free(course_section_create_dto_t *course_section_create_dto) {
    if(NULL == course_section_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (course_section_create_dto->id) {
        free(course_section_create_dto->id);
        course_section_create_dto->id = NULL;
    }
    if (course_section_create_dto->timestamp) {
        free(course_section_create_dto->timestamp);
        course_section_create_dto->timestamp = NULL;
    }
    if (course_section_create_dto->name) {
        free(course_section_create_dto->name);
        course_section_create_dto->name = NULL;
    }
    if (course_section_create_dto->icon) {
        free(course_section_create_dto->icon);
        course_section_create_dto->icon = NULL;
    }
    if (course_section_create_dto->description) {
        free(course_section_create_dto->description);
        course_section_create_dto->description = NULL;
    }
    if (course_section_create_dto->course_id) {
        free(course_section_create_dto->course_id);
        course_section_create_dto->course_id = NULL;
    }
    if (course_section_create_dto->business_id) {
        free(course_section_create_dto->business_id);
        course_section_create_dto->business_id = NULL;
    }
    if (course_section_create_dto->release_date_time) {
        free(course_section_create_dto->release_date_time);
        course_section_create_dto->release_date_time = NULL;
    }
    free(course_section_create_dto);
}

cJSON *course_section_create_dto_convertToJSON(course_section_create_dto_t *course_section_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // course_section_create_dto->id
    if(course_section_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", course_section_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // course_section_create_dto->timestamp
    if(course_section_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", course_section_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_section_create_dto->name
    if (!course_section_create_dto->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", course_section_create_dto->name) == NULL) {
    goto fail; //String
    }


    // course_section_create_dto->icon
    if(course_section_create_dto->icon) {
    if(cJSON_AddStringToObject(item, "icon", course_section_create_dto->icon) == NULL) {
    goto fail; //String
    }
    }


    // course_section_create_dto->description
    if(course_section_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", course_section_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // course_section_create_dto->course_id
    if (!course_section_create_dto->course_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "courseID", course_section_create_dto->course_id) == NULL) {
    goto fail; //String
    }


    // course_section_create_dto->business_id
    if (!course_section_create_dto->business_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "businessID", course_section_create_dto->business_id) == NULL) {
    goto fail; //String
    }


    // course_section_create_dto->release_date_time
    if(course_section_create_dto->release_date_time) {
    if(cJSON_AddStringToObject(item, "releaseDateTime", course_section_create_dto->release_date_time) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_section_create_dto->hide_from_students
    if(course_section_create_dto->hide_from_students) {
    if(cJSON_AddBoolToObject(item, "hideFromStudents", course_section_create_dto->hide_from_students) == NULL) {
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

course_section_create_dto_t *course_section_create_dto_parseFromJSON(cJSON *course_section_create_dtoJSON){

    course_section_create_dto_t *course_section_create_dto_local_var = NULL;

    // course_section_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(course_section_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // course_section_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(course_section_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // course_section_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(course_section_create_dtoJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // course_section_create_dto->icon
    cJSON *icon = cJSON_GetObjectItemCaseSensitive(course_section_create_dtoJSON, "icon");
    if (icon) { 
    if(!cJSON_IsString(icon) && !cJSON_IsNull(icon))
    {
    goto end; //String
    }
    }

    // course_section_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(course_section_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // course_section_create_dto->course_id
    cJSON *course_id = cJSON_GetObjectItemCaseSensitive(course_section_create_dtoJSON, "courseID");
    if (!course_id) {
        goto end;
    }

    
    if(!cJSON_IsString(course_id))
    {
    goto end; //String
    }

    // course_section_create_dto->business_id
    cJSON *business_id = cJSON_GetObjectItemCaseSensitive(course_section_create_dtoJSON, "businessID");
    if (!business_id) {
        goto end;
    }

    
    if(!cJSON_IsString(business_id))
    {
    goto end; //String
    }

    // course_section_create_dto->release_date_time
    cJSON *release_date_time = cJSON_GetObjectItemCaseSensitive(course_section_create_dtoJSON, "releaseDateTime");
    if (release_date_time) { 
    if(!cJSON_IsString(release_date_time) && !cJSON_IsNull(release_date_time))
    {
    goto end; //DateTime
    }
    }

    // course_section_create_dto->hide_from_students
    cJSON *hide_from_students = cJSON_GetObjectItemCaseSensitive(course_section_create_dtoJSON, "hideFromStudents");
    if (hide_from_students) { 
    if(!cJSON_IsBool(hide_from_students))
    {
    goto end; //Bool
    }
    }


    course_section_create_dto_local_var = course_section_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(name->valuestring),
        icon && !cJSON_IsNull(icon) ? strdup(icon->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        strdup(course_id->valuestring),
        strdup(business_id->valuestring),
        release_date_time && !cJSON_IsNull(release_date_time) ? strdup(release_date_time->valuestring) : NULL,
        hide_from_students ? hide_from_students->valueint : 0
        );

    return course_section_create_dto_local_var;
end:
    return NULL;

}
