#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "module.h"


char* module_type_ToString(systemservice_module_TYPE_e type) {
    char* typeArray[] =  { "NULL", "Module", "Integration", "StudioModule", "StudioIntegration" };
    return typeArray[type];
}

systemservice_module_TYPE_e module_type_FromString(char* type){
    int stringToReturn = 0;
    char *typeArray[] =  { "NULL", "Module", "Integration", "StudioModule", "StudioIntegration" };
    size_t sizeofArray = sizeof(typeArray) / sizeof(typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(type, typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

module_t *module_create(
    int enable,
    int active,
    int order,
    char *id,
    char *name,
    char *full_name,
    char *description,
    systemservice_module_TYPE_e type,
    char *configuration,
    char *author,
    char *author_url,
    char *license,
    int require_license_acceptance,
    char *repository,
    char *path,
    char *icon,
    char *image,
    char *nu_spec_path,
    char *manifest,
    char *documentation,
    char *website,
    char *logo,
    i_swagger_spec_t *swagger_spec,
    list_t *swagger_specs,
    char *url,
    list_t *assembly_paths,
    int marked_for_deletion,
    char *version
    ) {
    module_t *module_local_var = malloc(sizeof(module_t));
    if (!module_local_var) {
        return NULL;
    }
    module_local_var->enable = enable;
    module_local_var->active = active;
    module_local_var->order = order;
    module_local_var->id = id;
    module_local_var->name = name;
    module_local_var->full_name = full_name;
    module_local_var->description = description;
    module_local_var->type = type;
    module_local_var->configuration = configuration;
    module_local_var->author = author;
    module_local_var->author_url = author_url;
    module_local_var->license = license;
    module_local_var->require_license_acceptance = require_license_acceptance;
    module_local_var->repository = repository;
    module_local_var->path = path;
    module_local_var->icon = icon;
    module_local_var->image = image;
    module_local_var->nu_spec_path = nu_spec_path;
    module_local_var->manifest = manifest;
    module_local_var->documentation = documentation;
    module_local_var->website = website;
    module_local_var->logo = logo;
    module_local_var->swagger_spec = swagger_spec;
    module_local_var->swagger_specs = swagger_specs;
    module_local_var->url = url;
    module_local_var->assembly_paths = assembly_paths;
    module_local_var->marked_for_deletion = marked_for_deletion;
    module_local_var->version = version;

    return module_local_var;
}


void module_free(module_t *module) {
    if(NULL == module){
        return ;
    }
    listEntry_t *listEntry;
    if (module->id) {
        free(module->id);
        module->id = NULL;
    }
    if (module->name) {
        free(module->name);
        module->name = NULL;
    }
    if (module->full_name) {
        free(module->full_name);
        module->full_name = NULL;
    }
    if (module->description) {
        free(module->description);
        module->description = NULL;
    }
    if (module->configuration) {
        free(module->configuration);
        module->configuration = NULL;
    }
    if (module->author) {
        free(module->author);
        module->author = NULL;
    }
    if (module->author_url) {
        free(module->author_url);
        module->author_url = NULL;
    }
    if (module->license) {
        free(module->license);
        module->license = NULL;
    }
    if (module->repository) {
        free(module->repository);
        module->repository = NULL;
    }
    if (module->path) {
        free(module->path);
        module->path = NULL;
    }
    if (module->icon) {
        free(module->icon);
        module->icon = NULL;
    }
    if (module->image) {
        free(module->image);
        module->image = NULL;
    }
    if (module->nu_spec_path) {
        free(module->nu_spec_path);
        module->nu_spec_path = NULL;
    }
    if (module->manifest) {
        free(module->manifest);
        module->manifest = NULL;
    }
    if (module->documentation) {
        free(module->documentation);
        module->documentation = NULL;
    }
    if (module->website) {
        free(module->website);
        module->website = NULL;
    }
    if (module->logo) {
        free(module->logo);
        module->logo = NULL;
    }
    if (module->swagger_spec) {
        i_swagger_spec_free(module->swagger_spec);
        module->swagger_spec = NULL;
    }
    if (module->swagger_specs) {
        list_ForEach(listEntry, module->swagger_specs) {
            i_swagger_spec_free(listEntry->data);
        }
        list_freeList(module->swagger_specs);
        module->swagger_specs = NULL;
    }
    if (module->url) {
        free(module->url);
        module->url = NULL;
    }
    if (module->assembly_paths) {
        list_ForEach(listEntry, module->assembly_paths) {
            free(listEntry->data);
        }
        list_freeList(module->assembly_paths);
        module->assembly_paths = NULL;
    }
    if (module->version) {
        free(module->version);
        module->version = NULL;
    }
    free(module);
}

cJSON *module_convertToJSON(module_t *module) {
    cJSON *item = cJSON_CreateObject();

    // module->enable
    if(module->enable) {
    if(cJSON_AddBoolToObject(item, "enable", module->enable) == NULL) {
    goto fail; //Bool
    }
    }


    // module->active
    if(module->active) {
    if(cJSON_AddBoolToObject(item, "active", module->active) == NULL) {
    goto fail; //Bool
    }
    }


    // module->order
    if(module->order) {
    if(cJSON_AddNumberToObject(item, "order", module->order) == NULL) {
    goto fail; //Numeric
    }
    }


    // module->id
    if(module->id) {
    if(cJSON_AddStringToObject(item, "id", module->id) == NULL) {
    goto fail; //String
    }
    }


    // module->name
    if(module->name) {
    if(cJSON_AddStringToObject(item, "name", module->name) == NULL) {
    goto fail; //String
    }
    }


    // module->full_name
    if(module->full_name) {
    if(cJSON_AddStringToObject(item, "fullName", module->full_name) == NULL) {
    goto fail; //String
    }
    }


    // module->description
    if(module->description) {
    if(cJSON_AddStringToObject(item, "description", module->description) == NULL) {
    goto fail; //String
    }
    }


    // module->type
    if(module->type != systemservice_module_TYPE_NULL) {
    if(cJSON_AddStringToObject(item, "type", typemodule_ToString(module->type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // module->configuration
    if(module->configuration) {
    if(cJSON_AddStringToObject(item, "configuration", module->configuration) == NULL) {
    goto fail; //String
    }
    }


    // module->author
    if(module->author) {
    if(cJSON_AddStringToObject(item, "author", module->author) == NULL) {
    goto fail; //String
    }
    }


    // module->author_url
    if(module->author_url) {
    if(cJSON_AddStringToObject(item, "authorUrl", module->author_url) == NULL) {
    goto fail; //String
    }
    }


    // module->license
    if(module->license) {
    if(cJSON_AddStringToObject(item, "license", module->license) == NULL) {
    goto fail; //String
    }
    }


    // module->require_license_acceptance
    if(module->require_license_acceptance) {
    if(cJSON_AddBoolToObject(item, "requireLicenseAcceptance", module->require_license_acceptance) == NULL) {
    goto fail; //Bool
    }
    }


    // module->repository
    if(module->repository) {
    if(cJSON_AddStringToObject(item, "repository", module->repository) == NULL) {
    goto fail; //String
    }
    }


    // module->path
    if(module->path) {
    if(cJSON_AddStringToObject(item, "path", module->path) == NULL) {
    goto fail; //String
    }
    }


    // module->icon
    if(module->icon) {
    if(cJSON_AddStringToObject(item, "icon", module->icon) == NULL) {
    goto fail; //String
    }
    }


    // module->image
    if(module->image) {
    if(cJSON_AddStringToObject(item, "image", module->image) == NULL) {
    goto fail; //String
    }
    }


    // module->nu_spec_path
    if(module->nu_spec_path) {
    if(cJSON_AddStringToObject(item, "nuSpecPath", module->nu_spec_path) == NULL) {
    goto fail; //String
    }
    }


    // module->manifest
    if(module->manifest) {
    if(cJSON_AddStringToObject(item, "manifest", module->manifest) == NULL) {
    goto fail; //String
    }
    }


    // module->documentation
    if(module->documentation) {
    if(cJSON_AddStringToObject(item, "documentation", module->documentation) == NULL) {
    goto fail; //String
    }
    }


    // module->website
    if(module->website) {
    if(cJSON_AddStringToObject(item, "website", module->website) == NULL) {
    goto fail; //String
    }
    }


    // module->logo
    if(module->logo) {
    if(cJSON_AddStringToObject(item, "logo", module->logo) == NULL) {
    goto fail; //String
    }
    }


    // module->swagger_spec
    if(module->swagger_spec) {
    cJSON *swagger_spec_local_JSON = i_swagger_spec_convertToJSON(module->swagger_spec);
    if(swagger_spec_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "swaggerSpec", swagger_spec_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // module->swagger_specs
    if(module->swagger_specs) {
    cJSON *swagger_specs = cJSON_AddArrayToObject(item, "swaggerSpecs");
    if(swagger_specs == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *swagger_specsListEntry;
    if (module->swagger_specs) {
    list_ForEach(swagger_specsListEntry, module->swagger_specs) {
    cJSON *itemLocal = i_swagger_spec_convertToJSON(swagger_specsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(swagger_specs, itemLocal);
    }
    }
    }


    // module->url
    if(module->url) {
    if(cJSON_AddStringToObject(item, "url", module->url) == NULL) {
    goto fail; //String
    }
    }


    // module->assembly_paths
    if(module->assembly_paths) {
    cJSON *assembly_paths = cJSON_AddArrayToObject(item, "assemblyPaths");
    if(assembly_paths == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *assembly_pathsListEntry;
    list_ForEach(assembly_pathsListEntry, module->assembly_paths) {
    if(cJSON_AddStringToObject(assembly_paths, "", (char*)assembly_pathsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // module->marked_for_deletion
    if(module->marked_for_deletion) {
    if(cJSON_AddBoolToObject(item, "markedForDeletion", module->marked_for_deletion) == NULL) {
    goto fail; //Bool
    }
    }


    // module->version
    if(module->version) {
    if(cJSON_AddStringToObject(item, "version", module->version) == NULL) {
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

module_t *module_parseFromJSON(cJSON *moduleJSON){

    module_t *module_local_var = NULL;

    // define the local variable for module->swagger_spec
    i_swagger_spec_t *swagger_spec_local_nonprim = NULL;

    // define the local list for module->swagger_specs
    list_t *swagger_specsList = NULL;

    // define the local list for module->assembly_paths
    list_t *assembly_pathsList = NULL;

    // module->enable
    cJSON *enable = cJSON_GetObjectItemCaseSensitive(moduleJSON, "enable");
    if (enable) { 
    if(!cJSON_IsBool(enable))
    {
    goto end; //Bool
    }
    }

    // module->active
    cJSON *active = cJSON_GetObjectItemCaseSensitive(moduleJSON, "active");
    if (active) { 
    if(!cJSON_IsBool(active))
    {
    goto end; //Bool
    }
    }

    // module->order
    cJSON *order = cJSON_GetObjectItemCaseSensitive(moduleJSON, "order");
    if (order) { 
    if(!cJSON_IsNumber(order))
    {
    goto end; //Numeric
    }
    }

    // module->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(moduleJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // module->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(moduleJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // module->full_name
    cJSON *full_name = cJSON_GetObjectItemCaseSensitive(moduleJSON, "fullName");
    if (full_name) { 
    if(!cJSON_IsString(full_name) && !cJSON_IsNull(full_name))
    {
    goto end; //String
    }
    }

    // module->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(moduleJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // module->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(moduleJSON, "type");
    systemservice_module_TYPE_e typeVariable;
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //Enum
    }
    typeVariable = module_type_FromString(type->valuestring);
    }

    // module->configuration
    cJSON *configuration = cJSON_GetObjectItemCaseSensitive(moduleJSON, "configuration");
    if (configuration) { 
    if(!cJSON_IsString(configuration) && !cJSON_IsNull(configuration))
    {
    goto end; //String
    }
    }

    // module->author
    cJSON *author = cJSON_GetObjectItemCaseSensitive(moduleJSON, "author");
    if (author) { 
    if(!cJSON_IsString(author) && !cJSON_IsNull(author))
    {
    goto end; //String
    }
    }

    // module->author_url
    cJSON *author_url = cJSON_GetObjectItemCaseSensitive(moduleJSON, "authorUrl");
    if (author_url) { 
    if(!cJSON_IsString(author_url) && !cJSON_IsNull(author_url))
    {
    goto end; //String
    }
    }

    // module->license
    cJSON *license = cJSON_GetObjectItemCaseSensitive(moduleJSON, "license");
    if (license) { 
    if(!cJSON_IsString(license) && !cJSON_IsNull(license))
    {
    goto end; //String
    }
    }

    // module->require_license_acceptance
    cJSON *require_license_acceptance = cJSON_GetObjectItemCaseSensitive(moduleJSON, "requireLicenseAcceptance");
    if (require_license_acceptance) { 
    if(!cJSON_IsBool(require_license_acceptance))
    {
    goto end; //Bool
    }
    }

    // module->repository
    cJSON *repository = cJSON_GetObjectItemCaseSensitive(moduleJSON, "repository");
    if (repository) { 
    if(!cJSON_IsString(repository) && !cJSON_IsNull(repository))
    {
    goto end; //String
    }
    }

    // module->path
    cJSON *path = cJSON_GetObjectItemCaseSensitive(moduleJSON, "path");
    if (path) { 
    if(!cJSON_IsString(path) && !cJSON_IsNull(path))
    {
    goto end; //String
    }
    }

    // module->icon
    cJSON *icon = cJSON_GetObjectItemCaseSensitive(moduleJSON, "icon");
    if (icon) { 
    if(!cJSON_IsString(icon) && !cJSON_IsNull(icon))
    {
    goto end; //String
    }
    }

    // module->image
    cJSON *image = cJSON_GetObjectItemCaseSensitive(moduleJSON, "image");
    if (image) { 
    if(!cJSON_IsString(image) && !cJSON_IsNull(image))
    {
    goto end; //String
    }
    }

    // module->nu_spec_path
    cJSON *nu_spec_path = cJSON_GetObjectItemCaseSensitive(moduleJSON, "nuSpecPath");
    if (nu_spec_path) { 
    if(!cJSON_IsString(nu_spec_path) && !cJSON_IsNull(nu_spec_path))
    {
    goto end; //String
    }
    }

    // module->manifest
    cJSON *manifest = cJSON_GetObjectItemCaseSensitive(moduleJSON, "manifest");
    if (manifest) { 
    if(!cJSON_IsString(manifest) && !cJSON_IsNull(manifest))
    {
    goto end; //String
    }
    }

    // module->documentation
    cJSON *documentation = cJSON_GetObjectItemCaseSensitive(moduleJSON, "documentation");
    if (documentation) { 
    if(!cJSON_IsString(documentation) && !cJSON_IsNull(documentation))
    {
    goto end; //String
    }
    }

    // module->website
    cJSON *website = cJSON_GetObjectItemCaseSensitive(moduleJSON, "website");
    if (website) { 
    if(!cJSON_IsString(website) && !cJSON_IsNull(website))
    {
    goto end; //String
    }
    }

    // module->logo
    cJSON *logo = cJSON_GetObjectItemCaseSensitive(moduleJSON, "logo");
    if (logo) { 
    if(!cJSON_IsString(logo) && !cJSON_IsNull(logo))
    {
    goto end; //String
    }
    }

    // module->swagger_spec
    cJSON *swagger_spec = cJSON_GetObjectItemCaseSensitive(moduleJSON, "swaggerSpec");
    if (swagger_spec) { 
    swagger_spec_local_nonprim = i_swagger_spec_parseFromJSON(swagger_spec); //nonprimitive
    }

    // module->swagger_specs
    cJSON *swagger_specs = cJSON_GetObjectItemCaseSensitive(moduleJSON, "swaggerSpecs");
    if (swagger_specs) { 
    cJSON *swagger_specs_local_nonprimitive = NULL;
    if(!cJSON_IsArray(swagger_specs)){
        goto end; //nonprimitive container
    }

    swagger_specsList = list_createList();

    cJSON_ArrayForEach(swagger_specs_local_nonprimitive,swagger_specs )
    {
        if(!cJSON_IsObject(swagger_specs_local_nonprimitive)){
            goto end;
        }
        i_swagger_spec_t *swagger_specsItem = i_swagger_spec_parseFromJSON(swagger_specs_local_nonprimitive);

        list_addElement(swagger_specsList, swagger_specsItem);
    }
    }

    // module->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(moduleJSON, "url");
    if (url) { 
    if(!cJSON_IsString(url) && !cJSON_IsNull(url))
    {
    goto end; //String
    }
    }

    // module->assembly_paths
    cJSON *assembly_paths = cJSON_GetObjectItemCaseSensitive(moduleJSON, "assemblyPaths");
    if (assembly_paths) { 
    cJSON *assembly_paths_local = NULL;
    if(!cJSON_IsArray(assembly_paths)) {
        goto end;//primitive container
    }
    assembly_pathsList = list_createList();

    cJSON_ArrayForEach(assembly_paths_local, assembly_paths)
    {
        if(!cJSON_IsString(assembly_paths_local))
        {
            goto end;
        }
        list_addElement(assembly_pathsList , strdup(assembly_paths_local->valuestring));
    }
    }

    // module->marked_for_deletion
    cJSON *marked_for_deletion = cJSON_GetObjectItemCaseSensitive(moduleJSON, "markedForDeletion");
    if (marked_for_deletion) { 
    if(!cJSON_IsBool(marked_for_deletion))
    {
    goto end; //Bool
    }
    }

    // module->version
    cJSON *version = cJSON_GetObjectItemCaseSensitive(moduleJSON, "version");
    if (version) { 
    if(!cJSON_IsString(version) && !cJSON_IsNull(version))
    {
    goto end; //String
    }
    }


    module_local_var = module_create (
        enable ? enable->valueint : 0,
        active ? active->valueint : 0,
        order ? order->valuedouble : 0,
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        full_name && !cJSON_IsNull(full_name) ? strdup(full_name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        type ? typeVariable : systemservice_module_TYPE_NULL,
        configuration && !cJSON_IsNull(configuration) ? strdup(configuration->valuestring) : NULL,
        author && !cJSON_IsNull(author) ? strdup(author->valuestring) : NULL,
        author_url && !cJSON_IsNull(author_url) ? strdup(author_url->valuestring) : NULL,
        license && !cJSON_IsNull(license) ? strdup(license->valuestring) : NULL,
        require_license_acceptance ? require_license_acceptance->valueint : 0,
        repository && !cJSON_IsNull(repository) ? strdup(repository->valuestring) : NULL,
        path && !cJSON_IsNull(path) ? strdup(path->valuestring) : NULL,
        icon && !cJSON_IsNull(icon) ? strdup(icon->valuestring) : NULL,
        image && !cJSON_IsNull(image) ? strdup(image->valuestring) : NULL,
        nu_spec_path && !cJSON_IsNull(nu_spec_path) ? strdup(nu_spec_path->valuestring) : NULL,
        manifest && !cJSON_IsNull(manifest) ? strdup(manifest->valuestring) : NULL,
        documentation && !cJSON_IsNull(documentation) ? strdup(documentation->valuestring) : NULL,
        website && !cJSON_IsNull(website) ? strdup(website->valuestring) : NULL,
        logo && !cJSON_IsNull(logo) ? strdup(logo->valuestring) : NULL,
        swagger_spec ? swagger_spec_local_nonprim : NULL,
        swagger_specs ? swagger_specsList : NULL,
        url && !cJSON_IsNull(url) ? strdup(url->valuestring) : NULL,
        assembly_paths ? assembly_pathsList : NULL,
        marked_for_deletion ? marked_for_deletion->valueint : 0,
        version && !cJSON_IsNull(version) ? strdup(version->valuestring) : NULL
        );

    return module_local_var;
end:
    if (swagger_spec_local_nonprim) {
        i_swagger_spec_free(swagger_spec_local_nonprim);
        swagger_spec_local_nonprim = NULL;
    }
    if (swagger_specsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, swagger_specsList) {
            i_swagger_spec_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(swagger_specsList);
        swagger_specsList = NULL;
    }
    if (assembly_pathsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, assembly_pathsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(assembly_pathsList);
        assembly_pathsList = NULL;
    }
    return NULL;

}
