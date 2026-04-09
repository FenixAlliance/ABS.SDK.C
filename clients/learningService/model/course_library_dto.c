#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "course_library_dto.h"



course_library_dto_t *course_library_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *course_id,
    char *course_unit_id,
    char *release_date_time,
    char *tenant_id
    ) {
    course_library_dto_t *course_library_dto_local_var = malloc(sizeof(course_library_dto_t));
    if (!course_library_dto_local_var) {
        return NULL;
    }
    course_library_dto_local_var->id = id;
    course_library_dto_local_var->timestamp = timestamp;
    course_library_dto_local_var->title = title;
    course_library_dto_local_var->description = description;
    course_library_dto_local_var->course_id = course_id;
    course_library_dto_local_var->course_unit_id = course_unit_id;
    course_library_dto_local_var->release_date_time = release_date_time;
    course_library_dto_local_var->tenant_id = tenant_id;

    return course_library_dto_local_var;
}


void course_library_dto_free(course_library_dto_t *course_library_dto) {
    if(NULL == course_library_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (course_library_dto->id) {
        free(course_library_dto->id);
        course_library_dto->id = NULL;
    }
    if (course_library_dto->timestamp) {
        free(course_library_dto->timestamp);
        course_library_dto->timestamp = NULL;
    }
    if (course_library_dto->title) {
        free(course_library_dto->title);
        course_library_dto->title = NULL;
    }
    if (course_library_dto->description) {
        free(course_library_dto->description);
        course_library_dto->description = NULL;
    }
    if (course_library_dto->course_id) {
        free(course_library_dto->course_id);
        course_library_dto->course_id = NULL;
    }
    if (course_library_dto->course_unit_id) {
        free(course_library_dto->course_unit_id);
        course_library_dto->course_unit_id = NULL;
    }
    if (course_library_dto->release_date_time) {
        free(course_library_dto->release_date_time);
        course_library_dto->release_date_time = NULL;
    }
    if (course_library_dto->tenant_id) {
        free(course_library_dto->tenant_id);
        course_library_dto->tenant_id = NULL;
    }
    free(course_library_dto);
}

cJSON *course_library_dto_convertToJSON(course_library_dto_t *course_library_dto) {
    cJSON *item = cJSON_CreateObject();

    // course_library_dto->id
    if(course_library_dto->id) {
    if(cJSON_AddStringToObject(item, "id", course_library_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // course_library_dto->timestamp
    if(course_library_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", course_library_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_library_dto->title
    if(course_library_dto->title) {
    if(cJSON_AddStringToObject(item, "title", course_library_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // course_library_dto->description
    if(course_library_dto->description) {
    if(cJSON_AddStringToObject(item, "description", course_library_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // course_library_dto->course_id
    if(course_library_dto->course_id) {
    if(cJSON_AddStringToObject(item, "courseID", course_library_dto->course_id) == NULL) {
    goto fail; //String
    }
    }


    // course_library_dto->course_unit_id
    if(course_library_dto->course_unit_id) {
    if(cJSON_AddStringToObject(item, "courseUnitID", course_library_dto->course_unit_id) == NULL) {
    goto fail; //String
    }
    }


    // course_library_dto->release_date_time
    if(course_library_dto->release_date_time) {
    if(cJSON_AddStringToObject(item, "releaseDateTime", course_library_dto->release_date_time) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_library_dto->tenant_id
    if(course_library_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", course_library_dto->tenant_id) == NULL) {
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

course_library_dto_t *course_library_dto_parseFromJSON(cJSON *course_library_dtoJSON){

    course_library_dto_t *course_library_dto_local_var = NULL;

    // course_library_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(course_library_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // course_library_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(course_library_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // course_library_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(course_library_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // course_library_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(course_library_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // course_library_dto->course_id
    cJSON *course_id = cJSON_GetObjectItemCaseSensitive(course_library_dtoJSON, "courseID");
    if (course_id) { 
    if(!cJSON_IsString(course_id) && !cJSON_IsNull(course_id))
    {
    goto end; //String
    }
    }

    // course_library_dto->course_unit_id
    cJSON *course_unit_id = cJSON_GetObjectItemCaseSensitive(course_library_dtoJSON, "courseUnitID");
    if (course_unit_id) { 
    if(!cJSON_IsString(course_unit_id) && !cJSON_IsNull(course_unit_id))
    {
    goto end; //String
    }
    }

    // course_library_dto->release_date_time
    cJSON *release_date_time = cJSON_GetObjectItemCaseSensitive(course_library_dtoJSON, "releaseDateTime");
    if (release_date_time) { 
    if(!cJSON_IsString(release_date_time) && !cJSON_IsNull(release_date_time))
    {
    goto end; //DateTime
    }
    }

    // course_library_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(course_library_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }


    course_library_dto_local_var = course_library_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        course_id && !cJSON_IsNull(course_id) ? strdup(course_id->valuestring) : NULL,
        course_unit_id && !cJSON_IsNull(course_unit_id) ? strdup(course_unit_id->valuestring) : NULL,
        release_date_time && !cJSON_IsNull(release_date_time) ? strdup(release_date_time->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL
        );

    return course_library_dto_local_var;
end:
    return NULL;

}
