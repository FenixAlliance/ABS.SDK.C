#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "blog_post_category_update_dto.h"



blog_post_category_update_dto_t *blog_post_category_update_dto_create(
    char *slug,
    char *type,
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
    blog_post_category_update_dto_t *blog_post_category_update_dto_local_var = malloc(sizeof(blog_post_category_update_dto_t));
    if (!blog_post_category_update_dto_local_var) {
        return NULL;
    }
    blog_post_category_update_dto_local_var->slug = slug;
    blog_post_category_update_dto_local_var->type = type;
    blog_post_category_update_dto_local_var->title = title;
    blog_post_category_update_dto_local_var->description = description;
    blog_post_category_update_dto_local_var->seo_title = seo_title;
    blog_post_category_update_dto_local_var->meta_description = meta_description;
    blog_post_category_update_dto_local_var->cornerstone_content = cornerstone_content;
    blog_post_category_update_dto_local_var->allow_serach_engines = allow_serach_engines;
    blog_post_category_update_dto_local_var->seo_key_phrases = seo_key_phrases;
    blog_post_category_update_dto_local_var->canonical_url = canonical_url;
    blog_post_category_update_dto_local_var->image_url = image_url;
    blog_post_category_update_dto_local_var->image = image;
    blog_post_category_update_dto_local_var->web_portal_id = web_portal_id;

    return blog_post_category_update_dto_local_var;
}


void blog_post_category_update_dto_free(blog_post_category_update_dto_t *blog_post_category_update_dto) {
    if(NULL == blog_post_category_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (blog_post_category_update_dto->slug) {
        free(blog_post_category_update_dto->slug);
        blog_post_category_update_dto->slug = NULL;
    }
    if (blog_post_category_update_dto->type) {
        free(blog_post_category_update_dto->type);
        blog_post_category_update_dto->type = NULL;
    }
    if (blog_post_category_update_dto->title) {
        free(blog_post_category_update_dto->title);
        blog_post_category_update_dto->title = NULL;
    }
    if (blog_post_category_update_dto->description) {
        free(blog_post_category_update_dto->description);
        blog_post_category_update_dto->description = NULL;
    }
    if (blog_post_category_update_dto->seo_title) {
        free(blog_post_category_update_dto->seo_title);
        blog_post_category_update_dto->seo_title = NULL;
    }
    if (blog_post_category_update_dto->meta_description) {
        free(blog_post_category_update_dto->meta_description);
        blog_post_category_update_dto->meta_description = NULL;
    }
    if (blog_post_category_update_dto->seo_key_phrases) {
        free(blog_post_category_update_dto->seo_key_phrases);
        blog_post_category_update_dto->seo_key_phrases = NULL;
    }
    if (blog_post_category_update_dto->canonical_url) {
        free(blog_post_category_update_dto->canonical_url);
        blog_post_category_update_dto->canonical_url = NULL;
    }
    if (blog_post_category_update_dto->image_url) {
        free(blog_post_category_update_dto->image_url);
        blog_post_category_update_dto->image_url = NULL;
    }
    if (blog_post_category_update_dto->image) {
        free(blog_post_category_update_dto->image);
        blog_post_category_update_dto->image = NULL;
    }
    if (blog_post_category_update_dto->web_portal_id) {
        free(blog_post_category_update_dto->web_portal_id);
        blog_post_category_update_dto->web_portal_id = NULL;
    }
    free(blog_post_category_update_dto);
}

cJSON *blog_post_category_update_dto_convertToJSON(blog_post_category_update_dto_t *blog_post_category_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // blog_post_category_update_dto->slug
    if(blog_post_category_update_dto->slug) {
    if(cJSON_AddStringToObject(item, "slug", blog_post_category_update_dto->slug) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_category_update_dto->type
    if(blog_post_category_update_dto->type) {
    if(cJSON_AddStringToObject(item, "type", blog_post_category_update_dto->type) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_category_update_dto->title
    if(blog_post_category_update_dto->title) {
    if(cJSON_AddStringToObject(item, "title", blog_post_category_update_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_category_update_dto->description
    if(blog_post_category_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", blog_post_category_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_category_update_dto->seo_title
    if(blog_post_category_update_dto->seo_title) {
    if(cJSON_AddStringToObject(item, "seoTitle", blog_post_category_update_dto->seo_title) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_category_update_dto->meta_description
    if(blog_post_category_update_dto->meta_description) {
    if(cJSON_AddStringToObject(item, "metaDescription", blog_post_category_update_dto->meta_description) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_category_update_dto->cornerstone_content
    if(blog_post_category_update_dto->cornerstone_content) {
    if(cJSON_AddBoolToObject(item, "cornerstoneContent", blog_post_category_update_dto->cornerstone_content) == NULL) {
    goto fail; //Bool
    }
    }


    // blog_post_category_update_dto->allow_serach_engines
    if(blog_post_category_update_dto->allow_serach_engines) {
    if(cJSON_AddBoolToObject(item, "allowSerachEngines", blog_post_category_update_dto->allow_serach_engines) == NULL) {
    goto fail; //Bool
    }
    }


    // blog_post_category_update_dto->seo_key_phrases
    if(blog_post_category_update_dto->seo_key_phrases) {
    if(cJSON_AddStringToObject(item, "seoKeyPhrases", blog_post_category_update_dto->seo_key_phrases) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_category_update_dto->canonical_url
    if(blog_post_category_update_dto->canonical_url) {
    if(cJSON_AddStringToObject(item, "canonicalUrl", blog_post_category_update_dto->canonical_url) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_category_update_dto->image_url
    if(blog_post_category_update_dto->image_url) {
    if(cJSON_AddStringToObject(item, "imageURL", blog_post_category_update_dto->image_url) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_category_update_dto->image
    if(blog_post_category_update_dto->image) {
    if(cJSON_AddStringToObject(item, "image", blog_post_category_update_dto->image) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_category_update_dto->web_portal_id
    if(blog_post_category_update_dto->web_portal_id) {
    if(cJSON_AddStringToObject(item, "webPortalID", blog_post_category_update_dto->web_portal_id) == NULL) {
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

blog_post_category_update_dto_t *blog_post_category_update_dto_parseFromJSON(cJSON *blog_post_category_update_dtoJSON){

    blog_post_category_update_dto_t *blog_post_category_update_dto_local_var = NULL;

    // blog_post_category_update_dto->slug
    cJSON *slug = cJSON_GetObjectItemCaseSensitive(blog_post_category_update_dtoJSON, "slug");
    if (slug) { 
    if(!cJSON_IsString(slug) && !cJSON_IsNull(slug))
    {
    goto end; //String
    }
    }

    // blog_post_category_update_dto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(blog_post_category_update_dtoJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // blog_post_category_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(blog_post_category_update_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // blog_post_category_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(blog_post_category_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // blog_post_category_update_dto->seo_title
    cJSON *seo_title = cJSON_GetObjectItemCaseSensitive(blog_post_category_update_dtoJSON, "seoTitle");
    if (seo_title) { 
    if(!cJSON_IsString(seo_title) && !cJSON_IsNull(seo_title))
    {
    goto end; //String
    }
    }

    // blog_post_category_update_dto->meta_description
    cJSON *meta_description = cJSON_GetObjectItemCaseSensitive(blog_post_category_update_dtoJSON, "metaDescription");
    if (meta_description) { 
    if(!cJSON_IsString(meta_description) && !cJSON_IsNull(meta_description))
    {
    goto end; //String
    }
    }

    // blog_post_category_update_dto->cornerstone_content
    cJSON *cornerstone_content = cJSON_GetObjectItemCaseSensitive(blog_post_category_update_dtoJSON, "cornerstoneContent");
    if (cornerstone_content) { 
    if(!cJSON_IsBool(cornerstone_content))
    {
    goto end; //Bool
    }
    }

    // blog_post_category_update_dto->allow_serach_engines
    cJSON *allow_serach_engines = cJSON_GetObjectItemCaseSensitive(blog_post_category_update_dtoJSON, "allowSerachEngines");
    if (allow_serach_engines) { 
    if(!cJSON_IsBool(allow_serach_engines))
    {
    goto end; //Bool
    }
    }

    // blog_post_category_update_dto->seo_key_phrases
    cJSON *seo_key_phrases = cJSON_GetObjectItemCaseSensitive(blog_post_category_update_dtoJSON, "seoKeyPhrases");
    if (seo_key_phrases) { 
    if(!cJSON_IsString(seo_key_phrases) && !cJSON_IsNull(seo_key_phrases))
    {
    goto end; //String
    }
    }

    // blog_post_category_update_dto->canonical_url
    cJSON *canonical_url = cJSON_GetObjectItemCaseSensitive(blog_post_category_update_dtoJSON, "canonicalUrl");
    if (canonical_url) { 
    if(!cJSON_IsString(canonical_url) && !cJSON_IsNull(canonical_url))
    {
    goto end; //String
    }
    }

    // blog_post_category_update_dto->image_url
    cJSON *image_url = cJSON_GetObjectItemCaseSensitive(blog_post_category_update_dtoJSON, "imageURL");
    if (image_url) { 
    if(!cJSON_IsString(image_url) && !cJSON_IsNull(image_url))
    {
    goto end; //String
    }
    }

    // blog_post_category_update_dto->image
    cJSON *image = cJSON_GetObjectItemCaseSensitive(blog_post_category_update_dtoJSON, "image");
    if (image) { 
    if(!cJSON_IsString(image) && !cJSON_IsNull(image))
    {
    goto end; //String
    }
    }

    // blog_post_category_update_dto->web_portal_id
    cJSON *web_portal_id = cJSON_GetObjectItemCaseSensitive(blog_post_category_update_dtoJSON, "webPortalID");
    if (web_portal_id) { 
    if(!cJSON_IsString(web_portal_id) && !cJSON_IsNull(web_portal_id))
    {
    goto end; //String
    }
    }


    blog_post_category_update_dto_local_var = blog_post_category_update_dto_create (
        slug && !cJSON_IsNull(slug) ? strdup(slug->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
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

    return blog_post_category_update_dto_local_var;
end:
    return NULL;

}
