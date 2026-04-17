#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "item_brand_create_dto.h"



item_brand_create_dto_t *item_brand_create_dto_create(
    char *id,
    char *timestamp,
    char *code,
    char *name,
    char *description,
    char *website_url,
    int featured,
    int trending
    ) {
    item_brand_create_dto_t *item_brand_create_dto_local_var = malloc(sizeof(item_brand_create_dto_t));
    if (!item_brand_create_dto_local_var) {
        return NULL;
    }
    item_brand_create_dto_local_var->id = id;
    item_brand_create_dto_local_var->timestamp = timestamp;
    item_brand_create_dto_local_var->code = code;
    item_brand_create_dto_local_var->name = name;
    item_brand_create_dto_local_var->description = description;
    item_brand_create_dto_local_var->website_url = website_url;
    item_brand_create_dto_local_var->featured = featured;
    item_brand_create_dto_local_var->trending = trending;

    return item_brand_create_dto_local_var;
}


void item_brand_create_dto_free(item_brand_create_dto_t *item_brand_create_dto) {
    if(NULL == item_brand_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (item_brand_create_dto->id) {
        free(item_brand_create_dto->id);
        item_brand_create_dto->id = NULL;
    }
    if (item_brand_create_dto->timestamp) {
        free(item_brand_create_dto->timestamp);
        item_brand_create_dto->timestamp = NULL;
    }
    if (item_brand_create_dto->code) {
        free(item_brand_create_dto->code);
        item_brand_create_dto->code = NULL;
    }
    if (item_brand_create_dto->name) {
        free(item_brand_create_dto->name);
        item_brand_create_dto->name = NULL;
    }
    if (item_brand_create_dto->description) {
        free(item_brand_create_dto->description);
        item_brand_create_dto->description = NULL;
    }
    if (item_brand_create_dto->website_url) {
        free(item_brand_create_dto->website_url);
        item_brand_create_dto->website_url = NULL;
    }
    free(item_brand_create_dto);
}

cJSON *item_brand_create_dto_convertToJSON(item_brand_create_dto_t *item_brand_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // item_brand_create_dto->id
    if(item_brand_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", item_brand_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // item_brand_create_dto->timestamp
    if(item_brand_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", item_brand_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // item_brand_create_dto->code
    if(item_brand_create_dto->code) {
    if(cJSON_AddStringToObject(item, "code", item_brand_create_dto->code) == NULL) {
    goto fail; //String
    }
    }


    // item_brand_create_dto->name
    if (!item_brand_create_dto->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", item_brand_create_dto->name) == NULL) {
    goto fail; //String
    }


    // item_brand_create_dto->description
    if(item_brand_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", item_brand_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // item_brand_create_dto->website_url
    if(item_brand_create_dto->website_url) {
    if(cJSON_AddStringToObject(item, "websiteURL", item_brand_create_dto->website_url) == NULL) {
    goto fail; //String
    }
    }


    // item_brand_create_dto->featured
    if(item_brand_create_dto->featured) {
    if(cJSON_AddBoolToObject(item, "featured", item_brand_create_dto->featured) == NULL) {
    goto fail; //Bool
    }
    }


    // item_brand_create_dto->trending
    if(item_brand_create_dto->trending) {
    if(cJSON_AddBoolToObject(item, "trending", item_brand_create_dto->trending) == NULL) {
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

item_brand_create_dto_t *item_brand_create_dto_parseFromJSON(cJSON *item_brand_create_dtoJSON){

    item_brand_create_dto_t *item_brand_create_dto_local_var = NULL;

    // item_brand_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(item_brand_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // item_brand_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(item_brand_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // item_brand_create_dto->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(item_brand_create_dtoJSON, "code");
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // item_brand_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(item_brand_create_dtoJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // item_brand_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(item_brand_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // item_brand_create_dto->website_url
    cJSON *website_url = cJSON_GetObjectItemCaseSensitive(item_brand_create_dtoJSON, "websiteURL");
    if (website_url) { 
    if(!cJSON_IsString(website_url) && !cJSON_IsNull(website_url))
    {
    goto end; //String
    }
    }

    // item_brand_create_dto->featured
    cJSON *featured = cJSON_GetObjectItemCaseSensitive(item_brand_create_dtoJSON, "featured");
    if (featured) { 
    if(!cJSON_IsBool(featured))
    {
    goto end; //Bool
    }
    }

    // item_brand_create_dto->trending
    cJSON *trending = cJSON_GetObjectItemCaseSensitive(item_brand_create_dtoJSON, "trending");
    if (trending) { 
    if(!cJSON_IsBool(trending))
    {
    goto end; //Bool
    }
    }


    item_brand_create_dto_local_var = item_brand_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        strdup(name->valuestring),
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        website_url && !cJSON_IsNull(website_url) ? strdup(website_url->valuestring) : NULL,
        featured ? featured->valueint : 0,
        trending ? trending->valueint : 0
        );

    return item_brand_create_dto_local_var;
end:
    return NULL;

}
