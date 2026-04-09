#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "infinity_comex_integration_options.h"



infinity_comex_integration_options_t *infinity_comex_integration_options_create(
    int enable,
    char *app_id,
    char *tenant_id,
    char *public_key,
    char *private_key
    ) {
    infinity_comex_integration_options_t *infinity_comex_integration_options_local_var = malloc(sizeof(infinity_comex_integration_options_t));
    if (!infinity_comex_integration_options_local_var) {
        return NULL;
    }
    infinity_comex_integration_options_local_var->enable = enable;
    infinity_comex_integration_options_local_var->app_id = app_id;
    infinity_comex_integration_options_local_var->tenant_id = tenant_id;
    infinity_comex_integration_options_local_var->public_key = public_key;
    infinity_comex_integration_options_local_var->private_key = private_key;

    return infinity_comex_integration_options_local_var;
}


void infinity_comex_integration_options_free(infinity_comex_integration_options_t *infinity_comex_integration_options) {
    if(NULL == infinity_comex_integration_options){
        return ;
    }
    listEntry_t *listEntry;
    if (infinity_comex_integration_options->app_id) {
        free(infinity_comex_integration_options->app_id);
        infinity_comex_integration_options->app_id = NULL;
    }
    if (infinity_comex_integration_options->tenant_id) {
        free(infinity_comex_integration_options->tenant_id);
        infinity_comex_integration_options->tenant_id = NULL;
    }
    if (infinity_comex_integration_options->public_key) {
        free(infinity_comex_integration_options->public_key);
        infinity_comex_integration_options->public_key = NULL;
    }
    if (infinity_comex_integration_options->private_key) {
        free(infinity_comex_integration_options->private_key);
        infinity_comex_integration_options->private_key = NULL;
    }
    free(infinity_comex_integration_options);
}

cJSON *infinity_comex_integration_options_convertToJSON(infinity_comex_integration_options_t *infinity_comex_integration_options) {
    cJSON *item = cJSON_CreateObject();

    // infinity_comex_integration_options->enable
    if(infinity_comex_integration_options->enable) {
    if(cJSON_AddBoolToObject(item, "enable", infinity_comex_integration_options->enable) == NULL) {
    goto fail; //Bool
    }
    }


    // infinity_comex_integration_options->app_id
    if(infinity_comex_integration_options->app_id) {
    if(cJSON_AddStringToObject(item, "appId", infinity_comex_integration_options->app_id) == NULL) {
    goto fail; //String
    }
    }


    // infinity_comex_integration_options->tenant_id
    if(infinity_comex_integration_options->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", infinity_comex_integration_options->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // infinity_comex_integration_options->public_key
    if(infinity_comex_integration_options->public_key) {
    if(cJSON_AddStringToObject(item, "publicKey", infinity_comex_integration_options->public_key) == NULL) {
    goto fail; //String
    }
    }


    // infinity_comex_integration_options->private_key
    if(infinity_comex_integration_options->private_key) {
    if(cJSON_AddStringToObject(item, "privateKey", infinity_comex_integration_options->private_key) == NULL) {
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

infinity_comex_integration_options_t *infinity_comex_integration_options_parseFromJSON(cJSON *infinity_comex_integration_optionsJSON){

    infinity_comex_integration_options_t *infinity_comex_integration_options_local_var = NULL;

    // infinity_comex_integration_options->enable
    cJSON *enable = cJSON_GetObjectItemCaseSensitive(infinity_comex_integration_optionsJSON, "enable");
    if (enable) { 
    if(!cJSON_IsBool(enable))
    {
    goto end; //Bool
    }
    }

    // infinity_comex_integration_options->app_id
    cJSON *app_id = cJSON_GetObjectItemCaseSensitive(infinity_comex_integration_optionsJSON, "appId");
    if (app_id) { 
    if(!cJSON_IsString(app_id) && !cJSON_IsNull(app_id))
    {
    goto end; //String
    }
    }

    // infinity_comex_integration_options->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(infinity_comex_integration_optionsJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // infinity_comex_integration_options->public_key
    cJSON *public_key = cJSON_GetObjectItemCaseSensitive(infinity_comex_integration_optionsJSON, "publicKey");
    if (public_key) { 
    if(!cJSON_IsString(public_key) && !cJSON_IsNull(public_key))
    {
    goto end; //String
    }
    }

    // infinity_comex_integration_options->private_key
    cJSON *private_key = cJSON_GetObjectItemCaseSensitive(infinity_comex_integration_optionsJSON, "privateKey");
    if (private_key) { 
    if(!cJSON_IsString(private_key) && !cJSON_IsNull(private_key))
    {
    goto end; //String
    }
    }


    infinity_comex_integration_options_local_var = infinity_comex_integration_options_create (
        enable ? enable->valueint : 0,
        app_id && !cJSON_IsNull(app_id) ? strdup(app_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        public_key && !cJSON_IsNull(public_key) ? strdup(public_key->valuestring) : NULL,
        private_key && !cJSON_IsNull(private_key) ? strdup(private_key->valuestring) : NULL
        );

    return infinity_comex_integration_options_local_var;
end:
    return NULL;

}
