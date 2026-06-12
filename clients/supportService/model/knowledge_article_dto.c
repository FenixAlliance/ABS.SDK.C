#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "knowledge_article_dto.h"



knowledge_article_dto_t *knowledge_article_dto_create(
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
    int enable,
    char *release_date_time,
    char *last_modification,
    char *tenant_id,
    char *enrollment_id
    ) {
    knowledge_article_dto_t *knowledge_article_dto_local_var = malloc(sizeof(knowledge_article_dto_t));
    if (!knowledge_article_dto_local_var) {
        return NULL;
    }
    knowledge_article_dto_local_var->id = id;
    knowledge_article_dto_local_var->timestamp = timestamp;
    knowledge_article_dto_local_var->title = title;
    knowledge_article_dto_local_var->slug = slug;
    knowledge_article_dto_local_var->excerpt = excerpt;
    knowledge_article_dto_local_var->description = description;
    knowledge_article_dto_local_var->content = content;
    knowledge_article_dto_local_var->highlight_image = highlight_image;
    knowledge_article_dto_local_var->seo_title = seo_title;
    knowledge_article_dto_local_var->seo_key_words = seo_key_words;
    knowledge_article_dto_local_var->meta_description = meta_description;
    knowledge_article_dto_local_var->published = published;
    knowledge_article_dto_local_var->enable = enable;
    knowledge_article_dto_local_var->release_date_time = release_date_time;
    knowledge_article_dto_local_var->last_modification = last_modification;
    knowledge_article_dto_local_var->tenant_id = tenant_id;
    knowledge_article_dto_local_var->enrollment_id = enrollment_id;

    return knowledge_article_dto_local_var;
}


void knowledge_article_dto_free(knowledge_article_dto_t *knowledge_article_dto) {
    if(NULL == knowledge_article_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (knowledge_article_dto->id) {
        free(knowledge_article_dto->id);
        knowledge_article_dto->id = NULL;
    }
    if (knowledge_article_dto->timestamp) {
        free(knowledge_article_dto->timestamp);
        knowledge_article_dto->timestamp = NULL;
    }
    if (knowledge_article_dto->title) {
        free(knowledge_article_dto->title);
        knowledge_article_dto->title = NULL;
    }
    if (knowledge_article_dto->slug) {
        free(knowledge_article_dto->slug);
        knowledge_article_dto->slug = NULL;
    }
    if (knowledge_article_dto->excerpt) {
        free(knowledge_article_dto->excerpt);
        knowledge_article_dto->excerpt = NULL;
    }
    if (knowledge_article_dto->description) {
        free(knowledge_article_dto->description);
        knowledge_article_dto->description = NULL;
    }
    if (knowledge_article_dto->content) {
        free(knowledge_article_dto->content);
        knowledge_article_dto->content = NULL;
    }
    if (knowledge_article_dto->highlight_image) {
        free(knowledge_article_dto->highlight_image);
        knowledge_article_dto->highlight_image = NULL;
    }
    if (knowledge_article_dto->seo_title) {
        free(knowledge_article_dto->seo_title);
        knowledge_article_dto->seo_title = NULL;
    }
    if (knowledge_article_dto->seo_key_words) {
        free(knowledge_article_dto->seo_key_words);
        knowledge_article_dto->seo_key_words = NULL;
    }
    if (knowledge_article_dto->meta_description) {
        free(knowledge_article_dto->meta_description);
        knowledge_article_dto->meta_description = NULL;
    }
    if (knowledge_article_dto->release_date_time) {
        free(knowledge_article_dto->release_date_time);
        knowledge_article_dto->release_date_time = NULL;
    }
    if (knowledge_article_dto->last_modification) {
        free(knowledge_article_dto->last_modification);
        knowledge_article_dto->last_modification = NULL;
    }
    if (knowledge_article_dto->tenant_id) {
        free(knowledge_article_dto->tenant_id);
        knowledge_article_dto->tenant_id = NULL;
    }
    if (knowledge_article_dto->enrollment_id) {
        free(knowledge_article_dto->enrollment_id);
        knowledge_article_dto->enrollment_id = NULL;
    }
    free(knowledge_article_dto);
}

cJSON *knowledge_article_dto_convertToJSON(knowledge_article_dto_t *knowledge_article_dto) {
    cJSON *item = cJSON_CreateObject();

    // knowledge_article_dto->id
    if(knowledge_article_dto->id) {
    if(cJSON_AddStringToObject(item, "id", knowledge_article_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // knowledge_article_dto->timestamp
    if(knowledge_article_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", knowledge_article_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // knowledge_article_dto->title
    if(knowledge_article_dto->title) {
    if(cJSON_AddStringToObject(item, "title", knowledge_article_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // knowledge_article_dto->slug
    if(knowledge_article_dto->slug) {
    if(cJSON_AddStringToObject(item, "slug", knowledge_article_dto->slug) == NULL) {
    goto fail; //String
    }
    }


    // knowledge_article_dto->excerpt
    if(knowledge_article_dto->excerpt) {
    if(cJSON_AddStringToObject(item, "excerpt", knowledge_article_dto->excerpt) == NULL) {
    goto fail; //String
    }
    }


    // knowledge_article_dto->description
    if(knowledge_article_dto->description) {
    if(cJSON_AddStringToObject(item, "description", knowledge_article_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // knowledge_article_dto->content
    if(knowledge_article_dto->content) {
    if(cJSON_AddStringToObject(item, "content", knowledge_article_dto->content) == NULL) {
    goto fail; //String
    }
    }


    // knowledge_article_dto->highlight_image
    if(knowledge_article_dto->highlight_image) {
    if(cJSON_AddStringToObject(item, "highlightImage", knowledge_article_dto->highlight_image) == NULL) {
    goto fail; //String
    }
    }


    // knowledge_article_dto->seo_title
    if(knowledge_article_dto->seo_title) {
    if(cJSON_AddStringToObject(item, "seoTitle", knowledge_article_dto->seo_title) == NULL) {
    goto fail; //String
    }
    }


    // knowledge_article_dto->seo_key_words
    if(knowledge_article_dto->seo_key_words) {
    if(cJSON_AddStringToObject(item, "seoKeyWords", knowledge_article_dto->seo_key_words) == NULL) {
    goto fail; //String
    }
    }


    // knowledge_article_dto->meta_description
    if(knowledge_article_dto->meta_description) {
    if(cJSON_AddStringToObject(item, "metaDescription", knowledge_article_dto->meta_description) == NULL) {
    goto fail; //String
    }
    }


    // knowledge_article_dto->published
    if(knowledge_article_dto->published) {
    if(cJSON_AddBoolToObject(item, "published", knowledge_article_dto->published) == NULL) {
    goto fail; //Bool
    }
    }


    // knowledge_article_dto->enable
    if(knowledge_article_dto->enable) {
    if(cJSON_AddBoolToObject(item, "enable", knowledge_article_dto->enable) == NULL) {
    goto fail; //Bool
    }
    }


    // knowledge_article_dto->release_date_time
    if(knowledge_article_dto->release_date_time) {
    if(cJSON_AddStringToObject(item, "releaseDateTime", knowledge_article_dto->release_date_time) == NULL) {
    goto fail; //Date-Time
    }
    }


    // knowledge_article_dto->last_modification
    if(knowledge_article_dto->last_modification) {
    if(cJSON_AddStringToObject(item, "lastModification", knowledge_article_dto->last_modification) == NULL) {
    goto fail; //Date-Time
    }
    }


    // knowledge_article_dto->tenant_id
    if(knowledge_article_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", knowledge_article_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // knowledge_article_dto->enrollment_id
    if(knowledge_article_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", knowledge_article_dto->enrollment_id) == NULL) {
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

knowledge_article_dto_t *knowledge_article_dto_parseFromJSON(cJSON *knowledge_article_dtoJSON){

    knowledge_article_dto_t *knowledge_article_dto_local_var = NULL;

    // knowledge_article_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(knowledge_article_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // knowledge_article_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(knowledge_article_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // knowledge_article_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(knowledge_article_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // knowledge_article_dto->slug
    cJSON *slug = cJSON_GetObjectItemCaseSensitive(knowledge_article_dtoJSON, "slug");
    if (slug) { 
    if(!cJSON_IsString(slug) && !cJSON_IsNull(slug))
    {
    goto end; //String
    }
    }

    // knowledge_article_dto->excerpt
    cJSON *excerpt = cJSON_GetObjectItemCaseSensitive(knowledge_article_dtoJSON, "excerpt");
    if (excerpt) { 
    if(!cJSON_IsString(excerpt) && !cJSON_IsNull(excerpt))
    {
    goto end; //String
    }
    }

    // knowledge_article_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(knowledge_article_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // knowledge_article_dto->content
    cJSON *content = cJSON_GetObjectItemCaseSensitive(knowledge_article_dtoJSON, "content");
    if (content) { 
    if(!cJSON_IsString(content) && !cJSON_IsNull(content))
    {
    goto end; //String
    }
    }

    // knowledge_article_dto->highlight_image
    cJSON *highlight_image = cJSON_GetObjectItemCaseSensitive(knowledge_article_dtoJSON, "highlightImage");
    if (highlight_image) { 
    if(!cJSON_IsString(highlight_image) && !cJSON_IsNull(highlight_image))
    {
    goto end; //String
    }
    }

    // knowledge_article_dto->seo_title
    cJSON *seo_title = cJSON_GetObjectItemCaseSensitive(knowledge_article_dtoJSON, "seoTitle");
    if (seo_title) { 
    if(!cJSON_IsString(seo_title) && !cJSON_IsNull(seo_title))
    {
    goto end; //String
    }
    }

    // knowledge_article_dto->seo_key_words
    cJSON *seo_key_words = cJSON_GetObjectItemCaseSensitive(knowledge_article_dtoJSON, "seoKeyWords");
    if (seo_key_words) { 
    if(!cJSON_IsString(seo_key_words) && !cJSON_IsNull(seo_key_words))
    {
    goto end; //String
    }
    }

    // knowledge_article_dto->meta_description
    cJSON *meta_description = cJSON_GetObjectItemCaseSensitive(knowledge_article_dtoJSON, "metaDescription");
    if (meta_description) { 
    if(!cJSON_IsString(meta_description) && !cJSON_IsNull(meta_description))
    {
    goto end; //String
    }
    }

    // knowledge_article_dto->published
    cJSON *published = cJSON_GetObjectItemCaseSensitive(knowledge_article_dtoJSON, "published");
    if (published) { 
    if(!cJSON_IsBool(published))
    {
    goto end; //Bool
    }
    }

    // knowledge_article_dto->enable
    cJSON *enable = cJSON_GetObjectItemCaseSensitive(knowledge_article_dtoJSON, "enable");
    if (enable) { 
    if(!cJSON_IsBool(enable))
    {
    goto end; //Bool
    }
    }

    // knowledge_article_dto->release_date_time
    cJSON *release_date_time = cJSON_GetObjectItemCaseSensitive(knowledge_article_dtoJSON, "releaseDateTime");
    if (release_date_time) { 
    if(!cJSON_IsString(release_date_time) && !cJSON_IsNull(release_date_time))
    {
    goto end; //DateTime
    }
    }

    // knowledge_article_dto->last_modification
    cJSON *last_modification = cJSON_GetObjectItemCaseSensitive(knowledge_article_dtoJSON, "lastModification");
    if (last_modification) { 
    if(!cJSON_IsString(last_modification) && !cJSON_IsNull(last_modification))
    {
    goto end; //DateTime
    }
    }

    // knowledge_article_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(knowledge_article_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // knowledge_article_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(knowledge_article_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    knowledge_article_dto_local_var = knowledge_article_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        slug && !cJSON_IsNull(slug) ? strdup(slug->valuestring) : NULL,
        excerpt && !cJSON_IsNull(excerpt) ? strdup(excerpt->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        content && !cJSON_IsNull(content) ? strdup(content->valuestring) : NULL,
        highlight_image && !cJSON_IsNull(highlight_image) ? strdup(highlight_image->valuestring) : NULL,
        seo_title && !cJSON_IsNull(seo_title) ? strdup(seo_title->valuestring) : NULL,
        seo_key_words && !cJSON_IsNull(seo_key_words) ? strdup(seo_key_words->valuestring) : NULL,
        meta_description && !cJSON_IsNull(meta_description) ? strdup(meta_description->valuestring) : NULL,
        published ? published->valueint : 0,
        enable ? enable->valueint : 0,
        release_date_time && !cJSON_IsNull(release_date_time) ? strdup(release_date_time->valuestring) : NULL,
        last_modification && !cJSON_IsNull(last_modification) ? strdup(last_modification->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return knowledge_article_dto_local_var;
end:
    return NULL;

}
