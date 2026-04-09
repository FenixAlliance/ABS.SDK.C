#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "item_brand_update_dto.h"



item_brand_update_dto_t *item_brand_update_dto_create(
    char *name,
    char *description,
    char *website_url,
    char *logo_url,
    int featured,
    int trending
    ) {
    item_brand_update_dto_t *item_brand_update_dto_local_var = malloc(sizeof(item_brand_update_dto_t));
    if (!item_brand_update_dto_local_var) {
        return NULL;
    }
    item_brand_update_dto_local_var->name = name;
    item_brand_update_dto_local_var->description = description;
    item_brand_update_dto_local_var->website_url = website_url;
    item_brand_update_dto_local_var->logo_url = logo_url;
    item_brand_update_dto_local_var->featured = featured;
    item_brand_update_dto_local_var->trending = trending;

    return item_brand_update_dto_local_var;
}


void item_brand_update_dto_free(item_brand_update_dto_t *item_brand_update_dto) {
    if(NULL == item_brand_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (item_brand_update_dto->name) {
        free(item_brand_update_dto->name);
        item_brand_update_dto->name = NULL;
    }
    if (item_brand_update_dto->description) {
        free(item_brand_update_dto->description);
        item_brand_update_dto->description = NULL;
    }
    if (item_brand_update_dto->website_url) {
        free(item_brand_update_dto->website_url);
        item_brand_update_dto->website_url = NULL;
    }
    if (item_brand_update_dto->logo_url) {
        free(item_brand_update_dto->logo_url);
        item_brand_update_dto->logo_url = NULL;
    }
    free(item_brand_update_dto);
}

cJSON *item_brand_update_dto_convertToJSON(item_brand_update_dto_t *item_brand_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // item_brand_update_dto->name
    if (!item_brand_update_dto->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", item_brand_update_dto->name) == NULL) {
    goto fail; //String
    }


    // item_brand_update_dto->description
    if(item_brand_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", item_brand_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // item_brand_update_dto->website_url
    if(item_brand_update_dto->website_url) {
    if(cJSON_AddStringToObject(item, "websiteURL", item_brand_update_dto->website_url) == NULL) {
    goto fail; //String
    }
    }


    // item_brand_update_dto->logo_url
    if(item_brand_update_dto->logo_url) {
    if(cJSON_AddStringToObject(item, "logoURL", item_brand_update_dto->logo_url) == NULL) {
    goto fail; //String
    }
    }


    // item_brand_update_dto->featured
    if(item_brand_update_dto->featured) {
    if(cJSON_AddBoolToObject(item, "featured", item_brand_update_dto->featured) == NULL) {
    goto fail; //Bool
    }
    }


    // item_brand_update_dto->trending
    if(item_brand_update_dto->trending) {
    if(cJSON_AddBoolToObject(item, "trending", item_brand_update_dto->trending) == NULL) {
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

item_brand_update_dto_t *item_brand_update_dto_parseFromJSON(cJSON *item_brand_update_dtoJSON){

    item_brand_update_dto_t *item_brand_update_dto_local_var = NULL;

    // item_brand_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(item_brand_update_dtoJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // item_brand_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(item_brand_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // item_brand_update_dto->website_url
    cJSON *website_url = cJSON_GetObjectItemCaseSensitive(item_brand_update_dtoJSON, "websiteURL");
    if (website_url) { 
    if(!cJSON_IsString(website_url) && !cJSON_IsNull(website_url))
    {
    goto end; //String
    }
    }

    // item_brand_update_dto->logo_url
    cJSON *logo_url = cJSON_GetObjectItemCaseSensitive(item_brand_update_dtoJSON, "logoURL");
    if (logo_url) { 
    if(!cJSON_IsString(logo_url) && !cJSON_IsNull(logo_url))
    {
    goto end; //String
    }
    }

    // item_brand_update_dto->featured
    cJSON *featured = cJSON_GetObjectItemCaseSensitive(item_brand_update_dtoJSON, "featured");
    if (featured) { 
    if(!cJSON_IsBool(featured))
    {
    goto end; //Bool
    }
    }

    // item_brand_update_dto->trending
    cJSON *trending = cJSON_GetObjectItemCaseSensitive(item_brand_update_dtoJSON, "trending");
    if (trending) { 
    if(!cJSON_IsBool(trending))
    {
    goto end; //Bool
    }
    }


    item_brand_update_dto_local_var = item_brand_update_dto_create (
        strdup(name->valuestring),
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        website_url && !cJSON_IsNull(website_url) ? strdup(website_url->valuestring) : NULL,
        logo_url && !cJSON_IsNull(logo_url) ? strdup(logo_url->valuestring) : NULL,
        featured ? featured->valueint : 0,
        trending ? trending->valueint : 0
        );

    return item_brand_update_dto_local_var;
end:
    return NULL;

}
