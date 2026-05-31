#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "license_validation_error.h"



license_validation_error_t *license_validation_error_create(
    char *message,
    char *how_to_resolve
    ) {
    license_validation_error_t *license_validation_error_local_var = malloc(sizeof(license_validation_error_t));
    if (!license_validation_error_local_var) {
        return NULL;
    }
    license_validation_error_local_var->message = message;
    license_validation_error_local_var->how_to_resolve = how_to_resolve;

    return license_validation_error_local_var;
}


void license_validation_error_free(license_validation_error_t *license_validation_error) {
    if(NULL == license_validation_error){
        return ;
    }
    listEntry_t *listEntry;
    if (license_validation_error->message) {
        free(license_validation_error->message);
        license_validation_error->message = NULL;
    }
    if (license_validation_error->how_to_resolve) {
        free(license_validation_error->how_to_resolve);
        license_validation_error->how_to_resolve = NULL;
    }
    free(license_validation_error);
}

cJSON *license_validation_error_convertToJSON(license_validation_error_t *license_validation_error) {
    cJSON *item = cJSON_CreateObject();

    // license_validation_error->message
    if(license_validation_error->message) {
    if(cJSON_AddStringToObject(item, "message", license_validation_error->message) == NULL) {
    goto fail; //String
    }
    }


    // license_validation_error->how_to_resolve
    if(license_validation_error->how_to_resolve) {
    if(cJSON_AddStringToObject(item, "howToResolve", license_validation_error->how_to_resolve) == NULL) {
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

license_validation_error_t *license_validation_error_parseFromJSON(cJSON *license_validation_errorJSON){

    license_validation_error_t *license_validation_error_local_var = NULL;

    // license_validation_error->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(license_validation_errorJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message) && !cJSON_IsNull(message))
    {
    goto end; //String
    }
    }

    // license_validation_error->how_to_resolve
    cJSON *how_to_resolve = cJSON_GetObjectItemCaseSensitive(license_validation_errorJSON, "howToResolve");
    if (how_to_resolve) { 
    if(!cJSON_IsString(how_to_resolve) && !cJSON_IsNull(how_to_resolve))
    {
    goto end; //String
    }
    }


    license_validation_error_local_var = license_validation_error_create (
        message && !cJSON_IsNull(message) ? strdup(message->valuestring) : NULL,
        how_to_resolve && !cJSON_IsNull(how_to_resolve) ? strdup(how_to_resolve->valuestring) : NULL
        );

    return license_validation_error_local_var;
end:
    return NULL;

}
