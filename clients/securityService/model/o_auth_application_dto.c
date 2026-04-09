#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "o_auth_application_dto.h"



o_auth_application_dto_t *o_auth_application_dto_create(
    char *id,
    char *application_type,
    char *client_id,
    char *concurrency_token,
    char *consent_type,
    char *display_name,
    char *display_names,
    char *permissions,
    char *post_logout_redirect_uris,
    char *properties,
    char *redirect_uris,
    char *requirements,
    char *settings,
    char *type,
    char *logo,
    char *business_id,
    char *business_profile_record_id,
    char *business_application_id,
    int authorizations_count,
    int tokens_count
    ) {
    o_auth_application_dto_t *o_auth_application_dto_local_var = malloc(sizeof(o_auth_application_dto_t));
    if (!o_auth_application_dto_local_var) {
        return NULL;
    }
    o_auth_application_dto_local_var->id = id;
    o_auth_application_dto_local_var->application_type = application_type;
    o_auth_application_dto_local_var->client_id = client_id;
    o_auth_application_dto_local_var->concurrency_token = concurrency_token;
    o_auth_application_dto_local_var->consent_type = consent_type;
    o_auth_application_dto_local_var->display_name = display_name;
    o_auth_application_dto_local_var->display_names = display_names;
    o_auth_application_dto_local_var->permissions = permissions;
    o_auth_application_dto_local_var->post_logout_redirect_uris = post_logout_redirect_uris;
    o_auth_application_dto_local_var->properties = properties;
    o_auth_application_dto_local_var->redirect_uris = redirect_uris;
    o_auth_application_dto_local_var->requirements = requirements;
    o_auth_application_dto_local_var->settings = settings;
    o_auth_application_dto_local_var->type = type;
    o_auth_application_dto_local_var->logo = logo;
    o_auth_application_dto_local_var->business_id = business_id;
    o_auth_application_dto_local_var->business_profile_record_id = business_profile_record_id;
    o_auth_application_dto_local_var->business_application_id = business_application_id;
    o_auth_application_dto_local_var->authorizations_count = authorizations_count;
    o_auth_application_dto_local_var->tokens_count = tokens_count;

    return o_auth_application_dto_local_var;
}


void o_auth_application_dto_free(o_auth_application_dto_t *o_auth_application_dto) {
    if(NULL == o_auth_application_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (o_auth_application_dto->id) {
        free(o_auth_application_dto->id);
        o_auth_application_dto->id = NULL;
    }
    if (o_auth_application_dto->application_type) {
        free(o_auth_application_dto->application_type);
        o_auth_application_dto->application_type = NULL;
    }
    if (o_auth_application_dto->client_id) {
        free(o_auth_application_dto->client_id);
        o_auth_application_dto->client_id = NULL;
    }
    if (o_auth_application_dto->concurrency_token) {
        free(o_auth_application_dto->concurrency_token);
        o_auth_application_dto->concurrency_token = NULL;
    }
    if (o_auth_application_dto->consent_type) {
        free(o_auth_application_dto->consent_type);
        o_auth_application_dto->consent_type = NULL;
    }
    if (o_auth_application_dto->display_name) {
        free(o_auth_application_dto->display_name);
        o_auth_application_dto->display_name = NULL;
    }
    if (o_auth_application_dto->display_names) {
        free(o_auth_application_dto->display_names);
        o_auth_application_dto->display_names = NULL;
    }
    if (o_auth_application_dto->permissions) {
        free(o_auth_application_dto->permissions);
        o_auth_application_dto->permissions = NULL;
    }
    if (o_auth_application_dto->post_logout_redirect_uris) {
        free(o_auth_application_dto->post_logout_redirect_uris);
        o_auth_application_dto->post_logout_redirect_uris = NULL;
    }
    if (o_auth_application_dto->properties) {
        free(o_auth_application_dto->properties);
        o_auth_application_dto->properties = NULL;
    }
    if (o_auth_application_dto->redirect_uris) {
        free(o_auth_application_dto->redirect_uris);
        o_auth_application_dto->redirect_uris = NULL;
    }
    if (o_auth_application_dto->requirements) {
        free(o_auth_application_dto->requirements);
        o_auth_application_dto->requirements = NULL;
    }
    if (o_auth_application_dto->settings) {
        free(o_auth_application_dto->settings);
        o_auth_application_dto->settings = NULL;
    }
    if (o_auth_application_dto->type) {
        free(o_auth_application_dto->type);
        o_auth_application_dto->type = NULL;
    }
    if (o_auth_application_dto->logo) {
        free(o_auth_application_dto->logo);
        o_auth_application_dto->logo = NULL;
    }
    if (o_auth_application_dto->business_id) {
        free(o_auth_application_dto->business_id);
        o_auth_application_dto->business_id = NULL;
    }
    if (o_auth_application_dto->business_profile_record_id) {
        free(o_auth_application_dto->business_profile_record_id);
        o_auth_application_dto->business_profile_record_id = NULL;
    }
    if (o_auth_application_dto->business_application_id) {
        free(o_auth_application_dto->business_application_id);
        o_auth_application_dto->business_application_id = NULL;
    }
    free(o_auth_application_dto);
}

cJSON *o_auth_application_dto_convertToJSON(o_auth_application_dto_t *o_auth_application_dto) {
    cJSON *item = cJSON_CreateObject();

    // o_auth_application_dto->id
    if(o_auth_application_dto->id) {
    if(cJSON_AddStringToObject(item, "id", o_auth_application_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // o_auth_application_dto->application_type
    if(o_auth_application_dto->application_type) {
    if(cJSON_AddStringToObject(item, "applicationType", o_auth_application_dto->application_type) == NULL) {
    goto fail; //String
    }
    }


    // o_auth_application_dto->client_id
    if(o_auth_application_dto->client_id) {
    if(cJSON_AddStringToObject(item, "clientId", o_auth_application_dto->client_id) == NULL) {
    goto fail; //String
    }
    }


    // o_auth_application_dto->concurrency_token
    if(o_auth_application_dto->concurrency_token) {
    if(cJSON_AddStringToObject(item, "concurrencyToken", o_auth_application_dto->concurrency_token) == NULL) {
    goto fail; //String
    }
    }


    // o_auth_application_dto->consent_type
    if(o_auth_application_dto->consent_type) {
    if(cJSON_AddStringToObject(item, "consentType", o_auth_application_dto->consent_type) == NULL) {
    goto fail; //String
    }
    }


    // o_auth_application_dto->display_name
    if(o_auth_application_dto->display_name) {
    if(cJSON_AddStringToObject(item, "displayName", o_auth_application_dto->display_name) == NULL) {
    goto fail; //String
    }
    }


    // o_auth_application_dto->display_names
    if(o_auth_application_dto->display_names) {
    if(cJSON_AddStringToObject(item, "displayNames", o_auth_application_dto->display_names) == NULL) {
    goto fail; //String
    }
    }


    // o_auth_application_dto->permissions
    if(o_auth_application_dto->permissions) {
    if(cJSON_AddStringToObject(item, "permissions", o_auth_application_dto->permissions) == NULL) {
    goto fail; //String
    }
    }


    // o_auth_application_dto->post_logout_redirect_uris
    if(o_auth_application_dto->post_logout_redirect_uris) {
    if(cJSON_AddStringToObject(item, "postLogoutRedirectUris", o_auth_application_dto->post_logout_redirect_uris) == NULL) {
    goto fail; //String
    }
    }


    // o_auth_application_dto->properties
    if(o_auth_application_dto->properties) {
    if(cJSON_AddStringToObject(item, "properties", o_auth_application_dto->properties) == NULL) {
    goto fail; //String
    }
    }


    // o_auth_application_dto->redirect_uris
    if(o_auth_application_dto->redirect_uris) {
    if(cJSON_AddStringToObject(item, "redirectUris", o_auth_application_dto->redirect_uris) == NULL) {
    goto fail; //String
    }
    }


    // o_auth_application_dto->requirements
    if(o_auth_application_dto->requirements) {
    if(cJSON_AddStringToObject(item, "requirements", o_auth_application_dto->requirements) == NULL) {
    goto fail; //String
    }
    }


    // o_auth_application_dto->settings
    if(o_auth_application_dto->settings) {
    if(cJSON_AddStringToObject(item, "settings", o_auth_application_dto->settings) == NULL) {
    goto fail; //String
    }
    }


    // o_auth_application_dto->type
    if(o_auth_application_dto->type) {
    if(cJSON_AddStringToObject(item, "type", o_auth_application_dto->type) == NULL) {
    goto fail; //String
    }
    }


    // o_auth_application_dto->logo
    if(o_auth_application_dto->logo) {
    if(cJSON_AddStringToObject(item, "logo", o_auth_application_dto->logo) == NULL) {
    goto fail; //String
    }
    }


    // o_auth_application_dto->business_id
    if(o_auth_application_dto->business_id) {
    if(cJSON_AddStringToObject(item, "businessID", o_auth_application_dto->business_id) == NULL) {
    goto fail; //String
    }
    }


    // o_auth_application_dto->business_profile_record_id
    if(o_auth_application_dto->business_profile_record_id) {
    if(cJSON_AddStringToObject(item, "businessProfileRecordID", o_auth_application_dto->business_profile_record_id) == NULL) {
    goto fail; //String
    }
    }


    // o_auth_application_dto->business_application_id
    if(o_auth_application_dto->business_application_id) {
    if(cJSON_AddStringToObject(item, "businessApplicationID", o_auth_application_dto->business_application_id) == NULL) {
    goto fail; //String
    }
    }


    // o_auth_application_dto->authorizations_count
    if(o_auth_application_dto->authorizations_count) {
    if(cJSON_AddNumberToObject(item, "authorizationsCount", o_auth_application_dto->authorizations_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // o_auth_application_dto->tokens_count
    if(o_auth_application_dto->tokens_count) {
    if(cJSON_AddNumberToObject(item, "tokensCount", o_auth_application_dto->tokens_count) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

o_auth_application_dto_t *o_auth_application_dto_parseFromJSON(cJSON *o_auth_application_dtoJSON){

    o_auth_application_dto_t *o_auth_application_dto_local_var = NULL;

    // o_auth_application_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(o_auth_application_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // o_auth_application_dto->application_type
    cJSON *application_type = cJSON_GetObjectItemCaseSensitive(o_auth_application_dtoJSON, "applicationType");
    if (application_type) { 
    if(!cJSON_IsString(application_type) && !cJSON_IsNull(application_type))
    {
    goto end; //String
    }
    }

    // o_auth_application_dto->client_id
    cJSON *client_id = cJSON_GetObjectItemCaseSensitive(o_auth_application_dtoJSON, "clientId");
    if (client_id) { 
    if(!cJSON_IsString(client_id) && !cJSON_IsNull(client_id))
    {
    goto end; //String
    }
    }

    // o_auth_application_dto->concurrency_token
    cJSON *concurrency_token = cJSON_GetObjectItemCaseSensitive(o_auth_application_dtoJSON, "concurrencyToken");
    if (concurrency_token) { 
    if(!cJSON_IsString(concurrency_token) && !cJSON_IsNull(concurrency_token))
    {
    goto end; //String
    }
    }

    // o_auth_application_dto->consent_type
    cJSON *consent_type = cJSON_GetObjectItemCaseSensitive(o_auth_application_dtoJSON, "consentType");
    if (consent_type) { 
    if(!cJSON_IsString(consent_type) && !cJSON_IsNull(consent_type))
    {
    goto end; //String
    }
    }

    // o_auth_application_dto->display_name
    cJSON *display_name = cJSON_GetObjectItemCaseSensitive(o_auth_application_dtoJSON, "displayName");
    if (display_name) { 
    if(!cJSON_IsString(display_name) && !cJSON_IsNull(display_name))
    {
    goto end; //String
    }
    }

    // o_auth_application_dto->display_names
    cJSON *display_names = cJSON_GetObjectItemCaseSensitive(o_auth_application_dtoJSON, "displayNames");
    if (display_names) { 
    if(!cJSON_IsString(display_names) && !cJSON_IsNull(display_names))
    {
    goto end; //String
    }
    }

    // o_auth_application_dto->permissions
    cJSON *permissions = cJSON_GetObjectItemCaseSensitive(o_auth_application_dtoJSON, "permissions");
    if (permissions) { 
    if(!cJSON_IsString(permissions) && !cJSON_IsNull(permissions))
    {
    goto end; //String
    }
    }

    // o_auth_application_dto->post_logout_redirect_uris
    cJSON *post_logout_redirect_uris = cJSON_GetObjectItemCaseSensitive(o_auth_application_dtoJSON, "postLogoutRedirectUris");
    if (post_logout_redirect_uris) { 
    if(!cJSON_IsString(post_logout_redirect_uris) && !cJSON_IsNull(post_logout_redirect_uris))
    {
    goto end; //String
    }
    }

    // o_auth_application_dto->properties
    cJSON *properties = cJSON_GetObjectItemCaseSensitive(o_auth_application_dtoJSON, "properties");
    if (properties) { 
    if(!cJSON_IsString(properties) && !cJSON_IsNull(properties))
    {
    goto end; //String
    }
    }

    // o_auth_application_dto->redirect_uris
    cJSON *redirect_uris = cJSON_GetObjectItemCaseSensitive(o_auth_application_dtoJSON, "redirectUris");
    if (redirect_uris) { 
    if(!cJSON_IsString(redirect_uris) && !cJSON_IsNull(redirect_uris))
    {
    goto end; //String
    }
    }

    // o_auth_application_dto->requirements
    cJSON *requirements = cJSON_GetObjectItemCaseSensitive(o_auth_application_dtoJSON, "requirements");
    if (requirements) { 
    if(!cJSON_IsString(requirements) && !cJSON_IsNull(requirements))
    {
    goto end; //String
    }
    }

    // o_auth_application_dto->settings
    cJSON *settings = cJSON_GetObjectItemCaseSensitive(o_auth_application_dtoJSON, "settings");
    if (settings) { 
    if(!cJSON_IsString(settings) && !cJSON_IsNull(settings))
    {
    goto end; //String
    }
    }

    // o_auth_application_dto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(o_auth_application_dtoJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // o_auth_application_dto->logo
    cJSON *logo = cJSON_GetObjectItemCaseSensitive(o_auth_application_dtoJSON, "logo");
    if (logo) { 
    if(!cJSON_IsString(logo) && !cJSON_IsNull(logo))
    {
    goto end; //String
    }
    }

    // o_auth_application_dto->business_id
    cJSON *business_id = cJSON_GetObjectItemCaseSensitive(o_auth_application_dtoJSON, "businessID");
    if (business_id) { 
    if(!cJSON_IsString(business_id) && !cJSON_IsNull(business_id))
    {
    goto end; //String
    }
    }

    // o_auth_application_dto->business_profile_record_id
    cJSON *business_profile_record_id = cJSON_GetObjectItemCaseSensitive(o_auth_application_dtoJSON, "businessProfileRecordID");
    if (business_profile_record_id) { 
    if(!cJSON_IsString(business_profile_record_id) && !cJSON_IsNull(business_profile_record_id))
    {
    goto end; //String
    }
    }

    // o_auth_application_dto->business_application_id
    cJSON *business_application_id = cJSON_GetObjectItemCaseSensitive(o_auth_application_dtoJSON, "businessApplicationID");
    if (business_application_id) { 
    if(!cJSON_IsString(business_application_id) && !cJSON_IsNull(business_application_id))
    {
    goto end; //String
    }
    }

    // o_auth_application_dto->authorizations_count
    cJSON *authorizations_count = cJSON_GetObjectItemCaseSensitive(o_auth_application_dtoJSON, "authorizationsCount");
    if (authorizations_count) { 
    if(!cJSON_IsNumber(authorizations_count))
    {
    goto end; //Numeric
    }
    }

    // o_auth_application_dto->tokens_count
    cJSON *tokens_count = cJSON_GetObjectItemCaseSensitive(o_auth_application_dtoJSON, "tokensCount");
    if (tokens_count) { 
    if(!cJSON_IsNumber(tokens_count))
    {
    goto end; //Numeric
    }
    }


    o_auth_application_dto_local_var = o_auth_application_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        application_type && !cJSON_IsNull(application_type) ? strdup(application_type->valuestring) : NULL,
        client_id && !cJSON_IsNull(client_id) ? strdup(client_id->valuestring) : NULL,
        concurrency_token && !cJSON_IsNull(concurrency_token) ? strdup(concurrency_token->valuestring) : NULL,
        consent_type && !cJSON_IsNull(consent_type) ? strdup(consent_type->valuestring) : NULL,
        display_name && !cJSON_IsNull(display_name) ? strdup(display_name->valuestring) : NULL,
        display_names && !cJSON_IsNull(display_names) ? strdup(display_names->valuestring) : NULL,
        permissions && !cJSON_IsNull(permissions) ? strdup(permissions->valuestring) : NULL,
        post_logout_redirect_uris && !cJSON_IsNull(post_logout_redirect_uris) ? strdup(post_logout_redirect_uris->valuestring) : NULL,
        properties && !cJSON_IsNull(properties) ? strdup(properties->valuestring) : NULL,
        redirect_uris && !cJSON_IsNull(redirect_uris) ? strdup(redirect_uris->valuestring) : NULL,
        requirements && !cJSON_IsNull(requirements) ? strdup(requirements->valuestring) : NULL,
        settings && !cJSON_IsNull(settings) ? strdup(settings->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        logo && !cJSON_IsNull(logo) ? strdup(logo->valuestring) : NULL,
        business_id && !cJSON_IsNull(business_id) ? strdup(business_id->valuestring) : NULL,
        business_profile_record_id && !cJSON_IsNull(business_profile_record_id) ? strdup(business_profile_record_id->valuestring) : NULL,
        business_application_id && !cJSON_IsNull(business_application_id) ? strdup(business_application_id->valuestring) : NULL,
        authorizations_count ? authorizations_count->valuedouble : 0,
        tokens_count ? tokens_count->valuedouble : 0
        );

    return o_auth_application_dto_local_var;
end:
    return NULL;

}
