#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "course_handout_create_dto.h"



course_handout_create_dto_t *course_handout_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *content,
    char *url,
    char *release_date_time,
    char *course_id,
    char *course_unit_id,
    char *business_id
    ) {
    course_handout_create_dto_t *course_handout_create_dto_local_var = malloc(sizeof(course_handout_create_dto_t));
    if (!course_handout_create_dto_local_var) {
        return NULL;
    }
    course_handout_create_dto_local_var->id = id;
    course_handout_create_dto_local_var->timestamp = timestamp;
    course_handout_create_dto_local_var->name = name;
    course_handout_create_dto_local_var->description = description;
    course_handout_create_dto_local_var->content = content;
    course_handout_create_dto_local_var->url = url;
    course_handout_create_dto_local_var->release_date_time = release_date_time;
    course_handout_create_dto_local_var->course_id = course_id;
    course_handout_create_dto_local_var->course_unit_id = course_unit_id;
    course_handout_create_dto_local_var->business_id = business_id;

    return course_handout_create_dto_local_var;
}


void course_handout_create_dto_free(course_handout_create_dto_t *course_handout_create_dto) {
    if(NULL == course_handout_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (course_handout_create_dto->id) {
        free(course_handout_create_dto->id);
        course_handout_create_dto->id = NULL;
    }
    if (course_handout_create_dto->timestamp) {
        free(course_handout_create_dto->timestamp);
        course_handout_create_dto->timestamp = NULL;
    }
    if (course_handout_create_dto->name) {
        free(course_handout_create_dto->name);
        course_handout_create_dto->name = NULL;
    }
    if (course_handout_create_dto->description) {
        free(course_handout_create_dto->description);
        course_handout_create_dto->description = NULL;
    }
    if (course_handout_create_dto->content) {
        free(course_handout_create_dto->content);
        course_handout_create_dto->content = NULL;
    }
    if (course_handout_create_dto->url) {
        free(course_handout_create_dto->url);
        course_handout_create_dto->url = NULL;
    }
    if (course_handout_create_dto->release_date_time) {
        free(course_handout_create_dto->release_date_time);
        course_handout_create_dto->release_date_time = NULL;
    }
    if (course_handout_create_dto->course_id) {
        free(course_handout_create_dto->course_id);
        course_handout_create_dto->course_id = NULL;
    }
    if (course_handout_create_dto->course_unit_id) {
        free(course_handout_create_dto->course_unit_id);
        course_handout_create_dto->course_unit_id = NULL;
    }
    if (course_handout_create_dto->business_id) {
        free(course_handout_create_dto->business_id);
        course_handout_create_dto->business_id = NULL;
    }
    free(course_handout_create_dto);
}

cJSON *course_handout_create_dto_convertToJSON(course_handout_create_dto_t *course_handout_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // course_handout_create_dto->id
    if(course_handout_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", course_handout_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // course_handout_create_dto->timestamp
    if(course_handout_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", course_handout_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_handout_create_dto->name
    if (!course_handout_create_dto->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", course_handout_create_dto->name) == NULL) {
    goto fail; //String
    }


    // course_handout_create_dto->description
    if(course_handout_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", course_handout_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // course_handout_create_dto->content
    if(course_handout_create_dto->content) {
    if(cJSON_AddStringToObject(item, "content", course_handout_create_dto->content) == NULL) {
    goto fail; //String
    }
    }


    // course_handout_create_dto->url
    if(course_handout_create_dto->url) {
    if(cJSON_AddStringToObject(item, "url", course_handout_create_dto->url) == NULL) {
    goto fail; //String
    }
    }


    // course_handout_create_dto->release_date_time
    if(course_handout_create_dto->release_date_time) {
    if(cJSON_AddStringToObject(item, "releaseDateTime", course_handout_create_dto->release_date_time) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_handout_create_dto->course_id
    if (!course_handout_create_dto->course_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "courseID", course_handout_create_dto->course_id) == NULL) {
    goto fail; //String
    }


    // course_handout_create_dto->course_unit_id
    if(course_handout_create_dto->course_unit_id) {
    if(cJSON_AddStringToObject(item, "courseUnitID", course_handout_create_dto->course_unit_id) == NULL) {
    goto fail; //String
    }
    }


    // course_handout_create_dto->business_id
    if (!course_handout_create_dto->business_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "businessID", course_handout_create_dto->business_id) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

course_handout_create_dto_t *course_handout_create_dto_parseFromJSON(cJSON *course_handout_create_dtoJSON){

    course_handout_create_dto_t *course_handout_create_dto_local_var = NULL;

    // course_handout_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(course_handout_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // course_handout_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(course_handout_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // course_handout_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(course_handout_create_dtoJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // course_handout_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(course_handout_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // course_handout_create_dto->content
    cJSON *content = cJSON_GetObjectItemCaseSensitive(course_handout_create_dtoJSON, "content");
    if (content) { 
    if(!cJSON_IsString(content) && !cJSON_IsNull(content))
    {
    goto end; //String
    }
    }

    // course_handout_create_dto->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(course_handout_create_dtoJSON, "url");
    if (url) { 
    if(!cJSON_IsString(url) && !cJSON_IsNull(url))
    {
    goto end; //String
    }
    }

    // course_handout_create_dto->release_date_time
    cJSON *release_date_time = cJSON_GetObjectItemCaseSensitive(course_handout_create_dtoJSON, "releaseDateTime");
    if (release_date_time) { 
    if(!cJSON_IsString(release_date_time) && !cJSON_IsNull(release_date_time))
    {
    goto end; //DateTime
    }
    }

    // course_handout_create_dto->course_id
    cJSON *course_id = cJSON_GetObjectItemCaseSensitive(course_handout_create_dtoJSON, "courseID");
    if (!course_id) {
        goto end;
    }

    
    if(!cJSON_IsString(course_id))
    {
    goto end; //String
    }

    // course_handout_create_dto->course_unit_id
    cJSON *course_unit_id = cJSON_GetObjectItemCaseSensitive(course_handout_create_dtoJSON, "courseUnitID");
    if (course_unit_id) { 
    if(!cJSON_IsString(course_unit_id) && !cJSON_IsNull(course_unit_id))
    {
    goto end; //String
    }
    }

    // course_handout_create_dto->business_id
    cJSON *business_id = cJSON_GetObjectItemCaseSensitive(course_handout_create_dtoJSON, "businessID");
    if (!business_id) {
        goto end;
    }

    
    if(!cJSON_IsString(business_id))
    {
    goto end; //String
    }


    course_handout_create_dto_local_var = course_handout_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(name->valuestring),
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        content && !cJSON_IsNull(content) ? strdup(content->valuestring) : NULL,
        url && !cJSON_IsNull(url) ? strdup(url->valuestring) : NULL,
        release_date_time && !cJSON_IsNull(release_date_time) ? strdup(release_date_time->valuestring) : NULL,
        strdup(course_id->valuestring),
        course_unit_id && !cJSON_IsNull(course_unit_id) ? strdup(course_unit_id->valuestring) : NULL,
        strdup(business_id->valuestring)
        );

    return course_handout_create_dto_local_var;
end:
    return NULL;

}
