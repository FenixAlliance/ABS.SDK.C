#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "o_auth_application_create_dto.h"



o_auth_application_create_dto_t *o_auth_application_create_dto_create(
    char *display_name,
    char *client_id,
    char *client_secret,
    char *consent_type,
    char *permissions,
    char *requirements,
    char *redirect_uris,
    char *post_logout_redirect_uris,
    char *logo,
    char *business_id,
    char *business_profile_record_id
    ) {
    o_auth_application_create_dto_t *o_auth_application_create_dto_local_var = malloc(sizeof(o_auth_application_create_dto_t));
    if (!o_auth_application_create_dto_local_var) {
        return NULL;
    }
    o_auth_application_create_dto_local_var->display_name = display_name;
    o_auth_application_create_dto_local_var->client_id = client_id;
    o_auth_application_create_dto_local_var->client_secret = client_secret;
    o_auth_application_create_dto_local_var->consent_type = consent_type;
    o_auth_application_create_dto_local_var->permissions = permissions;
    o_auth_application_create_dto_local_var->requirements = requirements;
    o_auth_application_create_dto_local_var->redirect_uris = redirect_uris;
    o_auth_application_create_dto_local_var->post_logout_redirect_uris = post_logout_redirect_uris;
    o_auth_application_create_dto_local_var->logo = logo;
    o_auth_application_create_dto_local_var->business_id = business_id;
    o_auth_application_create_dto_local_var->business_profile_record_id = business_profile_record_id;

    return o_auth_application_create_dto_local_var;
}


void o_auth_application_create_dto_free(o_auth_application_create_dto_t *o_auth_application_create_dto) {
    if(NULL == o_auth_application_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (o_auth_application_create_dto->display_name) {
        free(o_auth_application_create_dto->display_name);
        o_auth_application_create_dto->display_name = NULL;
    }
    if (o_auth_application_create_dto->client_id) {
        free(o_auth_application_create_dto->client_id);
        o_auth_application_create_dto->client_id = NULL;
    }
    if (o_auth_application_create_dto->client_secret) {
        free(o_auth_application_create_dto->client_secret);
        o_auth_application_create_dto->client_secret = NULL;
    }
    if (o_auth_application_create_dto->consent_type) {
        free(o_auth_application_create_dto->consent_type);
        o_auth_application_create_dto->consent_type = NULL;
    }
    if (o_auth_application_create_dto->permissions) {
        free(o_auth_application_create_dto->permissions);
        o_auth_application_create_dto->permissions = NULL;
    }
    if (o_auth_application_create_dto->requirements) {
        free(o_auth_application_create_dto->requirements);
        o_auth_application_create_dto->requirements = NULL;
    }
    if (o_auth_application_create_dto->redirect_uris) {
        free(o_auth_application_create_dto->redirect_uris);
        o_auth_application_create_dto->redirect_uris = NULL;
    }
    if (o_auth_application_create_dto->post_logout_redirect_uris) {
        free(o_auth_application_create_dto->post_logout_redirect_uris);
        o_auth_application_create_dto->post_logout_redirect_uris = NULL;
    }
    if (o_auth_application_create_dto->logo) {
        free(o_auth_application_create_dto->logo);
        o_auth_application_create_dto->logo = NULL;
    }
    if (o_auth_application_create_dto->business_id) {
        free(o_auth_application_create_dto->business_id);
        o_auth_application_create_dto->business_id = NULL;
    }
    if (o_auth_application_create_dto->business_profile_record_id) {
        free(o_auth_application_create_dto->business_profile_record_id);
        o_auth_application_create_dto->business_profile_record_id = NULL;
    }
    free(o_auth_application_create_dto);
}

cJSON *o_auth_application_create_dto_convertToJSON(o_auth_application_create_dto_t *o_auth_application_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // o_auth_application_create_dto->display_name
    if (!o_auth_application_create_dto->display_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "displayName", o_auth_application_create_dto->display_name) == NULL) {
    goto fail; //String
    }


    // o_auth_application_create_dto->client_id
    if(o_auth_application_create_dto->client_id) {
    if(cJSON_AddStringToObject(item, "clientId", o_auth_application_create_dto->client_id) == NULL) {
    goto fail; //String
    }
    }


    // o_auth_application_create_dto->client_secret
    if(o_auth_application_create_dto->client_secret) {
    if(cJSON_AddStringToObject(item, "clientSecret", o_auth_application_create_dto->client_secret) == NULL) {
    goto fail; //String
    }
    }


    // o_auth_application_create_dto->consent_type
    if(o_auth_application_create_dto->consent_type) {
    if(cJSON_AddStringToObject(item, "consentType", o_auth_application_create_dto->consent_type) == NULL) {
    goto fail; //String
    }
    }


    // o_auth_application_create_dto->permissions
    if(o_auth_application_create_dto->permissions) {
    if(cJSON_AddStringToObject(item, "permissions", o_auth_application_create_dto->permissions) == NULL) {
    goto fail; //String
    }
    }


    // o_auth_application_create_dto->requirements
    if(o_auth_application_create_dto->requirements) {
    if(cJSON_AddStringToObject(item, "requirements", o_auth_application_create_dto->requirements) == NULL) {
    goto fail; //String
    }
    }


    // o_auth_application_create_dto->redirect_uris
    if(o_auth_application_create_dto->redirect_uris) {
    if(cJSON_AddStringToObject(item, "redirectUris", o_auth_application_create_dto->redirect_uris) == NULL) {
    goto fail; //String
    }
    }


    // o_auth_application_create_dto->post_logout_redirect_uris
    if(o_auth_application_create_dto->post_logout_redirect_uris) {
    if(cJSON_AddStringToObject(item, "postLogoutRedirectUris", o_auth_application_create_dto->post_logout_redirect_uris) == NULL) {
    goto fail; //String
    }
    }


    // o_auth_application_create_dto->logo
    if(o_auth_application_create_dto->logo) {
    if(cJSON_AddStringToObject(item, "logo", o_auth_application_create_dto->logo) == NULL) {
    goto fail; //String
    }
    }


    // o_auth_application_create_dto->business_id
    if(o_auth_application_create_dto->business_id) {
    if(cJSON_AddStringToObject(item, "businessID", o_auth_application_create_dto->business_id) == NULL) {
    goto fail; //String
    }
    }


    // o_auth_application_create_dto->business_profile_record_id
    if(o_auth_application_create_dto->business_profile_record_id) {
    if(cJSON_AddStringToObject(item, "businessProfileRecordID", o_auth_application_create_dto->business_profile_record_id) == NULL) {
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

o_auth_application_create_dto_t *o_auth_application_create_dto_parseFromJSON(cJSON *o_auth_application_create_dtoJSON){

    o_auth_application_create_dto_t *o_auth_application_create_dto_local_var = NULL;

    // o_auth_application_create_dto->display_name
    cJSON *display_name = cJSON_GetObjectItemCaseSensitive(o_auth_application_create_dtoJSON, "displayName");
    if (!display_name) {
        goto end;
    }

    
    if(!cJSON_IsString(display_name))
    {
    goto end; //String
    }

    // o_auth_application_create_dto->client_id
    cJSON *client_id = cJSON_GetObjectItemCaseSensitive(o_auth_application_create_dtoJSON, "clientId");
    if (client_id) { 
    if(!cJSON_IsString(client_id) && !cJSON_IsNull(client_id))
    {
    goto end; //String
    }
    }

    // o_auth_application_create_dto->client_secret
    cJSON *client_secret = cJSON_GetObjectItemCaseSensitive(o_auth_application_create_dtoJSON, "clientSecret");
    if (client_secret) { 
    if(!cJSON_IsString(client_secret) && !cJSON_IsNull(client_secret))
    {
    goto end; //String
    }
    }

    // o_auth_application_create_dto->consent_type
    cJSON *consent_type = cJSON_GetObjectItemCaseSensitive(o_auth_application_create_dtoJSON, "consentType");
    if (consent_type) { 
    if(!cJSON_IsString(consent_type) && !cJSON_IsNull(consent_type))
    {
    goto end; //String
    }
    }

    // o_auth_application_create_dto->permissions
    cJSON *permissions = cJSON_GetObjectItemCaseSensitive(o_auth_application_create_dtoJSON, "permissions");
    if (permissions) { 
    if(!cJSON_IsString(permissions) && !cJSON_IsNull(permissions))
    {
    goto end; //String
    }
    }

    // o_auth_application_create_dto->requirements
    cJSON *requirements = cJSON_GetObjectItemCaseSensitive(o_auth_application_create_dtoJSON, "requirements");
    if (requirements) { 
    if(!cJSON_IsString(requirements) && !cJSON_IsNull(requirements))
    {
    goto end; //String
    }
    }

    // o_auth_application_create_dto->redirect_uris
    cJSON *redirect_uris = cJSON_GetObjectItemCaseSensitive(o_auth_application_create_dtoJSON, "redirectUris");
    if (redirect_uris) { 
    if(!cJSON_IsString(redirect_uris) && !cJSON_IsNull(redirect_uris))
    {
    goto end; //String
    }
    }

    // o_auth_application_create_dto->post_logout_redirect_uris
    cJSON *post_logout_redirect_uris = cJSON_GetObjectItemCaseSensitive(o_auth_application_create_dtoJSON, "postLogoutRedirectUris");
    if (post_logout_redirect_uris) { 
    if(!cJSON_IsString(post_logout_redirect_uris) && !cJSON_IsNull(post_logout_redirect_uris))
    {
    goto end; //String
    }
    }

    // o_auth_application_create_dto->logo
    cJSON *logo = cJSON_GetObjectItemCaseSensitive(o_auth_application_create_dtoJSON, "logo");
    if (logo) { 
    if(!cJSON_IsString(logo) && !cJSON_IsNull(logo))
    {
    goto end; //String
    }
    }

    // o_auth_application_create_dto->business_id
    cJSON *business_id = cJSON_GetObjectItemCaseSensitive(o_auth_application_create_dtoJSON, "businessID");
    if (business_id) { 
    if(!cJSON_IsString(business_id) && !cJSON_IsNull(business_id))
    {
    goto end; //String
    }
    }

    // o_auth_application_create_dto->business_profile_record_id
    cJSON *business_profile_record_id = cJSON_GetObjectItemCaseSensitive(o_auth_application_create_dtoJSON, "businessProfileRecordID");
    if (business_profile_record_id) { 
    if(!cJSON_IsString(business_profile_record_id) && !cJSON_IsNull(business_profile_record_id))
    {
    goto end; //String
    }
    }


    o_auth_application_create_dto_local_var = o_auth_application_create_dto_create (
        strdup(display_name->valuestring),
        client_id && !cJSON_IsNull(client_id) ? strdup(client_id->valuestring) : NULL,
        client_secret && !cJSON_IsNull(client_secret) ? strdup(client_secret->valuestring) : NULL,
        consent_type && !cJSON_IsNull(consent_type) ? strdup(consent_type->valuestring) : NULL,
        permissions && !cJSON_IsNull(permissions) ? strdup(permissions->valuestring) : NULL,
        requirements && !cJSON_IsNull(requirements) ? strdup(requirements->valuestring) : NULL,
        redirect_uris && !cJSON_IsNull(redirect_uris) ? strdup(redirect_uris->valuestring) : NULL,
        post_logout_redirect_uris && !cJSON_IsNull(post_logout_redirect_uris) ? strdup(post_logout_redirect_uris->valuestring) : NULL,
        logo && !cJSON_IsNull(logo) ? strdup(logo->valuestring) : NULL,
        business_id && !cJSON_IsNull(business_id) ? strdup(business_id->valuestring) : NULL,
        business_profile_record_id && !cJSON_IsNull(business_profile_record_id) ? strdup(business_profile_record_id->valuestring) : NULL
        );

    return o_auth_application_create_dto_local_var;
end:
    return NULL;

}
