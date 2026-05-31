#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "i_edm_entity_container.h"


char* i_edm_entity_container_schema_element_kind_ToString(contentservice_i_edm_entity_container_SCHEMAELEMENTKIND_e schema_element_kind) {
    char* schema_element_kindArray[] =  { "NULL", "None", "TypeDefinition", "Term", "Action", "EntityContainer", "Function" };
    return schema_element_kindArray[schema_element_kind];
}

contentservice_i_edm_entity_container_SCHEMAELEMENTKIND_e i_edm_entity_container_schema_element_kind_FromString(char* schema_element_kind){
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

i_edm_entity_container_t *i_edm_entity_container_create(
    char *name,
    contentservice_i_edm_entity_container_SCHEMAELEMENTKIND_e schema_element_kind,
    char *_namespace,
    list_t *elements
    ) {
    i_edm_entity_container_t *i_edm_entity_container_local_var = malloc(sizeof(i_edm_entity_container_t));
    if (!i_edm_entity_container_local_var) {
        return NULL;
    }
    i_edm_entity_container_local_var->name = name;
    i_edm_entity_container_local_var->schema_element_kind = schema_element_kind;
    i_edm_entity_container_local_var->_namespace = _namespace;
    i_edm_entity_container_local_var->elements = elements;

    return i_edm_entity_container_local_var;
}


void i_edm_entity_container_free(i_edm_entity_container_t *i_edm_entity_container) {
    if(NULL == i_edm_entity_container){
        return ;
    }
    listEntry_t *listEntry;
    if (i_edm_entity_container->name) {
        free(i_edm_entity_container->name);
        i_edm_entity_container->name = NULL;
    }
    if (i_edm_entity_container->_namespace) {
        free(i_edm_entity_container->_namespace);
        i_edm_entity_container->_namespace = NULL;
    }
    if (i_edm_entity_container->elements) {
        list_ForEach(listEntry, i_edm_entity_container->elements) {
            i_edm_entity_container_element_free(listEntry->data);
        }
        list_freeList(i_edm_entity_container->elements);
        i_edm_entity_container->elements = NULL;
    }
    free(i_edm_entity_container);
}

cJSON *i_edm_entity_container_convertToJSON(i_edm_entity_container_t *i_edm_entity_container) {
    cJSON *item = cJSON_CreateObject();

    // i_edm_entity_container->name
    if(i_edm_entity_container->name) {
    if(cJSON_AddStringToObject(item, "name", i_edm_entity_container->name) == NULL) {
    goto fail; //String
    }
    }


    // i_edm_entity_container->schema_element_kind
    if(i_edm_entity_container->schema_element_kind != contentservice_i_edm_entity_container_SCHEMAELEMENTKIND_NULL) {
    if(cJSON_AddStringToObject(item, "schemaElementKind", schema_element_kindi_edm_entity_container_ToString(i_edm_entity_container->schema_element_kind)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // i_edm_entity_container->_namespace
    if(i_edm_entity_container->_namespace) {
    if(cJSON_AddStringToObject(item, "namespace", i_edm_entity_container->_namespace) == NULL) {
    goto fail; //String
    }
    }


    // i_edm_entity_container->elements
    if(i_edm_entity_container->elements) {
    cJSON *elements = cJSON_AddArrayToObject(item, "elements");
    if(elements == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *elementsListEntry;
    if (i_edm_entity_container->elements) {
    list_ForEach(elementsListEntry, i_edm_entity_container->elements) {
    cJSON *itemLocal = i_edm_entity_container_element_convertToJSON(elementsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(elements, itemLocal);
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

i_edm_entity_container_t *i_edm_entity_container_parseFromJSON(cJSON *i_edm_entity_containerJSON){

    i_edm_entity_container_t *i_edm_entity_container_local_var = NULL;

    // define the local list for i_edm_entity_container->elements
    list_t *elementsList = NULL;

    // i_edm_entity_container->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(i_edm_entity_containerJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // i_edm_entity_container->schema_element_kind
    cJSON *schema_element_kind = cJSON_GetObjectItemCaseSensitive(i_edm_entity_containerJSON, "schemaElementKind");
    contentservice_i_edm_entity_container_SCHEMAELEMENTKIND_e schema_element_kindVariable;
    if (schema_element_kind) { 
    if(!cJSON_IsString(schema_element_kind))
    {
    goto end; //Enum
    }
    schema_element_kindVariable = i_edm_entity_container_schema_element_kind_FromString(schema_element_kind->valuestring);
    }

    // i_edm_entity_container->_namespace
    cJSON *_namespace = cJSON_GetObjectItemCaseSensitive(i_edm_entity_containerJSON, "namespace");
    if (_namespace) { 
    if(!cJSON_IsString(_namespace) && !cJSON_IsNull(_namespace))
    {
    goto end; //String
    }
    }

    // i_edm_entity_container->elements
    cJSON *elements = cJSON_GetObjectItemCaseSensitive(i_edm_entity_containerJSON, "elements");
    if (elements) { 
    cJSON *elements_local_nonprimitive = NULL;
    if(!cJSON_IsArray(elements)){
        goto end; //nonprimitive container
    }

    elementsList = list_createList();

    cJSON_ArrayForEach(elements_local_nonprimitive,elements )
    {
        if(!cJSON_IsObject(elements_local_nonprimitive)){
            goto end;
        }
        i_edm_entity_container_element_t *elementsItem = i_edm_entity_container_element_parseFromJSON(elements_local_nonprimitive);

        list_addElement(elementsList, elementsItem);
    }
    }


    i_edm_entity_container_local_var = i_edm_entity_container_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        schema_element_kind ? schema_element_kindVariable : contentservice_i_edm_entity_container_SCHEMAELEMENTKIND_NULL,
        _namespace && !cJSON_IsNull(_namespace) ? strdup(_namespace->valuestring) : NULL,
        elements ? elementsList : NULL
        );

    return i_edm_entity_container_local_var;
end:
    if (elementsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, elementsList) {
            i_edm_entity_container_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(elementsList);
        elementsList = NULL;
    }
    return NULL;

}
