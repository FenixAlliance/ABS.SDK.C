#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "i_swagger_license.h"



i_swagger_license_t *i_swagger_license_create(
    char *name,
    char *url
    ) {
    i_swagger_license_t *i_swagger_license_local_var = malloc(sizeof(i_swagger_license_t));
    if (!i_swagger_license_local_var) {
        return NULL;
    }
    i_swagger_license_local_var->name = name;
    i_swagger_license_local_var->url = url;

    return i_swagger_license_local_var;
}


void i_swagger_license_free(i_swagger_license_t *i_swagger_license) {
    if(NULL == i_swagger_license){
        return ;
    }
    listEntry_t *listEntry;
    if (i_swagger_license->name) {
        free(i_swagger_license->name);
        i_swagger_license->name = NULL;
    }
    if (i_swagger_license->url) {
        free(i_swagger_license->url);
        i_swagger_license->url = NULL;
    }
    free(i_swagger_license);
}

cJSON *i_swagger_license_convertToJSON(i_swagger_license_t *i_swagger_license) {
    cJSON *item = cJSON_CreateObject();

    // i_swagger_license->name
    if(i_swagger_license->name) {
    if(cJSON_AddStringToObject(item, "name", i_swagger_license->name) == NULL) {
    goto fail; //String
    }
    }


    // i_swagger_license->url
    if(i_swagger_license->url) {
    if(cJSON_AddStringToObject(item, "url", i_swagger_license->url) == NULL) {
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

i_swagger_license_t *i_swagger_license_parseFromJSON(cJSON *i_swagger_licenseJSON){

    i_swagger_license_t *i_swagger_license_local_var = NULL;

    // i_swagger_license->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(i_swagger_licenseJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // i_swagger_license->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(i_swagger_licenseJSON, "url");
    if (url) { 
    if(!cJSON_IsString(url) && !cJSON_IsNull(url))
    {
    goto end; //String
    }
    }


    i_swagger_license_local_var = i_swagger_license_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        url && !cJSON_IsNull(url) ? strdup(url->valuestring) : NULL
        );

    return i_swagger_license_local_var;
end:
    return NULL;

}
