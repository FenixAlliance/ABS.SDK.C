#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "web_portal_create_dto.h"



web_portal_create_dto_t *web_portal_create_dto_create(
    char *id,
    char *timestamp,
    int root,
    char *title,
    char *domain,
    int disabled,
    char *description,
    char *website_theme_id,
    char *business_domain_id,
    char *business_portal_application_id
    ) {
    web_portal_create_dto_t *web_portal_create_dto_local_var = malloc(sizeof(web_portal_create_dto_t));
    if (!web_portal_create_dto_local_var) {
        return NULL;
    }
    web_portal_create_dto_local_var->id = id;
    web_portal_create_dto_local_var->timestamp = timestamp;
    web_portal_create_dto_local_var->root = root;
    web_portal_create_dto_local_var->title = title;
    web_portal_create_dto_local_var->domain = domain;
    web_portal_create_dto_local_var->disabled = disabled;
    web_portal_create_dto_local_var->description = description;
    web_portal_create_dto_local_var->website_theme_id = website_theme_id;
    web_portal_create_dto_local_var->business_domain_id = business_domain_id;
    web_portal_create_dto_local_var->business_portal_application_id = business_portal_application_id;

    return web_portal_create_dto_local_var;
}


void web_portal_create_dto_free(web_portal_create_dto_t *web_portal_create_dto) {
    if(NULL == web_portal_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (web_portal_create_dto->id) {
        free(web_portal_create_dto->id);
        web_portal_create_dto->id = NULL;
    }
    if (web_portal_create_dto->timestamp) {
        free(web_portal_create_dto->timestamp);
        web_portal_create_dto->timestamp = NULL;
    }
    if (web_portal_create_dto->title) {
        free(web_portal_create_dto->title);
        web_portal_create_dto->title = NULL;
    }
    if (web_portal_create_dto->domain) {
        free(web_portal_create_dto->domain);
        web_portal_create_dto->domain = NULL;
    }
    if (web_portal_create_dto->description) {
        free(web_portal_create_dto->description);
        web_portal_create_dto->description = NULL;
    }
    if (web_portal_create_dto->website_theme_id) {
        free(web_portal_create_dto->website_theme_id);
        web_portal_create_dto->website_theme_id = NULL;
    }
    if (web_portal_create_dto->business_domain_id) {
        free(web_portal_create_dto->business_domain_id);
        web_portal_create_dto->business_domain_id = NULL;
    }
    if (web_portal_create_dto->business_portal_application_id) {
        free(web_portal_create_dto->business_portal_application_id);
        web_portal_create_dto->business_portal_application_id = NULL;
    }
    free(web_portal_create_dto);
}

cJSON *web_portal_create_dto_convertToJSON(web_portal_create_dto_t *web_portal_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // web_portal_create_dto->id
    if(web_portal_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", web_portal_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // web_portal_create_dto->timestamp
    if(web_portal_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", web_portal_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // web_portal_create_dto->root
    if(web_portal_create_dto->root) {
    if(cJSON_AddBoolToObject(item, "root", web_portal_create_dto->root) == NULL) {
    goto fail; //Bool
    }
    }


    // web_portal_create_dto->title
    if(web_portal_create_dto->title) {
    if(cJSON_AddStringToObject(item, "title", web_portal_create_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // web_portal_create_dto->domain
    if(web_portal_create_dto->domain) {
    if(cJSON_AddStringToObject(item, "domain", web_portal_create_dto->domain) == NULL) {
    goto fail; //String
    }
    }


    // web_portal_create_dto->disabled
    if(web_portal_create_dto->disabled) {
    if(cJSON_AddBoolToObject(item, "disabled", web_portal_create_dto->disabled) == NULL) {
    goto fail; //Bool
    }
    }


    // web_portal_create_dto->description
    if(web_portal_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", web_portal_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // web_portal_create_dto->website_theme_id
    if(web_portal_create_dto->website_theme_id) {
    if(cJSON_AddStringToObject(item, "websiteThemeID", web_portal_create_dto->website_theme_id) == NULL) {
    goto fail; //String
    }
    }


    // web_portal_create_dto->business_domain_id
    if(web_portal_create_dto->business_domain_id) {
    if(cJSON_AddStringToObject(item, "businessDomainID", web_portal_create_dto->business_domain_id) == NULL) {
    goto fail; //String
    }
    }


    // web_portal_create_dto->business_portal_application_id
    if(web_portal_create_dto->business_portal_application_id) {
    if(cJSON_AddStringToObject(item, "businessPortalApplicationID", web_portal_create_dto->business_portal_application_id) == NULL) {
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

web_portal_create_dto_t *web_portal_create_dto_parseFromJSON(cJSON *web_portal_create_dtoJSON){

    web_portal_create_dto_t *web_portal_create_dto_local_var = NULL;

    // web_portal_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(web_portal_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // web_portal_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(web_portal_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // web_portal_create_dto->root
    cJSON *root = cJSON_GetObjectItemCaseSensitive(web_portal_create_dtoJSON, "root");
    if (root) { 
    if(!cJSON_IsBool(root))
    {
    goto end; //Bool
    }
    }

    // web_portal_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(web_portal_create_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // web_portal_create_dto->domain
    cJSON *domain = cJSON_GetObjectItemCaseSensitive(web_portal_create_dtoJSON, "domain");
    if (domain) { 
    if(!cJSON_IsString(domain) && !cJSON_IsNull(domain))
    {
    goto end; //String
    }
    }

    // web_portal_create_dto->disabled
    cJSON *disabled = cJSON_GetObjectItemCaseSensitive(web_portal_create_dtoJSON, "disabled");
    if (disabled) { 
    if(!cJSON_IsBool(disabled))
    {
    goto end; //Bool
    }
    }

    // web_portal_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(web_portal_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // web_portal_create_dto->website_theme_id
    cJSON *website_theme_id = cJSON_GetObjectItemCaseSensitive(web_portal_create_dtoJSON, "websiteThemeID");
    if (website_theme_id) { 
    if(!cJSON_IsString(website_theme_id) && !cJSON_IsNull(website_theme_id))
    {
    goto end; //String
    }
    }

    // web_portal_create_dto->business_domain_id
    cJSON *business_domain_id = cJSON_GetObjectItemCaseSensitive(web_portal_create_dtoJSON, "businessDomainID");
    if (business_domain_id) { 
    if(!cJSON_IsString(business_domain_id) && !cJSON_IsNull(business_domain_id))
    {
    goto end; //String
    }
    }

    // web_portal_create_dto->business_portal_application_id
    cJSON *business_portal_application_id = cJSON_GetObjectItemCaseSensitive(web_portal_create_dtoJSON, "businessPortalApplicationID");
    if (business_portal_application_id) { 
    if(!cJSON_IsString(business_portal_application_id) && !cJSON_IsNull(business_portal_application_id))
    {
    goto end; //String
    }
    }


    web_portal_create_dto_local_var = web_portal_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        root ? root->valueint : 0,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        domain && !cJSON_IsNull(domain) ? strdup(domain->valuestring) : NULL,
        disabled ? disabled->valueint : 0,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        website_theme_id && !cJSON_IsNull(website_theme_id) ? strdup(website_theme_id->valuestring) : NULL,
        business_domain_id && !cJSON_IsNull(business_domain_id) ? strdup(business_domain_id->valuestring) : NULL,
        business_portal_application_id && !cJSON_IsNull(business_portal_application_id) ? strdup(business_portal_application_id->valuestring) : NULL
        );

    return web_portal_create_dto_local_var;
end:
    return NULL;

}
