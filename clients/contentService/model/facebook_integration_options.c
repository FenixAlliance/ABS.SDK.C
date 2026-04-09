#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "facebook_integration_options.h"



facebook_integration_options_t *facebook_integration_options_create(
    int enable,
    char *pixel_id,
    char *app_id,
    char *app_secret,
    char *instagram_app_id,
    char *instagram_app_secret,
    char *marketing_api_token,
    char *marketing_api_token_sandbox
    ) {
    facebook_integration_options_t *facebook_integration_options_local_var = malloc(sizeof(facebook_integration_options_t));
    if (!facebook_integration_options_local_var) {
        return NULL;
    }
    facebook_integration_options_local_var->enable = enable;
    facebook_integration_options_local_var->pixel_id = pixel_id;
    facebook_integration_options_local_var->app_id = app_id;
    facebook_integration_options_local_var->app_secret = app_secret;
    facebook_integration_options_local_var->instagram_app_id = instagram_app_id;
    facebook_integration_options_local_var->instagram_app_secret = instagram_app_secret;
    facebook_integration_options_local_var->marketing_api_token = marketing_api_token;
    facebook_integration_options_local_var->marketing_api_token_sandbox = marketing_api_token_sandbox;

    return facebook_integration_options_local_var;
}


void facebook_integration_options_free(facebook_integration_options_t *facebook_integration_options) {
    if(NULL == facebook_integration_options){
        return ;
    }
    listEntry_t *listEntry;
    if (facebook_integration_options->pixel_id) {
        free(facebook_integration_options->pixel_id);
        facebook_integration_options->pixel_id = NULL;
    }
    if (facebook_integration_options->app_id) {
        free(facebook_integration_options->app_id);
        facebook_integration_options->app_id = NULL;
    }
    if (facebook_integration_options->app_secret) {
        free(facebook_integration_options->app_secret);
        facebook_integration_options->app_secret = NULL;
    }
    if (facebook_integration_options->instagram_app_id) {
        free(facebook_integration_options->instagram_app_id);
        facebook_integration_options->instagram_app_id = NULL;
    }
    if (facebook_integration_options->instagram_app_secret) {
        free(facebook_integration_options->instagram_app_secret);
        facebook_integration_options->instagram_app_secret = NULL;
    }
    if (facebook_integration_options->marketing_api_token) {
        free(facebook_integration_options->marketing_api_token);
        facebook_integration_options->marketing_api_token = NULL;
    }
    if (facebook_integration_options->marketing_api_token_sandbox) {
        free(facebook_integration_options->marketing_api_token_sandbox);
        facebook_integration_options->marketing_api_token_sandbox = NULL;
    }
    free(facebook_integration_options);
}

cJSON *facebook_integration_options_convertToJSON(facebook_integration_options_t *facebook_integration_options) {
    cJSON *item = cJSON_CreateObject();

    // facebook_integration_options->enable
    if(facebook_integration_options->enable) {
    if(cJSON_AddBoolToObject(item, "enable", facebook_integration_options->enable) == NULL) {
    goto fail; //Bool
    }
    }


    // facebook_integration_options->pixel_id
    if(facebook_integration_options->pixel_id) {
    if(cJSON_AddStringToObject(item, "pixelId", facebook_integration_options->pixel_id) == NULL) {
    goto fail; //String
    }
    }


    // facebook_integration_options->app_id
    if(facebook_integration_options->app_id) {
    if(cJSON_AddStringToObject(item, "appId", facebook_integration_options->app_id) == NULL) {
    goto fail; //String
    }
    }


    // facebook_integration_options->app_secret
    if(facebook_integration_options->app_secret) {
    if(cJSON_AddStringToObject(item, "appSecret", facebook_integration_options->app_secret) == NULL) {
    goto fail; //String
    }
    }


    // facebook_integration_options->instagram_app_id
    if(facebook_integration_options->instagram_app_id) {
    if(cJSON_AddStringToObject(item, "instagramAppId", facebook_integration_options->instagram_app_id) == NULL) {
    goto fail; //String
    }
    }


    // facebook_integration_options->instagram_app_secret
    if(facebook_integration_options->instagram_app_secret) {
    if(cJSON_AddStringToObject(item, "instagramAppSecret", facebook_integration_options->instagram_app_secret) == NULL) {
    goto fail; //String
    }
    }


    // facebook_integration_options->marketing_api_token
    if(facebook_integration_options->marketing_api_token) {
    if(cJSON_AddStringToObject(item, "marketingApiToken", facebook_integration_options->marketing_api_token) == NULL) {
    goto fail; //String
    }
    }


    // facebook_integration_options->marketing_api_token_sandbox
    if(facebook_integration_options->marketing_api_token_sandbox) {
    if(cJSON_AddStringToObject(item, "marketingApiTokenSandbox", facebook_integration_options->marketing_api_token_sandbox) == NULL) {
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

facebook_integration_options_t *facebook_integration_options_parseFromJSON(cJSON *facebook_integration_optionsJSON){

    facebook_integration_options_t *facebook_integration_options_local_var = NULL;

    // facebook_integration_options->enable
    cJSON *enable = cJSON_GetObjectItemCaseSensitive(facebook_integration_optionsJSON, "enable");
    if (enable) { 
    if(!cJSON_IsBool(enable))
    {
    goto end; //Bool
    }
    }

    // facebook_integration_options->pixel_id
    cJSON *pixel_id = cJSON_GetObjectItemCaseSensitive(facebook_integration_optionsJSON, "pixelId");
    if (pixel_id) { 
    if(!cJSON_IsString(pixel_id) && !cJSON_IsNull(pixel_id))
    {
    goto end; //String
    }
    }

    // facebook_integration_options->app_id
    cJSON *app_id = cJSON_GetObjectItemCaseSensitive(facebook_integration_optionsJSON, "appId");
    if (app_id) { 
    if(!cJSON_IsString(app_id) && !cJSON_IsNull(app_id))
    {
    goto end; //String
    }
    }

    // facebook_integration_options->app_secret
    cJSON *app_secret = cJSON_GetObjectItemCaseSensitive(facebook_integration_optionsJSON, "appSecret");
    if (app_secret) { 
    if(!cJSON_IsString(app_secret) && !cJSON_IsNull(app_secret))
    {
    goto end; //String
    }
    }

    // facebook_integration_options->instagram_app_id
    cJSON *instagram_app_id = cJSON_GetObjectItemCaseSensitive(facebook_integration_optionsJSON, "instagramAppId");
    if (instagram_app_id) { 
    if(!cJSON_IsString(instagram_app_id) && !cJSON_IsNull(instagram_app_id))
    {
    goto end; //String
    }
    }

    // facebook_integration_options->instagram_app_secret
    cJSON *instagram_app_secret = cJSON_GetObjectItemCaseSensitive(facebook_integration_optionsJSON, "instagramAppSecret");
    if (instagram_app_secret) { 
    if(!cJSON_IsString(instagram_app_secret) && !cJSON_IsNull(instagram_app_secret))
    {
    goto end; //String
    }
    }

    // facebook_integration_options->marketing_api_token
    cJSON *marketing_api_token = cJSON_GetObjectItemCaseSensitive(facebook_integration_optionsJSON, "marketingApiToken");
    if (marketing_api_token) { 
    if(!cJSON_IsString(marketing_api_token) && !cJSON_IsNull(marketing_api_token))
    {
    goto end; //String
    }
    }

    // facebook_integration_options->marketing_api_token_sandbox
    cJSON *marketing_api_token_sandbox = cJSON_GetObjectItemCaseSensitive(facebook_integration_optionsJSON, "marketingApiTokenSandbox");
    if (marketing_api_token_sandbox) { 
    if(!cJSON_IsString(marketing_api_token_sandbox) && !cJSON_IsNull(marketing_api_token_sandbox))
    {
    goto end; //String
    }
    }


    facebook_integration_options_local_var = facebook_integration_options_create (
        enable ? enable->valueint : 0,
        pixel_id && !cJSON_IsNull(pixel_id) ? strdup(pixel_id->valuestring) : NULL,
        app_id && !cJSON_IsNull(app_id) ? strdup(app_id->valuestring) : NULL,
        app_secret && !cJSON_IsNull(app_secret) ? strdup(app_secret->valuestring) : NULL,
        instagram_app_id && !cJSON_IsNull(instagram_app_id) ? strdup(instagram_app_id->valuestring) : NULL,
        instagram_app_secret && !cJSON_IsNull(instagram_app_secret) ? strdup(instagram_app_secret->valuestring) : NULL,
        marketing_api_token && !cJSON_IsNull(marketing_api_token) ? strdup(marketing_api_token->valuestring) : NULL,
        marketing_api_token_sandbox && !cJSON_IsNull(marketing_api_token_sandbox) ? strdup(marketing_api_token_sandbox->valuestring) : NULL
        );

    return facebook_integration_options_local_var;
end:
    return NULL;

}
