#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "course_category_update_dto.h"



course_category_update_dto_t *course_category_update_dto_create(
    char *title,
    char *description,
    char *image_url,
    int is_featured
    ) {
    course_category_update_dto_t *course_category_update_dto_local_var = malloc(sizeof(course_category_update_dto_t));
    if (!course_category_update_dto_local_var) {
        return NULL;
    }
    course_category_update_dto_local_var->title = title;
    course_category_update_dto_local_var->description = description;
    course_category_update_dto_local_var->image_url = image_url;
    course_category_update_dto_local_var->is_featured = is_featured;

    return course_category_update_dto_local_var;
}


void course_category_update_dto_free(course_category_update_dto_t *course_category_update_dto) {
    if(NULL == course_category_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (course_category_update_dto->title) {
        free(course_category_update_dto->title);
        course_category_update_dto->title = NULL;
    }
    if (course_category_update_dto->description) {
        free(course_category_update_dto->description);
        course_category_update_dto->description = NULL;
    }
    if (course_category_update_dto->image_url) {
        free(course_category_update_dto->image_url);
        course_category_update_dto->image_url = NULL;
    }
    free(course_category_update_dto);
}

cJSON *course_category_update_dto_convertToJSON(course_category_update_dto_t *course_category_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // course_category_update_dto->title
    if(course_category_update_dto->title) {
    if(cJSON_AddStringToObject(item, "title", course_category_update_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // course_category_update_dto->description
    if(course_category_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", course_category_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // course_category_update_dto->image_url
    if(course_category_update_dto->image_url) {
    if(cJSON_AddStringToObject(item, "imageURL", course_category_update_dto->image_url) == NULL) {
    goto fail; //String
    }
    }


    // course_category_update_dto->is_featured
    if(course_category_update_dto->is_featured) {
    if(cJSON_AddBoolToObject(item, "isFeatured", course_category_update_dto->is_featured) == NULL) {
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

course_category_update_dto_t *course_category_update_dto_parseFromJSON(cJSON *course_category_update_dtoJSON){

    course_category_update_dto_t *course_category_update_dto_local_var = NULL;

    // course_category_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(course_category_update_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // course_category_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(course_category_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // course_category_update_dto->image_url
    cJSON *image_url = cJSON_GetObjectItemCaseSensitive(course_category_update_dtoJSON, "imageURL");
    if (image_url) { 
    if(!cJSON_IsString(image_url) && !cJSON_IsNull(image_url))
    {
    goto end; //String
    }
    }

    // course_category_update_dto->is_featured
    cJSON *is_featured = cJSON_GetObjectItemCaseSensitive(course_category_update_dtoJSON, "isFeatured");
    if (is_featured) { 
    if(!cJSON_IsBool(is_featured))
    {
    goto end; //Bool
    }
    }


    course_category_update_dto_local_var = course_category_update_dto_create (
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        image_url && !cJSON_IsNull(image_url) ? strdup(image_url->valuestring) : NULL,
        is_featured ? is_featured->valueint : 0
        );

    return course_category_update_dto_local_var;
end:
    return NULL;

}
