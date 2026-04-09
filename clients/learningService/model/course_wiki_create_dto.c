#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "course_wiki_create_dto.h"



course_wiki_create_dto_t *course_wiki_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *course_id,
    char *business_id,
    char *course_unit_id,
    char *release_date_time
    ) {
    course_wiki_create_dto_t *course_wiki_create_dto_local_var = malloc(sizeof(course_wiki_create_dto_t));
    if (!course_wiki_create_dto_local_var) {
        return NULL;
    }
    course_wiki_create_dto_local_var->id = id;
    course_wiki_create_dto_local_var->timestamp = timestamp;
    course_wiki_create_dto_local_var->title = title;
    course_wiki_create_dto_local_var->description = description;
    course_wiki_create_dto_local_var->course_id = course_id;
    course_wiki_create_dto_local_var->business_id = business_id;
    course_wiki_create_dto_local_var->course_unit_id = course_unit_id;
    course_wiki_create_dto_local_var->release_date_time = release_date_time;

    return course_wiki_create_dto_local_var;
}


void course_wiki_create_dto_free(course_wiki_create_dto_t *course_wiki_create_dto) {
    if(NULL == course_wiki_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (course_wiki_create_dto->id) {
        free(course_wiki_create_dto->id);
        course_wiki_create_dto->id = NULL;
    }
    if (course_wiki_create_dto->timestamp) {
        free(course_wiki_create_dto->timestamp);
        course_wiki_create_dto->timestamp = NULL;
    }
    if (course_wiki_create_dto->title) {
        free(course_wiki_create_dto->title);
        course_wiki_create_dto->title = NULL;
    }
    if (course_wiki_create_dto->description) {
        free(course_wiki_create_dto->description);
        course_wiki_create_dto->description = NULL;
    }
    if (course_wiki_create_dto->course_id) {
        free(course_wiki_create_dto->course_id);
        course_wiki_create_dto->course_id = NULL;
    }
    if (course_wiki_create_dto->business_id) {
        free(course_wiki_create_dto->business_id);
        course_wiki_create_dto->business_id = NULL;
    }
    if (course_wiki_create_dto->course_unit_id) {
        free(course_wiki_create_dto->course_unit_id);
        course_wiki_create_dto->course_unit_id = NULL;
    }
    if (course_wiki_create_dto->release_date_time) {
        free(course_wiki_create_dto->release_date_time);
        course_wiki_create_dto->release_date_time = NULL;
    }
    free(course_wiki_create_dto);
}

cJSON *course_wiki_create_dto_convertToJSON(course_wiki_create_dto_t *course_wiki_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // course_wiki_create_dto->id
    if(course_wiki_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", course_wiki_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // course_wiki_create_dto->timestamp
    if(course_wiki_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", course_wiki_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_wiki_create_dto->title
    if (!course_wiki_create_dto->title) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "title", course_wiki_create_dto->title) == NULL) {
    goto fail; //String
    }


    // course_wiki_create_dto->description
    if(course_wiki_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", course_wiki_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // course_wiki_create_dto->course_id
    if (!course_wiki_create_dto->course_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "courseID", course_wiki_create_dto->course_id) == NULL) {
    goto fail; //String
    }


    // course_wiki_create_dto->business_id
    if (!course_wiki_create_dto->business_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "businessID", course_wiki_create_dto->business_id) == NULL) {
    goto fail; //String
    }


    // course_wiki_create_dto->course_unit_id
    if(course_wiki_create_dto->course_unit_id) {
    if(cJSON_AddStringToObject(item, "courseUnitID", course_wiki_create_dto->course_unit_id) == NULL) {
    goto fail; //String
    }
    }


    // course_wiki_create_dto->release_date_time
    if(course_wiki_create_dto->release_date_time) {
    if(cJSON_AddStringToObject(item, "releaseDateTime", course_wiki_create_dto->release_date_time) == NULL) {
    goto fail; //Date-Time
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

course_wiki_create_dto_t *course_wiki_create_dto_parseFromJSON(cJSON *course_wiki_create_dtoJSON){

    course_wiki_create_dto_t *course_wiki_create_dto_local_var = NULL;

    // course_wiki_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(course_wiki_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // course_wiki_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(course_wiki_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // course_wiki_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(course_wiki_create_dtoJSON, "title");
    if (!title) {
        goto end;
    }

    
    if(!cJSON_IsString(title))
    {
    goto end; //String
    }

    // course_wiki_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(course_wiki_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // course_wiki_create_dto->course_id
    cJSON *course_id = cJSON_GetObjectItemCaseSensitive(course_wiki_create_dtoJSON, "courseID");
    if (!course_id) {
        goto end;
    }

    
    if(!cJSON_IsString(course_id))
    {
    goto end; //String
    }

    // course_wiki_create_dto->business_id
    cJSON *business_id = cJSON_GetObjectItemCaseSensitive(course_wiki_create_dtoJSON, "businessID");
    if (!business_id) {
        goto end;
    }

    
    if(!cJSON_IsString(business_id))
    {
    goto end; //String
    }

    // course_wiki_create_dto->course_unit_id
    cJSON *course_unit_id = cJSON_GetObjectItemCaseSensitive(course_wiki_create_dtoJSON, "courseUnitID");
    if (course_unit_id) { 
    if(!cJSON_IsString(course_unit_id) && !cJSON_IsNull(course_unit_id))
    {
    goto end; //String
    }
    }

    // course_wiki_create_dto->release_date_time
    cJSON *release_date_time = cJSON_GetObjectItemCaseSensitive(course_wiki_create_dtoJSON, "releaseDateTime");
    if (release_date_time) { 
    if(!cJSON_IsString(release_date_time) && !cJSON_IsNull(release_date_time))
    {
    goto end; //DateTime
    }
    }


    course_wiki_create_dto_local_var = course_wiki_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(title->valuestring),
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        strdup(course_id->valuestring),
        strdup(business_id->valuestring),
        course_unit_id && !cJSON_IsNull(course_unit_id) ? strdup(course_unit_id->valuestring) : NULL,
        release_date_time && !cJSON_IsNull(release_date_time) ? strdup(release_date_time->valuestring) : NULL
        );

    return course_wiki_create_dto_local_var;
end:
    return NULL;

}
