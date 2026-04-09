#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "license_validation_request.h"



license_validation_request_t *license_validation_request_create(
    char *license_key
    ) {
    license_validation_request_t *license_validation_request_local_var = malloc(sizeof(license_validation_request_t));
    if (!license_validation_request_local_var) {
        return NULL;
    }
    license_validation_request_local_var->license_key = license_key;

    return license_validation_request_local_var;
}


void license_validation_request_free(license_validation_request_t *license_validation_request) {
    if(NULL == license_validation_request){
        return ;
    }
    listEntry_t *listEntry;
    if (license_validation_request->license_key) {
        free(license_validation_request->license_key);
        license_validation_request->license_key = NULL;
    }
    free(license_validation_request);
}

cJSON *license_validation_request_convertToJSON(license_validation_request_t *license_validation_request) {
    cJSON *item = cJSON_CreateObject();

    // license_validation_request->license_key
    if (!license_validation_request->license_key) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "licenseKey", license_validation_request->license_key) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

license_validation_request_t *license_validation_request_parseFromJSON(cJSON *license_validation_requestJSON){

    license_validation_request_t *license_validation_request_local_var = NULL;

    // license_validation_request->license_key
    cJSON *license_key = cJSON_GetObjectItemCaseSensitive(license_validation_requestJSON, "licenseKey");
    if (!license_key) {
        goto end;
    }

    
    if(!cJSON_IsString(license_key))
    {
    goto end; //String
    }


    license_validation_request_local_var = license_validation_request_create (
        strdup(license_key->valuestring)
        );

    return license_validation_request_local_var;
end:
    return NULL;

}
