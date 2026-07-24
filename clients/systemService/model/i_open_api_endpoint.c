#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "i_open_api_endpoint.h"



i_open_api_endpoint_t *i_open_api_endpoint_create(
    int enable,
    char *name,
    char *url
    ) {
    i_open_api_endpoint_t *i_open_api_endpoint_local_var = malloc(sizeof(i_open_api_endpoint_t));
    if (!i_open_api_endpoint_local_var) {
        return NULL;
    }
    i_open_api_endpoint_local_var->enable = enable;
    i_open_api_endpoint_local_var->name = name;
    i_open_api_endpoint_local_var->url = url;

    return i_open_api_endpoint_local_var;
}


void i_open_api_endpoint_free(i_open_api_endpoint_t *i_open_api_endpoint) {
    if(NULL == i_open_api_endpoint){
        return ;
    }
    listEntry_t *listEntry;
    if (i_open_api_endpoint->name) {
        free(i_open_api_endpoint->name);
        i_open_api_endpoint->name = NULL;
    }
    if (i_open_api_endpoint->url) {
        free(i_open_api_endpoint->url);
        i_open_api_endpoint->url = NULL;
    }
    free(i_open_api_endpoint);
}

cJSON *i_open_api_endpoint_convertToJSON(i_open_api_endpoint_t *i_open_api_endpoint) {
    cJSON *item = cJSON_CreateObject();

    // i_open_api_endpoint->enable
    if(i_open_api_endpoint->enable) {
    if(cJSON_AddBoolToObject(item, "enable", i_open_api_endpoint->enable) == NULL) {
    goto fail; //Bool
    }
    }


    // i_open_api_endpoint->name
    if(i_open_api_endpoint->name) {
    if(cJSON_AddStringToObject(item, "name", i_open_api_endpoint->name) == NULL) {
    goto fail; //String
    }
    }


    // i_open_api_endpoint->url
    if(i_open_api_endpoint->url) {
    if(cJSON_AddStringToObject(item, "url", i_open_api_endpoint->url) == NULL) {
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

i_open_api_endpoint_t *i_open_api_endpoint_parseFromJSON(cJSON *i_open_api_endpointJSON){

    i_open_api_endpoint_t *i_open_api_endpoint_local_var = NULL;

    // i_open_api_endpoint->enable
    cJSON *enable = cJSON_GetObjectItemCaseSensitive(i_open_api_endpointJSON, "enable");
    if (enable) { 
    if(!cJSON_IsBool(enable))
    {
    goto end; //Bool
    }
    }

    // i_open_api_endpoint->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(i_open_api_endpointJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // i_open_api_endpoint->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(i_open_api_endpointJSON, "url");
    if (url) { 
    if(!cJSON_IsString(url) && !cJSON_IsNull(url))
    {
    goto end; //String
    }
    }


    i_open_api_endpoint_local_var = i_open_api_endpoint_create (
        enable ? enable->valueint : 0,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        url && !cJSON_IsNull(url) ? strdup(url->valuestring) : NULL
        );

    return i_open_api_endpoint_local_var;
end:
    return NULL;

}
