#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "free_geo_ip_integration_options.h"



free_geo_ip_integration_options_t *free_geo_ip_integration_options_create(
    int enable,
    char *api_key
    ) {
    free_geo_ip_integration_options_t *free_geo_ip_integration_options_local_var = malloc(sizeof(free_geo_ip_integration_options_t));
    if (!free_geo_ip_integration_options_local_var) {
        return NULL;
    }
    free_geo_ip_integration_options_local_var->enable = enable;
    free_geo_ip_integration_options_local_var->api_key = api_key;

    return free_geo_ip_integration_options_local_var;
}


void free_geo_ip_integration_options_free(free_geo_ip_integration_options_t *free_geo_ip_integration_options) {
    if(NULL == free_geo_ip_integration_options){
        return ;
    }
    listEntry_t *listEntry;
    if (free_geo_ip_integration_options->api_key) {
        free(free_geo_ip_integration_options->api_key);
        free_geo_ip_integration_options->api_key = NULL;
    }
    free(free_geo_ip_integration_options);
}

cJSON *free_geo_ip_integration_options_convertToJSON(free_geo_ip_integration_options_t *free_geo_ip_integration_options) {
    cJSON *item = cJSON_CreateObject();

    // free_geo_ip_integration_options->enable
    if(free_geo_ip_integration_options->enable) {
    if(cJSON_AddBoolToObject(item, "enable", free_geo_ip_integration_options->enable) == NULL) {
    goto fail; //Bool
    }
    }


    // free_geo_ip_integration_options->api_key
    if(free_geo_ip_integration_options->api_key) {
    if(cJSON_AddStringToObject(item, "apiKey", free_geo_ip_integration_options->api_key) == NULL) {
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

free_geo_ip_integration_options_t *free_geo_ip_integration_options_parseFromJSON(cJSON *free_geo_ip_integration_optionsJSON){

    free_geo_ip_integration_options_t *free_geo_ip_integration_options_local_var = NULL;

    // free_geo_ip_integration_options->enable
    cJSON *enable = cJSON_GetObjectItemCaseSensitive(free_geo_ip_integration_optionsJSON, "enable");
    if (enable) { 
    if(!cJSON_IsBool(enable))
    {
    goto end; //Bool
    }
    }

    // free_geo_ip_integration_options->api_key
    cJSON *api_key = cJSON_GetObjectItemCaseSensitive(free_geo_ip_integration_optionsJSON, "apiKey");
    if (api_key) { 
    if(!cJSON_IsString(api_key) && !cJSON_IsNull(api_key))
    {
    goto end; //String
    }
    }


    free_geo_ip_integration_options_local_var = free_geo_ip_integration_options_create (
        enable ? enable->valueint : 0,
        api_key && !cJSON_IsNull(api_key) ? strdup(api_key->valuestring) : NULL
        );

    return free_geo_ip_integration_options_local_var;
end:
    return NULL;

}
