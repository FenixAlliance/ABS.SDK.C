#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "module.h"



module_t *module_create(
    assembly_t *assembly,
    char *fully_qualified_name,
    char *name,
    int md_stream_version,
    char *module_version_id,
    char *scope_name,
    module_handle_t *module_handle,
    list_t *custom_attributes,
    int metadata_token
    ) {
    module_t *module_local_var = malloc(sizeof(module_t));
    if (!module_local_var) {
        return NULL;
    }
    module_local_var->assembly = assembly;
    module_local_var->fully_qualified_name = fully_qualified_name;
    module_local_var->name = name;
    module_local_var->md_stream_version = md_stream_version;
    module_local_var->module_version_id = module_version_id;
    module_local_var->scope_name = scope_name;
    module_local_var->module_handle = module_handle;
    module_local_var->custom_attributes = custom_attributes;
    module_local_var->metadata_token = metadata_token;

    return module_local_var;
}


void module_free(module_t *module) {
    if(NULL == module){
        return ;
    }
    listEntry_t *listEntry;
    if (module->assembly) {
        assembly_free(module->assembly);
        module->assembly = NULL;
    }
    if (module->fully_qualified_name) {
        free(module->fully_qualified_name);
        module->fully_qualified_name = NULL;
    }
    if (module->name) {
        free(module->name);
        module->name = NULL;
    }
    if (module->module_version_id) {
        free(module->module_version_id);
        module->module_version_id = NULL;
    }
    if (module->scope_name) {
        free(module->scope_name);
        module->scope_name = NULL;
    }
    if (module->module_handle) {
        module_handle_free(module->module_handle);
        module->module_handle = NULL;
    }
    if (module->custom_attributes) {
        list_ForEach(listEntry, module->custom_attributes) {
            custom_attribute_data_free(listEntry->data);
        }
        list_freeList(module->custom_attributes);
        module->custom_attributes = NULL;
    }
    free(module);
}

cJSON *module_convertToJSON(module_t *module) {
    cJSON *item = cJSON_CreateObject();

    // module->assembly
    if(module->assembly) {
    cJSON *assembly_local_JSON = assembly_convertToJSON(module->assembly);
    if(assembly_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "assembly", assembly_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // module->fully_qualified_name
    if(module->fully_qualified_name) {
    if(cJSON_AddStringToObject(item, "fullyQualifiedName", module->fully_qualified_name) == NULL) {
    goto fail; //String
    }
    }


    // module->name
    if(module->name) {
    if(cJSON_AddStringToObject(item, "name", module->name) == NULL) {
    goto fail; //String
    }
    }


    // module->md_stream_version
    if(module->md_stream_version) {
    if(cJSON_AddNumberToObject(item, "mdStreamVersion", module->md_stream_version) == NULL) {
    goto fail; //Numeric
    }
    }


    // module->module_version_id
    if(module->module_version_id) {
    if(cJSON_AddStringToObject(item, "moduleVersionId", module->module_version_id) == NULL) {
    goto fail; //String
    }
    }


    // module->scope_name
    if(module->scope_name) {
    if(cJSON_AddStringToObject(item, "scopeName", module->scope_name) == NULL) {
    goto fail; //String
    }
    }


    // module->module_handle
    if(module->module_handle) {
    cJSON *module_handle_local_JSON = module_handle_convertToJSON(module->module_handle);
    if(module_handle_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "moduleHandle", module_handle_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // module->custom_attributes
    if(module->custom_attributes) {
    cJSON *custom_attributes = cJSON_AddArrayToObject(item, "customAttributes");
    if(custom_attributes == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *custom_attributesListEntry;
    if (module->custom_attributes) {
    list_ForEach(custom_attributesListEntry, module->custom_attributes) {
    cJSON *itemLocal = custom_attribute_data_convertToJSON(custom_attributesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(custom_attributes, itemLocal);
    }
    }
    }


    // module->metadata_token
    if(module->metadata_token) {
    if(cJSON_AddNumberToObject(item, "metadataToken", module->metadata_token) == NULL) {
    goto fail; //Numeric
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

    // define the local variable for module->assembly
    assembly_t *assembly_local_nonprim = NULL;

    // define the local variable for module->module_handle
    module_handle_t *module_handle_local_nonprim = NULL;

    // define the local list for module->custom_attributes
    list_t *custom_attributesList = NULL;

    // module->assembly
    cJSON *assembly = cJSON_GetObjectItemCaseSensitive(moduleJSON, "assembly");
    if (assembly) { 
    assembly_local_nonprim = assembly_parseFromJSON(assembly); //nonprimitive
    }

    // module->fully_qualified_name
    cJSON *fully_qualified_name = cJSON_GetObjectItemCaseSensitive(moduleJSON, "fullyQualifiedName");
    if (fully_qualified_name) { 
    if(!cJSON_IsString(fully_qualified_name) && !cJSON_IsNull(fully_qualified_name))
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

    // module->md_stream_version
    cJSON *md_stream_version = cJSON_GetObjectItemCaseSensitive(moduleJSON, "mdStreamVersion");
    if (md_stream_version) { 
    if(!cJSON_IsNumber(md_stream_version))
    {
    goto end; //Numeric
    }
    }

    // module->module_version_id
    cJSON *module_version_id = cJSON_GetObjectItemCaseSensitive(moduleJSON, "moduleVersionId");
    if (module_version_id) { 
    if(!cJSON_IsString(module_version_id) && !cJSON_IsNull(module_version_id))
    {
    goto end; //String
    }
    }

    // module->scope_name
    cJSON *scope_name = cJSON_GetObjectItemCaseSensitive(moduleJSON, "scopeName");
    if (scope_name) { 
    if(!cJSON_IsString(scope_name) && !cJSON_IsNull(scope_name))
    {
    goto end; //String
    }
    }

    // module->module_handle
    cJSON *module_handle = cJSON_GetObjectItemCaseSensitive(moduleJSON, "moduleHandle");
    if (module_handle) { 
    module_handle_local_nonprim = module_handle_parseFromJSON(module_handle); //nonprimitive
    }

    // module->custom_attributes
    cJSON *custom_attributes = cJSON_GetObjectItemCaseSensitive(moduleJSON, "customAttributes");
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

    // module->metadata_token
    cJSON *metadata_token = cJSON_GetObjectItemCaseSensitive(moduleJSON, "metadataToken");
    if (metadata_token) { 
    if(!cJSON_IsNumber(metadata_token))
    {
    goto end; //Numeric
    }
    }


    module_local_var = module_create (
        assembly ? assembly_local_nonprim : NULL,
        fully_qualified_name && !cJSON_IsNull(fully_qualified_name) ? strdup(fully_qualified_name->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        md_stream_version ? md_stream_version->valuedouble : 0,
        module_version_id && !cJSON_IsNull(module_version_id) ? strdup(module_version_id->valuestring) : NULL,
        scope_name && !cJSON_IsNull(scope_name) ? strdup(scope_name->valuestring) : NULL,
        module_handle ? module_handle_local_nonprim : NULL,
        custom_attributes ? custom_attributesList : NULL,
        metadata_token ? metadata_token->valuedouble : 0
        );

    return module_local_var;
end:
    if (assembly_local_nonprim) {
        assembly_free(assembly_local_nonprim);
        assembly_local_nonprim = NULL;
    }
    if (module_handle_local_nonprim) {
        module_handle_free(module_handle_local_nonprim);
        module_handle_local_nonprim = NULL;
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
    return NULL;

}
