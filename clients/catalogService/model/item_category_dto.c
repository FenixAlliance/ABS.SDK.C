#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "item_category_dto.h"



item_category_dto_t *item_category_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *image_url,
    int is_featured,
    int enable_for_courses,
    int enable_for_products,
    int enable_for_licenses,
    int enable_for_services,
    int enable_for_subscriptions,
    char *business_id,
    char *business_profile_record_id,
    char *parent_item_category_id
    ) {
    item_category_dto_t *item_category_dto_local_var = malloc(sizeof(item_category_dto_t));
    if (!item_category_dto_local_var) {
        return NULL;
    }
    item_category_dto_local_var->id = id;
    item_category_dto_local_var->timestamp = timestamp;
    item_category_dto_local_var->title = title;
    item_category_dto_local_var->description = description;
    item_category_dto_local_var->image_url = image_url;
    item_category_dto_local_var->is_featured = is_featured;
    item_category_dto_local_var->enable_for_courses = enable_for_courses;
    item_category_dto_local_var->enable_for_products = enable_for_products;
    item_category_dto_local_var->enable_for_licenses = enable_for_licenses;
    item_category_dto_local_var->enable_for_services = enable_for_services;
    item_category_dto_local_var->enable_for_subscriptions = enable_for_subscriptions;
    item_category_dto_local_var->business_id = business_id;
    item_category_dto_local_var->business_profile_record_id = business_profile_record_id;
    item_category_dto_local_var->parent_item_category_id = parent_item_category_id;

    return item_category_dto_local_var;
}


void item_category_dto_free(item_category_dto_t *item_category_dto) {
    if(NULL == item_category_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (item_category_dto->id) {
        free(item_category_dto->id);
        item_category_dto->id = NULL;
    }
    if (item_category_dto->timestamp) {
        free(item_category_dto->timestamp);
        item_category_dto->timestamp = NULL;
    }
    if (item_category_dto->title) {
        free(item_category_dto->title);
        item_category_dto->title = NULL;
    }
    if (item_category_dto->description) {
        free(item_category_dto->description);
        item_category_dto->description = NULL;
    }
    if (item_category_dto->image_url) {
        free(item_category_dto->image_url);
        item_category_dto->image_url = NULL;
    }
    if (item_category_dto->business_id) {
        free(item_category_dto->business_id);
        item_category_dto->business_id = NULL;
    }
    if (item_category_dto->business_profile_record_id) {
        free(item_category_dto->business_profile_record_id);
        item_category_dto->business_profile_record_id = NULL;
    }
    if (item_category_dto->parent_item_category_id) {
        free(item_category_dto->parent_item_category_id);
        item_category_dto->parent_item_category_id = NULL;
    }
    free(item_category_dto);
}

cJSON *item_category_dto_convertToJSON(item_category_dto_t *item_category_dto) {
    cJSON *item = cJSON_CreateObject();

    // item_category_dto->id
    if(item_category_dto->id) {
    if(cJSON_AddStringToObject(item, "id", item_category_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // item_category_dto->timestamp
    if(item_category_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", item_category_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // item_category_dto->title
    if(item_category_dto->title) {
    if(cJSON_AddStringToObject(item, "title", item_category_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // item_category_dto->description
    if(item_category_dto->description) {
    if(cJSON_AddStringToObject(item, "description", item_category_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // item_category_dto->image_url
    if(item_category_dto->image_url) {
    if(cJSON_AddStringToObject(item, "imageURL", item_category_dto->image_url) == NULL) {
    goto fail; //String
    }
    }


    // item_category_dto->is_featured
    if(item_category_dto->is_featured) {
    if(cJSON_AddBoolToObject(item, "isFeatured", item_category_dto->is_featured) == NULL) {
    goto fail; //Bool
    }
    }


    // item_category_dto->enable_for_courses
    if(item_category_dto->enable_for_courses) {
    if(cJSON_AddBoolToObject(item, "enableForCourses", item_category_dto->enable_for_courses) == NULL) {
    goto fail; //Bool
    }
    }


    // item_category_dto->enable_for_products
    if(item_category_dto->enable_for_products) {
    if(cJSON_AddBoolToObject(item, "enableForProducts", item_category_dto->enable_for_products) == NULL) {
    goto fail; //Bool
    }
    }


    // item_category_dto->enable_for_licenses
    if(item_category_dto->enable_for_licenses) {
    if(cJSON_AddBoolToObject(item, "enableForLicenses", item_category_dto->enable_for_licenses) == NULL) {
    goto fail; //Bool
    }
    }


    // item_category_dto->enable_for_services
    if(item_category_dto->enable_for_services) {
    if(cJSON_AddBoolToObject(item, "enableForServices", item_category_dto->enable_for_services) == NULL) {
    goto fail; //Bool
    }
    }


    // item_category_dto->enable_for_subscriptions
    if(item_category_dto->enable_for_subscriptions) {
    if(cJSON_AddBoolToObject(item, "enableForSubscriptions", item_category_dto->enable_for_subscriptions) == NULL) {
    goto fail; //Bool
    }
    }


    // item_category_dto->business_id
    if(item_category_dto->business_id) {
    if(cJSON_AddStringToObject(item, "businessID", item_category_dto->business_id) == NULL) {
    goto fail; //String
    }
    }


    // item_category_dto->business_profile_record_id
    if(item_category_dto->business_profile_record_id) {
    if(cJSON_AddStringToObject(item, "businessProfileRecordID", item_category_dto->business_profile_record_id) == NULL) {
    goto fail; //String
    }
    }


    // item_category_dto->parent_item_category_id
    if(item_category_dto->parent_item_category_id) {
    if(cJSON_AddStringToObject(item, "parentItemCategoryID", item_category_dto->parent_item_category_id) == NULL) {
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

item_category_dto_t *item_category_dto_parseFromJSON(cJSON *item_category_dtoJSON){

    item_category_dto_t *item_category_dto_local_var = NULL;

    // item_category_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(item_category_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // item_category_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(item_category_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // item_category_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(item_category_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // item_category_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(item_category_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // item_category_dto->image_url
    cJSON *image_url = cJSON_GetObjectItemCaseSensitive(item_category_dtoJSON, "imageURL");
    if (image_url) { 
    if(!cJSON_IsString(image_url) && !cJSON_IsNull(image_url))
    {
    goto end; //String
    }
    }

    // item_category_dto->is_featured
    cJSON *is_featured = cJSON_GetObjectItemCaseSensitive(item_category_dtoJSON, "isFeatured");
    if (is_featured) { 
    if(!cJSON_IsBool(is_featured))
    {
    goto end; //Bool
    }
    }

    // item_category_dto->enable_for_courses
    cJSON *enable_for_courses = cJSON_GetObjectItemCaseSensitive(item_category_dtoJSON, "enableForCourses");
    if (enable_for_courses) { 
    if(!cJSON_IsBool(enable_for_courses))
    {
    goto end; //Bool
    }
    }

    // item_category_dto->enable_for_products
    cJSON *enable_for_products = cJSON_GetObjectItemCaseSensitive(item_category_dtoJSON, "enableForProducts");
    if (enable_for_products) { 
    if(!cJSON_IsBool(enable_for_products))
    {
    goto end; //Bool
    }
    }

    // item_category_dto->enable_for_licenses
    cJSON *enable_for_licenses = cJSON_GetObjectItemCaseSensitive(item_category_dtoJSON, "enableForLicenses");
    if (enable_for_licenses) { 
    if(!cJSON_IsBool(enable_for_licenses))
    {
    goto end; //Bool
    }
    }

    // item_category_dto->enable_for_services
    cJSON *enable_for_services = cJSON_GetObjectItemCaseSensitive(item_category_dtoJSON, "enableForServices");
    if (enable_for_services) { 
    if(!cJSON_IsBool(enable_for_services))
    {
    goto end; //Bool
    }
    }

    // item_category_dto->enable_for_subscriptions
    cJSON *enable_for_subscriptions = cJSON_GetObjectItemCaseSensitive(item_category_dtoJSON, "enableForSubscriptions");
    if (enable_for_subscriptions) { 
    if(!cJSON_IsBool(enable_for_subscriptions))
    {
    goto end; //Bool
    }
    }

    // item_category_dto->business_id
    cJSON *business_id = cJSON_GetObjectItemCaseSensitive(item_category_dtoJSON, "businessID");
    if (business_id) { 
    if(!cJSON_IsString(business_id) && !cJSON_IsNull(business_id))
    {
    goto end; //String
    }
    }

    // item_category_dto->business_profile_record_id
    cJSON *business_profile_record_id = cJSON_GetObjectItemCaseSensitive(item_category_dtoJSON, "businessProfileRecordID");
    if (business_profile_record_id) { 
    if(!cJSON_IsString(business_profile_record_id) && !cJSON_IsNull(business_profile_record_id))
    {
    goto end; //String
    }
    }

    // item_category_dto->parent_item_category_id
    cJSON *parent_item_category_id = cJSON_GetObjectItemCaseSensitive(item_category_dtoJSON, "parentItemCategoryID");
    if (parent_item_category_id) { 
    if(!cJSON_IsString(parent_item_category_id) && !cJSON_IsNull(parent_item_category_id))
    {
    goto end; //String
    }
    }


    item_category_dto_local_var = item_category_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        image_url && !cJSON_IsNull(image_url) ? strdup(image_url->valuestring) : NULL,
        is_featured ? is_featured->valueint : 0,
        enable_for_courses ? enable_for_courses->valueint : 0,
        enable_for_products ? enable_for_products->valueint : 0,
        enable_for_licenses ? enable_for_licenses->valueint : 0,
        enable_for_services ? enable_for_services->valueint : 0,
        enable_for_subscriptions ? enable_for_subscriptions->valueint : 0,
        business_id && !cJSON_IsNull(business_id) ? strdup(business_id->valuestring) : NULL,
        business_profile_record_id && !cJSON_IsNull(business_profile_record_id) ? strdup(business_profile_record_id->valuestring) : NULL,
        parent_item_category_id && !cJSON_IsNull(parent_item_category_id) ? strdup(parent_item_category_id->valuestring) : NULL
        );

    return item_category_dto_local_var;
end:
    return NULL;

}
