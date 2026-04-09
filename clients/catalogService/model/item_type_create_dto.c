#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "item_type_create_dto.h"



item_type_create_dto_t *item_type_create_dto_create(
    char *id,
    char *timestamp,
    char *plural_title,
    char *singular_title,
    char *description,
    char *image_url,
    char *google_category_taxonomy,
    char *business_id,
    char *item_category_id,
    char *item_google_category_id
    ) {
    item_type_create_dto_t *item_type_create_dto_local_var = malloc(sizeof(item_type_create_dto_t));
    if (!item_type_create_dto_local_var) {
        return NULL;
    }
    item_type_create_dto_local_var->id = id;
    item_type_create_dto_local_var->timestamp = timestamp;
    item_type_create_dto_local_var->plural_title = plural_title;
    item_type_create_dto_local_var->singular_title = singular_title;
    item_type_create_dto_local_var->description = description;
    item_type_create_dto_local_var->image_url = image_url;
    item_type_create_dto_local_var->google_category_taxonomy = google_category_taxonomy;
    item_type_create_dto_local_var->business_id = business_id;
    item_type_create_dto_local_var->item_category_id = item_category_id;
    item_type_create_dto_local_var->item_google_category_id = item_google_category_id;

    return item_type_create_dto_local_var;
}


void item_type_create_dto_free(item_type_create_dto_t *item_type_create_dto) {
    if(NULL == item_type_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (item_type_create_dto->id) {
        free(item_type_create_dto->id);
        item_type_create_dto->id = NULL;
    }
    if (item_type_create_dto->timestamp) {
        free(item_type_create_dto->timestamp);
        item_type_create_dto->timestamp = NULL;
    }
    if (item_type_create_dto->plural_title) {
        free(item_type_create_dto->plural_title);
        item_type_create_dto->plural_title = NULL;
    }
    if (item_type_create_dto->singular_title) {
        free(item_type_create_dto->singular_title);
        item_type_create_dto->singular_title = NULL;
    }
    if (item_type_create_dto->description) {
        free(item_type_create_dto->description);
        item_type_create_dto->description = NULL;
    }
    if (item_type_create_dto->image_url) {
        free(item_type_create_dto->image_url);
        item_type_create_dto->image_url = NULL;
    }
    if (item_type_create_dto->google_category_taxonomy) {
        free(item_type_create_dto->google_category_taxonomy);
        item_type_create_dto->google_category_taxonomy = NULL;
    }
    if (item_type_create_dto->business_id) {
        free(item_type_create_dto->business_id);
        item_type_create_dto->business_id = NULL;
    }
    if (item_type_create_dto->item_category_id) {
        free(item_type_create_dto->item_category_id);
        item_type_create_dto->item_category_id = NULL;
    }
    if (item_type_create_dto->item_google_category_id) {
        free(item_type_create_dto->item_google_category_id);
        item_type_create_dto->item_google_category_id = NULL;
    }
    free(item_type_create_dto);
}

cJSON *item_type_create_dto_convertToJSON(item_type_create_dto_t *item_type_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // item_type_create_dto->id
    if(item_type_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", item_type_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // item_type_create_dto->timestamp
    if(item_type_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", item_type_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // item_type_create_dto->plural_title
    if(item_type_create_dto->plural_title) {
    if(cJSON_AddStringToObject(item, "pluralTitle", item_type_create_dto->plural_title) == NULL) {
    goto fail; //String
    }
    }


    // item_type_create_dto->singular_title
    if(item_type_create_dto->singular_title) {
    if(cJSON_AddStringToObject(item, "singularTitle", item_type_create_dto->singular_title) == NULL) {
    goto fail; //String
    }
    }


    // item_type_create_dto->description
    if(item_type_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", item_type_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // item_type_create_dto->image_url
    if(item_type_create_dto->image_url) {
    if(cJSON_AddStringToObject(item, "imageURL", item_type_create_dto->image_url) == NULL) {
    goto fail; //String
    }
    }


    // item_type_create_dto->google_category_taxonomy
    if(item_type_create_dto->google_category_taxonomy) {
    if(cJSON_AddStringToObject(item, "googleCategoryTaxonomy", item_type_create_dto->google_category_taxonomy) == NULL) {
    goto fail; //String
    }
    }


    // item_type_create_dto->business_id
    if (!item_type_create_dto->business_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "businessID", item_type_create_dto->business_id) == NULL) {
    goto fail; //String
    }


    // item_type_create_dto->item_category_id
    if (!item_type_create_dto->item_category_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "itemCategoryID", item_type_create_dto->item_category_id) == NULL) {
    goto fail; //String
    }


    // item_type_create_dto->item_google_category_id
    if(item_type_create_dto->item_google_category_id) {
    if(cJSON_AddStringToObject(item, "itemGoogleCategoryID", item_type_create_dto->item_google_category_id) == NULL) {
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

item_type_create_dto_t *item_type_create_dto_parseFromJSON(cJSON *item_type_create_dtoJSON){

    item_type_create_dto_t *item_type_create_dto_local_var = NULL;

    // item_type_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(item_type_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // item_type_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(item_type_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // item_type_create_dto->plural_title
    cJSON *plural_title = cJSON_GetObjectItemCaseSensitive(item_type_create_dtoJSON, "pluralTitle");
    if (plural_title) { 
    if(!cJSON_IsString(plural_title) && !cJSON_IsNull(plural_title))
    {
    goto end; //String
    }
    }

    // item_type_create_dto->singular_title
    cJSON *singular_title = cJSON_GetObjectItemCaseSensitive(item_type_create_dtoJSON, "singularTitle");
    if (singular_title) { 
    if(!cJSON_IsString(singular_title) && !cJSON_IsNull(singular_title))
    {
    goto end; //String
    }
    }

    // item_type_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(item_type_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // item_type_create_dto->image_url
    cJSON *image_url = cJSON_GetObjectItemCaseSensitive(item_type_create_dtoJSON, "imageURL");
    if (image_url) { 
    if(!cJSON_IsString(image_url) && !cJSON_IsNull(image_url))
    {
    goto end; //String
    }
    }

    // item_type_create_dto->google_category_taxonomy
    cJSON *google_category_taxonomy = cJSON_GetObjectItemCaseSensitive(item_type_create_dtoJSON, "googleCategoryTaxonomy");
    if (google_category_taxonomy) { 
    if(!cJSON_IsString(google_category_taxonomy) && !cJSON_IsNull(google_category_taxonomy))
    {
    goto end; //String
    }
    }

    // item_type_create_dto->business_id
    cJSON *business_id = cJSON_GetObjectItemCaseSensitive(item_type_create_dtoJSON, "businessID");
    if (!business_id) {
        goto end;
    }

    
    if(!cJSON_IsString(business_id))
    {
    goto end; //String
    }

    // item_type_create_dto->item_category_id
    cJSON *item_category_id = cJSON_GetObjectItemCaseSensitive(item_type_create_dtoJSON, "itemCategoryID");
    if (!item_category_id) {
        goto end;
    }

    
    if(!cJSON_IsString(item_category_id))
    {
    goto end; //String
    }

    // item_type_create_dto->item_google_category_id
    cJSON *item_google_category_id = cJSON_GetObjectItemCaseSensitive(item_type_create_dtoJSON, "itemGoogleCategoryID");
    if (item_google_category_id) { 
    if(!cJSON_IsString(item_google_category_id) && !cJSON_IsNull(item_google_category_id))
    {
    goto end; //String
    }
    }


    item_type_create_dto_local_var = item_type_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        plural_title && !cJSON_IsNull(plural_title) ? strdup(plural_title->valuestring) : NULL,
        singular_title && !cJSON_IsNull(singular_title) ? strdup(singular_title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        image_url && !cJSON_IsNull(image_url) ? strdup(image_url->valuestring) : NULL,
        google_category_taxonomy && !cJSON_IsNull(google_category_taxonomy) ? strdup(google_category_taxonomy->valuestring) : NULL,
        strdup(business_id->valuestring),
        strdup(item_category_id->valuestring),
        item_google_category_id && !cJSON_IsNull(item_google_category_id) ? strdup(item_google_category_id->valuestring) : NULL
        );

    return item_type_create_dto_local_var;
end:
    return NULL;

}
