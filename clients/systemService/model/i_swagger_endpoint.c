#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "i_swagger_endpoint.h"



i_swagger_endpoint_t *i_swagger_endpoint_create(
    int enable,
    char *name,
    char *url
    ) {
    i_swagger_endpoint_t *i_swagger_endpoint_local_var = malloc(sizeof(i_swagger_endpoint_t));
    if (!i_swagger_endpoint_local_var) {
        return NULL;
    }
    i_swagger_endpoint_local_var->enable = enable;
    i_swagger_endpoint_local_var->name = name;
    i_swagger_endpoint_local_var->url = url;

    return i_swagger_endpoint_local_var;
}


void i_swagger_endpoint_free(i_swagger_endpoint_t *i_swagger_endpoint) {
    if(NULL == i_swagger_endpoint){
        return ;
    }
    listEntry_t *listEntry;
    if (i_swagger_endpoint->name) {
        free(i_swagger_endpoint->name);
        i_swagger_endpoint->name = NULL;
    }
    if (i_swagger_endpoint->url) {
        free(i_swagger_endpoint->url);
        i_swagger_endpoint->url = NULL;
    }
    free(i_swagger_endpoint);
}

cJSON *i_swagger_endpoint_convertToJSON(i_swagger_endpoint_t *i_swagger_endpoint) {
    cJSON *item = cJSON_CreateObject();

    // i_swagger_endpoint->enable
    if(i_swagger_endpoint->enable) {
    if(cJSON_AddBoolToObject(item, "enable", i_swagger_endpoint->enable) == NULL) {
    goto fail; //Bool
    }
    }


    // i_swagger_endpoint->name
    if(i_swagger_endpoint->name) {
    if(cJSON_AddStringToObject(item, "name", i_swagger_endpoint->name) == NULL) {
    goto fail; //String
    }
    }


    // i_swagger_endpoint->url
    if(i_swagger_endpoint->url) {
    if(cJSON_AddStringToObject(item, "url", i_swagger_endpoint->url) == NULL) {
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

i_swagger_endpoint_t *i_swagger_endpoint_parseFromJSON(cJSON *i_swagger_endpointJSON){

    i_swagger_endpoint_t *i_swagger_endpoint_local_var = NULL;

    // i_swagger_endpoint->enable
    cJSON *enable = cJSON_GetObjectItemCaseSensitive(i_swagger_endpointJSON, "enable");
    if (enable) { 
    if(!cJSON_IsBool(enable))
    {
    goto end; //Bool
    }
    }

    // i_swagger_endpoint->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(i_swagger_endpointJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // i_swagger_endpoint->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(i_swagger_endpointJSON, "url");
    if (url) { 
    if(!cJSON_IsString(url) && !cJSON_IsNull(url))
    {
    goto end; //String
    }
    }


    i_swagger_endpoint_local_var = i_swagger_endpoint_create (
        enable ? enable->valueint : 0,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        url && !cJSON_IsNull(url) ? strdup(url->valuestring) : NULL
        );

    return i_swagger_endpoint_local_var;
end:
    return NULL;

}
