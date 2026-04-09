#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "alliance_business_suite_integration_options.h"



alliance_business_suite_integration_options_t *alliance_business_suite_integration_options_create(
    int enable,
    char *app_id,
    char *tenant_id,
    char *public_key,
    char *private_key
    ) {
    alliance_business_suite_integration_options_t *alliance_business_suite_integration_options_local_var = malloc(sizeof(alliance_business_suite_integration_options_t));
    if (!alliance_business_suite_integration_options_local_var) {
        return NULL;
    }
    alliance_business_suite_integration_options_local_var->enable = enable;
    alliance_business_suite_integration_options_local_var->app_id = app_id;
    alliance_business_suite_integration_options_local_var->tenant_id = tenant_id;
    alliance_business_suite_integration_options_local_var->public_key = public_key;
    alliance_business_suite_integration_options_local_var->private_key = private_key;

    return alliance_business_suite_integration_options_local_var;
}


void alliance_business_suite_integration_options_free(alliance_business_suite_integration_options_t *alliance_business_suite_integration_options) {
    if(NULL == alliance_business_suite_integration_options){
        return ;
    }
    listEntry_t *listEntry;
    if (alliance_business_suite_integration_options->app_id) {
        free(alliance_business_suite_integration_options->app_id);
        alliance_business_suite_integration_options->app_id = NULL;
    }
    if (alliance_business_suite_integration_options->tenant_id) {
        free(alliance_business_suite_integration_options->tenant_id);
        alliance_business_suite_integration_options->tenant_id = NULL;
    }
    if (alliance_business_suite_integration_options->public_key) {
        free(alliance_business_suite_integration_options->public_key);
        alliance_business_suite_integration_options->public_key = NULL;
    }
    if (alliance_business_suite_integration_options->private_key) {
        free(alliance_business_suite_integration_options->private_key);
        alliance_business_suite_integration_options->private_key = NULL;
    }
    free(alliance_business_suite_integration_options);
}

cJSON *alliance_business_suite_integration_options_convertToJSON(alliance_business_suite_integration_options_t *alliance_business_suite_integration_options) {
    cJSON *item = cJSON_CreateObject();

    // alliance_business_suite_integration_options->enable
    if(alliance_business_suite_integration_options->enable) {
    if(cJSON_AddBoolToObject(item, "enable", alliance_business_suite_integration_options->enable) == NULL) {
    goto fail; //Bool
    }
    }


    // alliance_business_suite_integration_options->app_id
    if(alliance_business_suite_integration_options->app_id) {
    if(cJSON_AddStringToObject(item, "appId", alliance_business_suite_integration_options->app_id) == NULL) {
    goto fail; //String
    }
    }


    // alliance_business_suite_integration_options->tenant_id
    if(alliance_business_suite_integration_options->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", alliance_business_suite_integration_options->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // alliance_business_suite_integration_options->public_key
    if(alliance_business_suite_integration_options->public_key) {
    if(cJSON_AddStringToObject(item, "publicKey", alliance_business_suite_integration_options->public_key) == NULL) {
    goto fail; //String
    }
    }


    // alliance_business_suite_integration_options->private_key
    if(alliance_business_suite_integration_options->private_key) {
    if(cJSON_AddStringToObject(item, "privateKey", alliance_business_suite_integration_options->private_key) == NULL) {
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

alliance_business_suite_integration_options_t *alliance_business_suite_integration_options_parseFromJSON(cJSON *alliance_business_suite_integration_optionsJSON){

    alliance_business_suite_integration_options_t *alliance_business_suite_integration_options_local_var = NULL;

    // alliance_business_suite_integration_options->enable
    cJSON *enable = cJSON_GetObjectItemCaseSensitive(alliance_business_suite_integration_optionsJSON, "enable");
    if (enable) { 
    if(!cJSON_IsBool(enable))
    {
    goto end; //Bool
    }
    }

    // alliance_business_suite_integration_options->app_id
    cJSON *app_id = cJSON_GetObjectItemCaseSensitive(alliance_business_suite_integration_optionsJSON, "appId");
    if (app_id) { 
    if(!cJSON_IsString(app_id) && !cJSON_IsNull(app_id))
    {
    goto end; //String
    }
    }

    // alliance_business_suite_integration_options->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(alliance_business_suite_integration_optionsJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // alliance_business_suite_integration_options->public_key
    cJSON *public_key = cJSON_GetObjectItemCaseSensitive(alliance_business_suite_integration_optionsJSON, "publicKey");
    if (public_key) { 
    if(!cJSON_IsString(public_key) && !cJSON_IsNull(public_key))
    {
    goto end; //String
    }
    }

    // alliance_business_suite_integration_options->private_key
    cJSON *private_key = cJSON_GetObjectItemCaseSensitive(alliance_business_suite_integration_optionsJSON, "privateKey");
    if (private_key) { 
    if(!cJSON_IsString(private_key) && !cJSON_IsNull(private_key))
    {
    goto end; //String
    }
    }


    alliance_business_suite_integration_options_local_var = alliance_business_suite_integration_options_create (
        enable ? enable->valueint : 0,
        app_id && !cJSON_IsNull(app_id) ? strdup(app_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        public_key && !cJSON_IsNull(public_key) ? strdup(public_key->valuestring) : NULL,
        private_key && !cJSON_IsNull(private_key) ? strdup(private_key->valuestring) : NULL
        );

    return alliance_business_suite_integration_options_local_var;
end:
    return NULL;

}
