#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "open_exchange_rates_integrations_options.h"



open_exchange_rates_integrations_options_t *open_exchange_rates_integrations_options_create(
    int enable,
    char *app_id
    ) {
    open_exchange_rates_integrations_options_t *open_exchange_rates_integrations_options_local_var = malloc(sizeof(open_exchange_rates_integrations_options_t));
    if (!open_exchange_rates_integrations_options_local_var) {
        return NULL;
    }
    open_exchange_rates_integrations_options_local_var->enable = enable;
    open_exchange_rates_integrations_options_local_var->app_id = app_id;

    return open_exchange_rates_integrations_options_local_var;
}


void open_exchange_rates_integrations_options_free(open_exchange_rates_integrations_options_t *open_exchange_rates_integrations_options) {
    if(NULL == open_exchange_rates_integrations_options){
        return ;
    }
    listEntry_t *listEntry;
    if (open_exchange_rates_integrations_options->app_id) {
        free(open_exchange_rates_integrations_options->app_id);
        open_exchange_rates_integrations_options->app_id = NULL;
    }
    free(open_exchange_rates_integrations_options);
}

cJSON *open_exchange_rates_integrations_options_convertToJSON(open_exchange_rates_integrations_options_t *open_exchange_rates_integrations_options) {
    cJSON *item = cJSON_CreateObject();

    // open_exchange_rates_integrations_options->enable
    if(open_exchange_rates_integrations_options->enable) {
    if(cJSON_AddBoolToObject(item, "enable", open_exchange_rates_integrations_options->enable) == NULL) {
    goto fail; //Bool
    }
    }


    // open_exchange_rates_integrations_options->app_id
    if(open_exchange_rates_integrations_options->app_id) {
    if(cJSON_AddStringToObject(item, "appID", open_exchange_rates_integrations_options->app_id) == NULL) {
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

open_exchange_rates_integrations_options_t *open_exchange_rates_integrations_options_parseFromJSON(cJSON *open_exchange_rates_integrations_optionsJSON){

    open_exchange_rates_integrations_options_t *open_exchange_rates_integrations_options_local_var = NULL;

    // open_exchange_rates_integrations_options->enable
    cJSON *enable = cJSON_GetObjectItemCaseSensitive(open_exchange_rates_integrations_optionsJSON, "enable");
    if (enable) { 
    if(!cJSON_IsBool(enable))
    {
    goto end; //Bool
    }
    }

    // open_exchange_rates_integrations_options->app_id
    cJSON *app_id = cJSON_GetObjectItemCaseSensitive(open_exchange_rates_integrations_optionsJSON, "appID");
    if (app_id) { 
    if(!cJSON_IsString(app_id) && !cJSON_IsNull(app_id))
    {
    goto end; //String
    }
    }


    open_exchange_rates_integrations_options_local_var = open_exchange_rates_integrations_options_create (
        enable ? enable->valueint : 0,
        app_id && !cJSON_IsNull(app_id) ? strdup(app_id->valuestring) : NULL
        );

    return open_exchange_rates_integrations_options_local_var;
end:
    return NULL;

}
