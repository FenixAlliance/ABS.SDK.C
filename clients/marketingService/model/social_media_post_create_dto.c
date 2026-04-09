#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "social_media_post_create_dto.h"



social_media_post_create_dto_t *social_media_post_create_dto_create(
    char *title,
    char *content,
    char *featured_image_url,
    char *tenant_id,
    char *social_post_bucket_id,
    char *enrollment_id
    ) {
    social_media_post_create_dto_t *social_media_post_create_dto_local_var = malloc(sizeof(social_media_post_create_dto_t));
    if (!social_media_post_create_dto_local_var) {
        return NULL;
    }
    social_media_post_create_dto_local_var->title = title;
    social_media_post_create_dto_local_var->content = content;
    social_media_post_create_dto_local_var->featured_image_url = featured_image_url;
    social_media_post_create_dto_local_var->tenant_id = tenant_id;
    social_media_post_create_dto_local_var->social_post_bucket_id = social_post_bucket_id;
    social_media_post_create_dto_local_var->enrollment_id = enrollment_id;

    return social_media_post_create_dto_local_var;
}


void social_media_post_create_dto_free(social_media_post_create_dto_t *social_media_post_create_dto) {
    if(NULL == social_media_post_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (social_media_post_create_dto->title) {
        free(social_media_post_create_dto->title);
        social_media_post_create_dto->title = NULL;
    }
    if (social_media_post_create_dto->content) {
        free(social_media_post_create_dto->content);
        social_media_post_create_dto->content = NULL;
    }
    if (social_media_post_create_dto->featured_image_url) {
        free(social_media_post_create_dto->featured_image_url);
        social_media_post_create_dto->featured_image_url = NULL;
    }
    if (social_media_post_create_dto->tenant_id) {
        free(social_media_post_create_dto->tenant_id);
        social_media_post_create_dto->tenant_id = NULL;
    }
    if (social_media_post_create_dto->social_post_bucket_id) {
        free(social_media_post_create_dto->social_post_bucket_id);
        social_media_post_create_dto->social_post_bucket_id = NULL;
    }
    if (social_media_post_create_dto->enrollment_id) {
        free(social_media_post_create_dto->enrollment_id);
        social_media_post_create_dto->enrollment_id = NULL;
    }
    free(social_media_post_create_dto);
}

cJSON *social_media_post_create_dto_convertToJSON(social_media_post_create_dto_t *social_media_post_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // social_media_post_create_dto->title
    if(social_media_post_create_dto->title) {
    if(cJSON_AddStringToObject(item, "title", social_media_post_create_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // social_media_post_create_dto->content
    if(social_media_post_create_dto->content) {
    if(cJSON_AddStringToObject(item, "content", social_media_post_create_dto->content) == NULL) {
    goto fail; //String
    }
    }


    // social_media_post_create_dto->featured_image_url
    if(social_media_post_create_dto->featured_image_url) {
    if(cJSON_AddStringToObject(item, "featuredImageUrl", social_media_post_create_dto->featured_image_url) == NULL) {
    goto fail; //String
    }
    }


    // social_media_post_create_dto->tenant_id
    if(social_media_post_create_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", social_media_post_create_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // social_media_post_create_dto->social_post_bucket_id
    if(social_media_post_create_dto->social_post_bucket_id) {
    if(cJSON_AddStringToObject(item, "socialPostBucketId", social_media_post_create_dto->social_post_bucket_id) == NULL) {
    goto fail; //String
    }
    }


    // social_media_post_create_dto->enrollment_id
    if(social_media_post_create_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", social_media_post_create_dto->enrollment_id) == NULL) {
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

social_media_post_create_dto_t *social_media_post_create_dto_parseFromJSON(cJSON *social_media_post_create_dtoJSON){

    social_media_post_create_dto_t *social_media_post_create_dto_local_var = NULL;

    // social_media_post_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(social_media_post_create_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // social_media_post_create_dto->content
    cJSON *content = cJSON_GetObjectItemCaseSensitive(social_media_post_create_dtoJSON, "content");
    if (content) { 
    if(!cJSON_IsString(content) && !cJSON_IsNull(content))
    {
    goto end; //String
    }
    }

    // social_media_post_create_dto->featured_image_url
    cJSON *featured_image_url = cJSON_GetObjectItemCaseSensitive(social_media_post_create_dtoJSON, "featuredImageUrl");
    if (featured_image_url) { 
    if(!cJSON_IsString(featured_image_url) && !cJSON_IsNull(featured_image_url))
    {
    goto end; //String
    }
    }

    // social_media_post_create_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(social_media_post_create_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // social_media_post_create_dto->social_post_bucket_id
    cJSON *social_post_bucket_id = cJSON_GetObjectItemCaseSensitive(social_media_post_create_dtoJSON, "socialPostBucketId");
    if (social_post_bucket_id) { 
    if(!cJSON_IsString(social_post_bucket_id) && !cJSON_IsNull(social_post_bucket_id))
    {
    goto end; //String
    }
    }

    // social_media_post_create_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(social_media_post_create_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    social_media_post_create_dto_local_var = social_media_post_create_dto_create (
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        content && !cJSON_IsNull(content) ? strdup(content->valuestring) : NULL,
        featured_image_url && !cJSON_IsNull(featured_image_url) ? strdup(featured_image_url->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        social_post_bucket_id && !cJSON_IsNull(social_post_bucket_id) ? strdup(social_post_bucket_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return social_media_post_create_dto_local_var;
end:
    return NULL;

}
