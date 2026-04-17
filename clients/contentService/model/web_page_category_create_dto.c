#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "web_page_category_create_dto.h"



web_page_category_create_dto_t *web_page_category_create_dto_create(
    char *id,
    char *timestamp,
    char *slug,
    char *title,
    char *description,
    char *seo_title,
    char *meta_description,
    int cornerstone_content,
    int allow_serach_engines,
    char *seo_key_phrases,
    char *canonical_url,
    char *image_url,
    char *image,
    char *web_portal_id
    ) {
    web_page_category_create_dto_t *web_page_category_create_dto_local_var = malloc(sizeof(web_page_category_create_dto_t));
    if (!web_page_category_create_dto_local_var) {
        return NULL;
    }
    web_page_category_create_dto_local_var->id = id;
    web_page_category_create_dto_local_var->timestamp = timestamp;
    web_page_category_create_dto_local_var->slug = slug;
    web_page_category_create_dto_local_var->title = title;
    web_page_category_create_dto_local_var->description = description;
    web_page_category_create_dto_local_var->seo_title = seo_title;
    web_page_category_create_dto_local_var->meta_description = meta_description;
    web_page_category_create_dto_local_var->cornerstone_content = cornerstone_content;
    web_page_category_create_dto_local_var->allow_serach_engines = allow_serach_engines;
    web_page_category_create_dto_local_var->seo_key_phrases = seo_key_phrases;
    web_page_category_create_dto_local_var->canonical_url = canonical_url;
    web_page_category_create_dto_local_var->image_url = image_url;
    web_page_category_create_dto_local_var->image = image;
    web_page_category_create_dto_local_var->web_portal_id = web_portal_id;

    return web_page_category_create_dto_local_var;
}


void web_page_category_create_dto_free(web_page_category_create_dto_t *web_page_category_create_dto) {
    if(NULL == web_page_category_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (web_page_category_create_dto->id) {
        free(web_page_category_create_dto->id);
        web_page_category_create_dto->id = NULL;
    }
    if (web_page_category_create_dto->timestamp) {
        free(web_page_category_create_dto->timestamp);
        web_page_category_create_dto->timestamp = NULL;
    }
    if (web_page_category_create_dto->slug) {
        free(web_page_category_create_dto->slug);
        web_page_category_create_dto->slug = NULL;
    }
    if (web_page_category_create_dto->title) {
        free(web_page_category_create_dto->title);
        web_page_category_create_dto->title = NULL;
    }
    if (web_page_category_create_dto->description) {
        free(web_page_category_create_dto->description);
        web_page_category_create_dto->description = NULL;
    }
    if (web_page_category_create_dto->seo_title) {
        free(web_page_category_create_dto->seo_title);
        web_page_category_create_dto->seo_title = NULL;
    }
    if (web_page_category_create_dto->meta_description) {
        free(web_page_category_create_dto->meta_description);
        web_page_category_create_dto->meta_description = NULL;
    }
    if (web_page_category_create_dto->seo_key_phrases) {
        free(web_page_category_create_dto->seo_key_phrases);
        web_page_category_create_dto->seo_key_phrases = NULL;
    }
    if (web_page_category_create_dto->canonical_url) {
        free(web_page_category_create_dto->canonical_url);
        web_page_category_create_dto->canonical_url = NULL;
    }
    if (web_page_category_create_dto->image_url) {
        free(web_page_category_create_dto->image_url);
        web_page_category_create_dto->image_url = NULL;
    }
    if (web_page_category_create_dto->image) {
        free(web_page_category_create_dto->image);
        web_page_category_create_dto->image = NULL;
    }
    if (web_page_category_create_dto->web_portal_id) {
        free(web_page_category_create_dto->web_portal_id);
        web_page_category_create_dto->web_portal_id = NULL;
    }
    free(web_page_category_create_dto);
}

cJSON *web_page_category_create_dto_convertToJSON(web_page_category_create_dto_t *web_page_category_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // web_page_category_create_dto->id
    if(web_page_category_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", web_page_category_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // web_page_category_create_dto->timestamp
    if(web_page_category_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", web_page_category_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // web_page_category_create_dto->slug
    if(web_page_category_create_dto->slug) {
    if(cJSON_AddStringToObject(item, "slug", web_page_category_create_dto->slug) == NULL) {
    goto fail; //String
    }
    }


    // web_page_category_create_dto->title
    if(web_page_category_create_dto->title) {
    if(cJSON_AddStringToObject(item, "title", web_page_category_create_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // web_page_category_create_dto->description
    if(web_page_category_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", web_page_category_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // web_page_category_create_dto->seo_title
    if(web_page_category_create_dto->seo_title) {
    if(cJSON_AddStringToObject(item, "seoTitle", web_page_category_create_dto->seo_title) == NULL) {
    goto fail; //String
    }
    }


    // web_page_category_create_dto->meta_description
    if(web_page_category_create_dto->meta_description) {
    if(cJSON_AddStringToObject(item, "metaDescription", web_page_category_create_dto->meta_description) == NULL) {
    goto fail; //String
    }
    }


    // web_page_category_create_dto->cornerstone_content
    if(web_page_category_create_dto->cornerstone_content) {
    if(cJSON_AddBoolToObject(item, "cornerstoneContent", web_page_category_create_dto->cornerstone_content) == NULL) {
    goto fail; //Bool
    }
    }


    // web_page_category_create_dto->allow_serach_engines
    if(web_page_category_create_dto->allow_serach_engines) {
    if(cJSON_AddBoolToObject(item, "allowSerachEngines", web_page_category_create_dto->allow_serach_engines) == NULL) {
    goto fail; //Bool
    }
    }


    // web_page_category_create_dto->seo_key_phrases
    if(web_page_category_create_dto->seo_key_phrases) {
    if(cJSON_AddStringToObject(item, "seoKeyPhrases", web_page_category_create_dto->seo_key_phrases) == NULL) {
    goto fail; //String
    }
    }


    // web_page_category_create_dto->canonical_url
    if(web_page_category_create_dto->canonical_url) {
    if(cJSON_AddStringToObject(item, "canonicalUrl", web_page_category_create_dto->canonical_url) == NULL) {
    goto fail; //String
    }
    }


    // web_page_category_create_dto->image_url
    if(web_page_category_create_dto->image_url) {
    if(cJSON_AddStringToObject(item, "imageURL", web_page_category_create_dto->image_url) == NULL) {
    goto fail; //String
    }
    }


    // web_page_category_create_dto->image
    if(web_page_category_create_dto->image) {
    if(cJSON_AddStringToObject(item, "image", web_page_category_create_dto->image) == NULL) {
    goto fail; //String
    }
    }


    // web_page_category_create_dto->web_portal_id
    if(web_page_category_create_dto->web_portal_id) {
    if(cJSON_AddStringToObject(item, "webPortalID", web_page_category_create_dto->web_portal_id) == NULL) {
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

web_page_category_create_dto_t *web_page_category_create_dto_parseFromJSON(cJSON *web_page_category_create_dtoJSON){

    web_page_category_create_dto_t *web_page_category_create_dto_local_var = NULL;

    // web_page_category_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(web_page_category_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // web_page_category_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(web_page_category_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // web_page_category_create_dto->slug
    cJSON *slug = cJSON_GetObjectItemCaseSensitive(web_page_category_create_dtoJSON, "slug");
    if (slug) { 
    if(!cJSON_IsString(slug) && !cJSON_IsNull(slug))
    {
    goto end; //String
    }
    }

    // web_page_category_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(web_page_category_create_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // web_page_category_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(web_page_category_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // web_page_category_create_dto->seo_title
    cJSON *seo_title = cJSON_GetObjectItemCaseSensitive(web_page_category_create_dtoJSON, "seoTitle");
    if (seo_title) { 
    if(!cJSON_IsString(seo_title) && !cJSON_IsNull(seo_title))
    {
    goto end; //String
    }
    }

    // web_page_category_create_dto->meta_description
    cJSON *meta_description = cJSON_GetObjectItemCaseSensitive(web_page_category_create_dtoJSON, "metaDescription");
    if (meta_description) { 
    if(!cJSON_IsString(meta_description) && !cJSON_IsNull(meta_description))
    {
    goto end; //String
    }
    }

    // web_page_category_create_dto->cornerstone_content
    cJSON *cornerstone_content = cJSON_GetObjectItemCaseSensitive(web_page_category_create_dtoJSON, "cornerstoneContent");
    if (cornerstone_content) { 
    if(!cJSON_IsBool(cornerstone_content))
    {
    goto end; //Bool
    }
    }

    // web_page_category_create_dto->allow_serach_engines
    cJSON *allow_serach_engines = cJSON_GetObjectItemCaseSensitive(web_page_category_create_dtoJSON, "allowSerachEngines");
    if (allow_serach_engines) { 
    if(!cJSON_IsBool(allow_serach_engines))
    {
    goto end; //Bool
    }
    }

    // web_page_category_create_dto->seo_key_phrases
    cJSON *seo_key_phrases = cJSON_GetObjectItemCaseSensitive(web_page_category_create_dtoJSON, "seoKeyPhrases");
    if (seo_key_phrases) { 
    if(!cJSON_IsString(seo_key_phrases) && !cJSON_IsNull(seo_key_phrases))
    {
    goto end; //String
    }
    }

    // web_page_category_create_dto->canonical_url
    cJSON *canonical_url = cJSON_GetObjectItemCaseSensitive(web_page_category_create_dtoJSON, "canonicalUrl");
    if (canonical_url) { 
    if(!cJSON_IsString(canonical_url) && !cJSON_IsNull(canonical_url))
    {
    goto end; //String
    }
    }

    // web_page_category_create_dto->image_url
    cJSON *image_url = cJSON_GetObjectItemCaseSensitive(web_page_category_create_dtoJSON, "imageURL");
    if (image_url) { 
    if(!cJSON_IsString(image_url) && !cJSON_IsNull(image_url))
    {
    goto end; //String
    }
    }

    // web_page_category_create_dto->image
    cJSON *image = cJSON_GetObjectItemCaseSensitive(web_page_category_create_dtoJSON, "image");
    if (image) { 
    if(!cJSON_IsString(image) && !cJSON_IsNull(image))
    {
    goto end; //String
    }
    }

    // web_page_category_create_dto->web_portal_id
    cJSON *web_portal_id = cJSON_GetObjectItemCaseSensitive(web_page_category_create_dtoJSON, "webPortalID");
    if (web_portal_id) { 
    if(!cJSON_IsString(web_portal_id) && !cJSON_IsNull(web_portal_id))
    {
    goto end; //String
    }
    }


    web_page_category_create_dto_local_var = web_page_category_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        slug && !cJSON_IsNull(slug) ? strdup(slug->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        seo_title && !cJSON_IsNull(seo_title) ? strdup(seo_title->valuestring) : NULL,
        meta_description && !cJSON_IsNull(meta_description) ? strdup(meta_description->valuestring) : NULL,
        cornerstone_content ? cornerstone_content->valueint : 0,
        allow_serach_engines ? allow_serach_engines->valueint : 0,
        seo_key_phrases && !cJSON_IsNull(seo_key_phrases) ? strdup(seo_key_phrases->valuestring) : NULL,
        canonical_url && !cJSON_IsNull(canonical_url) ? strdup(canonical_url->valuestring) : NULL,
        image_url && !cJSON_IsNull(image_url) ? strdup(image_url->valuestring) : NULL,
        image && !cJSON_IsNull(image) ? strdup(image->valuestring) : NULL,
        web_portal_id && !cJSON_IsNull(web_portal_id) ? strdup(web_portal_id->valuestring) : NULL
        );

    return web_page_category_create_dto_local_var;
end:
    return NULL;

}
