#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "item_type_update_dto.h"



item_type_update_dto_t *item_type_update_dto_create(
    char *plural_title,
    char *singular_title,
    char *description,
    char *image_url,
    char *google_category_taxonomy
    ) {
    item_type_update_dto_t *item_type_update_dto_local_var = malloc(sizeof(item_type_update_dto_t));
    if (!item_type_update_dto_local_var) {
        return NULL;
    }
    item_type_update_dto_local_var->plural_title = plural_title;
    item_type_update_dto_local_var->singular_title = singular_title;
    item_type_update_dto_local_var->description = description;
    item_type_update_dto_local_var->image_url = image_url;
    item_type_update_dto_local_var->google_category_taxonomy = google_category_taxonomy;

    return item_type_update_dto_local_var;
}


void item_type_update_dto_free(item_type_update_dto_t *item_type_update_dto) {
    if(NULL == item_type_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (item_type_update_dto->plural_title) {
        free(item_type_update_dto->plural_title);
        item_type_update_dto->plural_title = NULL;
    }
    if (item_type_update_dto->singular_title) {
        free(item_type_update_dto->singular_title);
        item_type_update_dto->singular_title = NULL;
    }
    if (item_type_update_dto->description) {
        free(item_type_update_dto->description);
        item_type_update_dto->description = NULL;
    }
    if (item_type_update_dto->image_url) {
        free(item_type_update_dto->image_url);
        item_type_update_dto->image_url = NULL;
    }
    if (item_type_update_dto->google_category_taxonomy) {
        free(item_type_update_dto->google_category_taxonomy);
        item_type_update_dto->google_category_taxonomy = NULL;
    }
    free(item_type_update_dto);
}

cJSON *item_type_update_dto_convertToJSON(item_type_update_dto_t *item_type_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // item_type_update_dto->plural_title
    if(item_type_update_dto->plural_title) {
    if(cJSON_AddStringToObject(item, "pluralTitle", item_type_update_dto->plural_title) == NULL) {
    goto fail; //String
    }
    }


    // item_type_update_dto->singular_title
    if (!item_type_update_dto->singular_title) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "singularTitle", item_type_update_dto->singular_title) == NULL) {
    goto fail; //String
    }


    // item_type_update_dto->description
    if(item_type_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", item_type_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // item_type_update_dto->image_url
    if(item_type_update_dto->image_url) {
    if(cJSON_AddStringToObject(item, "imageURL", item_type_update_dto->image_url) == NULL) {
    goto fail; //String
    }
    }


    // item_type_update_dto->google_category_taxonomy
    if(item_type_update_dto->google_category_taxonomy) {
    if(cJSON_AddStringToObject(item, "googleCategoryTaxonomy", item_type_update_dto->google_category_taxonomy) == NULL) {
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

item_type_update_dto_t *item_type_update_dto_parseFromJSON(cJSON *item_type_update_dtoJSON){

    item_type_update_dto_t *item_type_update_dto_local_var = NULL;

    // item_type_update_dto->plural_title
    cJSON *plural_title = cJSON_GetObjectItemCaseSensitive(item_type_update_dtoJSON, "pluralTitle");
    if (plural_title) { 
    if(!cJSON_IsString(plural_title) && !cJSON_IsNull(plural_title))
    {
    goto end; //String
    }
    }

    // item_type_update_dto->singular_title
    cJSON *singular_title = cJSON_GetObjectItemCaseSensitive(item_type_update_dtoJSON, "singularTitle");
    if (!singular_title) {
        goto end;
    }

    
    if(!cJSON_IsString(singular_title))
    {
    goto end; //String
    }

    // item_type_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(item_type_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // item_type_update_dto->image_url
    cJSON *image_url = cJSON_GetObjectItemCaseSensitive(item_type_update_dtoJSON, "imageURL");
    if (image_url) { 
    if(!cJSON_IsString(image_url) && !cJSON_IsNull(image_url))
    {
    goto end; //String
    }
    }

    // item_type_update_dto->google_category_taxonomy
    cJSON *google_category_taxonomy = cJSON_GetObjectItemCaseSensitive(item_type_update_dtoJSON, "googleCategoryTaxonomy");
    if (google_category_taxonomy) { 
    if(!cJSON_IsString(google_category_taxonomy) && !cJSON_IsNull(google_category_taxonomy))
    {
    goto end; //String
    }
    }


    item_type_update_dto_local_var = item_type_update_dto_create (
        plural_title && !cJSON_IsNull(plural_title) ? strdup(plural_title->valuestring) : NULL,
        strdup(singular_title->valuestring),
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        image_url && !cJSON_IsNull(image_url) ? strdup(image_url->valuestring) : NULL,
        google_category_taxonomy && !cJSON_IsNull(google_category_taxonomy) ? strdup(google_category_taxonomy->valuestring) : NULL
        );

    return item_type_update_dto_local_var;
end:
    return NULL;

}
