#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "suite_module.h"


char* suite_module_type_ToString(systemservice_suite_module_TYPE_e type) {
    char* typeArray[] =  { "NULL", "Module", "Integration", "StudioModule", "StudioIntegration", "WasmModule", "WasmIntegration" };
    return typeArray[type];
}

systemservice_suite_module_TYPE_e suite_module_type_FromString(char* type){
    int stringToReturn = 0;
    char *typeArray[] =  { "NULL", "Module", "Integration", "StudioModule", "StudioIntegration", "WasmModule", "WasmIntegration" };
    size_t sizeofArray = sizeof(typeArray) / sizeof(typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(type, typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* suite_module_category_ToString(systemservice_suite_module_CATEGORY_e category) {
    char* categoryArray[] =  { "NULL", "Other", "FinanceAndAccounting", "SalesAndCommerce", "MarketingAndEngagement", "CustomerRelations", "OperationsAndSupplyChain", "ProjectsAndProductivity", "PeopleAndWorkforce", "LearningAndEducation", "ContentAndWeb", "DataAndAnalytics", "ArtificialIntelligence", "SecurityAndIdentity", "TrustAndCompliance", "Communication", "DeveloperAndPlatform", "IndustrySolutions" };
    return categoryArray[category];
}

systemservice_suite_module_CATEGORY_e suite_module_category_FromString(char* category){
    int stringToReturn = 0;
    char *categoryArray[] =  { "NULL", "Other", "FinanceAndAccounting", "SalesAndCommerce", "MarketingAndEngagement", "CustomerRelations", "OperationsAndSupplyChain", "ProjectsAndProductivity", "PeopleAndWorkforce", "LearningAndEducation", "ContentAndWeb", "DataAndAnalytics", "ArtificialIntelligence", "SecurityAndIdentity", "TrustAndCompliance", "Communication", "DeveloperAndPlatform", "IndustrySolutions" };
    size_t sizeofArray = sizeof(categoryArray) / sizeof(categoryArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(category, categoryArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

suite_module_t *suite_module_create(
    int enable,
    int marked_for_deletion,
    int active,
    int order,
    char *id,
    char *name,
    char *full_name,
    char *description,
    systemservice_suite_module_TYPE_e type,
    systemservice_suite_module_CATEGORY_e category,
    char *configuration,
    char *author,
    char *author_url,
    char *license,
    int require_license_acceptance,
    char *repository,
    char *icon,
    char *image,
    char *nu_spec_path,
    char *manifest,
    char *logo,
    char *website,
    char *documentation,
    char *url,
    char *path,
    i_open_api_definition_spec_t *open_api_definition_spec,
    list_t *swagger_specs,
    list_t *assembly_paths,
    list_t *required_permissions,
    char *version
    ) {
    suite_module_t *suite_module_local_var = malloc(sizeof(suite_module_t));
    if (!suite_module_local_var) {
        return NULL;
    }
    suite_module_local_var->enable = enable;
    suite_module_local_var->marked_for_deletion = marked_for_deletion;
    suite_module_local_var->active = active;
    suite_module_local_var->order = order;
    suite_module_local_var->id = id;
    suite_module_local_var->name = name;
    suite_module_local_var->full_name = full_name;
    suite_module_local_var->description = description;
    suite_module_local_var->type = type;
    suite_module_local_var->category = category;
    suite_module_local_var->configuration = configuration;
    suite_module_local_var->author = author;
    suite_module_local_var->author_url = author_url;
    suite_module_local_var->license = license;
    suite_module_local_var->require_license_acceptance = require_license_acceptance;
    suite_module_local_var->repository = repository;
    suite_module_local_var->icon = icon;
    suite_module_local_var->image = image;
    suite_module_local_var->nu_spec_path = nu_spec_path;
    suite_module_local_var->manifest = manifest;
    suite_module_local_var->logo = logo;
    suite_module_local_var->website = website;
    suite_module_local_var->documentation = documentation;
    suite_module_local_var->url = url;
    suite_module_local_var->path = path;
    suite_module_local_var->open_api_definition_spec = open_api_definition_spec;
    suite_module_local_var->swagger_specs = swagger_specs;
    suite_module_local_var->assembly_paths = assembly_paths;
    suite_module_local_var->required_permissions = required_permissions;
    suite_module_local_var->version = version;

    return suite_module_local_var;
}


void suite_module_free(suite_module_t *suite_module) {
    if(NULL == suite_module){
        return ;
    }
    listEntry_t *listEntry;
    if (suite_module->id) {
        free(suite_module->id);
        suite_module->id = NULL;
    }
    if (suite_module->name) {
        free(suite_module->name);
        suite_module->name = NULL;
    }
    if (suite_module->full_name) {
        free(suite_module->full_name);
        suite_module->full_name = NULL;
    }
    if (suite_module->description) {
        free(suite_module->description);
        suite_module->description = NULL;
    }
    if (suite_module->configuration) {
        free(suite_module->configuration);
        suite_module->configuration = NULL;
    }
    if (suite_module->author) {
        free(suite_module->author);
        suite_module->author = NULL;
    }
    if (suite_module->author_url) {
        free(suite_module->author_url);
        suite_module->author_url = NULL;
    }
    if (suite_module->license) {
        free(suite_module->license);
        suite_module->license = NULL;
    }
    if (suite_module->repository) {
        free(suite_module->repository);
        suite_module->repository = NULL;
    }
    if (suite_module->icon) {
        free(suite_module->icon);
        suite_module->icon = NULL;
    }
    if (suite_module->image) {
        free(suite_module->image);
        suite_module->image = NULL;
    }
    if (suite_module->nu_spec_path) {
        free(suite_module->nu_spec_path);
        suite_module->nu_spec_path = NULL;
    }
    if (suite_module->manifest) {
        free(suite_module->manifest);
        suite_module->manifest = NULL;
    }
    if (suite_module->logo) {
        free(suite_module->logo);
        suite_module->logo = NULL;
    }
    if (suite_module->website) {
        free(suite_module->website);
        suite_module->website = NULL;
    }
    if (suite_module->documentation) {
        free(suite_module->documentation);
        suite_module->documentation = NULL;
    }
    if (suite_module->url) {
        free(suite_module->url);
        suite_module->url = NULL;
    }
    if (suite_module->path) {
        free(suite_module->path);
        suite_module->path = NULL;
    }
    if (suite_module->open_api_definition_spec) {
        i_open_api_definition_spec_free(suite_module->open_api_definition_spec);
        suite_module->open_api_definition_spec = NULL;
    }
    if (suite_module->swagger_specs) {
        list_ForEach(listEntry, suite_module->swagger_specs) {
            i_open_api_definition_spec_free(listEntry->data);
        }
        list_freeList(suite_module->swagger_specs);
        suite_module->swagger_specs = NULL;
    }
    if (suite_module->assembly_paths) {
        list_ForEach(listEntry, suite_module->assembly_paths) {
            free(listEntry->data);
        }
        list_freeList(suite_module->assembly_paths);
        suite_module->assembly_paths = NULL;
    }
    if (suite_module->required_permissions) {
        list_ForEach(listEntry, suite_module->required_permissions) {
            free(listEntry->data);
        }
        list_freeList(suite_module->required_permissions);
        suite_module->required_permissions = NULL;
    }
    if (suite_module->version) {
        free(suite_module->version);
        suite_module->version = NULL;
    }
    free(suite_module);
}

cJSON *suite_module_convertToJSON(suite_module_t *suite_module) {
    cJSON *item = cJSON_CreateObject();

    // suite_module->enable
    if(suite_module->enable) {
    if(cJSON_AddBoolToObject(item, "enable", suite_module->enable) == NULL) {
    goto fail; //Bool
    }
    }


    // suite_module->marked_for_deletion
    if(suite_module->marked_for_deletion) {
    if(cJSON_AddBoolToObject(item, "markedForDeletion", suite_module->marked_for_deletion) == NULL) {
    goto fail; //Bool
    }
    }


    // suite_module->active
    if(suite_module->active) {
    if(cJSON_AddBoolToObject(item, "active", suite_module->active) == NULL) {
    goto fail; //Bool
    }
    }


    // suite_module->order
    if(suite_module->order) {
    if(cJSON_AddNumberToObject(item, "order", suite_module->order) == NULL) {
    goto fail; //Numeric
    }
    }


    // suite_module->id
    if(suite_module->id) {
    if(cJSON_AddStringToObject(item, "id", suite_module->id) == NULL) {
    goto fail; //String
    }
    }


    // suite_module->name
    if(suite_module->name) {
    if(cJSON_AddStringToObject(item, "name", suite_module->name) == NULL) {
    goto fail; //String
    }
    }


    // suite_module->full_name
    if(suite_module->full_name) {
    if(cJSON_AddStringToObject(item, "fullName", suite_module->full_name) == NULL) {
    goto fail; //String
    }
    }


    // suite_module->description
    if(suite_module->description) {
    if(cJSON_AddStringToObject(item, "description", suite_module->description) == NULL) {
    goto fail; //String
    }
    }


    // suite_module->type
    if(suite_module->type != systemservice_suite_module_TYPE_NULL) {
    if(cJSON_AddStringToObject(item, "type", typesuite_module_ToString(suite_module->type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // suite_module->category
    if(suite_module->category != systemservice_suite_module_CATEGORY_NULL) {
    if(cJSON_AddStringToObject(item, "category", categorysuite_module_ToString(suite_module->category)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // suite_module->configuration
    if(suite_module->configuration) {
    if(cJSON_AddStringToObject(item, "configuration", suite_module->configuration) == NULL) {
    goto fail; //String
    }
    }


    // suite_module->author
    if(suite_module->author) {
    if(cJSON_AddStringToObject(item, "author", suite_module->author) == NULL) {
    goto fail; //String
    }
    }


    // suite_module->author_url
    if(suite_module->author_url) {
    if(cJSON_AddStringToObject(item, "authorUrl", suite_module->author_url) == NULL) {
    goto fail; //String
    }
    }


    // suite_module->license
    if(suite_module->license) {
    if(cJSON_AddStringToObject(item, "license", suite_module->license) == NULL) {
    goto fail; //String
    }
    }


    // suite_module->require_license_acceptance
    if(suite_module->require_license_acceptance) {
    if(cJSON_AddBoolToObject(item, "requireLicenseAcceptance", suite_module->require_license_acceptance) == NULL) {
    goto fail; //Bool
    }
    }


    // suite_module->repository
    if(suite_module->repository) {
    if(cJSON_AddStringToObject(item, "repository", suite_module->repository) == NULL) {
    goto fail; //String
    }
    }


    // suite_module->icon
    if(suite_module->icon) {
    if(cJSON_AddStringToObject(item, "icon", suite_module->icon) == NULL) {
    goto fail; //String
    }
    }


    // suite_module->image
    if(suite_module->image) {
    if(cJSON_AddStringToObject(item, "image", suite_module->image) == NULL) {
    goto fail; //String
    }
    }


    // suite_module->nu_spec_path
    if(suite_module->nu_spec_path) {
    if(cJSON_AddStringToObject(item, "nuSpecPath", suite_module->nu_spec_path) == NULL) {
    goto fail; //String
    }
    }


    // suite_module->manifest
    if(suite_module->manifest) {
    if(cJSON_AddStringToObject(item, "manifest", suite_module->manifest) == NULL) {
    goto fail; //String
    }
    }


    // suite_module->logo
    if(suite_module->logo) {
    if(cJSON_AddStringToObject(item, "logo", suite_module->logo) == NULL) {
    goto fail; //String
    }
    }


    // suite_module->website
    if(suite_module->website) {
    if(cJSON_AddStringToObject(item, "website", suite_module->website) == NULL) {
    goto fail; //String
    }
    }


    // suite_module->documentation
    if(suite_module->documentation) {
    if(cJSON_AddStringToObject(item, "documentation", suite_module->documentation) == NULL) {
    goto fail; //String
    }
    }


    // suite_module->url
    if(suite_module->url) {
    if(cJSON_AddStringToObject(item, "url", suite_module->url) == NULL) {
    goto fail; //String
    }
    }


    // suite_module->path
    if(suite_module->path) {
    if(cJSON_AddStringToObject(item, "path", suite_module->path) == NULL) {
    goto fail; //String
    }
    }


    // suite_module->open_api_definition_spec
    if(suite_module->open_api_definition_spec) {
    cJSON *open_api_definition_spec_local_JSON = i_open_api_definition_spec_convertToJSON(suite_module->open_api_definition_spec);
    if(open_api_definition_spec_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "openApiDefinitionSpec", open_api_definition_spec_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // suite_module->swagger_specs
    if(suite_module->swagger_specs) {
    cJSON *swagger_specs = cJSON_AddArrayToObject(item, "swaggerSpecs");
    if(swagger_specs == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *swagger_specsListEntry;
    if (suite_module->swagger_specs) {
    list_ForEach(swagger_specsListEntry, suite_module->swagger_specs) {
    cJSON *itemLocal = i_open_api_definition_spec_convertToJSON(swagger_specsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(swagger_specs, itemLocal);
    }
    }
    }


    // suite_module->assembly_paths
    if(suite_module->assembly_paths) {
    cJSON *assembly_paths = cJSON_AddArrayToObject(item, "assemblyPaths");
    if(assembly_paths == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *assembly_pathsListEntry;
    list_ForEach(assembly_pathsListEntry, suite_module->assembly_paths) {
    if(cJSON_AddStringToObject(assembly_paths, "", (char*)assembly_pathsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // suite_module->required_permissions
    if(suite_module->required_permissions) {
    cJSON *required_permissions = cJSON_AddArrayToObject(item, "requiredPermissions");
    if(required_permissions == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *required_permissionsListEntry;
    list_ForEach(required_permissionsListEntry, suite_module->required_permissions) {
    if(cJSON_AddStringToObject(required_permissions, "", (char*)required_permissionsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // suite_module->version
    if(suite_module->version) {
    if(cJSON_AddStringToObject(item, "version", suite_module->version) == NULL) {
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

suite_module_t *suite_module_parseFromJSON(cJSON *suite_moduleJSON){

    suite_module_t *suite_module_local_var = NULL;

    // define the local variable for suite_module->open_api_definition_spec
    i_open_api_definition_spec_t *open_api_definition_spec_local_nonprim = NULL;

    // define the local list for suite_module->swagger_specs
    list_t *swagger_specsList = NULL;

    // define the local list for suite_module->assembly_paths
    list_t *assembly_pathsList = NULL;

    // define the local list for suite_module->required_permissions
    list_t *required_permissionsList = NULL;

    // suite_module->enable
    cJSON *enable = cJSON_GetObjectItemCaseSensitive(suite_moduleJSON, "enable");
    if (enable) { 
    if(!cJSON_IsBool(enable))
    {
    goto end; //Bool
    }
    }

    // suite_module->marked_for_deletion
    cJSON *marked_for_deletion = cJSON_GetObjectItemCaseSensitive(suite_moduleJSON, "markedForDeletion");
    if (marked_for_deletion) { 
    if(!cJSON_IsBool(marked_for_deletion))
    {
    goto end; //Bool
    }
    }

    // suite_module->active
    cJSON *active = cJSON_GetObjectItemCaseSensitive(suite_moduleJSON, "active");
    if (active) { 
    if(!cJSON_IsBool(active))
    {
    goto end; //Bool
    }
    }

    // suite_module->order
    cJSON *order = cJSON_GetObjectItemCaseSensitive(suite_moduleJSON, "order");
    if (order) { 
    if(!cJSON_IsNumber(order))
    {
    goto end; //Numeric
    }
    }

    // suite_module->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(suite_moduleJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // suite_module->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(suite_moduleJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // suite_module->full_name
    cJSON *full_name = cJSON_GetObjectItemCaseSensitive(suite_moduleJSON, "fullName");
    if (full_name) { 
    if(!cJSON_IsString(full_name) && !cJSON_IsNull(full_name))
    {
    goto end; //String
    }
    }

    // suite_module->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(suite_moduleJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // suite_module->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(suite_moduleJSON, "type");
    systemservice_suite_module_TYPE_e typeVariable;
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //Enum
    }
    typeVariable = suite_module_type_FromString(type->valuestring);
    }

    // suite_module->category
    cJSON *category = cJSON_GetObjectItemCaseSensitive(suite_moduleJSON, "category");
    systemservice_suite_module_CATEGORY_e categoryVariable;
    if (category) { 
    if(!cJSON_IsString(category))
    {
    goto end; //Enum
    }
    categoryVariable = suite_module_category_FromString(category->valuestring);
    }

    // suite_module->configuration
    cJSON *configuration = cJSON_GetObjectItemCaseSensitive(suite_moduleJSON, "configuration");
    if (configuration) { 
    if(!cJSON_IsString(configuration) && !cJSON_IsNull(configuration))
    {
    goto end; //String
    }
    }

    // suite_module->author
    cJSON *author = cJSON_GetObjectItemCaseSensitive(suite_moduleJSON, "author");
    if (author) { 
    if(!cJSON_IsString(author) && !cJSON_IsNull(author))
    {
    goto end; //String
    }
    }

    // suite_module->author_url
    cJSON *author_url = cJSON_GetObjectItemCaseSensitive(suite_moduleJSON, "authorUrl");
    if (author_url) { 
    if(!cJSON_IsString(author_url) && !cJSON_IsNull(author_url))
    {
    goto end; //String
    }
    }

    // suite_module->license
    cJSON *license = cJSON_GetObjectItemCaseSensitive(suite_moduleJSON, "license");
    if (license) { 
    if(!cJSON_IsString(license) && !cJSON_IsNull(license))
    {
    goto end; //String
    }
    }

    // suite_module->require_license_acceptance
    cJSON *require_license_acceptance = cJSON_GetObjectItemCaseSensitive(suite_moduleJSON, "requireLicenseAcceptance");
    if (require_license_acceptance) { 
    if(!cJSON_IsBool(require_license_acceptance))
    {
    goto end; //Bool
    }
    }

    // suite_module->repository
    cJSON *repository = cJSON_GetObjectItemCaseSensitive(suite_moduleJSON, "repository");
    if (repository) { 
    if(!cJSON_IsString(repository) && !cJSON_IsNull(repository))
    {
    goto end; //String
    }
    }

    // suite_module->icon
    cJSON *icon = cJSON_GetObjectItemCaseSensitive(suite_moduleJSON, "icon");
    if (icon) { 
    if(!cJSON_IsString(icon) && !cJSON_IsNull(icon))
    {
    goto end; //String
    }
    }

    // suite_module->image
    cJSON *image = cJSON_GetObjectItemCaseSensitive(suite_moduleJSON, "image");
    if (image) { 
    if(!cJSON_IsString(image) && !cJSON_IsNull(image))
    {
    goto end; //String
    }
    }

    // suite_module->nu_spec_path
    cJSON *nu_spec_path = cJSON_GetObjectItemCaseSensitive(suite_moduleJSON, "nuSpecPath");
    if (nu_spec_path) { 
    if(!cJSON_IsString(nu_spec_path) && !cJSON_IsNull(nu_spec_path))
    {
    goto end; //String
    }
    }

    // suite_module->manifest
    cJSON *manifest = cJSON_GetObjectItemCaseSensitive(suite_moduleJSON, "manifest");
    if (manifest) { 
    if(!cJSON_IsString(manifest) && !cJSON_IsNull(manifest))
    {
    goto end; //String
    }
    }

    // suite_module->logo
    cJSON *logo = cJSON_GetObjectItemCaseSensitive(suite_moduleJSON, "logo");
    if (logo) { 
    if(!cJSON_IsString(logo) && !cJSON_IsNull(logo))
    {
    goto end; //String
    }
    }

    // suite_module->website
    cJSON *website = cJSON_GetObjectItemCaseSensitive(suite_moduleJSON, "website");
    if (website) { 
    if(!cJSON_IsString(website) && !cJSON_IsNull(website))
    {
    goto end; //String
    }
    }

    // suite_module->documentation
    cJSON *documentation = cJSON_GetObjectItemCaseSensitive(suite_moduleJSON, "documentation");
    if (documentation) { 
    if(!cJSON_IsString(documentation) && !cJSON_IsNull(documentation))
    {
    goto end; //String
    }
    }

    // suite_module->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(suite_moduleJSON, "url");
    if (url) { 
    if(!cJSON_IsString(url) && !cJSON_IsNull(url))
    {
    goto end; //String
    }
    }

    // suite_module->path
    cJSON *path = cJSON_GetObjectItemCaseSensitive(suite_moduleJSON, "path");
    if (path) { 
    if(!cJSON_IsString(path) && !cJSON_IsNull(path))
    {
    goto end; //String
    }
    }

    // suite_module->open_api_definition_spec
    cJSON *open_api_definition_spec = cJSON_GetObjectItemCaseSensitive(suite_moduleJSON, "openApiDefinitionSpec");
    if (open_api_definition_spec) { 
    open_api_definition_spec_local_nonprim = i_open_api_definition_spec_parseFromJSON(open_api_definition_spec); //nonprimitive
    }

    // suite_module->swagger_specs
    cJSON *swagger_specs = cJSON_GetObjectItemCaseSensitive(suite_moduleJSON, "swaggerSpecs");
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
        i_open_api_definition_spec_t *swagger_specsItem = i_open_api_definition_spec_parseFromJSON(swagger_specs_local_nonprimitive);

        list_addElement(swagger_specsList, swagger_specsItem);
    }
    }

    // suite_module->assembly_paths
    cJSON *assembly_paths = cJSON_GetObjectItemCaseSensitive(suite_moduleJSON, "assemblyPaths");
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

    // suite_module->required_permissions
    cJSON *required_permissions = cJSON_GetObjectItemCaseSensitive(suite_moduleJSON, "requiredPermissions");
    if (required_permissions) { 
    cJSON *required_permissions_local = NULL;
    if(!cJSON_IsArray(required_permissions)) {
        goto end;//primitive container
    }
    required_permissionsList = list_createList();

    cJSON_ArrayForEach(required_permissions_local, required_permissions)
    {
        if(!cJSON_IsString(required_permissions_local))
        {
            goto end;
        }
        list_addElement(required_permissionsList , strdup(required_permissions_local->valuestring));
    }
    }

    // suite_module->version
    cJSON *version = cJSON_GetObjectItemCaseSensitive(suite_moduleJSON, "version");
    if (version) { 
    if(!cJSON_IsString(version) && !cJSON_IsNull(version))
    {
    goto end; //String
    }
    }


    suite_module_local_var = suite_module_create (
        enable ? enable->valueint : 0,
        marked_for_deletion ? marked_for_deletion->valueint : 0,
        active ? active->valueint : 0,
        order ? order->valuedouble : 0,
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        full_name && !cJSON_IsNull(full_name) ? strdup(full_name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        type ? typeVariable : systemservice_suite_module_TYPE_NULL,
        category ? categoryVariable : systemservice_suite_module_CATEGORY_NULL,
        configuration && !cJSON_IsNull(configuration) ? strdup(configuration->valuestring) : NULL,
        author && !cJSON_IsNull(author) ? strdup(author->valuestring) : NULL,
        author_url && !cJSON_IsNull(author_url) ? strdup(author_url->valuestring) : NULL,
        license && !cJSON_IsNull(license) ? strdup(license->valuestring) : NULL,
        require_license_acceptance ? require_license_acceptance->valueint : 0,
        repository && !cJSON_IsNull(repository) ? strdup(repository->valuestring) : NULL,
        icon && !cJSON_IsNull(icon) ? strdup(icon->valuestring) : NULL,
        image && !cJSON_IsNull(image) ? strdup(image->valuestring) : NULL,
        nu_spec_path && !cJSON_IsNull(nu_spec_path) ? strdup(nu_spec_path->valuestring) : NULL,
        manifest && !cJSON_IsNull(manifest) ? strdup(manifest->valuestring) : NULL,
        logo && !cJSON_IsNull(logo) ? strdup(logo->valuestring) : NULL,
        website && !cJSON_IsNull(website) ? strdup(website->valuestring) : NULL,
        documentation && !cJSON_IsNull(documentation) ? strdup(documentation->valuestring) : NULL,
        url && !cJSON_IsNull(url) ? strdup(url->valuestring) : NULL,
        path && !cJSON_IsNull(path) ? strdup(path->valuestring) : NULL,
        open_api_definition_spec ? open_api_definition_spec_local_nonprim : NULL,
        swagger_specs ? swagger_specsList : NULL,
        assembly_paths ? assembly_pathsList : NULL,
        required_permissions ? required_permissionsList : NULL,
        version && !cJSON_IsNull(version) ? strdup(version->valuestring) : NULL
        );

    return suite_module_local_var;
end:
    if (open_api_definition_spec_local_nonprim) {
        i_open_api_definition_spec_free(open_api_definition_spec_local_nonprim);
        open_api_definition_spec_local_nonprim = NULL;
    }
    if (swagger_specsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, swagger_specsList) {
            i_open_api_definition_spec_free(listEntry->data);
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
    if (required_permissionsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, required_permissionsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(required_permissionsList);
        required_permissionsList = NULL;
    }
    return NULL;

}
