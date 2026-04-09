#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "item_category_update_dto.h"



item_category_update_dto_t *item_category_update_dto_create(
    char *title,
    char *description,
    char *image_url,
    int is_featured,
    int enable_for_courses,
    int enable_for_products,
    int enable_for_licenses,
    int enable_for_services,
    int enable_for_subscriptions
    ) {
    item_category_update_dto_t *item_category_update_dto_local_var = malloc(sizeof(item_category_update_dto_t));
    if (!item_category_update_dto_local_var) {
        return NULL;
    }
    item_category_update_dto_local_var->title = title;
    item_category_update_dto_local_var->description = description;
    item_category_update_dto_local_var->image_url = image_url;
    item_category_update_dto_local_var->is_featured = is_featured;
    item_category_update_dto_local_var->enable_for_courses = enable_for_courses;
    item_category_update_dto_local_var->enable_for_products = enable_for_products;
    item_category_update_dto_local_var->enable_for_licenses = enable_for_licenses;
    item_category_update_dto_local_var->enable_for_services = enable_for_services;
    item_category_update_dto_local_var->enable_for_subscriptions = enable_for_subscriptions;

    return item_category_update_dto_local_var;
}


void item_category_update_dto_free(item_category_update_dto_t *item_category_update_dto) {
    if(NULL == item_category_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (item_category_update_dto->title) {
        free(item_category_update_dto->title);
        item_category_update_dto->title = NULL;
    }
    if (item_category_update_dto->description) {
        free(item_category_update_dto->description);
        item_category_update_dto->description = NULL;
    }
    if (item_category_update_dto->image_url) {
        free(item_category_update_dto->image_url);
        item_category_update_dto->image_url = NULL;
    }
    free(item_category_update_dto);
}

cJSON *item_category_update_dto_convertToJSON(item_category_update_dto_t *item_category_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // item_category_update_dto->title
    if (!item_category_update_dto->title) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "title", item_category_update_dto->title) == NULL) {
    goto fail; //String
    }


    // item_category_update_dto->description
    if(item_category_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", item_category_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // item_category_update_dto->image_url
    if(item_category_update_dto->image_url) {
    if(cJSON_AddStringToObject(item, "imageURL", item_category_update_dto->image_url) == NULL) {
    goto fail; //String
    }
    }


    // item_category_update_dto->is_featured
    if(item_category_update_dto->is_featured) {
    if(cJSON_AddBoolToObject(item, "isFeatured", item_category_update_dto->is_featured) == NULL) {
    goto fail; //Bool
    }
    }


    // item_category_update_dto->enable_for_courses
    if(item_category_update_dto->enable_for_courses) {
    if(cJSON_AddBoolToObject(item, "enableForCourses", item_category_update_dto->enable_for_courses) == NULL) {
    goto fail; //Bool
    }
    }


    // item_category_update_dto->enable_for_products
    if(item_category_update_dto->enable_for_products) {
    if(cJSON_AddBoolToObject(item, "enableForProducts", item_category_update_dto->enable_for_products) == NULL) {
    goto fail; //Bool
    }
    }


    // item_category_update_dto->enable_for_licenses
    if(item_category_update_dto->enable_for_licenses) {
    if(cJSON_AddBoolToObject(item, "enableForLicenses", item_category_update_dto->enable_for_licenses) == NULL) {
    goto fail; //Bool
    }
    }


    // item_category_update_dto->enable_for_services
    if(item_category_update_dto->enable_for_services) {
    if(cJSON_AddBoolToObject(item, "enableForServices", item_category_update_dto->enable_for_services) == NULL) {
    goto fail; //Bool
    }
    }


    // item_category_update_dto->enable_for_subscriptions
    if(item_category_update_dto->enable_for_subscriptions) {
    if(cJSON_AddBoolToObject(item, "enableForSubscriptions", item_category_update_dto->enable_for_subscriptions) == NULL) {
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

item_category_update_dto_t *item_category_update_dto_parseFromJSON(cJSON *item_category_update_dtoJSON){

    item_category_update_dto_t *item_category_update_dto_local_var = NULL;

    // item_category_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(item_category_update_dtoJSON, "title");
    if (!title) {
        goto end;
    }

    
    if(!cJSON_IsString(title))
    {
    goto end; //String
    }

    // item_category_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(item_category_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // item_category_update_dto->image_url
    cJSON *image_url = cJSON_GetObjectItemCaseSensitive(item_category_update_dtoJSON, "imageURL");
    if (image_url) { 
    if(!cJSON_IsString(image_url) && !cJSON_IsNull(image_url))
    {
    goto end; //String
    }
    }

    // item_category_update_dto->is_featured
    cJSON *is_featured = cJSON_GetObjectItemCaseSensitive(item_category_update_dtoJSON, "isFeatured");
    if (is_featured) { 
    if(!cJSON_IsBool(is_featured))
    {
    goto end; //Bool
    }
    }

    // item_category_update_dto->enable_for_courses
    cJSON *enable_for_courses = cJSON_GetObjectItemCaseSensitive(item_category_update_dtoJSON, "enableForCourses");
    if (enable_for_courses) { 
    if(!cJSON_IsBool(enable_for_courses))
    {
    goto end; //Bool
    }
    }

    // item_category_update_dto->enable_for_products
    cJSON *enable_for_products = cJSON_GetObjectItemCaseSensitive(item_category_update_dtoJSON, "enableForProducts");
    if (enable_for_products) { 
    if(!cJSON_IsBool(enable_for_products))
    {
    goto end; //Bool
    }
    }

    // item_category_update_dto->enable_for_licenses
    cJSON *enable_for_licenses = cJSON_GetObjectItemCaseSensitive(item_category_update_dtoJSON, "enableForLicenses");
    if (enable_for_licenses) { 
    if(!cJSON_IsBool(enable_for_licenses))
    {
    goto end; //Bool
    }
    }

    // item_category_update_dto->enable_for_services
    cJSON *enable_for_services = cJSON_GetObjectItemCaseSensitive(item_category_update_dtoJSON, "enableForServices");
    if (enable_for_services) { 
    if(!cJSON_IsBool(enable_for_services))
    {
    goto end; //Bool
    }
    }

    // item_category_update_dto->enable_for_subscriptions
    cJSON *enable_for_subscriptions = cJSON_GetObjectItemCaseSensitive(item_category_update_dtoJSON, "enableForSubscriptions");
    if (enable_for_subscriptions) { 
    if(!cJSON_IsBool(enable_for_subscriptions))
    {
    goto end; //Bool
    }
    }


    item_category_update_dto_local_var = item_category_update_dto_create (
        strdup(title->valuestring),
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        image_url && !cJSON_IsNull(image_url) ? strdup(image_url->valuestring) : NULL,
        is_featured ? is_featured->valueint : 0,
        enable_for_courses ? enable_for_courses->valueint : 0,
        enable_for_products ? enable_for_products->valueint : 0,
        enable_for_licenses ? enable_for_licenses->valueint : 0,
        enable_for_services ? enable_for_services->valueint : 0,
        enable_for_subscriptions ? enable_for_subscriptions->valueint : 0
        );

    return item_category_update_dto_local_var;
end:
    return NULL;

}
