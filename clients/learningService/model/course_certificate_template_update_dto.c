#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "course_certificate_template_update_dto.h"



course_certificate_template_update_dto_t *course_certificate_template_update_dto_create(
    char *web_portal_id,
    char *website_theme_id,
    char *social_profile_id,
    char *parent_web_content_id,
    char *parent_web_content_version_id
    ) {
    course_certificate_template_update_dto_t *course_certificate_template_update_dto_local_var = malloc(sizeof(course_certificate_template_update_dto_t));
    if (!course_certificate_template_update_dto_local_var) {
        return NULL;
    }
    course_certificate_template_update_dto_local_var->web_portal_id = web_portal_id;
    course_certificate_template_update_dto_local_var->website_theme_id = website_theme_id;
    course_certificate_template_update_dto_local_var->social_profile_id = social_profile_id;
    course_certificate_template_update_dto_local_var->parent_web_content_id = parent_web_content_id;
    course_certificate_template_update_dto_local_var->parent_web_content_version_id = parent_web_content_version_id;

    return course_certificate_template_update_dto_local_var;
}


void course_certificate_template_update_dto_free(course_certificate_template_update_dto_t *course_certificate_template_update_dto) {
    if(NULL == course_certificate_template_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (course_certificate_template_update_dto->web_portal_id) {
        free(course_certificate_template_update_dto->web_portal_id);
        course_certificate_template_update_dto->web_portal_id = NULL;
    }
    if (course_certificate_template_update_dto->website_theme_id) {
        free(course_certificate_template_update_dto->website_theme_id);
        course_certificate_template_update_dto->website_theme_id = NULL;
    }
    if (course_certificate_template_update_dto->social_profile_id) {
        free(course_certificate_template_update_dto->social_profile_id);
        course_certificate_template_update_dto->social_profile_id = NULL;
    }
    if (course_certificate_template_update_dto->parent_web_content_id) {
        free(course_certificate_template_update_dto->parent_web_content_id);
        course_certificate_template_update_dto->parent_web_content_id = NULL;
    }
    if (course_certificate_template_update_dto->parent_web_content_version_id) {
        free(course_certificate_template_update_dto->parent_web_content_version_id);
        course_certificate_template_update_dto->parent_web_content_version_id = NULL;
    }
    free(course_certificate_template_update_dto);
}

cJSON *course_certificate_template_update_dto_convertToJSON(course_certificate_template_update_dto_t *course_certificate_template_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // course_certificate_template_update_dto->web_portal_id
    if(course_certificate_template_update_dto->web_portal_id) {
    if(cJSON_AddStringToObject(item, "webPortalId", course_certificate_template_update_dto->web_portal_id) == NULL) {
    goto fail; //String
    }
    }


    // course_certificate_template_update_dto->website_theme_id
    if(course_certificate_template_update_dto->website_theme_id) {
    if(cJSON_AddStringToObject(item, "websiteThemeId", course_certificate_template_update_dto->website_theme_id) == NULL) {
    goto fail; //String
    }
    }


    // course_certificate_template_update_dto->social_profile_id
    if(course_certificate_template_update_dto->social_profile_id) {
    if(cJSON_AddStringToObject(item, "socialProfileId", course_certificate_template_update_dto->social_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // course_certificate_template_update_dto->parent_web_content_id
    if(course_certificate_template_update_dto->parent_web_content_id) {
    if(cJSON_AddStringToObject(item, "parentWebContentId", course_certificate_template_update_dto->parent_web_content_id) == NULL) {
    goto fail; //String
    }
    }


    // course_certificate_template_update_dto->parent_web_content_version_id
    if(course_certificate_template_update_dto->parent_web_content_version_id) {
    if(cJSON_AddStringToObject(item, "parentWebContentVersionId", course_certificate_template_update_dto->parent_web_content_version_id) == NULL) {
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

course_certificate_template_update_dto_t *course_certificate_template_update_dto_parseFromJSON(cJSON *course_certificate_template_update_dtoJSON){

    course_certificate_template_update_dto_t *course_certificate_template_update_dto_local_var = NULL;

    // course_certificate_template_update_dto->web_portal_id
    cJSON *web_portal_id = cJSON_GetObjectItemCaseSensitive(course_certificate_template_update_dtoJSON, "webPortalId");
    if (web_portal_id) { 
    if(!cJSON_IsString(web_portal_id) && !cJSON_IsNull(web_portal_id))
    {
    goto end; //String
    }
    }

    // course_certificate_template_update_dto->website_theme_id
    cJSON *website_theme_id = cJSON_GetObjectItemCaseSensitive(course_certificate_template_update_dtoJSON, "websiteThemeId");
    if (website_theme_id) { 
    if(!cJSON_IsString(website_theme_id) && !cJSON_IsNull(website_theme_id))
    {
    goto end; //String
    }
    }

    // course_certificate_template_update_dto->social_profile_id
    cJSON *social_profile_id = cJSON_GetObjectItemCaseSensitive(course_certificate_template_update_dtoJSON, "socialProfileId");
    if (social_profile_id) { 
    if(!cJSON_IsString(social_profile_id) && !cJSON_IsNull(social_profile_id))
    {
    goto end; //String
    }
    }

    // course_certificate_template_update_dto->parent_web_content_id
    cJSON *parent_web_content_id = cJSON_GetObjectItemCaseSensitive(course_certificate_template_update_dtoJSON, "parentWebContentId");
    if (parent_web_content_id) { 
    if(!cJSON_IsString(parent_web_content_id) && !cJSON_IsNull(parent_web_content_id))
    {
    goto end; //String
    }
    }

    // course_certificate_template_update_dto->parent_web_content_version_id
    cJSON *parent_web_content_version_id = cJSON_GetObjectItemCaseSensitive(course_certificate_template_update_dtoJSON, "parentWebContentVersionId");
    if (parent_web_content_version_id) { 
    if(!cJSON_IsString(parent_web_content_version_id) && !cJSON_IsNull(parent_web_content_version_id))
    {
    goto end; //String
    }
    }


    course_certificate_template_update_dto_local_var = course_certificate_template_update_dto_create (
        web_portal_id && !cJSON_IsNull(web_portal_id) ? strdup(web_portal_id->valuestring) : NULL,
        website_theme_id && !cJSON_IsNull(website_theme_id) ? strdup(website_theme_id->valuestring) : NULL,
        social_profile_id && !cJSON_IsNull(social_profile_id) ? strdup(social_profile_id->valuestring) : NULL,
        parent_web_content_id && !cJSON_IsNull(parent_web_content_id) ? strdup(parent_web_content_id->valuestring) : NULL,
        parent_web_content_version_id && !cJSON_IsNull(parent_web_content_version_id) ? strdup(parent_web_content_version_id->valuestring) : NULL
        );

    return course_certificate_template_update_dto_local_var;
end:
    return NULL;

}
