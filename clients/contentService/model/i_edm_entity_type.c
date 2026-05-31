#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "i_edm_entity_type.h"


char* i_edm_entity_type_type_kind_ToString(contentservice_i_edm_entity_type_TYPEKIND_e type_kind) {
    char* type_kindArray[] =  { "NULL", "None", "Primitive", "Entity", "Complex", "Collection", "EntityReference", "Enum", "TypeDefinition", "Untyped", "Path" };
    return type_kindArray[type_kind];
}

contentservice_i_edm_entity_type_TYPEKIND_e i_edm_entity_type_type_kind_FromString(char* type_kind){
    int stringToReturn = 0;
    char *type_kindArray[] =  { "NULL", "None", "Primitive", "Entity", "Complex", "Collection", "EntityReference", "Enum", "TypeDefinition", "Untyped", "Path" };
    size_t sizeofArray = sizeof(type_kindArray) / sizeof(type_kindArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(type_kind, type_kindArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* i_edm_entity_type_schema_element_kind_ToString(contentservice_i_edm_entity_type_SCHEMAELEMENTKIND_e schema_element_kind) {
    char* schema_element_kindArray[] =  { "NULL", "None", "TypeDefinition", "Term", "Action", "EntityContainer", "Function" };
    return schema_element_kindArray[schema_element_kind];
}

contentservice_i_edm_entity_type_SCHEMAELEMENTKIND_e i_edm_entity_type_schema_element_kind_FromString(char* schema_element_kind){
    int stringToReturn = 0;
    char *schema_element_kindArray[] =  { "NULL", "None", "TypeDefinition", "Term", "Action", "EntityContainer", "Function" };
    size_t sizeofArray = sizeof(schema_element_kindArray) / sizeof(schema_element_kindArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(schema_element_kind, schema_element_kindArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

i_edm_entity_type_t *i_edm_entity_type_create(
    contentservice_i_edm_entity_type_TYPEKIND_e type_kind,
    char *name,
    int is_abstract,
    int is_open,
    i_edm_structured_type_t *base_type,
    list_t *declared_properties,
    contentservice_i_edm_entity_type_SCHEMAELEMENTKIND_e schema_element_kind,
    char *_namespace,
    list_t *declared_key,
    int has_stream
    ) {
    i_edm_entity_type_t *i_edm_entity_type_local_var = malloc(sizeof(i_edm_entity_type_t));
    if (!i_edm_entity_type_local_var) {
        return NULL;
    }
    i_edm_entity_type_local_var->type_kind = type_kind;
    i_edm_entity_type_local_var->name = name;
    i_edm_entity_type_local_var->is_abstract = is_abstract;
    i_edm_entity_type_local_var->is_open = is_open;
    i_edm_entity_type_local_var->base_type = base_type;
    i_edm_entity_type_local_var->declared_properties = declared_properties;
    i_edm_entity_type_local_var->schema_element_kind = schema_element_kind;
    i_edm_entity_type_local_var->_namespace = _namespace;
    i_edm_entity_type_local_var->declared_key = declared_key;
    i_edm_entity_type_local_var->has_stream = has_stream;

    return i_edm_entity_type_local_var;
}


void i_edm_entity_type_free(i_edm_entity_type_t *i_edm_entity_type) {
    if(NULL == i_edm_entity_type){
        return ;
    }
    listEntry_t *listEntry;
    if (i_edm_entity_type->name) {
        free(i_edm_entity_type->name);
        i_edm_entity_type->name = NULL;
    }
    if (i_edm_entity_type->base_type) {
        i_edm_structured_type_free(i_edm_entity_type->base_type);
        i_edm_entity_type->base_type = NULL;
    }
    if (i_edm_entity_type->declared_properties) {
        list_ForEach(listEntry, i_edm_entity_type->declared_properties) {
            i_edm_property_free(listEntry->data);
        }
        list_freeList(i_edm_entity_type->declared_properties);
        i_edm_entity_type->declared_properties = NULL;
    }
    if (i_edm_entity_type->_namespace) {
        free(i_edm_entity_type->_namespace);
        i_edm_entity_type->_namespace = NULL;
    }
    if (i_edm_entity_type->declared_key) {
        list_ForEach(listEntry, i_edm_entity_type->declared_key) {
            i_edm_structural_property_free(listEntry->data);
        }
        list_freeList(i_edm_entity_type->declared_key);
        i_edm_entity_type->declared_key = NULL;
    }
    free(i_edm_entity_type);
}

cJSON *i_edm_entity_type_convertToJSON(i_edm_entity_type_t *i_edm_entity_type) {
    cJSON *item = cJSON_CreateObject();

    // i_edm_entity_type->type_kind
    if(i_edm_entity_type->type_kind != contentservice_i_edm_entity_type_TYPEKIND_NULL) {
    if(cJSON_AddStringToObject(item, "typeKind", type_kindi_edm_entity_type_ToString(i_edm_entity_type->type_kind)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // i_edm_entity_type->name
    if(i_edm_entity_type->name) {
    if(cJSON_AddStringToObject(item, "name", i_edm_entity_type->name) == NULL) {
    goto fail; //String
    }
    }


    // i_edm_entity_type->is_abstract
    if(i_edm_entity_type->is_abstract) {
    if(cJSON_AddBoolToObject(item, "isAbstract", i_edm_entity_type->is_abstract) == NULL) {
    goto fail; //Bool
    }
    }


    // i_edm_entity_type->is_open
    if(i_edm_entity_type->is_open) {
    if(cJSON_AddBoolToObject(item, "isOpen", i_edm_entity_type->is_open) == NULL) {
    goto fail; //Bool
    }
    }


    // i_edm_entity_type->base_type
    if(i_edm_entity_type->base_type) {
    cJSON *base_type_local_JSON = i_edm_structured_type_convertToJSON(i_edm_entity_type->base_type);
    if(base_type_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "baseType", base_type_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // i_edm_entity_type->declared_properties
    if(i_edm_entity_type->declared_properties) {
    cJSON *declared_properties = cJSON_AddArrayToObject(item, "declaredProperties");
    if(declared_properties == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *declared_propertiesListEntry;
    if (i_edm_entity_type->declared_properties) {
    list_ForEach(declared_propertiesListEntry, i_edm_entity_type->declared_properties) {
    cJSON *itemLocal = i_edm_property_convertToJSON(declared_propertiesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(declared_properties, itemLocal);
    }
    }
    }


    // i_edm_entity_type->schema_element_kind
    if(i_edm_entity_type->schema_element_kind != contentservice_i_edm_entity_type_SCHEMAELEMENTKIND_NULL) {
    if(cJSON_AddStringToObject(item, "schemaElementKind", schema_element_kindi_edm_entity_type_ToString(i_edm_entity_type->schema_element_kind)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // i_edm_entity_type->_namespace
    if(i_edm_entity_type->_namespace) {
    if(cJSON_AddStringToObject(item, "namespace", i_edm_entity_type->_namespace) == NULL) {
    goto fail; //String
    }
    }


    // i_edm_entity_type->declared_key
    if(i_edm_entity_type->declared_key) {
    cJSON *declared_key = cJSON_AddArrayToObject(item, "declaredKey");
    if(declared_key == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *declared_keyListEntry;
    if (i_edm_entity_type->declared_key) {
    list_ForEach(declared_keyListEntry, i_edm_entity_type->declared_key) {
    cJSON *itemLocal = i_edm_structural_property_convertToJSON(declared_keyListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(declared_key, itemLocal);
    }
    }
    }


    // i_edm_entity_type->has_stream
    if(i_edm_entity_type->has_stream) {
    if(cJSON_AddBoolToObject(item, "hasStream", i_edm_entity_type->has_stream) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

i_edm_entity_type_t *i_edm_entity_type_parseFromJSON(cJSON *i_edm_entity_typeJSON){

    i_edm_entity_type_t *i_edm_entity_type_local_var = NULL;

    // define the local variable for i_edm_entity_type->base_type
    i_edm_structured_type_t *base_type_local_nonprim = NULL;

    // define the local list for i_edm_entity_type->declared_properties
    list_t *declared_propertiesList = NULL;

    // define the local list for i_edm_entity_type->declared_key
    list_t *declared_keyList = NULL;

    // i_edm_entity_type->type_kind
    cJSON *type_kind = cJSON_GetObjectItemCaseSensitive(i_edm_entity_typeJSON, "typeKind");
    contentservice_i_edm_entity_type_TYPEKIND_e type_kindVariable;
    if (type_kind) { 
    if(!cJSON_IsString(type_kind))
    {
    goto end; //Enum
    }
    type_kindVariable = i_edm_entity_type_type_kind_FromString(type_kind->valuestring);
    }

    // i_edm_entity_type->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(i_edm_entity_typeJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // i_edm_entity_type->is_abstract
    cJSON *is_abstract = cJSON_GetObjectItemCaseSensitive(i_edm_entity_typeJSON, "isAbstract");
    if (is_abstract) { 
    if(!cJSON_IsBool(is_abstract))
    {
    goto end; //Bool
    }
    }

    // i_edm_entity_type->is_open
    cJSON *is_open = cJSON_GetObjectItemCaseSensitive(i_edm_entity_typeJSON, "isOpen");
    if (is_open) { 
    if(!cJSON_IsBool(is_open))
    {
    goto end; //Bool
    }
    }

    // i_edm_entity_type->base_type
    cJSON *base_type = cJSON_GetObjectItemCaseSensitive(i_edm_entity_typeJSON, "baseType");
    if (base_type) { 
    base_type_local_nonprim = i_edm_structured_type_parseFromJSON(base_type); //nonprimitive
    }

    // i_edm_entity_type->declared_properties
    cJSON *declared_properties = cJSON_GetObjectItemCaseSensitive(i_edm_entity_typeJSON, "declaredProperties");
    if (declared_properties) { 
    cJSON *declared_properties_local_nonprimitive = NULL;
    if(!cJSON_IsArray(declared_properties)){
        goto end; //nonprimitive container
    }

    declared_propertiesList = list_createList();

    cJSON_ArrayForEach(declared_properties_local_nonprimitive,declared_properties )
    {
        if(!cJSON_IsObject(declared_properties_local_nonprimitive)){
            goto end;
        }
        i_edm_property_t *declared_propertiesItem = i_edm_property_parseFromJSON(declared_properties_local_nonprimitive);

        list_addElement(declared_propertiesList, declared_propertiesItem);
    }
    }

    // i_edm_entity_type->schema_element_kind
    cJSON *schema_element_kind = cJSON_GetObjectItemCaseSensitive(i_edm_entity_typeJSON, "schemaElementKind");
    contentservice_i_edm_entity_type_SCHEMAELEMENTKIND_e schema_element_kindVariable;
    if (schema_element_kind) { 
    if(!cJSON_IsString(schema_element_kind))
    {
    goto end; //Enum
    }
    schema_element_kindVariable = i_edm_entity_type_schema_element_kind_FromString(schema_element_kind->valuestring);
    }

    // i_edm_entity_type->_namespace
    cJSON *_namespace = cJSON_GetObjectItemCaseSensitive(i_edm_entity_typeJSON, "namespace");
    if (_namespace) { 
    if(!cJSON_IsString(_namespace) && !cJSON_IsNull(_namespace))
    {
    goto end; //String
    }
    }

    // i_edm_entity_type->declared_key
    cJSON *declared_key = cJSON_GetObjectItemCaseSensitive(i_edm_entity_typeJSON, "declaredKey");
    if (declared_key) { 
    cJSON *declared_key_local_nonprimitive = NULL;
    if(!cJSON_IsArray(declared_key)){
        goto end; //nonprimitive container
    }

    declared_keyList = list_createList();

    cJSON_ArrayForEach(declared_key_local_nonprimitive,declared_key )
    {
        if(!cJSON_IsObject(declared_key_local_nonprimitive)){
            goto end;
        }
        i_edm_structural_property_t *declared_keyItem = i_edm_structural_property_parseFromJSON(declared_key_local_nonprimitive);

        list_addElement(declared_keyList, declared_keyItem);
    }
    }

    // i_edm_entity_type->has_stream
    cJSON *has_stream = cJSON_GetObjectItemCaseSensitive(i_edm_entity_typeJSON, "hasStream");
    if (has_stream) { 
    if(!cJSON_IsBool(has_stream))
    {
    goto end; //Bool
    }
    }


    i_edm_entity_type_local_var = i_edm_entity_type_create (
        type_kind ? type_kindVariable : contentservice_i_edm_entity_type_TYPEKIND_NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        is_abstract ? is_abstract->valueint : 0,
        is_open ? is_open->valueint : 0,
        base_type ? base_type_local_nonprim : NULL,
        declared_properties ? declared_propertiesList : NULL,
        schema_element_kind ? schema_element_kindVariable : contentservice_i_edm_entity_type_SCHEMAELEMENTKIND_NULL,
        _namespace && !cJSON_IsNull(_namespace) ? strdup(_namespace->valuestring) : NULL,
        declared_key ? declared_keyList : NULL,
        has_stream ? has_stream->valueint : 0
        );

    return i_edm_entity_type_local_var;
end:
    if (base_type_local_nonprim) {
        i_edm_structured_type_free(base_type_local_nonprim);
        base_type_local_nonprim = NULL;
    }
    if (declared_propertiesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, declared_propertiesList) {
            i_edm_property_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(declared_propertiesList);
        declared_propertiesList = NULL;
    }
    if (declared_keyList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, declared_keyList) {
            i_edm_structural_property_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(declared_keyList);
        declared_keyList = NULL;
    }
    return NULL;

}
