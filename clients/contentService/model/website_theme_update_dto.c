#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "website_theme_update_dto.h"



website_theme_update_dto_t *website_theme_update_dto_create(
    char *name,
    char *description,
    char *author_name,
    char *author_url,
    char *version,
    char *tags,
    int enable
    ) {
    website_theme_update_dto_t *website_theme_update_dto_local_var = malloc(sizeof(website_theme_update_dto_t));
    if (!website_theme_update_dto_local_var) {
        return NULL;
    }
    website_theme_update_dto_local_var->name = name;
    website_theme_update_dto_local_var->description = description;
    website_theme_update_dto_local_var->author_name = author_name;
    website_theme_update_dto_local_var->author_url = author_url;
    website_theme_update_dto_local_var->version = version;
    website_theme_update_dto_local_var->tags = tags;
    website_theme_update_dto_local_var->enable = enable;

    return website_theme_update_dto_local_var;
}


void website_theme_update_dto_free(website_theme_update_dto_t *website_theme_update_dto) {
    if(NULL == website_theme_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (website_theme_update_dto->name) {
        free(website_theme_update_dto->name);
        website_theme_update_dto->name = NULL;
    }
    if (website_theme_update_dto->description) {
        free(website_theme_update_dto->description);
        website_theme_update_dto->description = NULL;
    }
    if (website_theme_update_dto->author_name) {
        free(website_theme_update_dto->author_name);
        website_theme_update_dto->author_name = NULL;
    }
    if (website_theme_update_dto->author_url) {
        free(website_theme_update_dto->author_url);
        website_theme_update_dto->author_url = NULL;
    }
    if (website_theme_update_dto->version) {
        free(website_theme_update_dto->version);
        website_theme_update_dto->version = NULL;
    }
    if (website_theme_update_dto->tags) {
        free(website_theme_update_dto->tags);
        website_theme_update_dto->tags = NULL;
    }
    free(website_theme_update_dto);
}

cJSON *website_theme_update_dto_convertToJSON(website_theme_update_dto_t *website_theme_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // website_theme_update_dto->name
    if(website_theme_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", website_theme_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // website_theme_update_dto->description
    if(website_theme_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", website_theme_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // website_theme_update_dto->author_name
    if(website_theme_update_dto->author_name) {
    if(cJSON_AddStringToObject(item, "authorName", website_theme_update_dto->author_name) == NULL) {
    goto fail; //String
    }
    }


    // website_theme_update_dto->author_url
    if(website_theme_update_dto->author_url) {
    if(cJSON_AddStringToObject(item, "authorUrl", website_theme_update_dto->author_url) == NULL) {
    goto fail; //String
    }
    }


    // website_theme_update_dto->version
    if(website_theme_update_dto->version) {
    if(cJSON_AddStringToObject(item, "version", website_theme_update_dto->version) == NULL) {
    goto fail; //String
    }
    }


    // website_theme_update_dto->tags
    if(website_theme_update_dto->tags) {
    if(cJSON_AddStringToObject(item, "tags", website_theme_update_dto->tags) == NULL) {
    goto fail; //String
    }
    }


    // website_theme_update_dto->enable
    if(website_theme_update_dto->enable) {
    if(cJSON_AddBoolToObject(item, "enable", website_theme_update_dto->enable) == NULL) {
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

website_theme_update_dto_t *website_theme_update_dto_parseFromJSON(cJSON *website_theme_update_dtoJSON){

    website_theme_update_dto_t *website_theme_update_dto_local_var = NULL;

    // website_theme_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(website_theme_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // website_theme_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(website_theme_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // website_theme_update_dto->author_name
    cJSON *author_name = cJSON_GetObjectItemCaseSensitive(website_theme_update_dtoJSON, "authorName");
    if (author_name) { 
    if(!cJSON_IsString(author_name) && !cJSON_IsNull(author_name))
    {
    goto end; //String
    }
    }

    // website_theme_update_dto->author_url
    cJSON *author_url = cJSON_GetObjectItemCaseSensitive(website_theme_update_dtoJSON, "authorUrl");
    if (author_url) { 
    if(!cJSON_IsString(author_url) && !cJSON_IsNull(author_url))
    {
    goto end; //String
    }
    }

    // website_theme_update_dto->version
    cJSON *version = cJSON_GetObjectItemCaseSensitive(website_theme_update_dtoJSON, "version");
    if (version) { 
    if(!cJSON_IsString(version) && !cJSON_IsNull(version))
    {
    goto end; //String
    }
    }

    // website_theme_update_dto->tags
    cJSON *tags = cJSON_GetObjectItemCaseSensitive(website_theme_update_dtoJSON, "tags");
    if (tags) { 
    if(!cJSON_IsString(tags) && !cJSON_IsNull(tags))
    {
    goto end; //String
    }
    }

    // website_theme_update_dto->enable
    cJSON *enable = cJSON_GetObjectItemCaseSensitive(website_theme_update_dtoJSON, "enable");
    if (enable) { 
    if(!cJSON_IsBool(enable))
    {
    goto end; //Bool
    }
    }


    website_theme_update_dto_local_var = website_theme_update_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        author_name && !cJSON_IsNull(author_name) ? strdup(author_name->valuestring) : NULL,
        author_url && !cJSON_IsNull(author_url) ? strdup(author_url->valuestring) : NULL,
        version && !cJSON_IsNull(version) ? strdup(version->valuestring) : NULL,
        tags && !cJSON_IsNull(tags) ? strdup(tags->valuestring) : NULL,
        enable ? enable->valueint : 0
        );

    return website_theme_update_dto_local_var;
end:
    return NULL;

}
