#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "i_open_api_definition_spec.h"



i_open_api_definition_spec_t *i_open_api_definition_spec_create(
    int enable,
    char *name,
    char *title,
    char *version,
    char *description,
    char *terms_of_service,
    i_open_api_endpoint_t *open_api_endpoint,
    i_open_api_contact_t *open_api_contact,
    i_open_api_license_t *license
    ) {
    i_open_api_definition_spec_t *i_open_api_definition_spec_local_var = malloc(sizeof(i_open_api_definition_spec_t));
    if (!i_open_api_definition_spec_local_var) {
        return NULL;
    }
    i_open_api_definition_spec_local_var->enable = enable;
    i_open_api_definition_spec_local_var->name = name;
    i_open_api_definition_spec_local_var->title = title;
    i_open_api_definition_spec_local_var->version = version;
    i_open_api_definition_spec_local_var->description = description;
    i_open_api_definition_spec_local_var->terms_of_service = terms_of_service;
    i_open_api_definition_spec_local_var->open_api_endpoint = open_api_endpoint;
    i_open_api_definition_spec_local_var->open_api_contact = open_api_contact;
    i_open_api_definition_spec_local_var->license = license;

    return i_open_api_definition_spec_local_var;
}


void i_open_api_definition_spec_free(i_open_api_definition_spec_t *i_open_api_definition_spec) {
    if(NULL == i_open_api_definition_spec){
        return ;
    }
    listEntry_t *listEntry;
    if (i_open_api_definition_spec->name) {
        free(i_open_api_definition_spec->name);
        i_open_api_definition_spec->name = NULL;
    }
    if (i_open_api_definition_spec->title) {
        free(i_open_api_definition_spec->title);
        i_open_api_definition_spec->title = NULL;
    }
    if (i_open_api_definition_spec->version) {
        free(i_open_api_definition_spec->version);
        i_open_api_definition_spec->version = NULL;
    }
    if (i_open_api_definition_spec->description) {
        free(i_open_api_definition_spec->description);
        i_open_api_definition_spec->description = NULL;
    }
    if (i_open_api_definition_spec->terms_of_service) {
        free(i_open_api_definition_spec->terms_of_service);
        i_open_api_definition_spec->terms_of_service = NULL;
    }
    if (i_open_api_definition_spec->open_api_endpoint) {
        i_open_api_endpoint_free(i_open_api_definition_spec->open_api_endpoint);
        i_open_api_definition_spec->open_api_endpoint = NULL;
    }
    if (i_open_api_definition_spec->open_api_contact) {
        i_open_api_contact_free(i_open_api_definition_spec->open_api_contact);
        i_open_api_definition_spec->open_api_contact = NULL;
    }
    if (i_open_api_definition_spec->license) {
        i_open_api_license_free(i_open_api_definition_spec->license);
        i_open_api_definition_spec->license = NULL;
    }
    free(i_open_api_definition_spec);
}

cJSON *i_open_api_definition_spec_convertToJSON(i_open_api_definition_spec_t *i_open_api_definition_spec) {
    cJSON *item = cJSON_CreateObject();

    // i_open_api_definition_spec->enable
    if(i_open_api_definition_spec->enable) {
    if(cJSON_AddBoolToObject(item, "enable", i_open_api_definition_spec->enable) == NULL) {
    goto fail; //Bool
    }
    }


    // i_open_api_definition_spec->name
    if(i_open_api_definition_spec->name) {
    if(cJSON_AddStringToObject(item, "name", i_open_api_definition_spec->name) == NULL) {
    goto fail; //String
    }
    }


    // i_open_api_definition_spec->title
    if(i_open_api_definition_spec->title) {
    if(cJSON_AddStringToObject(item, "title", i_open_api_definition_spec->title) == NULL) {
    goto fail; //String
    }
    }


    // i_open_api_definition_spec->version
    if(i_open_api_definition_spec->version) {
    if(cJSON_AddStringToObject(item, "version", i_open_api_definition_spec->version) == NULL) {
    goto fail; //String
    }
    }


    // i_open_api_definition_spec->description
    if(i_open_api_definition_spec->description) {
    if(cJSON_AddStringToObject(item, "description", i_open_api_definition_spec->description) == NULL) {
    goto fail; //String
    }
    }


    // i_open_api_definition_spec->terms_of_service
    if(i_open_api_definition_spec->terms_of_service) {
    if(cJSON_AddStringToObject(item, "termsOfService", i_open_api_definition_spec->terms_of_service) == NULL) {
    goto fail; //String
    }
    }


    // i_open_api_definition_spec->open_api_endpoint
    if(i_open_api_definition_spec->open_api_endpoint) {
    cJSON *open_api_endpoint_local_JSON = i_open_api_endpoint_convertToJSON(i_open_api_definition_spec->open_api_endpoint);
    if(open_api_endpoint_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "openApiEndpoint", open_api_endpoint_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // i_open_api_definition_spec->open_api_contact
    if(i_open_api_definition_spec->open_api_contact) {
    cJSON *open_api_contact_local_JSON = i_open_api_contact_convertToJSON(i_open_api_definition_spec->open_api_contact);
    if(open_api_contact_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "openApiContact", open_api_contact_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // i_open_api_definition_spec->license
    if(i_open_api_definition_spec->license) {
    cJSON *license_local_JSON = i_open_api_license_convertToJSON(i_open_api_definition_spec->license);
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

i_open_api_definition_spec_t *i_open_api_definition_spec_parseFromJSON(cJSON *i_open_api_definition_specJSON){

    i_open_api_definition_spec_t *i_open_api_definition_spec_local_var = NULL;

    // define the local variable for i_open_api_definition_spec->open_api_endpoint
    i_open_api_endpoint_t *open_api_endpoint_local_nonprim = NULL;

    // define the local variable for i_open_api_definition_spec->open_api_contact
    i_open_api_contact_t *open_api_contact_local_nonprim = NULL;

    // define the local variable for i_open_api_definition_spec->license
    i_open_api_license_t *license_local_nonprim = NULL;

    // i_open_api_definition_spec->enable
    cJSON *enable = cJSON_GetObjectItemCaseSensitive(i_open_api_definition_specJSON, "enable");
    if (enable) { 
    if(!cJSON_IsBool(enable))
    {
    goto end; //Bool
    }
    }

    // i_open_api_definition_spec->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(i_open_api_definition_specJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // i_open_api_definition_spec->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(i_open_api_definition_specJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // i_open_api_definition_spec->version
    cJSON *version = cJSON_GetObjectItemCaseSensitive(i_open_api_definition_specJSON, "version");
    if (version) { 
    if(!cJSON_IsString(version) && !cJSON_IsNull(version))
    {
    goto end; //String
    }
    }

    // i_open_api_definition_spec->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(i_open_api_definition_specJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // i_open_api_definition_spec->terms_of_service
    cJSON *terms_of_service = cJSON_GetObjectItemCaseSensitive(i_open_api_definition_specJSON, "termsOfService");
    if (terms_of_service) { 
    if(!cJSON_IsString(terms_of_service) && !cJSON_IsNull(terms_of_service))
    {
    goto end; //String
    }
    }

    // i_open_api_definition_spec->open_api_endpoint
    cJSON *open_api_endpoint = cJSON_GetObjectItemCaseSensitive(i_open_api_definition_specJSON, "openApiEndpoint");
    if (open_api_endpoint) { 
    open_api_endpoint_local_nonprim = i_open_api_endpoint_parseFromJSON(open_api_endpoint); //nonprimitive
    }

    // i_open_api_definition_spec->open_api_contact
    cJSON *open_api_contact = cJSON_GetObjectItemCaseSensitive(i_open_api_definition_specJSON, "openApiContact");
    if (open_api_contact) { 
    open_api_contact_local_nonprim = i_open_api_contact_parseFromJSON(open_api_contact); //nonprimitive
    }

    // i_open_api_definition_spec->license
    cJSON *license = cJSON_GetObjectItemCaseSensitive(i_open_api_definition_specJSON, "license");
    if (license) { 
    license_local_nonprim = i_open_api_license_parseFromJSON(license); //nonprimitive
    }


    i_open_api_definition_spec_local_var = i_open_api_definition_spec_create (
        enable ? enable->valueint : 0,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        version && !cJSON_IsNull(version) ? strdup(version->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        terms_of_service && !cJSON_IsNull(terms_of_service) ? strdup(terms_of_service->valuestring) : NULL,
        open_api_endpoint ? open_api_endpoint_local_nonprim : NULL,
        open_api_contact ? open_api_contact_local_nonprim : NULL,
        license ? license_local_nonprim : NULL
        );

    return i_open_api_definition_spec_local_var;
end:
    if (open_api_endpoint_local_nonprim) {
        i_open_api_endpoint_free(open_api_endpoint_local_nonprim);
        open_api_endpoint_local_nonprim = NULL;
    }
    if (open_api_contact_local_nonprim) {
        i_open_api_contact_free(open_api_contact_local_nonprim);
        open_api_contact_local_nonprim = NULL;
    }
    if (license_local_nonprim) {
        i_open_api_license_free(license_local_nonprim);
        license_local_nonprim = NULL;
    }
    return NULL;

}
