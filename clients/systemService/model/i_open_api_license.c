#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "i_open_api_license.h"



i_open_api_license_t *i_open_api_license_create(
    char *name,
    char *url
    ) {
    i_open_api_license_t *i_open_api_license_local_var = malloc(sizeof(i_open_api_license_t));
    if (!i_open_api_license_local_var) {
        return NULL;
    }
    i_open_api_license_local_var->name = name;
    i_open_api_license_local_var->url = url;

    return i_open_api_license_local_var;
}


void i_open_api_license_free(i_open_api_license_t *i_open_api_license) {
    if(NULL == i_open_api_license){
        return ;
    }
    listEntry_t *listEntry;
    if (i_open_api_license->name) {
        free(i_open_api_license->name);
        i_open_api_license->name = NULL;
    }
    if (i_open_api_license->url) {
        free(i_open_api_license->url);
        i_open_api_license->url = NULL;
    }
    free(i_open_api_license);
}

cJSON *i_open_api_license_convertToJSON(i_open_api_license_t *i_open_api_license) {
    cJSON *item = cJSON_CreateObject();

    // i_open_api_license->name
    if(i_open_api_license->name) {
    if(cJSON_AddStringToObject(item, "name", i_open_api_license->name) == NULL) {
    goto fail; //String
    }
    }


    // i_open_api_license->url
    if(i_open_api_license->url) {
    if(cJSON_AddStringToObject(item, "url", i_open_api_license->url) == NULL) {
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

i_open_api_license_t *i_open_api_license_parseFromJSON(cJSON *i_open_api_licenseJSON){

    i_open_api_license_t *i_open_api_license_local_var = NULL;

    // i_open_api_license->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(i_open_api_licenseJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // i_open_api_license->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(i_open_api_licenseJSON, "url");
    if (url) { 
    if(!cJSON_IsString(url) && !cJSON_IsNull(url))
    {
    goto end; //String
    }
    }


    i_open_api_license_local_var = i_open_api_license_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        url && !cJSON_IsNull(url) ? strdup(url->valuestring) : NULL
        );

    return i_open_api_license_local_var;
end:
    return NULL;

}
