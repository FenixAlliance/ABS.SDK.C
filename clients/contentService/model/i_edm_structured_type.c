#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "i_edm_structured_type.h"


char* i_edm_structured_type_type_kind_ToString(contentservice_i_edm_structured_type_TYPEKIND_e type_kind) {
    char* type_kindArray[] =  { "NULL", "None", "Primitive", "Entity", "Complex", "Collection", "EntityReference", "Enum", "TypeDefinition", "Untyped", "Path" };
    return type_kindArray[type_kind];
}

contentservice_i_edm_structured_type_TYPEKIND_e i_edm_structured_type_type_kind_FromString(char* type_kind){
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

i_edm_structured_type_t *i_edm_structured_type_create(
    contentservice_i_edm_structured_type_TYPEKIND_e type_kind,
    int is_abstract,
    int is_open,
    i_edm_structured_type_t *base_type,
    list_t *declared_properties
    ) {
    i_edm_structured_type_t *i_edm_structured_type_local_var = malloc(sizeof(i_edm_structured_type_t));
    if (!i_edm_structured_type_local_var) {
        return NULL;
    }
    i_edm_structured_type_local_var->type_kind = type_kind;
    i_edm_structured_type_local_var->is_abstract = is_abstract;
    i_edm_structured_type_local_var->is_open = is_open;
    i_edm_structured_type_local_var->base_type = base_type;
    i_edm_structured_type_local_var->declared_properties = declared_properties;

    return i_edm_structured_type_local_var;
}


void i_edm_structured_type_free(i_edm_structured_type_t *i_edm_structured_type) {
    if(NULL == i_edm_structured_type){
        return ;
    }
    listEntry_t *listEntry;
    if (i_edm_structured_type->base_type) {
        i_edm_structured_type_free(i_edm_structured_type->base_type);
        i_edm_structured_type->base_type = NULL;
    }
    if (i_edm_structured_type->declared_properties) {
        list_ForEach(listEntry, i_edm_structured_type->declared_properties) {
            i_edm_property_free(listEntry->data);
        }
        list_freeList(i_edm_structured_type->declared_properties);
        i_edm_structured_type->declared_properties = NULL;
    }
    free(i_edm_structured_type);
}

cJSON *i_edm_structured_type_convertToJSON(i_edm_structured_type_t *i_edm_structured_type) {
    cJSON *item = cJSON_CreateObject();

    // i_edm_structured_type->type_kind
    if(i_edm_structured_type->type_kind != contentservice_i_edm_structured_type_TYPEKIND_NULL) {
    if(cJSON_AddStringToObject(item, "typeKind", type_kindi_edm_structured_type_ToString(i_edm_structured_type->type_kind)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // i_edm_structured_type->is_abstract
    if(i_edm_structured_type->is_abstract) {
    if(cJSON_AddBoolToObject(item, "isAbstract", i_edm_structured_type->is_abstract) == NULL) {
    goto fail; //Bool
    }
    }


    // i_edm_structured_type->is_open
    if(i_edm_structured_type->is_open) {
    if(cJSON_AddBoolToObject(item, "isOpen", i_edm_structured_type->is_open) == NULL) {
    goto fail; //Bool
    }
    }


    // i_edm_structured_type->base_type
    if(i_edm_structured_type->base_type) {
    cJSON *base_type_local_JSON = i_edm_structured_type_convertToJSON(i_edm_structured_type->base_type);
    if(base_type_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "baseType", base_type_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // i_edm_structured_type->declared_properties
    if(i_edm_structured_type->declared_properties) {
    cJSON *declared_properties = cJSON_AddArrayToObject(item, "declaredProperties");
    if(declared_properties == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *declared_propertiesListEntry;
    if (i_edm_structured_type->declared_properties) {
    list_ForEach(declared_propertiesListEntry, i_edm_structured_type->declared_properties) {
    cJSON *itemLocal = i_edm_property_convertToJSON(declared_propertiesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(declared_properties, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

i_edm_structured_type_t *i_edm_structured_type_parseFromJSON(cJSON *i_edm_structured_typeJSON){

    i_edm_structured_type_t *i_edm_structured_type_local_var = NULL;

    // define the local variable for i_edm_structured_type->base_type
    i_edm_structured_type_t *base_type_local_nonprim = NULL;

    // define the local list for i_edm_structured_type->declared_properties
    list_t *declared_propertiesList = NULL;

    // i_edm_structured_type->type_kind
    cJSON *type_kind = cJSON_GetObjectItemCaseSensitive(i_edm_structured_typeJSON, "typeKind");
    contentservice_i_edm_structured_type_TYPEKIND_e type_kindVariable;
    if (type_kind) { 
    if(!cJSON_IsString(type_kind))
    {
    goto end; //Enum
    }
    type_kindVariable = i_edm_structured_type_type_kind_FromString(type_kind->valuestring);
    }

    // i_edm_structured_type->is_abstract
    cJSON *is_abstract = cJSON_GetObjectItemCaseSensitive(i_edm_structured_typeJSON, "isAbstract");
    if (is_abstract) { 
    if(!cJSON_IsBool(is_abstract))
    {
    goto end; //Bool
    }
    }

    // i_edm_structured_type->is_open
    cJSON *is_open = cJSON_GetObjectItemCaseSensitive(i_edm_structured_typeJSON, "isOpen");
    if (is_open) { 
    if(!cJSON_IsBool(is_open))
    {
    goto end; //Bool
    }
    }

    // i_edm_structured_type->base_type
    cJSON *base_type = cJSON_GetObjectItemCaseSensitive(i_edm_structured_typeJSON, "baseType");
    if (base_type) { 
    base_type_local_nonprim = i_edm_structured_type_parseFromJSON(base_type); //nonprimitive
    }

    // i_edm_structured_type->declared_properties
    cJSON *declared_properties = cJSON_GetObjectItemCaseSensitive(i_edm_structured_typeJSON, "declaredProperties");
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


    i_edm_structured_type_local_var = i_edm_structured_type_create (
        type_kind ? type_kindVariable : contentservice_i_edm_structured_type_TYPEKIND_NULL,
        is_abstract ? is_abstract->valueint : 0,
        is_open ? is_open->valueint : 0,
        base_type ? base_type_local_nonprim : NULL,
        declared_properties ? declared_propertiesList : NULL
        );

    return i_edm_structured_type_local_var;
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
    return NULL;

}
