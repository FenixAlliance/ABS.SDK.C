#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "i_swagger_spec.h"



i_swagger_spec_t *i_swagger_spec_create(
    int enable,
    char *name,
    char *title,
    char *version,
    char *description,
    char *terms_of_service,
    i_swagger_endpoint_t *swagger_endpoint,
    i_swagger_contact_t *open_api_contact,
    i_swagger_license_t *license
    ) {
    i_swagger_spec_t *i_swagger_spec_local_var = malloc(sizeof(i_swagger_spec_t));
    if (!i_swagger_spec_local_var) {
        return NULL;
    }
    i_swagger_spec_local_var->enable = enable;
    i_swagger_spec_local_var->name = name;
    i_swagger_spec_local_var->title = title;
    i_swagger_spec_local_var->version = version;
    i_swagger_spec_local_var->description = description;
    i_swagger_spec_local_var->terms_of_service = terms_of_service;
    i_swagger_spec_local_var->swagger_endpoint = swagger_endpoint;
    i_swagger_spec_local_var->open_api_contact = open_api_contact;
    i_swagger_spec_local_var->license = license;

    return i_swagger_spec_local_var;
}


void i_swagger_spec_free(i_swagger_spec_t *i_swagger_spec) {
    if(NULL == i_swagger_spec){
        return ;
    }
    listEntry_t *listEntry;
    if (i_swagger_spec->name) {
        free(i_swagger_spec->name);
        i_swagger_spec->name = NULL;
    }
    if (i_swagger_spec->title) {
        free(i_swagger_spec->title);
        i_swagger_spec->title = NULL;
    }
    if (i_swagger_spec->version) {
        free(i_swagger_spec->version);
        i_swagger_spec->version = NULL;
    }
    if (i_swagger_spec->description) {
        free(i_swagger_spec->description);
        i_swagger_spec->description = NULL;
    }
    if (i_swagger_spec->terms_of_service) {
        free(i_swagger_spec->terms_of_service);
        i_swagger_spec->terms_of_service = NULL;
    }
    if (i_swagger_spec->swagger_endpoint) {
        i_swagger_endpoint_free(i_swagger_spec->swagger_endpoint);
        i_swagger_spec->swagger_endpoint = NULL;
    }
    if (i_swagger_spec->open_api_contact) {
        i_swagger_contact_free(i_swagger_spec->open_api_contact);
        i_swagger_spec->open_api_contact = NULL;
    }
    if (i_swagger_spec->license) {
        i_swagger_license_free(i_swagger_spec->license);
        i_swagger_spec->license = NULL;
    }
    free(i_swagger_spec);
}

cJSON *i_swagger_spec_convertToJSON(i_swagger_spec_t *i_swagger_spec) {
    cJSON *item = cJSON_CreateObject();

    // i_swagger_spec->enable
    if(i_swagger_spec->enable) {
    if(cJSON_AddBoolToObject(item, "enable", i_swagger_spec->enable) == NULL) {
    goto fail; //Bool
    }
    }


    // i_swagger_spec->name
    if(i_swagger_spec->name) {
    if(cJSON_AddStringToObject(item, "name", i_swagger_spec->name) == NULL) {
    goto fail; //String
    }
    }


    // i_swagger_spec->title
    if(i_swagger_spec->title) {
    if(cJSON_AddStringToObject(item, "title", i_swagger_spec->title) == NULL) {
    goto fail; //String
    }
    }


    // i_swagger_spec->version
    if(i_swagger_spec->version) {
    if(cJSON_AddStringToObject(item, "version", i_swagger_spec->version) == NULL) {
    goto fail; //String
    }
    }


    // i_swagger_spec->description
    if(i_swagger_spec->description) {
    if(cJSON_AddStringToObject(item, "description", i_swagger_spec->description) == NULL) {
    goto fail; //String
    }
    }


    // i_swagger_spec->terms_of_service
    if(i_swagger_spec->terms_of_service) {
    if(cJSON_AddStringToObject(item, "termsOfService", i_swagger_spec->terms_of_service) == NULL) {
    goto fail; //String
    }
    }


    // i_swagger_spec->swagger_endpoint
    if(i_swagger_spec->swagger_endpoint) {
    cJSON *swagger_endpoint_local_JSON = i_swagger_endpoint_convertToJSON(i_swagger_spec->swagger_endpoint);
    if(swagger_endpoint_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "swaggerEndpoint", swagger_endpoint_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // i_swagger_spec->open_api_contact
    if(i_swagger_spec->open_api_contact) {
    cJSON *open_api_contact_local_JSON = i_swagger_contact_convertToJSON(i_swagger_spec->open_api_contact);
    if(open_api_contact_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "openApiContact", open_api_contact_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // i_swagger_spec->license
    if(i_swagger_spec->license) {
    cJSON *license_local_JSON = i_swagger_license_convertToJSON(i_swagger_spec->license);
    if(license_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "license", license_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

i_swagger_spec_t *i_swagger_spec_parseFromJSON(cJSON *i_swagger_specJSON){

    i_swagger_spec_t *i_swagger_spec_local_var = NULL;

    // define the local variable for i_swagger_spec->swagger_endpoint
    i_swagger_endpoint_t *swagger_endpoint_local_nonprim = NULL;

    // define the local variable for i_swagger_spec->open_api_contact
    i_swagger_contact_t *open_api_contact_local_nonprim = NULL;

    // define the local variable for i_swagger_spec->license
    i_swagger_license_t *license_local_nonprim = NULL;

    // i_swagger_spec->enable
    cJSON *enable = cJSON_GetObjectItemCaseSensitive(i_swagger_specJSON, "enable");
    if (enable) { 
    if(!cJSON_IsBool(enable))
    {
    goto end; //Bool
    }
    }

    // i_swagger_spec->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(i_swagger_specJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // i_swagger_spec->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(i_swagger_specJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // i_swagger_spec->version
    cJSON *version = cJSON_GetObjectItemCaseSensitive(i_swagger_specJSON, "version");
    if (version) { 
    if(!cJSON_IsString(version) && !cJSON_IsNull(version))
    {
    goto end; //String
    }
    }

    // i_swagger_spec->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(i_swagger_specJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // i_swagger_spec->terms_of_service
    cJSON *terms_of_service = cJSON_GetObjectItemCaseSensitive(i_swagger_specJSON, "termsOfService");
    if (terms_of_service) { 
    if(!cJSON_IsString(terms_of_service) && !cJSON_IsNull(terms_of_service))
    {
    goto end; //String
    }
    }

    // i_swagger_spec->swagger_endpoint
    cJSON *swagger_endpoint = cJSON_GetObjectItemCaseSensitive(i_swagger_specJSON, "swaggerEndpoint");
    if (swagger_endpoint) { 
    swagger_endpoint_local_nonprim = i_swagger_endpoint_parseFromJSON(swagger_endpoint); //nonprimitive
    }

    // i_swagger_spec->open_api_contact
    cJSON *open_api_contact = cJSON_GetObjectItemCaseSensitive(i_swagger_specJSON, "openApiContact");
    if (open_api_contact) { 
    open_api_contact_local_nonprim = i_swagger_contact_parseFromJSON(open_api_contact); //nonprimitive
    }

    // i_swagger_spec->license
    cJSON *license = cJSON_GetObjectItemCaseSensitive(i_swagger_specJSON, "license");
    if (license) { 
    license_local_nonprim = i_swagger_license_parseFromJSON(license); //nonprimitive
    }


    i_swagger_spec_local_var = i_swagger_spec_create (
        enable ? enable->valueint : 0,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        version && !cJSON_IsNull(version) ? strdup(version->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        terms_of_service && !cJSON_IsNull(terms_of_service) ? strdup(terms_of_service->valuestring) : NULL,
        swagger_endpoint ? swagger_endpoint_local_nonprim : NULL,
        open_api_contact ? open_api_contact_local_nonprim : NULL,
        license ? license_local_nonprim : NULL
        );

    return i_swagger_spec_local_var;
end:
    if (swagger_endpoint_local_nonprim) {
        i_swagger_endpoint_free(swagger_endpoint_local_nonprim);
        swagger_endpoint_local_nonprim = NULL;
    }
    if (open_api_contact_local_nonprim) {
        i_swagger_contact_free(open_api_contact_local_nonprim);
        open_api_contact_local_nonprim = NULL;
    }
    if (license_local_nonprim) {
        i_swagger_license_free(license_local_nonprim);
        license_local_nonprim = NULL;
    }
    return NULL;

}
