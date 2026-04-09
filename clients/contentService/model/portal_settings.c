#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "portal_settings.h"



portal_settings_t *portal_settings_create(
    int enable,
    char *portal_id,
    char *scopes,
    char *tenant_id,
    char *home_page_id,
    char *blog_page_id,
    char *store_page_id,
    char *base_endpoint,
    char *store_route_prefix,
    char *public_key,
    char *private_key,
    char *auth_token,
    char *auth_token_type,
    long auth_token_expiration,
    portal_options_t *options
    ) {
    portal_settings_t *portal_settings_local_var = malloc(sizeof(portal_settings_t));
    if (!portal_settings_local_var) {
        return NULL;
    }
    portal_settings_local_var->enable = enable;
    portal_settings_local_var->portal_id = portal_id;
    portal_settings_local_var->scopes = scopes;
    portal_settings_local_var->tenant_id = tenant_id;
    portal_settings_local_var->home_page_id = home_page_id;
    portal_settings_local_var->blog_page_id = blog_page_id;
    portal_settings_local_var->store_page_id = store_page_id;
    portal_settings_local_var->base_endpoint = base_endpoint;
    portal_settings_local_var->store_route_prefix = store_route_prefix;
    portal_settings_local_var->public_key = public_key;
    portal_settings_local_var->private_key = private_key;
    portal_settings_local_var->auth_token = auth_token;
    portal_settings_local_var->auth_token_type = auth_token_type;
    portal_settings_local_var->auth_token_expiration = auth_token_expiration;
    portal_settings_local_var->options = options;

    return portal_settings_local_var;
}


void portal_settings_free(portal_settings_t *portal_settings) {
    if(NULL == portal_settings){
        return ;
    }
    listEntry_t *listEntry;
    if (portal_settings->portal_id) {
        free(portal_settings->portal_id);
        portal_settings->portal_id = NULL;
    }
    if (portal_settings->scopes) {
        free(portal_settings->scopes);
        portal_settings->scopes = NULL;
    }
    if (portal_settings->tenant_id) {
        free(portal_settings->tenant_id);
        portal_settings->tenant_id = NULL;
    }
    if (portal_settings->home_page_id) {
        free(portal_settings->home_page_id);
        portal_settings->home_page_id = NULL;
    }
    if (portal_settings->blog_page_id) {
        free(portal_settings->blog_page_id);
        portal_settings->blog_page_id = NULL;
    }
    if (portal_settings->store_page_id) {
        free(portal_settings->store_page_id);
        portal_settings->store_page_id = NULL;
    }
    if (portal_settings->base_endpoint) {
        free(portal_settings->base_endpoint);
        portal_settings->base_endpoint = NULL;
    }
    if (portal_settings->store_route_prefix) {
        free(portal_settings->store_route_prefix);
        portal_settings->store_route_prefix = NULL;
    }
    if (portal_settings->public_key) {
        free(portal_settings->public_key);
        portal_settings->public_key = NULL;
    }
    if (portal_settings->private_key) {
        free(portal_settings->private_key);
        portal_settings->private_key = NULL;
    }
    if (portal_settings->auth_token) {
        free(portal_settings->auth_token);
        portal_settings->auth_token = NULL;
    }
    if (portal_settings->auth_token_type) {
        free(portal_settings->auth_token_type);
        portal_settings->auth_token_type = NULL;
    }
    if (portal_settings->options) {
        portal_options_free(portal_settings->options);
        portal_settings->options = NULL;
    }
    free(portal_settings);
}

cJSON *portal_settings_convertToJSON(portal_settings_t *portal_settings) {
    cJSON *item = cJSON_CreateObject();

    // portal_settings->enable
    if(portal_settings->enable) {
    if(cJSON_AddBoolToObject(item, "enable", portal_settings->enable) == NULL) {
    goto fail; //Bool
    }
    }


    // portal_settings->portal_id
    if(portal_settings->portal_id) {
    if(cJSON_AddStringToObject(item, "portalID", portal_settings->portal_id) == NULL) {
    goto fail; //String
    }
    }


    // portal_settings->scopes
    if(portal_settings->scopes) {
    if(cJSON_AddStringToObject(item, "scopes", portal_settings->scopes) == NULL) {
    goto fail; //String
    }
    }


    // portal_settings->tenant_id
    if(portal_settings->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantID", portal_settings->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // portal_settings->home_page_id
    if(portal_settings->home_page_id) {
    if(cJSON_AddStringToObject(item, "homePageID", portal_settings->home_page_id) == NULL) {
    goto fail; //String
    }
    }


    // portal_settings->blog_page_id
    if(portal_settings->blog_page_id) {
    if(cJSON_AddStringToObject(item, "blogPageID", portal_settings->blog_page_id) == NULL) {
    goto fail; //String
    }
    }


    // portal_settings->store_page_id
    if(portal_settings->store_page_id) {
    if(cJSON_AddStringToObject(item, "storePageID", portal_settings->store_page_id) == NULL) {
    goto fail; //String
    }
    }


    // portal_settings->base_endpoint
    if(portal_settings->base_endpoint) {
    if(cJSON_AddStringToObject(item, "baseEndpoint", portal_settings->base_endpoint) == NULL) {
    goto fail; //String
    }
    }


    // portal_settings->store_route_prefix
    if(portal_settings->store_route_prefix) {
    if(cJSON_AddStringToObject(item, "storeRoutePrefix", portal_settings->store_route_prefix) == NULL) {
    goto fail; //String
    }
    }


    // portal_settings->public_key
    if(portal_settings->public_key) {
    if(cJSON_AddStringToObject(item, "publicKey", portal_settings->public_key) == NULL) {
    goto fail; //String
    }
    }


    // portal_settings->private_key
    if(portal_settings->private_key) {
    if(cJSON_AddStringToObject(item, "privateKey", portal_settings->private_key) == NULL) {
    goto fail; //String
    }
    }


    // portal_settings->auth_token
    if(portal_settings->auth_token) {
    if(cJSON_AddStringToObject(item, "authToken", portal_settings->auth_token) == NULL) {
    goto fail; //String
    }
    }


    // portal_settings->auth_token_type
    if(portal_settings->auth_token_type) {
    if(cJSON_AddStringToObject(item, "authTokenType", portal_settings->auth_token_type) == NULL) {
    goto fail; //String
    }
    }


    // portal_settings->auth_token_expiration
    if(portal_settings->auth_token_expiration) {
    if(cJSON_AddNumberToObject(item, "authTokenExpiration", portal_settings->auth_token_expiration) == NULL) {
    goto fail; //Numeric
    }
    }


    // portal_settings->options
    if(portal_settings->options) {
    cJSON *options_local_JSON = portal_options_convertToJSON(portal_settings->options);
    if(options_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "options", options_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

portal_settings_t *portal_settings_parseFromJSON(cJSON *portal_settingsJSON){

    portal_settings_t *portal_settings_local_var = NULL;

    // define the local variable for portal_settings->options
    portal_options_t *options_local_nonprim = NULL;

    // portal_settings->enable
    cJSON *enable = cJSON_GetObjectItemCaseSensitive(portal_settingsJSON, "enable");
    if (enable) { 
    if(!cJSON_IsBool(enable))
    {
    goto end; //Bool
    }
    }

    // portal_settings->portal_id
    cJSON *portal_id = cJSON_GetObjectItemCaseSensitive(portal_settingsJSON, "portalID");
    if (portal_id) { 
    if(!cJSON_IsString(portal_id) && !cJSON_IsNull(portal_id))
    {
    goto end; //String
    }
    }

    // portal_settings->scopes
    cJSON *scopes = cJSON_GetObjectItemCaseSensitive(portal_settingsJSON, "scopes");
    if (scopes) { 
    if(!cJSON_IsString(scopes) && !cJSON_IsNull(scopes))
    {
    goto end; //String
    }
    }

    // portal_settings->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(portal_settingsJSON, "tenantID");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // portal_settings->home_page_id
    cJSON *home_page_id = cJSON_GetObjectItemCaseSensitive(portal_settingsJSON, "homePageID");
    if (home_page_id) { 
    if(!cJSON_IsString(home_page_id) && !cJSON_IsNull(home_page_id))
    {
    goto end; //String
    }
    }

    // portal_settings->blog_page_id
    cJSON *blog_page_id = cJSON_GetObjectItemCaseSensitive(portal_settingsJSON, "blogPageID");
    if (blog_page_id) { 
    if(!cJSON_IsString(blog_page_id) && !cJSON_IsNull(blog_page_id))
    {
    goto end; //String
    }
    }

    // portal_settings->store_page_id
    cJSON *store_page_id = cJSON_GetObjectItemCaseSensitive(portal_settingsJSON, "storePageID");
    if (store_page_id) { 
    if(!cJSON_IsString(store_page_id) && !cJSON_IsNull(store_page_id))
    {
    goto end; //String
    }
    }

    // portal_settings->base_endpoint
    cJSON *base_endpoint = cJSON_GetObjectItemCaseSensitive(portal_settingsJSON, "baseEndpoint");
    if (base_endpoint) { 
    if(!cJSON_IsString(base_endpoint) && !cJSON_IsNull(base_endpoint))
    {
    goto end; //String
    }
    }

    // portal_settings->store_route_prefix
    cJSON *store_route_prefix = cJSON_GetObjectItemCaseSensitive(portal_settingsJSON, "storeRoutePrefix");
    if (store_route_prefix) { 
    if(!cJSON_IsString(store_route_prefix) && !cJSON_IsNull(store_route_prefix))
    {
    goto end; //String
    }
    }

    // portal_settings->public_key
    cJSON *public_key = cJSON_GetObjectItemCaseSensitive(portal_settingsJSON, "publicKey");
    if (public_key) { 
    if(!cJSON_IsString(public_key) && !cJSON_IsNull(public_key))
    {
    goto end; //String
    }
    }

    // portal_settings->private_key
    cJSON *private_key = cJSON_GetObjectItemCaseSensitive(portal_settingsJSON, "privateKey");
    if (private_key) { 
    if(!cJSON_IsString(private_key) && !cJSON_IsNull(private_key))
    {
    goto end; //String
    }
    }

    // portal_settings->auth_token
    cJSON *auth_token = cJSON_GetObjectItemCaseSensitive(portal_settingsJSON, "authToken");
    if (auth_token) { 
    if(!cJSON_IsString(auth_token) && !cJSON_IsNull(auth_token))
    {
    goto end; //String
    }
    }

    // portal_settings->auth_token_type
    cJSON *auth_token_type = cJSON_GetObjectItemCaseSensitive(portal_settingsJSON, "authTokenType");
    if (auth_token_type) { 
    if(!cJSON_IsString(auth_token_type) && !cJSON_IsNull(auth_token_type))
    {
    goto end; //String
    }
    }

    // portal_settings->auth_token_expiration
    cJSON *auth_token_expiration = cJSON_GetObjectItemCaseSensitive(portal_settingsJSON, "authTokenExpiration");
    if (auth_token_expiration) { 
    if(!cJSON_IsNumber(auth_token_expiration))
    {
    goto end; //Numeric
    }
    }

    // portal_settings->options
    cJSON *options = cJSON_GetObjectItemCaseSensitive(portal_settingsJSON, "options");
    if (options) { 
    options_local_nonprim = portal_options_parseFromJSON(options); //nonprimitive
    }


    portal_settings_local_var = portal_settings_create (
        enable ? enable->valueint : 0,
        portal_id && !cJSON_IsNull(portal_id) ? strdup(portal_id->valuestring) : NULL,
        scopes && !cJSON_IsNull(scopes) ? strdup(scopes->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        home_page_id && !cJSON_IsNull(home_page_id) ? strdup(home_page_id->valuestring) : NULL,
        blog_page_id && !cJSON_IsNull(blog_page_id) ? strdup(blog_page_id->valuestring) : NULL,
        store_page_id && !cJSON_IsNull(store_page_id) ? strdup(store_page_id->valuestring) : NULL,
        base_endpoint && !cJSON_IsNull(base_endpoint) ? strdup(base_endpoint->valuestring) : NULL,
        store_route_prefix && !cJSON_IsNull(store_route_prefix) ? strdup(store_route_prefix->valuestring) : NULL,
        public_key && !cJSON_IsNull(public_key) ? strdup(public_key->valuestring) : NULL,
        private_key && !cJSON_IsNull(private_key) ? strdup(private_key->valuestring) : NULL,
        auth_token && !cJSON_IsNull(auth_token) ? strdup(auth_token->valuestring) : NULL,
        auth_token_type && !cJSON_IsNull(auth_token_type) ? strdup(auth_token_type->valuestring) : NULL,
        auth_token_expiration ? auth_token_expiration->valuedouble : 0,
        options ? options_local_nonprim : NULL
        );

    return portal_settings_local_var;
end:
    if (options_local_nonprim) {
        portal_options_free(options_local_nonprim);
        options_local_nonprim = NULL;
    }
    return NULL;

}
