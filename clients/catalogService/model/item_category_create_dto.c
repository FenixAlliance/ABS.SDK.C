#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "item_category_create_dto.h"



item_category_create_dto_t *item_category_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *image_url,
    char *business_id,
    char *business_profile_record_id,
    char *parent_item_category_id
    ) {
    item_category_create_dto_t *item_category_create_dto_local_var = malloc(sizeof(item_category_create_dto_t));
    if (!item_category_create_dto_local_var) {
        return NULL;
    }
    item_category_create_dto_local_var->id = id;
    item_category_create_dto_local_var->timestamp = timestamp;
    item_category_create_dto_local_var->title = title;
    item_category_create_dto_local_var->description = description;
    item_category_create_dto_local_var->image_url = image_url;
    item_category_create_dto_local_var->business_id = business_id;
    item_category_create_dto_local_var->business_profile_record_id = business_profile_record_id;
    item_category_create_dto_local_var->parent_item_category_id = parent_item_category_id;

    return item_category_create_dto_local_var;
}


void item_category_create_dto_free(item_category_create_dto_t *item_category_create_dto) {
    if(NULL == item_category_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (item_category_create_dto->id) {
        free(item_category_create_dto->id);
        item_category_create_dto->id = NULL;
    }
    if (item_category_create_dto->timestamp) {
        free(item_category_create_dto->timestamp);
        item_category_create_dto->timestamp = NULL;
    }
    if (item_category_create_dto->title) {
        free(item_category_create_dto->title);
        item_category_create_dto->title = NULL;
    }
    if (item_category_create_dto->description) {
        free(item_category_create_dto->description);
        item_category_create_dto->description = NULL;
    }
    if (item_category_create_dto->image_url) {
        free(item_category_create_dto->image_url);
        item_category_create_dto->image_url = NULL;
    }
    if (item_category_create_dto->business_id) {
        free(item_category_create_dto->business_id);
        item_category_create_dto->business_id = NULL;
    }
    if (item_category_create_dto->business_profile_record_id) {
        free(item_category_create_dto->business_profile_record_id);
        item_category_create_dto->business_profile_record_id = NULL;
    }
    if (item_category_create_dto->parent_item_category_id) {
        free(item_category_create_dto->parent_item_category_id);
        item_category_create_dto->parent_item_category_id = NULL;
    }
    free(item_category_create_dto);
}

cJSON *item_category_create_dto_convertToJSON(item_category_create_dto_t *item_category_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // item_category_create_dto->id
    if(item_category_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", item_category_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // item_category_create_dto->timestamp
    if(item_category_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", item_category_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // item_category_create_dto->title
    if (!item_category_create_dto->title) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "title", item_category_create_dto->title) == NULL) {
    goto fail; //String
    }


    // item_category_create_dto->description
    if(item_category_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", item_category_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // item_category_create_dto->image_url
    if(item_category_create_dto->image_url) {
    if(cJSON_AddStringToObject(item, "imageURL", item_category_create_dto->image_url) == NULL) {
    goto fail; //String
    }
    }


    // item_category_create_dto->business_id
    if (!item_category_create_dto->business_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "businessID", item_category_create_dto->business_id) == NULL) {
    goto fail; //String
    }


    // item_category_create_dto->business_profile_record_id
    if(item_category_create_dto->business_profile_record_id) {
    if(cJSON_AddStringToObject(item, "businessProfileRecordID", item_category_create_dto->business_profile_record_id) == NULL) {
    goto fail; //String
    }
    }


    // item_category_create_dto->parent_item_category_id
    if(item_category_create_dto->parent_item_category_id) {
    if(cJSON_AddStringToObject(item, "parentItemCategoryID", item_category_create_dto->parent_item_category_id) == NULL) {
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

item_category_create_dto_t *item_category_create_dto_parseFromJSON(cJSON *item_category_create_dtoJSON){

    item_category_create_dto_t *item_category_create_dto_local_var = NULL;

    // item_category_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(item_category_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // item_category_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(item_category_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // item_category_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(item_category_create_dtoJSON, "title");
    if (!title) {
        goto end;
    }

    
    if(!cJSON_IsString(title))
    {
    goto end; //String
    }

    // item_category_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(item_category_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // item_category_create_dto->image_url
    cJSON *image_url = cJSON_GetObjectItemCaseSensitive(item_category_create_dtoJSON, "imageURL");
    if (image_url) { 
    if(!cJSON_IsString(image_url) && !cJSON_IsNull(image_url))
    {
    goto end; //String
    }
    }

    // item_category_create_dto->business_id
    cJSON *business_id = cJSON_GetObjectItemCaseSensitive(item_category_create_dtoJSON, "businessID");
    if (!business_id) {
        goto end;
    }

    
    if(!cJSON_IsString(business_id))
    {
    goto end; //String
    }

    // item_category_create_dto->business_profile_record_id
    cJSON *business_profile_record_id = cJSON_GetObjectItemCaseSensitive(item_category_create_dtoJSON, "businessProfileRecordID");
    if (business_profile_record_id) { 
    if(!cJSON_IsString(business_profile_record_id) && !cJSON_IsNull(business_profile_record_id))
    {
    goto end; //String
    }
    }

    // item_category_create_dto->parent_item_category_id
    cJSON *parent_item_category_id = cJSON_GetObjectItemCaseSensitive(item_category_create_dtoJSON, "parentItemCategoryID");
    if (parent_item_category_id) { 
    if(!cJSON_IsString(parent_item_category_id) && !cJSON_IsNull(parent_item_category_id))
    {
    goto end; //String
    }
    }


    item_category_create_dto_local_var = item_category_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(title->valuestring),
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        image_url && !cJSON_IsNull(image_url) ? strdup(image_url->valuestring) : NULL,
        strdup(business_id->valuestring),
        business_profile_record_id && !cJSON_IsNull(business_profile_record_id) ? strdup(business_profile_record_id->valuestring) : NULL,
        parent_item_category_id && !cJSON_IsNull(parent_item_category_id) ? strdup(parent_item_category_id->valuestring) : NULL
        );

    return item_category_create_dto_local_var;
end:
    return NULL;

}
