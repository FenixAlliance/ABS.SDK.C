#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "assembly.h"


char* assembly_security_rule_set_ToString(contentservice_assembly_SECURITYRULESET_e security_rule_set) {
    char* security_rule_setArray[] =  { "NULL", "None", "Level1", "Level2" };
    return security_rule_setArray[security_rule_set];
}

contentservice_assembly_SECURITYRULESET_e assembly_security_rule_set_FromString(char* security_rule_set){
    int stringToReturn = 0;
    char *security_rule_setArray[] =  { "NULL", "None", "Level1", "Level2" };
    size_t sizeofArray = sizeof(security_rule_setArray) / sizeof(security_rule_setArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(security_rule_set, security_rule_setArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

assembly_t *assembly_create(
    list_t *defined_types,
    list_t *exported_types,
    char *code_base,
    method_info_t *entry_point,
    char *full_name,
    char *image_runtime_version,
    int is_dynamic,
    char *location,
    int reflection_only,
    int is_collectible,
    int is_fully_trusted,
    list_t *custom_attributes,
    char *escaped_code_base,
    module_t *manifest_module,
    list_t *modules,
    int global_assembly_cache,
    long host_context,
    contentservice_assembly_SECURITYRULESET_e security_rule_set
    ) {
    assembly_t *assembly_local_var = malloc(sizeof(assembly_t));
    if (!assembly_local_var) {
        return NULL;
    }
    assembly_local_var->defined_types = defined_types;
    assembly_local_var->exported_types = exported_types;
    assembly_local_var->code_base = code_base;
    assembly_local_var->entry_point = entry_point;
    assembly_local_var->full_name = full_name;
    assembly_local_var->image_runtime_version = image_runtime_version;
    assembly_local_var->is_dynamic = is_dynamic;
    assembly_local_var->location = location;
    assembly_local_var->reflection_only = reflection_only;
    assembly_local_var->is_collectible = is_collectible;
    assembly_local_var->is_fully_trusted = is_fully_trusted;
    assembly_local_var->custom_attributes = custom_attributes;
    assembly_local_var->escaped_code_base = escaped_code_base;
    assembly_local_var->manifest_module = manifest_module;
    assembly_local_var->modules = modules;
    assembly_local_var->global_assembly_cache = global_assembly_cache;
    assembly_local_var->host_context = host_context;
    assembly_local_var->security_rule_set = security_rule_set;

    return assembly_local_var;
}


void assembly_free(assembly_t *assembly) {
    if(NULL == assembly){
        return ;
    }
    listEntry_t *listEntry;
    if (assembly->defined_types) {
        list_ForEach(listEntry, assembly->defined_types) {
            type_info_free(listEntry->data);
        }
        list_freeList(assembly->defined_types);
        assembly->defined_types = NULL;
    }
    if (assembly->exported_types) {
        list_ForEach(listEntry, assembly->exported_types) {
            type_free(listEntry->data);
        }
        list_freeList(assembly->exported_types);
        assembly->exported_types = NULL;
    }
    if (assembly->code_base) {
        free(assembly->code_base);
        assembly->code_base = NULL;
    }
    if (assembly->entry_point) {
        method_info_free(assembly->entry_point);
        assembly->entry_point = NULL;
    }
    if (assembly->full_name) {
        free(assembly->full_name);
        assembly->full_name = NULL;
    }
    if (assembly->image_runtime_version) {
        free(assembly->image_runtime_version);
        assembly->image_runtime_version = NULL;
    }
    if (assembly->location) {
        free(assembly->location);
        assembly->location = NULL;
    }
    if (assembly->custom_attributes) {
        list_ForEach(listEntry, assembly->custom_attributes) {
            custom_attribute_data_free(listEntry->data);
        }
        list_freeList(assembly->custom_attributes);
        assembly->custom_attributes = NULL;
    }
    if (assembly->escaped_code_base) {
        free(assembly->escaped_code_base);
        assembly->escaped_code_base = NULL;
    }
    if (assembly->manifest_module) {
        module_free(assembly->manifest_module);
        assembly->manifest_module = NULL;
    }
    if (assembly->modules) {
        list_ForEach(listEntry, assembly->modules) {
            module_free(listEntry->data);
        }
        list_freeList(assembly->modules);
        assembly->modules = NULL;
    }
    free(assembly);
}

cJSON *assembly_convertToJSON(assembly_t *assembly) {
    cJSON *item = cJSON_CreateObject();

    // assembly->defined_types
    if(assembly->defined_types) {
    cJSON *defined_types = cJSON_AddArrayToObject(item, "definedTypes");
    if(defined_types == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *defined_typesListEntry;
    if (assembly->defined_types) {
    list_ForEach(defined_typesListEntry, assembly->defined_types) {
    cJSON *itemLocal = type_info_convertToJSON(defined_typesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(defined_types, itemLocal);
    }
    }
    }


    // assembly->exported_types
    if(assembly->exported_types) {
    cJSON *exported_types = cJSON_AddArrayToObject(item, "exportedTypes");
    if(exported_types == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *exported_typesListEntry;
    if (assembly->exported_types) {
    list_ForEach(exported_typesListEntry, assembly->exported_types) {
    cJSON *itemLocal = type_convertToJSON(exported_typesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(exported_types, itemLocal);
    }
    }
    }


    // assembly->code_base
    if(assembly->code_base) {
    if(cJSON_AddStringToObject(item, "codeBase", assembly->code_base) == NULL) {
    goto fail; //String
    }
    }


    // assembly->entry_point
    if(assembly->entry_point) {
    cJSON *entry_point_local_JSON = method_info_convertToJSON(assembly->entry_point);
    if(entry_point_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "entryPoint", entry_point_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // assembly->full_name
    if(assembly->full_name) {
    if(cJSON_AddStringToObject(item, "fullName", assembly->full_name) == NULL) {
    goto fail; //String
    }
    }


    // assembly->image_runtime_version
    if(assembly->image_runtime_version) {
    if(cJSON_AddStringToObject(item, "imageRuntimeVersion", assembly->image_runtime_version) == NULL) {
    goto fail; //String
    }
    }


    // assembly->is_dynamic
    if(assembly->is_dynamic) {
    if(cJSON_AddBoolToObject(item, "isDynamic", assembly->is_dynamic) == NULL) {
    goto fail; //Bool
    }
    }


    // assembly->location
    if(assembly->location) {
    if(cJSON_AddStringToObject(item, "location", assembly->location) == NULL) {
    goto fail; //String
    }
    }


    // assembly->reflection_only
    if(assembly->reflection_only) {
    if(cJSON_AddBoolToObject(item, "reflectionOnly", assembly->reflection_only) == NULL) {
    goto fail; //Bool
    }
    }


    // assembly->is_collectible
    if(assembly->is_collectible) {
    if(cJSON_AddBoolToObject(item, "isCollectible", assembly->is_collectible) == NULL) {
    goto fail; //Bool
    }
    }


    // assembly->is_fully_trusted
    if(assembly->is_fully_trusted) {
    if(cJSON_AddBoolToObject(item, "isFullyTrusted", assembly->is_fully_trusted) == NULL) {
    goto fail; //Bool
    }
    }


    // assembly->custom_attributes
    if(assembly->custom_attributes) {
    cJSON *custom_attributes = cJSON_AddArrayToObject(item, "customAttributes");
    if(custom_attributes == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *custom_attributesListEntry;
    if (assembly->custom_attributes) {
    list_ForEach(custom_attributesListEntry, assembly->custom_attributes) {
    cJSON *itemLocal = custom_attribute_data_convertToJSON(custom_attributesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(custom_attributes, itemLocal);
    }
    }
    }


    // assembly->escaped_code_base
    if(assembly->escaped_code_base) {
    if(cJSON_AddStringToObject(item, "escapedCodeBase", assembly->escaped_code_base) == NULL) {
    goto fail; //String
    }
    }


    // assembly->manifest_module
    if(assembly->manifest_module) {
    cJSON *manifest_module_local_JSON = module_convertToJSON(assembly->manifest_module);
    if(manifest_module_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "manifestModule", manifest_module_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // assembly->modules
    if(assembly->modules) {
    cJSON *modules = cJSON_AddArrayToObject(item, "modules");
    if(modules == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *modulesListEntry;
    if (assembly->modules) {
    list_ForEach(modulesListEntry, assembly->modules) {
    cJSON *itemLocal = module_convertToJSON(modulesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(modules, itemLocal);
    }
    }
    }


    // assembly->global_assembly_cache
    if(assembly->global_assembly_cache) {
    if(cJSON_AddBoolToObject(item, "globalAssemblyCache", assembly->global_assembly_cache) == NULL) {
    goto fail; //Bool
    }
    }


    // assembly->host_context
    if(assembly->host_context) {
    if(cJSON_AddNumberToObject(item, "hostContext", assembly->host_context) == NULL) {
    goto fail; //Numeric
    }
    }


    // assembly->security_rule_set
    if(assembly->security_rule_set != contentservice_assembly_SECURITYRULESET_NULL) {
    if(cJSON_AddStringToObject(item, "securityRuleSet", security_rule_setassembly_ToString(assembly->security_rule_set)) == NULL)
    {
    goto fail; //Enum
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

assembly_t *assembly_parseFromJSON(cJSON *assemblyJSON){

    assembly_t *assembly_local_var = NULL;

    // define the local list for assembly->defined_types
    list_t *defined_typesList = NULL;

    // define the local list for assembly->exported_types
    list_t *exported_typesList = NULL;

    // define the local variable for assembly->entry_point
    method_info_t *entry_point_local_nonprim = NULL;

    // define the local list for assembly->custom_attributes
    list_t *custom_attributesList = NULL;

    // define the local variable for assembly->manifest_module
    module_t *manifest_module_local_nonprim = NULL;

    // define the local list for assembly->modules
    list_t *modulesList = NULL;

    // assembly->defined_types
    cJSON *defined_types = cJSON_GetObjectItemCaseSensitive(assemblyJSON, "definedTypes");
    if (defined_types) { 
    cJSON *defined_types_local_nonprimitive = NULL;
    if(!cJSON_IsArray(defined_types)){
        goto end; //nonprimitive container
    }

    defined_typesList = list_createList();

    cJSON_ArrayForEach(defined_types_local_nonprimitive,defined_types )
    {
        if(!cJSON_IsObject(defined_types_local_nonprimitive)){
            goto end;
        }
        type_info_t *defined_typesItem = type_info_parseFromJSON(defined_types_local_nonprimitive);

        list_addElement(defined_typesList, defined_typesItem);
    }
    }

    // assembly->exported_types
    cJSON *exported_types = cJSON_GetObjectItemCaseSensitive(assemblyJSON, "exportedTypes");
    if (exported_types) { 
    cJSON *exported_types_local_nonprimitive = NULL;
    if(!cJSON_IsArray(exported_types)){
        goto end; //nonprimitive container
    }

    exported_typesList = list_createList();

    cJSON_ArrayForEach(exported_types_local_nonprimitive,exported_types )
    {
        if(!cJSON_IsObject(exported_types_local_nonprimitive)){
            goto end;
        }
        type_t *exported_typesItem = type_parseFromJSON(exported_types_local_nonprimitive);

        list_addElement(exported_typesList, exported_typesItem);
    }
    }

    // assembly->code_base
    cJSON *code_base = cJSON_GetObjectItemCaseSensitive(assemblyJSON, "codeBase");
    if (code_base) { 
    if(!cJSON_IsString(code_base) && !cJSON_IsNull(code_base))
    {
    goto end; //String
    }
    }

    // assembly->entry_point
    cJSON *entry_point = cJSON_GetObjectItemCaseSensitive(assemblyJSON, "entryPoint");
    if (entry_point) { 
    entry_point_local_nonprim = method_info_parseFromJSON(entry_point); //nonprimitive
    }

    // assembly->full_name
    cJSON *full_name = cJSON_GetObjectItemCaseSensitive(assemblyJSON, "fullName");
    if (full_name) { 
    if(!cJSON_IsString(full_name) && !cJSON_IsNull(full_name))
    {
    goto end; //String
    }
    }

    // assembly->image_runtime_version
    cJSON *image_runtime_version = cJSON_GetObjectItemCaseSensitive(assemblyJSON, "imageRuntimeVersion");
    if (image_runtime_version) { 
    if(!cJSON_IsString(image_runtime_version) && !cJSON_IsNull(image_runtime_version))
    {
    goto end; //String
    }
    }

    // assembly->is_dynamic
    cJSON *is_dynamic = cJSON_GetObjectItemCaseSensitive(assemblyJSON, "isDynamic");
    if (is_dynamic) { 
    if(!cJSON_IsBool(is_dynamic))
    {
    goto end; //Bool
    }
    }

    // assembly->location
    cJSON *location = cJSON_GetObjectItemCaseSensitive(assemblyJSON, "location");
    if (location) { 
    if(!cJSON_IsString(location) && !cJSON_IsNull(location))
    {
    goto end; //String
    }
    }

    // assembly->reflection_only
    cJSON *reflection_only = cJSON_GetObjectItemCaseSensitive(assemblyJSON, "reflectionOnly");
    if (reflection_only) { 
    if(!cJSON_IsBool(reflection_only))
    {
    goto end; //Bool
    }
    }

    // assembly->is_collectible
    cJSON *is_collectible = cJSON_GetObjectItemCaseSensitive(assemblyJSON, "isCollectible");
    if (is_collectible) { 
    if(!cJSON_IsBool(is_collectible))
    {
    goto end; //Bool
    }
    }

    // assembly->is_fully_trusted
    cJSON *is_fully_trusted = cJSON_GetObjectItemCaseSensitive(assemblyJSON, "isFullyTrusted");
    if (is_fully_trusted) { 
    if(!cJSON_IsBool(is_fully_trusted))
    {
    goto end; //Bool
    }
    }

    // assembly->custom_attributes
    cJSON *custom_attributes = cJSON_GetObjectItemCaseSensitive(assemblyJSON, "customAttributes");
    if (custom_attributes) { 
    cJSON *custom_attributes_local_nonprimitive = NULL;
    if(!cJSON_IsArray(custom_attributes)){
        goto end; //nonprimitive container
    }

    custom_attributesList = list_createList();

    cJSON_ArrayForEach(custom_attributes_local_nonprimitive,custom_attributes )
    {
        if(!cJSON_IsObject(custom_attributes_local_nonprimitive)){
            goto end;
        }
        custom_attribute_data_t *custom_attributesItem = custom_attribute_data_parseFromJSON(custom_attributes_local_nonprimitive);

        list_addElement(custom_attributesList, custom_attributesItem);
    }
    }

    // assembly->escaped_code_base
    cJSON *escaped_code_base = cJSON_GetObjectItemCaseSensitive(assemblyJSON, "escapedCodeBase");
    if (escaped_code_base) { 
    if(!cJSON_IsString(escaped_code_base) && !cJSON_IsNull(escaped_code_base))
    {
    goto end; //String
    }
    }

    // assembly->manifest_module
    cJSON *manifest_module = cJSON_GetObjectItemCaseSensitive(assemblyJSON, "manifestModule");
    if (manifest_module) { 
    manifest_module_local_nonprim = module_parseFromJSON(manifest_module); //nonprimitive
    }

    // assembly->modules
    cJSON *modules = cJSON_GetObjectItemCaseSensitive(assemblyJSON, "modules");
    if (modules) { 
    cJSON *modules_local_nonprimitive = NULL;
    if(!cJSON_IsArray(modules)){
        goto end; //nonprimitive container
    }

    modulesList = list_createList();

    cJSON_ArrayForEach(modules_local_nonprimitive,modules )
    {
        if(!cJSON_IsObject(modules_local_nonprimitive)){
            goto end;
        }
        module_t *modulesItem = module_parseFromJSON(modules_local_nonprimitive);

        list_addElement(modulesList, modulesItem);
    }
    }

    // assembly->global_assembly_cache
    cJSON *global_assembly_cache = cJSON_GetObjectItemCaseSensitive(assemblyJSON, "globalAssemblyCache");
    if (global_assembly_cache) { 
    if(!cJSON_IsBool(global_assembly_cache))
    {
    goto end; //Bool
    }
    }

    // assembly->host_context
    cJSON *host_context = cJSON_GetObjectItemCaseSensitive(assemblyJSON, "hostContext");
    if (host_context) { 
    if(!cJSON_IsNumber(host_context))
    {
    goto end; //Numeric
    }
    }

    // assembly->security_rule_set
    cJSON *security_rule_set = cJSON_GetObjectItemCaseSensitive(assemblyJSON, "securityRuleSet");
    contentservice_assembly_SECURITYRULESET_e security_rule_setVariable;
    if (security_rule_set) { 
    if(!cJSON_IsString(security_rule_set))
    {
    goto end; //Enum
    }
    security_rule_setVariable = assembly_security_rule_set_FromString(security_rule_set->valuestring);
    }


    assembly_local_var = assembly_create (
        defined_types ? defined_typesList : NULL,
        exported_types ? exported_typesList : NULL,
        code_base && !cJSON_IsNull(code_base) ? strdup(code_base->valuestring) : NULL,
        entry_point ? entry_point_local_nonprim : NULL,
        full_name && !cJSON_IsNull(full_name) ? strdup(full_name->valuestring) : NULL,
        image_runtime_version && !cJSON_IsNull(image_runtime_version) ? strdup(image_runtime_version->valuestring) : NULL,
        is_dynamic ? is_dynamic->valueint : 0,
        location && !cJSON_IsNull(location) ? strdup(location->valuestring) : NULL,
        reflection_only ? reflection_only->valueint : 0,
        is_collectible ? is_collectible->valueint : 0,
        is_fully_trusted ? is_fully_trusted->valueint : 0,
        custom_attributes ? custom_attributesList : NULL,
        escaped_code_base && !cJSON_IsNull(escaped_code_base) ? strdup(escaped_code_base->valuestring) : NULL,
        manifest_module ? manifest_module_local_nonprim : NULL,
        modules ? modulesList : NULL,
        global_assembly_cache ? global_assembly_cache->valueint : 0,
        host_context ? host_context->valuedouble : 0,
        security_rule_set ? security_rule_setVariable : contentservice_assembly_SECURITYRULESET_NULL
        );

    return assembly_local_var;
end:
    if (defined_typesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, defined_typesList) {
            type_info_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(defined_typesList);
        defined_typesList = NULL;
    }
    if (exported_typesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, exported_typesList) {
            type_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(exported_typesList);
        exported_typesList = NULL;
    }
    if (entry_point_local_nonprim) {
        method_info_free(entry_point_local_nonprim);
        entry_point_local_nonprim = NULL;
    }
    if (custom_attributesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, custom_attributesList) {
            custom_attribute_data_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(custom_attributesList);
        custom_attributesList = NULL;
    }
    if (manifest_module_local_nonprim) {
        module_free(manifest_module_local_nonprim);
        manifest_module_local_nonprim = NULL;
    }
    if (modulesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, modulesList) {
            module_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(modulesList);
        modulesList = NULL;
    }
    return NULL;

}
