#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "item_brand_dto.h"



item_brand_dto_t *item_brand_dto_create(
    char *id,
    char *timestamp,
    char *code,
    char *name,
    char *description,
    char *website_url,
    char *logo_url,
    int featured,
    int trending,
    char *business_id
    ) {
    item_brand_dto_t *item_brand_dto_local_var = malloc(sizeof(item_brand_dto_t));
    if (!item_brand_dto_local_var) {
        return NULL;
    }
    item_brand_dto_local_var->id = id;
    item_brand_dto_local_var->timestamp = timestamp;
    item_brand_dto_local_var->code = code;
    item_brand_dto_local_var->name = name;
    item_brand_dto_local_var->description = description;
    item_brand_dto_local_var->website_url = website_url;
    item_brand_dto_local_var->logo_url = logo_url;
    item_brand_dto_local_var->featured = featured;
    item_brand_dto_local_var->trending = trending;
    item_brand_dto_local_var->business_id = business_id;

    return item_brand_dto_local_var;
}


void item_brand_dto_free(item_brand_dto_t *item_brand_dto) {
    if(NULL == item_brand_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (item_brand_dto->id) {
        free(item_brand_dto->id);
        item_brand_dto->id = NULL;
    }
    if (item_brand_dto->timestamp) {
        free(item_brand_dto->timestamp);
        item_brand_dto->timestamp = NULL;
    }
    if (item_brand_dto->code) {
        free(item_brand_dto->code);
        item_brand_dto->code = NULL;
    }
    if (item_brand_dto->name) {
        free(item_brand_dto->name);
        item_brand_dto->name = NULL;
    }
    if (item_brand_dto->description) {
        free(item_brand_dto->description);
        item_brand_dto->description = NULL;
    }
    if (item_brand_dto->website_url) {
        free(item_brand_dto->website_url);
        item_brand_dto->website_url = NULL;
    }
    if (item_brand_dto->logo_url) {
        free(item_brand_dto->logo_url);
        item_brand_dto->logo_url = NULL;
    }
    if (item_brand_dto->business_id) {
        free(item_brand_dto->business_id);
        item_brand_dto->business_id = NULL;
    }
    free(item_brand_dto);
}

cJSON *item_brand_dto_convertToJSON(item_brand_dto_t *item_brand_dto) {
    cJSON *item = cJSON_CreateObject();

    // item_brand_dto->id
    if(item_brand_dto->id) {
    if(cJSON_AddStringToObject(item, "id", item_brand_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // item_brand_dto->timestamp
    if(item_brand_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", item_brand_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // item_brand_dto->code
    if(item_brand_dto->code) {
    if(cJSON_AddStringToObject(item, "code", item_brand_dto->code) == NULL) {
    goto fail; //String
    }
    }


    // item_brand_dto->name
    if(item_brand_dto->name) {
    if(cJSON_AddStringToObject(item, "name", item_brand_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // item_brand_dto->description
    if(item_brand_dto->description) {
    if(cJSON_AddStringToObject(item, "description", item_brand_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // item_brand_dto->website_url
    if(item_brand_dto->website_url) {
    if(cJSON_AddStringToObject(item, "websiteURL", item_brand_dto->website_url) == NULL) {
    goto fail; //String
    }
    }


    // item_brand_dto->logo_url
    if(item_brand_dto->logo_url) {
    if(cJSON_AddStringToObject(item, "logoURL", item_brand_dto->logo_url) == NULL) {
    goto fail; //String
    }
    }


    // item_brand_dto->featured
    if(item_brand_dto->featured) {
    if(cJSON_AddBoolToObject(item, "featured", item_brand_dto->featured) == NULL) {
    goto fail; //Bool
    }
    }


    // item_brand_dto->trending
    if(item_brand_dto->trending) {
    if(cJSON_AddBoolToObject(item, "trending", item_brand_dto->trending) == NULL) {
    goto fail; //Bool
    }
    }


    // item_brand_dto->business_id
    if(item_brand_dto->business_id) {
    if(cJSON_AddStringToObject(item, "businessID", item_brand_dto->business_id) == NULL) {
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

item_brand_dto_t *item_brand_dto_parseFromJSON(cJSON *item_brand_dtoJSON){

    item_brand_dto_t *item_brand_dto_local_var = NULL;

    // item_brand_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(item_brand_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // item_brand_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(item_brand_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // item_brand_dto->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(item_brand_dtoJSON, "code");
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // item_brand_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(item_brand_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // item_brand_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(item_brand_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // item_brand_dto->website_url
    cJSON *website_url = cJSON_GetObjectItemCaseSensitive(item_brand_dtoJSON, "websiteURL");
    if (website_url) { 
    if(!cJSON_IsString(website_url) && !cJSON_IsNull(website_url))
    {
    goto end; //String
    }
    }

    // item_brand_dto->logo_url
    cJSON *logo_url = cJSON_GetObjectItemCaseSensitive(item_brand_dtoJSON, "logoURL");
    if (logo_url) { 
    if(!cJSON_IsString(logo_url) && !cJSON_IsNull(logo_url))
    {
    goto end; //String
    }
    }

    // item_brand_dto->featured
    cJSON *featured = cJSON_GetObjectItemCaseSensitive(item_brand_dtoJSON, "featured");
    if (featured) { 
    if(!cJSON_IsBool(featured))
    {
    goto end; //Bool
    }
    }

    // item_brand_dto->trending
    cJSON *trending = cJSON_GetObjectItemCaseSensitive(item_brand_dtoJSON, "trending");
    if (trending) { 
    if(!cJSON_IsBool(trending))
    {
    goto end; //Bool
    }
    }

    // item_brand_dto->business_id
    cJSON *business_id = cJSON_GetObjectItemCaseSensitive(item_brand_dtoJSON, "businessID");
    if (business_id) { 
    if(!cJSON_IsString(business_id) && !cJSON_IsNull(business_id))
    {
    goto end; //String
    }
    }


    item_brand_dto_local_var = item_brand_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        website_url && !cJSON_IsNull(website_url) ? strdup(website_url->valuestring) : NULL,
        logo_url && !cJSON_IsNull(logo_url) ? strdup(logo_url->valuestring) : NULL,
        featured ? featured->valueint : 0,
        trending ? trending->valueint : 0,
        business_id && !cJSON_IsNull(business_id) ? strdup(business_id->valuestring) : NULL
        );

    return item_brand_dto_local_var;
end:
    return NULL;

}
