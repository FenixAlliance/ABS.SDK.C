#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "google_maps_integration_options.h"



google_maps_integration_options_t *google_maps_integration_options_create(
    int enable,
    char *api_key
    ) {
    google_maps_integration_options_t *google_maps_integration_options_local_var = malloc(sizeof(google_maps_integration_options_t));
    if (!google_maps_integration_options_local_var) {
        return NULL;
    }
    google_maps_integration_options_local_var->enable = enable;
    google_maps_integration_options_local_var->api_key = api_key;

    return google_maps_integration_options_local_var;
}


void google_maps_integration_options_free(google_maps_integration_options_t *google_maps_integration_options) {
    if(NULL == google_maps_integration_options){
        return ;
    }
    listEntry_t *listEntry;
    if (google_maps_integration_options->api_key) {
        free(google_maps_integration_options->api_key);
        google_maps_integration_options->api_key = NULL;
    }
    free(google_maps_integration_options);
}

cJSON *google_maps_integration_options_convertToJSON(google_maps_integration_options_t *google_maps_integration_options) {
    cJSON *item = cJSON_CreateObject();

    // google_maps_integration_options->enable
    if(google_maps_integration_options->enable) {
    if(cJSON_AddBoolToObject(item, "enable", google_maps_integration_options->enable) == NULL) {
    goto fail; //Bool
    }
    }


    // google_maps_integration_options->api_key
    if(google_maps_integration_options->api_key) {
    if(cJSON_AddStringToObject(item, "apiKey", google_maps_integration_options->api_key) == NULL) {
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

google_maps_integration_options_t *google_maps_integration_options_parseFromJSON(cJSON *google_maps_integration_optionsJSON){

    google_maps_integration_options_t *google_maps_integration_options_local_var = NULL;

    // google_maps_integration_options->enable
    cJSON *enable = cJSON_GetObjectItemCaseSensitive(google_maps_integration_optionsJSON, "enable");
    if (enable) { 
    if(!cJSON_IsBool(enable))
    {
    goto end; //Bool
    }
    }

    // google_maps_integration_options->api_key
    cJSON *api_key = cJSON_GetObjectItemCaseSensitive(google_maps_integration_optionsJSON, "apiKey");
    if (api_key) { 
    if(!cJSON_IsString(api_key) && !cJSON_IsNull(api_key))
    {
    goto end; //String
    }
    }


    google_maps_integration_options_local_var = google_maps_integration_options_create (
        enable ? enable->valueint : 0,
        api_key && !cJSON_IsNull(api_key) ? strdup(api_key->valuestring) : NULL
        );

    return google_maps_integration_options_local_var;
end:
    return NULL;

}
