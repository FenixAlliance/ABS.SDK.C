#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "course_certificate_template_create_dto.h"



course_certificate_template_create_dto_t *course_certificate_template_create_dto_create(
    char *id,
    char *timestamp,
    char *course_id,
    char *web_portal_id,
    char *website_theme_id,
    char *social_profile_id,
    char *parent_web_content_id,
    char *parent_web_content_version_id
    ) {
    course_certificate_template_create_dto_t *course_certificate_template_create_dto_local_var = malloc(sizeof(course_certificate_template_create_dto_t));
    if (!course_certificate_template_create_dto_local_var) {
        return NULL;
    }
    course_certificate_template_create_dto_local_var->id = id;
    course_certificate_template_create_dto_local_var->timestamp = timestamp;
    course_certificate_template_create_dto_local_var->course_id = course_id;
    course_certificate_template_create_dto_local_var->web_portal_id = web_portal_id;
    course_certificate_template_create_dto_local_var->website_theme_id = website_theme_id;
    course_certificate_template_create_dto_local_var->social_profile_id = social_profile_id;
    course_certificate_template_create_dto_local_var->parent_web_content_id = parent_web_content_id;
    course_certificate_template_create_dto_local_var->parent_web_content_version_id = parent_web_content_version_id;

    return course_certificate_template_create_dto_local_var;
}


void course_certificate_template_create_dto_free(course_certificate_template_create_dto_t *course_certificate_template_create_dto) {
    if(NULL == course_certificate_template_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (course_certificate_template_create_dto->id) {
        free(course_certificate_template_create_dto->id);
        course_certificate_template_create_dto->id = NULL;
    }
    if (course_certificate_template_create_dto->timestamp) {
        free(course_certificate_template_create_dto->timestamp);
        course_certificate_template_create_dto->timestamp = NULL;
    }
    if (course_certificate_template_create_dto->course_id) {
        free(course_certificate_template_create_dto->course_id);
        course_certificate_template_create_dto->course_id = NULL;
    }
    if (course_certificate_template_create_dto->web_portal_id) {
        free(course_certificate_template_create_dto->web_portal_id);
        course_certificate_template_create_dto->web_portal_id = NULL;
    }
    if (course_certificate_template_create_dto->website_theme_id) {
        free(course_certificate_template_create_dto->website_theme_id);
        course_certificate_template_create_dto->website_theme_id = NULL;
    }
    if (course_certificate_template_create_dto->social_profile_id) {
        free(course_certificate_template_create_dto->social_profile_id);
        course_certificate_template_create_dto->social_profile_id = NULL;
    }
    if (course_certificate_template_create_dto->parent_web_content_id) {
        free(course_certificate_template_create_dto->parent_web_content_id);
        course_certificate_template_create_dto->parent_web_content_id = NULL;
    }
    if (course_certificate_template_create_dto->parent_web_content_version_id) {
        free(course_certificate_template_create_dto->parent_web_content_version_id);
        course_certificate_template_create_dto->parent_web_content_version_id = NULL;
    }
    free(course_certificate_template_create_dto);
}

cJSON *course_certificate_template_create_dto_convertToJSON(course_certificate_template_create_dto_t *course_certificate_template_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // course_certificate_template_create_dto->id
    if(course_certificate_template_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", course_certificate_template_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // course_certificate_template_create_dto->timestamp
    if(course_certificate_template_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", course_certificate_template_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_certificate_template_create_dto->course_id
    if (!course_certificate_template_create_dto->course_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "courseID", course_certificate_template_create_dto->course_id) == NULL) {
    goto fail; //String
    }


    // course_certificate_template_create_dto->web_portal_id
    if(course_certificate_template_create_dto->web_portal_id) {
    if(cJSON_AddStringToObject(item, "webPortalID", course_certificate_template_create_dto->web_portal_id) == NULL) {
    goto fail; //String
    }
    }


    // course_certificate_template_create_dto->website_theme_id
    if(course_certificate_template_create_dto->website_theme_id) {
    if(cJSON_AddStringToObject(item, "websiteThemeID", course_certificate_template_create_dto->website_theme_id) == NULL) {
    goto fail; //String
    }
    }


    // course_certificate_template_create_dto->social_profile_id
    if(course_certificate_template_create_dto->social_profile_id) {
    if(cJSON_AddStringToObject(item, "socialProfileID", course_certificate_template_create_dto->social_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // course_certificate_template_create_dto->parent_web_content_id
    if(course_certificate_template_create_dto->parent_web_content_id) {
    if(cJSON_AddStringToObject(item, "parentWebContentID", course_certificate_template_create_dto->parent_web_content_id) == NULL) {
    goto fail; //String
    }
    }


    // course_certificate_template_create_dto->parent_web_content_version_id
    if(course_certificate_template_create_dto->parent_web_content_version_id) {
    if(cJSON_AddStringToObject(item, "parentWebContentVersionID", course_certificate_template_create_dto->parent_web_content_version_id) == NULL) {
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

course_certificate_template_create_dto_t *course_certificate_template_create_dto_parseFromJSON(cJSON *course_certificate_template_create_dtoJSON){

    course_certificate_template_create_dto_t *course_certificate_template_create_dto_local_var = NULL;

    // course_certificate_template_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(course_certificate_template_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // course_certificate_template_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(course_certificate_template_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // course_certificate_template_create_dto->course_id
    cJSON *course_id = cJSON_GetObjectItemCaseSensitive(course_certificate_template_create_dtoJSON, "courseID");
    if (!course_id) {
        goto end;
    }

    
    if(!cJSON_IsString(course_id))
    {
    goto end; //String
    }

    // course_certificate_template_create_dto->web_portal_id
    cJSON *web_portal_id = cJSON_GetObjectItemCaseSensitive(course_certificate_template_create_dtoJSON, "webPortalID");
    if (web_portal_id) { 
    if(!cJSON_IsString(web_portal_id) && !cJSON_IsNull(web_portal_id))
    {
    goto end; //String
    }
    }

    // course_certificate_template_create_dto->website_theme_id
    cJSON *website_theme_id = cJSON_GetObjectItemCaseSensitive(course_certificate_template_create_dtoJSON, "websiteThemeID");
    if (website_theme_id) { 
    if(!cJSON_IsString(website_theme_id) && !cJSON_IsNull(website_theme_id))
    {
    goto end; //String
    }
    }

    // course_certificate_template_create_dto->social_profile_id
    cJSON *social_profile_id = cJSON_GetObjectItemCaseSensitive(course_certificate_template_create_dtoJSON, "socialProfileID");
    if (social_profile_id) { 
    if(!cJSON_IsString(social_profile_id) && !cJSON_IsNull(social_profile_id))
    {
    goto end; //String
    }
    }

    // course_certificate_template_create_dto->parent_web_content_id
    cJSON *parent_web_content_id = cJSON_GetObjectItemCaseSensitive(course_certificate_template_create_dtoJSON, "parentWebContentID");
    if (parent_web_content_id) { 
    if(!cJSON_IsString(parent_web_content_id) && !cJSON_IsNull(parent_web_content_id))
    {
    goto end; //String
    }
    }

    // course_certificate_template_create_dto->parent_web_content_version_id
    cJSON *parent_web_content_version_id = cJSON_GetObjectItemCaseSensitive(course_certificate_template_create_dtoJSON, "parentWebContentVersionID");
    if (parent_web_content_version_id) { 
    if(!cJSON_IsString(parent_web_content_version_id) && !cJSON_IsNull(parent_web_content_version_id))
    {
    goto end; //String
    }
    }


    course_certificate_template_create_dto_local_var = course_certificate_template_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(course_id->valuestring),
        web_portal_id && !cJSON_IsNull(web_portal_id) ? strdup(web_portal_id->valuestring) : NULL,
        website_theme_id && !cJSON_IsNull(website_theme_id) ? strdup(website_theme_id->valuestring) : NULL,
        social_profile_id && !cJSON_IsNull(social_profile_id) ? strdup(social_profile_id->valuestring) : NULL,
        parent_web_content_id && !cJSON_IsNull(parent_web_content_id) ? strdup(parent_web_content_id->valuestring) : NULL,
        parent_web_content_version_id && !cJSON_IsNull(parent_web_content_version_id) ? strdup(parent_web_content_version_id->valuestring) : NULL
        );

    return course_certificate_template_create_dto_local_var;
end:
    return NULL;

}
