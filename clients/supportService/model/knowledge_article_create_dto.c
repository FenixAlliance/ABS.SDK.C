#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "knowledge_article_create_dto.h"



knowledge_article_create_dto_t *knowledge_article_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *slug,
    char *excerpt,
    char *description,
    char *content,
    char *highlight_image,
    char *seo_title,
    char *seo_key_words,
    char *meta_description,
    int published,
    int enable
    ) {
    knowledge_article_create_dto_t *knowledge_article_create_dto_local_var = malloc(sizeof(knowledge_article_create_dto_t));
    if (!knowledge_article_create_dto_local_var) {
        return NULL;
    }
    knowledge_article_create_dto_local_var->id = id;
    knowledge_article_create_dto_local_var->timestamp = timestamp;
    knowledge_article_create_dto_local_var->title = title;
    knowledge_article_create_dto_local_var->slug = slug;
    knowledge_article_create_dto_local_var->excerpt = excerpt;
    knowledge_article_create_dto_local_var->description = description;
    knowledge_article_create_dto_local_var->content = content;
    knowledge_article_create_dto_local_var->highlight_image = highlight_image;
    knowledge_article_create_dto_local_var->seo_title = seo_title;
    knowledge_article_create_dto_local_var->seo_key_words = seo_key_words;
    knowledge_article_create_dto_local_var->meta_description = meta_description;
    knowledge_article_create_dto_local_var->published = published;
    knowledge_article_create_dto_local_var->enable = enable;

    return knowledge_article_create_dto_local_var;
}


void knowledge_article_create_dto_free(knowledge_article_create_dto_t *knowledge_article_create_dto) {
    if(NULL == knowledge_article_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (knowledge_article_create_dto->id) {
        free(knowledge_article_create_dto->id);
        knowledge_article_create_dto->id = NULL;
    }
    if (knowledge_article_create_dto->timestamp) {
        free(knowledge_article_create_dto->timestamp);
        knowledge_article_create_dto->timestamp = NULL;
    }
    if (knowledge_article_create_dto->title) {
        free(knowledge_article_create_dto->title);
        knowledge_article_create_dto->title = NULL;
    }
    if (knowledge_article_create_dto->slug) {
        free(knowledge_article_create_dto->slug);
        knowledge_article_create_dto->slug = NULL;
    }
    if (knowledge_article_create_dto->excerpt) {
        free(knowledge_article_create_dto->excerpt);
        knowledge_article_create_dto->excerpt = NULL;
    }
    if (knowledge_article_create_dto->description) {
        free(knowledge_article_create_dto->description);
        knowledge_article_create_dto->description = NULL;
    }
    if (knowledge_article_create_dto->content) {
        free(knowledge_article_create_dto->content);
        knowledge_article_create_dto->content = NULL;
    }
    if (knowledge_article_create_dto->highlight_image) {
        free(knowledge_article_create_dto->highlight_image);
        knowledge_article_create_dto->highlight_image = NULL;
    }
    if (knowledge_article_create_dto->seo_title) {
        free(knowledge_article_create_dto->seo_title);
        knowledge_article_create_dto->seo_title = NULL;
    }
    if (knowledge_article_create_dto->seo_key_words) {
        free(knowledge_article_create_dto->seo_key_words);
        knowledge_article_create_dto->seo_key_words = NULL;
    }
    if (knowledge_article_create_dto->meta_description) {
        free(knowledge_article_create_dto->meta_description);
        knowledge_article_create_dto->meta_description = NULL;
    }
    free(knowledge_article_create_dto);
}

cJSON *knowledge_article_create_dto_convertToJSON(knowledge_article_create_dto_t *knowledge_article_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // knowledge_article_create_dto->id
    if(knowledge_article_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", knowledge_article_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // knowledge_article_create_dto->timestamp
    if(knowledge_article_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", knowledge_article_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // knowledge_article_create_dto->title
    if (!knowledge_article_create_dto->title) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "title", knowledge_article_create_dto->title) == NULL) {
    goto fail; //String
    }


    // knowledge_article_create_dto->slug
    if(knowledge_article_create_dto->slug) {
    if(cJSON_AddStringToObject(item, "slug", knowledge_article_create_dto->slug) == NULL) {
    goto fail; //String
    }
    }


    // knowledge_article_create_dto->excerpt
    if(knowledge_article_create_dto->excerpt) {
    if(cJSON_AddStringToObject(item, "excerpt", knowledge_article_create_dto->excerpt) == NULL) {
    goto fail; //String
    }
    }


    // knowledge_article_create_dto->description
    if(knowledge_article_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", knowledge_article_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // knowledge_article_create_dto->content
    if(knowledge_article_create_dto->content) {
    if(cJSON_AddStringToObject(item, "content", knowledge_article_create_dto->content) == NULL) {
    goto fail; //String
    }
    }


    // knowledge_article_create_dto->highlight_image
    if(knowledge_article_create_dto->highlight_image) {
    if(cJSON_AddStringToObject(item, "highlightImage", knowledge_article_create_dto->highlight_image) == NULL) {
    goto fail; //String
    }
    }


    // knowledge_article_create_dto->seo_title
    if(knowledge_article_create_dto->seo_title) {
    if(cJSON_AddStringToObject(item, "seoTitle", knowledge_article_create_dto->seo_title) == NULL) {
    goto fail; //String
    }
    }


    // knowledge_article_create_dto->seo_key_words
    if(knowledge_article_create_dto->seo_key_words) {
    if(cJSON_AddStringToObject(item, "seoKeyWords", knowledge_article_create_dto->seo_key_words) == NULL) {
    goto fail; //String
    }
    }


    // knowledge_article_create_dto->meta_description
    if(knowledge_article_create_dto->meta_description) {
    if(cJSON_AddStringToObject(item, "metaDescription", knowledge_article_create_dto->meta_description) == NULL) {
    goto fail; //String
    }
    }


    // knowledge_article_create_dto->published
    if(knowledge_article_create_dto->published) {
    if(cJSON_AddBoolToObject(item, "published", knowledge_article_create_dto->published) == NULL) {
    goto fail; //Bool
    }
    }


    // knowledge_article_create_dto->enable
    if(knowledge_article_create_dto->enable) {
    if(cJSON_AddBoolToObject(item, "enable", knowledge_article_create_dto->enable) == NULL) {
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

knowledge_article_create_dto_t *knowledge_article_create_dto_parseFromJSON(cJSON *knowledge_article_create_dtoJSON){

    knowledge_article_create_dto_t *knowledge_article_create_dto_local_var = NULL;

    // knowledge_article_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(knowledge_article_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // knowledge_article_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(knowledge_article_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // knowledge_article_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(knowledge_article_create_dtoJSON, "title");
    if (!title) {
        goto end;
    }

    
    if(!cJSON_IsString(title))
    {
    goto end; //String
    }

    // knowledge_article_create_dto->slug
    cJSON *slug = cJSON_GetObjectItemCaseSensitive(knowledge_article_create_dtoJSON, "slug");
    if (slug) { 
    if(!cJSON_IsString(slug) && !cJSON_IsNull(slug))
    {
    goto end; //String
    }
    }

    // knowledge_article_create_dto->excerpt
    cJSON *excerpt = cJSON_GetObjectItemCaseSensitive(knowledge_article_create_dtoJSON, "excerpt");
    if (excerpt) { 
    if(!cJSON_IsString(excerpt) && !cJSON_IsNull(excerpt))
    {
    goto end; //String
    }
    }

    // knowledge_article_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(knowledge_article_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // knowledge_article_create_dto->content
    cJSON *content = cJSON_GetObjectItemCaseSensitive(knowledge_article_create_dtoJSON, "content");
    if (content) { 
    if(!cJSON_IsString(content) && !cJSON_IsNull(content))
    {
    goto end; //String
    }
    }

    // knowledge_article_create_dto->highlight_image
    cJSON *highlight_image = cJSON_GetObjectItemCaseSensitive(knowledge_article_create_dtoJSON, "highlightImage");
    if (highlight_image) { 
    if(!cJSON_IsString(highlight_image) && !cJSON_IsNull(highlight_image))
    {
    goto end; //String
    }
    }

    // knowledge_article_create_dto->seo_title
    cJSON *seo_title = cJSON_GetObjectItemCaseSensitive(knowledge_article_create_dtoJSON, "seoTitle");
    if (seo_title) { 
    if(!cJSON_IsString(seo_title) && !cJSON_IsNull(seo_title))
    {
    goto end; //String
    }
    }

    // knowledge_article_create_dto->seo_key_words
    cJSON *seo_key_words = cJSON_GetObjectItemCaseSensitive(knowledge_article_create_dtoJSON, "seoKeyWords");
    if (seo_key_words) { 
    if(!cJSON_IsString(seo_key_words) && !cJSON_IsNull(seo_key_words))
    {
    goto end; //String
    }
    }

    // knowledge_article_create_dto->meta_description
    cJSON *meta_description = cJSON_GetObjectItemCaseSensitive(knowledge_article_create_dtoJSON, "metaDescription");
    if (meta_description) { 
    if(!cJSON_IsString(meta_description) && !cJSON_IsNull(meta_description))
    {
    goto end; //String
    }
    }

    // knowledge_article_create_dto->published
    cJSON *published = cJSON_GetObjectItemCaseSensitive(knowledge_article_create_dtoJSON, "published");
    if (published) { 
    if(!cJSON_IsBool(published))
    {
    goto end; //Bool
    }
    }

    // knowledge_article_create_dto->enable
    cJSON *enable = cJSON_GetObjectItemCaseSensitive(knowledge_article_create_dtoJSON, "enable");
    if (enable) { 
    if(!cJSON_IsBool(enable))
    {
    goto end; //Bool
    }
    }


    knowledge_article_create_dto_local_var = knowledge_article_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(title->valuestring),
        slug && !cJSON_IsNull(slug) ? strdup(slug->valuestring) : NULL,
        excerpt && !cJSON_IsNull(excerpt) ? strdup(excerpt->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        content && !cJSON_IsNull(content) ? strdup(content->valuestring) : NULL,
        highlight_image && !cJSON_IsNull(highlight_image) ? strdup(highlight_image->valuestring) : NULL,
        seo_title && !cJSON_IsNull(seo_title) ? strdup(seo_title->valuestring) : NULL,
        seo_key_words && !cJSON_IsNull(seo_key_words) ? strdup(seo_key_words->valuestring) : NULL,
        meta_description && !cJSON_IsNull(meta_description) ? strdup(meta_description->valuestring) : NULL,
        published ? published->valueint : 0,
        enable ? enable->valueint : 0
        );

    return knowledge_article_create_dto_local_var;
end:
    return NULL;

}
